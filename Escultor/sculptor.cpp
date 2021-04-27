#include "sculptor.h"
#include <fstream>
#include <stdlib.h>
#include <math.h>
#include <iomanip>

using namespace std;

Sculptor::Sculptor(int _nx, int _ny, int _nz){
    int i, j, k;
    nx = _nx;
    ny = _ny;
    nz = _nz;
    r = g = b = 0.0;
    a = 1.0;
    v = (Voxel***) malloc(nx * sizeof(Voxel**));
    for(i = 0; i < nx; i++){
        v[i] = (Voxel**) malloc(ny * sizeof(Voxel*));
    }
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            v[i][j] = (Voxel*) malloc(nz * sizeof(Voxel));
        }
    }
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k < nz; k++){
                v[i][j][k].isOn = false;
            }
        }
    }
}

Sculptor::~Sculptor(){
    int i, j;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            free(v[i][j]);
        }
    }
    for(i = 0; i < nx; i++){
        free(v[i]);
    }
    free(v);
}

void Sculptor::setColor(float _r, float _g, float _b, float alpha){
    r = _r;
    g = _g;
    b = _b;
    a = alpha;
}

void Sculptor::putVoxel(int x, int y, int z){
    v[x][y][z].isOn = true;
    v[x][y][z].r = r;
    v[x][y][z].g = g;
    v[x][y][z].b = b;
    v[x][y][z].a = a;
}

void Sculptor::cutVoxel(int x, int y, int z){
    v[x][y][z].isOn = false;
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1){
    int i, j, k;
    for(i = x0; i < x1+1; i++){
        for(j = y0; j < y1+1; j++){
            for(k = z0; k < z1+1; k++){
                v[i][j][k].isOn = true;
                v[i][j][k].r = r;
                v[i][j][k].g = g;
                v[i][j][k].b = b;
                v[i][j][k].a = a;
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1){
    int i, j, k;
    for(i = x0; i < x1+1; i++){
        for(j = y0; j < y1+1; j++){
            for(k = z0; k < z1+1; k++){
                v[i][j][k].isOn = false;
            }
        }
    }
}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius){
    int i, j, k;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k < nz; k++){
                if(pow(i - xcenter, 2) + pow(j - ycenter, 2) + pow(k - zcenter, 2) <= pow(radius, 2)){
                    v[i][j][k].isOn = true;
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius){
    int i, j, k;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k < nz; k++){
                if(pow(i - xcenter, 2) + pow(j - ycenter, 2) + pow(k - zcenter, 2) <= pow(radius, 2)){
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    int i, j, k;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k < nz; k++){
                if(pow(i - xcenter, 2)/pow(rx, 2) + pow(j - ycenter, 2)/pow(ry, 2) + pow(k - zcenter, 2)/pow(rz, 2) <= 1){
                    v[i][j][k].isOn = true;
                    v[i][j][k].r = r;
                    v[i][j][k].g = g;
                    v[i][j][k].b = b;
                    v[i][j][k].a = a;
                }
            }
        }
    }
}


void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz){
    int i, j, k;
    for(i = 0; i < nx; i++){
        for(j = 0; j < ny; j++){
            for(k = 0; k < nz; k++){
                if(pow(i - xcenter, 2)/pow(rx, 2) + pow(j - ycenter, 2)/pow(ry, 2) + pow(k - zcenter, 2)/pow(rz, 2) <= 1){
                    v[i][j][k].isOn = false;
                }
            }
        }
    }
}

void Sculptor::writeOFF(char *filename){
    int total, index, x, y, z;
    float lado;
    ofstream f;
    total = 0;
    lado = 0.5;
    f.open(filename);
    f << "OFF\n";
    for(x = 0; x < nx; x++){
        for(y = 0; y < ny; y++){
            for(z = 0; z < nz; z++){
                if(v[x][y][z].isOn == true){
                    total++;
                }
            }
        }
    }
    f << total * 8 << " " << total * 6 << " 0 \n";
    for(x = 0; x < nx; x++){
        for(y = 0; y < ny; y++){
            for(z = 0; z < nz; z++){
                if(v[x][y][z].isOn == true){
                    f << x - lado << " " << y + lado << " " << z - lado << "\n" << flush;
                    f << x - lado << " " << y - lado << " " << z - lado << "\n" << flush;
                    f << x + lado << " " << y - lado << " " << z - lado << "\n" << flush;
                    f << x + lado << " " << y + lado << " " << z - lado << "\n" << flush;
                    f << x - lado << " " << y + lado << " " << z + lado << "\n" << flush;
                    f << x - lado << " " << y - lado << " " << z + lado << "\n" << flush;
                    f << x + lado << " " << y - lado << " " << z + lado << "\n" << flush;
                    f << x + lado << " " << y + lado << " " << z + lado << "\n" << flush;
                }
            }
        }
    }
    total = 0;
    for(x = 0; x < nx; x++){
        for(y = 0; y < ny; y++){
            for(z = 0; z < nz; z++){
                if(v[x][y][z].isOn == true){
                    index = total * 8;

                    f << fixed;
                    f << 4 << " " << index + 0 << " " << index + 3 << " " << index + 2 << " " << index + 1 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    f << fixed;
                    f << 4 << " " << index + 4 << " " << index + 5 << " " << index + 6 << " " << index + 7 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    f << fixed;
                    f << 4 << " " << index + 0 << " " << index + 1 << " " << index + 5 << " " << index + 4 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    f << fixed;
                    f << 4 << " " << index + 0 << " " << index + 4 << " " << index + 7 << " " << index + 3 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    f << fixed;
                    f << 4 << " " << index + 3 << " " << index + 7 << " " << index + 6 << " " << index + 2 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    f << fixed;
                    f << 4 << " " << index + 1 << " " << index + 2 << " " << index + 6 << " " << index + 5 << " ";
                    f << setprecision(2) << v[x][y][z].r << " "
                      << setprecision(2) << v[x][y][z].g << " "
                      << setprecision(2) << v[x][y][z].b << " "
                      << setprecision(2) << v[x][y][z].a << "\n";

                    total++;
                }
            }
        }
    }
    f.close();
}

#ifndef SCULPTOR_H
#define SCULPTOR_H

/**
 * @brief A estrutura Voxel é utilizada para definir as propriedades
 * de cada Voxel no espaço.
 */
struct Voxel{
    float r; /*!< Tons de vermelho(red) do Voxel. */
    float g; /*!< Tons de verde(green) do Voxel. */
    float b; /*!< Tons de azul(blue) do Voxel. */
    float a; /*!< Transparência do Voxel. */
    bool isOn; /*!< Voxel ativo ou não. */
};

/**
 * @brief A classe Sculptor implementa um desenhador tridimensional
 * com várias funções.
 */
class Sculptor{
protected:
    Voxel ***v; /*!< Variável utilizada para trabalhar com os Voxels. */
    int nx; /*!< Tamanho do espaço no eixo x. */
    int ny; /*!< Tamanho do espaço no eixo y. */
    int nz; /*!< Tamanho do espaço no eixo z. */
    float r; /*!< Tons de vermelho(red) para acrescentar ao Voxel. */
    float g; /*!< Tons de verde(green) para acrescentar ao Voxel. */
    float b; /*!< Tons de azul(blue) para acrescentar ao Voxel. */
    float a; /*!< Transparência para acrescentar ao Voxel. */
public:
    /**
     * @brief Constrói um novo objeto Sculptor com dimensões nx, ny, nz.
     *
     * @param _nx dimensão do construtor no eixo x.
     * @param _ny dimensão do construtor no eixo y.
     * @param _nz dimensão do construtor no eixo z.
     *
     * @details
     * <ul>
     *  <li> Crie um objeto. </li>
     *  <li> Atribua uma cor e transparência. </li>
     *  <li> Escolha uma função para desenhar. </li>
     * </ul>
     */
    Sculptor(int _nx, int _ny, int _nz);

    ~Sculptor();

    /**
     * @brief Seleciona uma cor para ser utilizada pelas próximas funções.
     *
     * @param _r acrescenta tons de vermelho(red).
     * @param _g acrescenta tons de verde(green).
     * @param _b acrescenta tons de azul(blue).
     * @param alpha acrescenta transparência.
     */
    void setColor(float _r, float _g, float _b, float alpha);

    /**
     * @brief Desenha um Voxel no local (x, y, z).
     * @param x local no eixo x que o voxel será ativado.
     * @param y local no eixo y que o voxel será ativado.
     * @param z local no eixo z que o voxel será ativado.
     */
    void putVoxel(int x, int y, int z);

    /**
     * @brief Apaga um Voxel no local (x, y, z).
     * @param x local no eixo x que o voxel será desativado.
     * @param y local no eixo y que o voxel será desativado.
     * @param z local no eixo z que o voxel será desativado.
     */
    void cutVoxel(int x, int y, int z);

    /**
     * @brief Desenha uma caixa definida de x0 a x1 no eixo x, y0 a y1 no eixo y e
     * z0 a z1 no eixo z.
     *
     * @param x0 é o ponto inicial em x da caixa.
     * @param x1 é o ponto final em x da caixa.
     * @param y0 é o ponto inicial em y da caixa.
     * @param y1 é o ponto final em y da caixa.
     * @param z0 é o ponto inicial em z da caixa.
     * @param z1 é o ponto final em z da caixa.
     */
    void putBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief Apaga uma caixa definida de x0 a x1 no eixo x, y0 a y1 no eixo y e
     * z0 a z1 no eixo z.
     *
     * @param x0 é o ponto inicial em x da caixa.
     * @param x1 é o ponto final em x da caixa.
     * @param y0 é o ponto inicial em y da caixa.
     * @param y1 é o ponto final em y da caixa.
     * @param z0 é o ponto inicial em z da caixa.
     * @param z1 é o ponto final em z da caixa.
     */
    void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);

    /**
     * @brief Desenha uma esfera definida por \f$ (x - xcenter)^2 + (y - ycenter)^2 +
     * (z - zcenter)^2 \le radius^2 \f$
     *
     * @param xcenter é o valor do centro da esfera em x.
     * @param ycenter é o valor do centro da esfera em y.
     * @param zcenter é o valor do centro da esfera em z.
     * @param radius é o raio da esfera.
     */
    void putSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief Apaga uma esfera definida por \f$ (x - xcenter)^2 + (y - ycenter)^2 +
     * (z - zcenter)^2 \le radius^2 \f$
     *
     * @param xcenter é o valor do centro da esfera em x.
     * @param ycenter é o valor do centro da esfera em y.
     * @param zcenter é o valor do centro da esfera em z.
     * @param radius é o raio da esfera.
     */
    void cutSphere(int xcenter, int ycenter, int zcenter, int radius);

    /**
     * @brief Desenha uma elipse definida por \f$ \frac{(x - xcenter)^2}{rx^2} +
     * \frac{(y - ycenter)^2}{ry^2} + \frac{(z - zcenter)^2}{rz^2} \le 1 \f$
     *
     * @param xcenter é o valor do centro da elipse em x.
     * @param ycenter é o valor do centro da elipse em y.
     * @param zcenter é o valor do centro da elipse em z.
     * @param rx é o raio da elipse em x.
     * @param ry é o raio da elipse em y.
     * @param rz é o raio da elipse em z.
     */
    void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief Apaga uma elipse definida por \f$ \frac{(x - xcenter)^2}{rx^2} +
     * \frac{(y - ycenter)^2}{ry^2} + \frac{(z - zcenter)^2}{rz^2} \le 1 \f$
     *
     * @param xcenter é o valor do centro da elipse em x.
     * @param ycenter é o valor do centro da elipse em y.
     * @param zcenter é o valor do centro da elipse em z.
     * @param rx é o raio da elipse em x.
     * @param ry é o raio da elipse em y.
     * @param rz é o raio da elipse em z.
     */
    void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);

    /**
     * @brief Escrita do desenho para formato .OFF.
     *
     * @param filename é o nome do arquivo que será gerado.
     */
    void writeOFF(char* filename);
};

#endif // SCULPTOR_H

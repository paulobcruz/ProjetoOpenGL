#ifndef MEUPAINELOPENGL_H
#define MEUPAINELOPENGL_H

#include <QGLWidget>

class MeuPainelOpenGL : public QGLWidget
{
Q_OBJECT
public:
    explicit MeuPainelOpenGL(QWidget *parent = 0);

signals:

public slots:
    int desenhaForma();
    int limpaForma();
    void desenhaGrades(bool flag);
    void alteraX(int x);
    void alteraY(int y);
    void alteraMalha(int tamanho);
    void alteraXCirculo(int x);
    void alteraYCirculo(int y);

protected:
    void initializeGL();
    void resizeGL(int width, int height);
    void paintGL();

private:
    bool flag;
    bool flagMalha;
    int x,y,tamanho;
    int xCirculo,yCirculo;
    float raio;
    void desenhaGrade();
    void desenhaQuadrado(int x,int y);
    void desenhaCirculo(int raio,int x, int y);
};

#endif // MEUPAINELOPENGL_H

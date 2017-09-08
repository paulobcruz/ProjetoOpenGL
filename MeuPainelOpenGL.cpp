#include "MeuPainelOpenGL.h"
#include <cmath>
#include <GL/glu.h>

MeuPainelOpenGL::MeuPainelOpenGL(QWidget *parent) :
    QGLWidget(parent)
{
    setFormat(QGL::DoubleBuffer | QGL::DepthBuffer);
    flag = false;
    flagMalha = false;
    x = 0;
    y = 0;
    tamanho = 10;
    raio = 1.0;
}

void MeuPainelOpenGL::initializeGL()
{
    glShadeModel(GL_SMOOTH);

    glClearColor(1.0f, 1.0f, 1.0f, 0.0f);
    glClearDepth(1.0f);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LEQUAL);

    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void MeuPainelOpenGL::resizeGL(int width, int height)
{
    double menorX = 0, maiorX = tamanho, menorY = 0, maiorY = tamanho;
    glViewport( 0, 0, (GLint)width, (GLint)height );

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(menorX, maiorX, menorY, maiorY);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void MeuPainelOpenGL::paintGL()
{
    // Limpa a janela de visualização com a cor branca
    // e Limpa o buffer de teste de profundidade
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity(); // limpa todas as transformações
    if(flagMalha == true)
    {
    desenhaGrade();
    }
    glColor3f(0,0.5f,0);
    if(flag == true)
    {
    glBegin(GL_TRIANGLES);
        glVertex2f(0,0);
        glVertex2f(0,5.0f);
        glVertex2f(5.0f,0);
    glEnd();
    }
    desenhaQuadrado(x,y);
    desenhaCirculo(raio,xCirculo,yCirculo);
}

void MeuPainelOpenGL::desenhaQuadrado(int x,int y)
{
    glBegin(GL_POLYGON);
        glVertex2f(x,y);
        glVertex2f(x+1,y);
        glVertex2f(x+1,y+1);
        glVertex2f(x,y+1);
    glEnd();
}

void MeuPainelOpenGL::desenhaCirculo(int raio,int xCirculo, int yCirculo)
{
    glBegin(GL_POLYGON);
           for (int i = 0; i < 60; ++i)
               glVertex2f(xCirculo +(raio*cos(i*2*3.14159265/60)),
                          yCirculo + (raio*sin(i*2*3.14159265/60)));
       glEnd();
}

void MeuPainelOpenGL::alteraMalha(int tamanho)
{
    this->tamanho = tamanho;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, tamanho, 0, tamanho);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    updateGL();
}
void MeuPainelOpenGL::alteraXCirculo(int xCirculo)
{
    this->xCirculo = xCirculo;
    updateGL();
}
void MeuPainelOpenGL::alteraYCirculo(int yCirculo)
{
    this->yCirculo = yCirculo;
    updateGL();
}

void MeuPainelOpenGL::alteraX(int x)
{
    this->x = x;
    updateGL();
}

void MeuPainelOpenGL::alteraY(int y)
{
    this->y = y;
    updateGL();
}
void MeuPainelOpenGL:: desenhaGrades(bool flagMalha)
{
    this->flagMalha = flagMalha;
    updateGL();
}

void MeuPainelOpenGL::desenhaGrade()
{
    glColor3f(0.5f,0.5f,0.5f);
    glBegin(GL_LINES);
    for(float y = 0;y < tamanho;y++)
    {
        glVertex2f(0,y);
        glVertex2f(tamanho,y);
    }
    glEnd();

    glBegin(GL_LINES);
    for(float x = 0;x < tamanho;x++)
    {
        glVertex2f(x,0);
        glVertex2f(x,tamanho);
    }
    glEnd();

}

int MeuPainelOpenGL::desenhaForma()
{
    flag = true;
    updateGL();
}

int MeuPainelOpenGL::limpaForma()
{
    flag = false;
    updateGL();
}



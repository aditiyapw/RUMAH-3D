#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <gl/glut.h>

void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);
void mouse(int button, int state, int x, int y);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void look()
{
    glLoadIdentity();
       gluLookAt(0.0f, 0.0f, 3.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
       glRotatef(xrot, 1.0f,0.0f, 0.0f);
       glRotatef(yrot, 0.0f, 1.0f, 0.0f);
}

void init(void)
{
    glClearColor(220/255.0f, 252/255.0f, 249/255.0f, 0/255.0f);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(3.0f);
}

void tampil(void)
{
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
    glClear(GL_COLOR_BUFFER_BIT);

    //tanah
    glBegin(GL_POLYGON);
    glColor3f(160/255.0f, 125/255.0f, 70/255.0f);
    glVertex3f(-80,-30,60);
    glVertex3f(-80,-30,-100);
    glVertex3f(80,-30,-100);
    glVertex3f(80,-30,60);
    glEnd();

     //pagartembok
    glBegin(GL_POLYGON);
    glColor3f(199/255.0f, 198/255.0f, 183/255.0f);
    glVertex3f(-48,-30,28);
    glVertex3f(-45,-30,28);
    glVertex3f(-45,0,28);
    glVertex3f(-48,0,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(130/255.0f, 129/255.0f, 120/255.0f);
    glVertex3f(-48,-30,-58);
    glVertex3f(38,-30,-58);
    glVertex3f(38,0,-58);
    glVertex3f(-48,0,-58);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(231/255.0f, 230/255.0f, 216/255.0f);
    glVertex3f(-45,-30,28);
    glVertex3f(-45,-30,-56);
    glVertex3f(-45,0,-56);
    glVertex3f(-45,0,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(134/255.0f, 134/255.0f, 126/255.0f);
    glVertex3f(-48,-30,28);
    glVertex3f(-48,-30,-58);
    glVertex3f(-48,0,-58);
    glVertex3f(-48,0,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(199/255.0f, 198/255.0f, 183/255.0f);
    glVertex3f(-45,-30,-56);
    glVertex3f(38,-30,-56);
    glVertex3f(38,0,-56);
    glVertex3f(-45,0,-56);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(78/255.0f, 77/255.0f, 72/255.0f);
    glVertex3f(-50,0,28);
    glVertex3f(-43,0,28);
    glVertex3f(-43,0,-56);
    glVertex3f(-50,0,-56);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(78/255.0f, 77/255.0f, 72/255.0f);
    glVertex3f(40,0,-54);
    glVertex3f(40,0,-60);
    glVertex3f(-50,0,-60);
    glVertex3f(-50,0,-54);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(231/255.0f, 230/255.0f, 216/255.0f);
    glVertex3f(38,-30,-56);
    glVertex3f(38,-30,-58);
    glVertex3f(38,0,-58);
    glVertex3f(38,0,-56);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(199/255.0f, 198/255.0f, 183/255.0f);
    glVertex3f(-50,0,28);
    glVertex3f(-43,0,28);
    glVertex3f(-43,5,28);
    glVertex3f(-50,5,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(109/255.0f, 108/255.0f, 100/255.0f);
    glVertex3f(-50,0,-60);
    glVertex3f(40,0,-60);
    glVertex3f(40,5,-60);
    glVertex3f(-50,5,-60);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(245/255.0f, 244/255.0f, 230/255.0f);
    glVertex3f(-43,0,28);
    glVertex3f(-43,0,-54);
    glVertex3f(-43,5,-54);
    glVertex3f(-43,5,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(109/255.0f, 108/255.0f, 100/255.0f);
    glVertex3f(-50,0,28);
    glVertex3f(-50,0,-60);
    glVertex3f(-50,5,-60);
    glVertex3f(-50,5,28);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(245/255.0f, 244/255.0f, 230/255.0f);
    glVertex3f(-50,0,-54);
    glVertex3f(40,0,-54);
    glVertex3f(40,5,-54);
    glVertex3f(-50,5,-54);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 253/255.0f, 238/255.0f);
    glVertex3f(40,5,-54);
    glVertex3f(40,5,-60);
    glVertex3f(-50,5,-60);
    glVertex3f(-50,5,-54);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 253/255.0f, 238/255.0f);
    glVertex3f(-50,5,28);
    glVertex3f(-43,5,28);
    glVertex3f(-43,5,-56);
    glVertex3f(-50,5,-56);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 253/255.0f, 238/255.0f);
    glVertex3f(40,5,-54);
    glVertex3f(40,5,-60);
    glVertex3f(40,0,-60);
    glVertex3f(40,0,-54);
    glEnd();

    //depanlayer3
    glBegin(GL_POLYGON);
    glColor3f(70/255.0f, 120/255.0f, 50/255.0f);
    glVertex3f(-36,-30,-50);
    glVertex3f(-36,22.5,-50);
    glVertex3f(-18,45,-50);
    glVertex3f(0,22.5,-50);
    glVertex3f(0,-30,-50);
    glEnd();
    //jendeladepan
    glBegin(GL_POLYGON);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-30,-10,-50.1);
    glVertex3f(-30,15,-50.1);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-6,15,-50.1);
    glVertex3f(-6,-10,-50.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-30,-10,-49.9);
    glVertex3f(-30,15,-49.9);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-6,15,-49.9);
    glVertex3f(-6,-10,-49.9);
    glEnd();
    //garisjendelablk
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-30,-10,-50.1);
    glVertex3f(-30,15,-50.1);
    glVertex3f(-6,15,-50.1);
    glVertex3f(-6,-10,-50.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-30,-10,-49.9);
    glVertex3f(-30,15,-49.9);
    glVertex3f(-6,15,-49.9);
    glVertex3f(-6,-10,-49.9);
    glEnd();

    //depanlayer2
    glBegin(GL_POLYGON);
    glColor3f(117/255.0f, 191/255.0f, 88/255.0f);
    glVertex3f(-36,20,0);
    glVertex3f(-36,22.5,0);
    glVertex3f(-18,45,0);
    glVertex3f(0,22.5,0);
    glVertex3f(0,20,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(117/255.0f, 191/255.0f, 88/255.0f);
    glVertex3f(-36,-30,0);
    glVertex3f(-34,-30,0);
    glVertex3f(-34,20,0);
    glVertex3f(-36,20,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(117/255.0f, 191/255.0f, 88/255.0f);
    glVertex3f(-20,-30,0);
    glVertex3f(0,-30,0);
    glVertex3f(0,20,0);
    glVertex3f(-20,20,0);
    glEnd();
    //jendelay2
    glBegin(GL_POLYGON);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-5,-20,0.1);
    glVertex3f(-5,5,0.1);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-15,5,0.1);
    glVertex3f(-15,-20,0.1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-5,-20,-0.1);
    glVertex3f(-5,5,-0.1);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-15,5,-0.1);
    glVertex3f(-15,-20,-0.1);
    glEnd();
    //garisjendela2
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-5,-20,0.2);
    glVertex3f(-5,5,0.2);
    glVertex3f(-15,5,0.2);
    glVertex3f(-15,-20,0.2);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-4.5,-20,0.2);
    glVertex3f(-15.5,-20,0.2);
    glVertex3f(-4.5,5,0.2);
    glVertex3f(-15.5,5,0.2);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-5,-20,-0.2);
    glVertex3f(-5,5,-0.2);
    glVertex3f(-15,5,-0.2);
    glVertex3f(-15,-20,-0.2);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-4.5,-20,-0.2);
    glVertex3f(-15.5,-20,-0.2);
    glVertex3f(-4.5,5,-0.2);
    glVertex3f(-15.5,5,-0.2);
    glEnd();

    //depanlayer1
    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 234/255.0f, 109/255.0f);
    glVertex3f(-34,5,20);
    glVertex3f(-34,12.5,20);
    glVertex3f(-20,12.5,20);
    glVertex3f(-20,5,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 234/255.0f, 109/255.0f);
    glVertex3f(-34,-30,20);
    glVertex3f(-34,-20,20);
    glVertex3f(-20,-20,20);
    glVertex3f(-20,-30,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 234/255.0f, 109/255.0f);
    glVertex3f(-22,-20,20);
    glVertex3f(-22,5,20);
    glVertex3f(-20,5,20);
    glVertex3f(-20,-20,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 234/255.0f, 109/255.0f);
    glVertex3f(-34,-20,20);
    glVertex3f(-34,5,20);
    glVertex3f(-32,5,20);
    glVertex3f(-32,-20,20);
    glEnd();
    //jendeladepan
    glBegin(GL_POLYGON);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-32,-20,20);
    glVertex3f(-32,5,20);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-22,5,20);
    glVertex3f(-22,-20,20);
    glEnd();
    //garisjendeladpn
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-32,-20,20.1);
    glVertex3f(-32,5,20.1);
    glVertex3f(-22,5,20.1);
    glVertex3f(-22,-20,20.1);
    glVertex3f(-32.4,-20,20.1);
    glVertex3f(-21.6,-20,20.1);
    glVertex3f(-21.6,5,20.1);
    glVertex3f(-32.4,5,20.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-32,-20,19.9);
    glVertex3f(-32,5,19.9);
    glVertex3f(-22,5,19.9);
    glVertex3f(-22,-20,19.9);
    glVertex3f(-32.4,-20,19.9);
    glVertex3f(-21.6,-20,19.9);
    glVertex3f(-21.6,5,19.9);
    glVertex3f(-32.4,5,19.9);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-27,-20,19.9);
    glVertex3f(-27,5,19.9);
    glVertex3f(-22,-7.5,19.9);
    glVertex3f(-32,-7.5,19.9);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-27,-20,20.1);
    glVertex3f(-27,5,20.1);
    glVertex3f(-22,-7.5,20.1);
    glVertex3f(-32,-7.5,20.1);
    glEnd();

    //depanlayer1-2ka
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 253/255.0f, 126/255.0f);
    glVertex3f(-20,5,20);
    glVertex3f(-20,12.5,20);
    glVertex3f(-20,20,0);
    glVertex3f(-20,5,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 253/255.0f, 126/255.0f);
    glVertex3f(-20,-30,3);
    glVertex3f(-20,5,3);
    glVertex3f(-20,5,0);
    glVertex3f(-20,-30,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 253/255.0f, 126/255.0f);
    glVertex3f(-20,-30,20);
    glVertex3f(-20,5,20);
    glVertex3f(-20,5,17);
    glVertex3f(-20,-30,17);
    glEnd();


    //pintudepan
    glBegin(GL_POLYGON);
    glColor3f(123/255.0f, 90/255.0f, 11/255.0f);
    glVertex3f(-20,-30,17);
    glVertex3f(-20,5,17);
    glColor3f(101/255.0f, 57/255.0f, 11/255.0f);
    glVertex3f(-20,5,3);
    glVertex3f(-20,-30,3);
    glEnd();
    //garispintu
    glBegin(GL_LINES);
    glColor3f(185/255.0f, 127/255.0f, 65/255.0f);
    glVertex3f(-19.9,-30,10);
    glVertex3f(-19.9,5,10);
    glVertex3f(-19.9,-12.5,3);
    glVertex3f(-19.9,-12.5,17);
    glVertex3f(-20.1,-30,10);
    glVertex3f(-20.1,5,10);
    glVertex3f(-20.1,-12.5,3);
    glVertex3f(-20.1,-12.5,17);
    glColor3f(0,0,0);
    glVertex3f(-19.8,-12.5,16);
    glVertex3f(-19.8,-12.5,13);
    glVertex3f(-20.2,-12.5,16);
    glVertex3f(-20.2,-12.5,13);
    glEnd();

    //depanlayer1-2ki
    glBegin(GL_POLYGON);
    glColor3f(70/255.0f, 120/255.0f, 50/255.0f);
    glVertex3f(-34,-30,20);
    glVertex3f(-34,12.5,20);
    glVertex3f(-34,20,0);
    glVertex3f(-34,-30,0);
    glEnd();

    //tembokkanan
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 253/255.0f, 126/255.0f);
    glVertex3f(0,-30,0);
    glVertex3f(0,22.5,0);
    glVertex3f(0,22.5,-50);
    glVertex3f(0,-30,-50);
    glEnd();
    //jendelaka
    glBegin(GL_POLYGON);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(0.1,-10,-40);
    glVertex3f(0.1,10,-40);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(0.1,10,-10);
    glVertex3f(0.1,-10,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-0.1,-10,-40);
    glVertex3f(-0.1,10,-40);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-0.1,10,-10);
    glVertex3f(-0.1,-10,-10);
    glEnd();
    //garisjendelaka
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(0.2,-10,-40);
    glVertex3f(0.2,10,-40);
    glVertex3f(0.2,10,-10);
    glVertex3f(0.2,-10,-10);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-0.2,-10,-40);
    glVertex3f(-0.2,10,-40);
    glVertex3f(-0.2,10,-10);
    glVertex3f(-0.2,-10,-10);
    glEnd();

    //tembokkiri
    glBegin(GL_POLYGON);
    glColor3f(52/255.0f, 89/255.0f, 37/255.0f);
    glVertex3f(-36,-30,0);
    glVertex3f(-36,22.5,0);
    glVertex3f(-36,22.5,-50);
    glVertex3f(-36,-30,-50);
    glEnd();
    //jendelaka
    glBegin(GL_POLYGON);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-35.9,-10,-40);
    glVertex3f(-35.9,10,-40);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-35.9,10,-10);
    glVertex3f(-35.9,-10,-10);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(177/255.0f, 239/255.0f, 203/255.0f);
    glVertex3f(-36.1,-10,-40);
    glVertex3f(-36.1,10,-40);
    glColor3f(142/255.0f, 220/255.0f, 250/255.0f);
    glVertex3f(-36.1,10,-10);
    glVertex3f(-36.1,-10,-10);
    glEnd();
    //garisjendelaka
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-35.8,-10,-40);
    glVertex3f(-35.8,10,-40);
    glVertex3f(-35.8,10,-10);
    glVertex3f(-35.8,-10,-10);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(96/255.0f, 57/255.0f, 19/255.0f);
    glVertex3f(-36.2,-10,-40);
    glVertex3f(-36.2,10,-40);
    glVertex3f(-36.2,10,-10);
    glVertex3f(-36.2,-10,-10);
    glEnd();

    //gentengdepan
    glBegin(GL_POLYGON);
    glColor3f(87/255.0f, 87/255.0f, 87/255.0f);
    glVertex3f(-35,12,22);
    glVertex3f(-35,20,0);
    glVertex3f(-19,20,0);
    glVertex3f(-19,12,22);
    glEnd();

    //genteng2kan
    glBegin(GL_POLYGON);
    glColor3f(87/255.0f, 87/255.0f, 87/255.0f);
    glVertex3f(2,20.2,2);
    glVertex3f(-18,45,2);
    glVertex3f(-18,45,-52);
    glVertex3f(2,20.2,-52);
    glEnd();

    //genteng2kir
    glBegin(GL_POLYGON);
    glColor3f(58/255.0f, 58/255.0f, 58/255.0f);
    glVertex3f(-38,20.2,2);
    glVertex3f(-18,45,2);
    glVertex3f(-18,45,-52);
    glVertex3f(-38,20.2,-52);
    glEnd();

    //ayunan
    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 101/255.0f, 144/255.0f);
    glVertex3f(19,-30,0);
    glVertex3f(21,-30,0);
    glVertex3f(21,12,0);
    glVertex3f(19,12,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 112/255.0f, 162/255.0f);
    glVertex3f(21,-30,0);
    glVertex3f(21,-30,-2);
    glVertex3f(21,12,-2);
    glVertex3f(21,12,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100/255.0f, 70/255.0f, 100/255.0f);
    glVertex3f(19,-30,-2);
    glVertex3f(21,-30,-2);
    glVertex3f(21,12,-2);
    glVertex3f(19,12,-2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(110/255.0f, 78/255.0f, 110/255.0f);
    glVertex3f(19,-30,0);
    glVertex3f(19,-30,-2);
    glVertex3f(19,12,-2);
    glVertex3f(19,12,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 101/255.0f, 144/255.0f);
    glVertex3f(19,-30,-35);
    glVertex3f(21,-30,-35);
    glVertex3f(21,12,-35);
    glVertex3f(19,12,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 112/255.0f, 162/255.0f);
    glVertex3f(21,-30,-35);
    glVertex3f(21,-30,-37);
    glVertex3f(21,12,-37);
    glVertex3f(21,12,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100/255.0f, 70/255.0f, 100/255.0f);
    glVertex3f(19,-30,-37);
    glVertex3f(21,-30,-37);
    glVertex3f(21,12,-37);
    glVertex3f(19,12,-37);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(110/255.0f, 78/255.0f, 110/255.0f);
    glVertex3f(19,-30,-35);
    glVertex3f(19,-30,-37);
    glVertex3f(19,12,-37);
    glVertex3f(19,12,-35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(144/255.0f, 101/255.0f, 144/255.0f);
    glVertex3f(19,10,-2);
    glVertex3f(21,10,-2);
    glVertex3f(21,12,-2);
    glVertex3f(19,12,-2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(162/255.0f, 112/255.0f, 162/255.0f);
    glVertex3f(21,12,-2);
    glVertex3f(21,10,-2);
    glVertex3f(21,10,-35);
    glVertex3f(21,12,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100/255.0f, 70/255.0f, 100/255.0f);
    glVertex3f(19,10,-35);
    glVertex3f(21,10,-35);
    glVertex3f(21,12,-35);
    glVertex3f(19,12,-35);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(110/255.0f, 78/255.0f, 110/255.0f);
    glVertex3f(19,10,-2);
    glVertex3f(19,10,-35);
    glVertex3f(19,12,-35);
    glVertex3f(19,12,-2);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(222/255.0f, 157/255.0f, 222/255.0f);
    glVertex3f(19,12,0);
    glVertex3f(21,12,0);
    glVertex3f(21,12,-37);
    glVertex3f(19,12,-37);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(100/255.0f, 70/255.0f, 100/255.0f);
    glVertex3f(19,10,0);
    glVertex3f(21,10,0);
    glVertex3f(21,10,-37);
    glVertex3f(19,10,-37);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(104/255.0f, 71/255.0f, 22/255.0f);
    glVertex3f(20,10,-9.2);
    glVertex3f(20,-20,-9.2);
    glVertex3f(20,-20,-9.7);
    glVertex3f(20,10,-9.7);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(104/255.0f, 71/255.0f, 22/255.0f);
    glVertex3f(20,10,-27.5);
    glVertex3f(20,-20,-27.5);
    glVertex3f(20,-20,-28);
    glVertex3f(20,10,-28);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(96/255.0f, 96/255.0f, 96/255.0f);
    glVertex3f(16,-20,-6);
    glVertex3f(24,-20,-6);
    glVertex3f(24,-20,-30);
    glVertex3f(16,-20,-30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(59/255.0f, 59/255.0f, 59/255.0f);
    glVertex3f(16,-21,-6);
    glVertex3f(24,-21,-6);
    glVertex3f(24,-21,-30);
    glVertex3f(16,-21,-30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(129/255.0f, 129/255.0f, 129/255.0f);
    glVertex3f(24,-20,-6);
    glVertex3f(24,-21,-6);
    glVertex3f(24,-21,-30);
    glVertex3f(24,-20,-30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(49/255.0f, 49/255.0f, 49/255.0f);
    glVertex3f(24,-20,-30);
    glVertex3f(24,-21,-30);
    glVertex3f(16,-21,-30);
    glVertex3f(16,-20,-30);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(169/255.0f, 169/255.0f, 169/255.0f);
    glVertex3f(24,-20,-6);
    glVertex3f(24,-21,-6);
    glVertex3f(16,-21,-6);
    glVertex3f(16,-20,-6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(39/255.0f, 39/255.0f, 39/255.0f);
    glVertex3f(16,-20,-6);
    glVertex3f(16,-21,-6);
    glVertex3f(16,-21,-30);
    glVertex3f(16,-20,-30);
    glEnd();

    //intr
    //meja
    //ba
    glBegin(GL_POLYGON);
    glColor3f(135/255.0f, 47/255.0f, 23/255.0f);
    glVertex3f(-35,-20,-49);
    glVertex3f(-35,-20,-39);
    glVertex3f(-25,-20,-39);
    glVertex3f(-25,-20,-49);
    glEnd();
    //at
    glBegin(GL_POLYGON);
    glColor3f(221/255.0f, 73/255.0f, 34/255.0f);
    glVertex3f(-35,-19,-49);
    glVertex3f(-35,-19,-39);
    glVertex3f(-25,-19,-39);
    glVertex3f(-25,-19,-49);
    glEnd();
    //bel
    glBegin(GL_POLYGON);
    glColor3f(135/255.0f, 47/255.0f, 23/255.0f);
    glVertex3f(-35,-19,-49);
    glVertex3f(-35,-20,-49);
    glVertex3f(-25,-20,-49);
    glVertex3f(-25,-19,-49);
    glEnd();
    //dep
    glBegin(GL_POLYGON);
    glColor3f(240/255.0f, 84/255.0f, 43/255.0f);
    glVertex3f(-35,-19,-39);
    glVertex3f(-35,-20,-39);
    glVertex3f(-25,-20,-39);
    glVertex3f(-25,-19,-39);
    glEnd();
    //kir
    glBegin(GL_POLYGON);
    glColor3f(117/255.0f, 41/255.0f, 21/255.0f);
    glVertex3f(-35,-20,-49);
    glVertex3f(-35,-19,-49);
    glVertex3f(-35,-19,-39);
    glVertex3f(-35,-20,-39);
    glEnd();
    //kan
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 93/255.0f, 51/255.0f);
    glVertex3f(-25,-20,-49);
    glVertex3f(-25,-19,-49);
    glVertex3f(-25,-19,-39);
    glVertex3f(-25,-20,-39);
    glEnd();
    //kak
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 93/255.0f, 51/255.0f);
    glVertex3f(-26,-20,-40);
    glVertex3f(-26,-30,-40);
    glVertex3f(-28,-30,-40);
    glVertex3f(-28,-20,-40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 93/255.0f, 51/255.0f);
    glVertex3f(-26,-20,-48);
    glVertex3f(-26,-30,-48);
    glVertex3f(-28,-30,-48);
    glVertex3f(-28,-20,-48);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 93/255.0f, 51/255.0f);
    glVertex3f(-32,-20,-40);
    glVertex3f(-32,-30,-40);
    glVertex3f(-34,-30,-40);
    glVertex3f(-34,-20,-40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(254/255.0f, 93/255.0f, 51/255.0f);
    glVertex3f(-32,-20,-48);
    glVertex3f(-32,-30,-48);
    glVertex3f(-34,-30,-48);
    glVertex3f(-34,-20,-48);
    glEnd();

    //kur
    glBegin(GL_POLYGON);
    glColor3f(57/255.0f, 139/255.0f, 132/255.0f);
    glVertex3f(-16,-22,-40);
    glVertex3f(-16,-30,-40);
    glVertex3f(-18,-30,-40);
    glVertex3f(-18,-22,-40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(57/255.0f, 139/255.0f, 132/255.0f);
    glVertex3f(-16,-22,-48);
    glVertex3f(-16,-30,-48);
    glVertex3f(-18,-30,-48);
    glVertex3f(-18,-22,-48);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(57/255.0f, 139/255.0f, 132/255.0f);
    glVertex3f(-22,-22,-40);
    glVertex3f(-22,-30,-40);
    glVertex3f(-24,-30,-40);
    glVertex3f(-24,-22,-40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(57/255.0f, 139/255.0f, 132/255.0f);
    glVertex3f(-22,-22,-48);
    glVertex3f(-22,-30,-48);
    glVertex3f(-24,-30,-48);
    glVertex3f(-24,-22,-48);
    //ba
    glBegin(GL_POLYGON);
    glColor3f(40/255.0f, 98/255.0f, 93/255.0f);
    glVertex3f(-25,-22,-49);
    glVertex3f(-25,-22,-39);
    glVertex3f(-16,-22,-39);
    glVertex3f(-16,-22,-49);
    glEnd();
    //at
    glBegin(GL_POLYGON);
    glColor3f(82/255.0f, 194/255.0f, 195/255.0f);
    glVertex3f(-25,-21,-49);
    glVertex3f(-25,-21,-39);
    glVertex3f(-16,-21,-39);
    glVertex3f(-16,-21,-49);
    glEnd();
    //bel
    glBegin(GL_POLYGON);
    glColor3f(40/255.0f, 98/255.0f, 93/255.0f);
    glVertex3f(-25,-22,-49);
    glVertex3f(-25,-21,-49);
    glVertex3f(-16,-21,-49);
    glVertex3f(-16,-22,-49);
    glEnd();
    //dep
    glBegin(GL_POLYGON);
    glColor3f(94/255.0f, 221/255.0f, 211/255.0f);
    glVertex3f(-25,-22,-39);
    glVertex3f(-25,-21,-39);
    glVertex3f(-16,-21,-39);
    glVertex3f(-16,-22,-39);
    glEnd();
    //kir
    glBegin(GL_POLYGON);
    glColor3f(40/255.0f, 98/255.0f, 93/255.0f);
    glVertex3f(-25,-21,-49);
    glVertex3f(-25,-22,-49);
    glVertex3f(-25,-22,-39);
    glVertex3f(-25,-21,-39);
    glEnd();
    //kan
    glBegin(GL_POLYGON);
    glColor3f(74/255.0f, 171/255.0f, 163/255.0f);
    glVertex3f(-16,-21,-49);
    glVertex3f(-16,-22,-49);
    glVertex3f(-16,-22,-39);
    glVertex3f(-16,-21,-39);
    glEnd();
    //san
    glBegin(GL_POLYGON);
    glColor3f(74/255.0f, 171/255.0f, 163/255.0f);
    glVertex3f(-16,-13,-49);
    glVertex3f(-16,-22,-49);
    glVertex3f(-16,-22,-39);
    glVertex3f(-16,-13,-39);
    glEnd();

    //kasur
    //lay1
    glBegin(GL_POLYGON);
    glColor3f(248/255.0f, 244/255.0f, 253/255.0f);
    glVertex3f(-16,-21,-0.3);
    glVertex3f(-16,-21,-25);
    glVertex3f(0,-21,-25);
    glVertex3f(0,-21,-0.3);
    glEnd();
    //lay1dep
    glBegin(GL_POLYGON);
    glColor3f(206/255.0f, 206/255.0f, 206/255.0f);
    glVertex3f(0,-24,-25);
    glVertex3f(-16,-24,-25);
    glVertex3f(-16,-21,-25);
    glVertex3f(0,-21,-25);
    glEnd();
    //lay1bel
    glBegin(GL_POLYGON);
    glColor3f(226/255.0f, 226/255.0f, 226/255.0f);
    glVertex3f(0,-24,-0.3);
    glVertex3f(-16,-24,-0.3);
    glVertex3f(-16,-21,-0.3);
    glVertex3f(0,-21,-0.3);
    glEnd();
    //lay1ki
    glBegin(GL_POLYGON);
    glColor3f(244/255.0f, 244/255.0f, 244/255.0f);
    glVertex3f(-16,-24,-0.3);
    glVertex3f(-16,-24,-25);
    glVertex3f(-16,-21,-25);
    glVertex3f(-16,-21,-0.3);
    glEnd();
    //lay1kan
    glBegin(GL_POLYGON);
    glColor3f(200/255.0f, 200/255.0f, 200/255.0f);
    glVertex3f(0,-24,-0.3);
    glVertex3f(0,-24,-25);
    glVertex3f(0,-21,-25);
    glVertex3f(0,-21,-0.3);
    glEnd();
    //lay2
    glBegin(GL_POLYGON);
    glColor3f(80/255.0f, 80/255.0f, 80/255.0f);
    glVertex3f(-17,-24,0);
    glVertex3f(-17,-24,-26);
    glVertex3f(0,-24,-26);
    glVertex3f(0,-24,0);
    glEnd();
    //lay2ki
    glBegin(GL_POLYGON);
    glColor3f(80/255.0f, 80/255.0f, 80/255.0f);
    glVertex3f(-17,-30,0);
    glVertex3f(-17,-30,-26);
    glVertex3f(-17,-24,-26);
    glVertex3f(-17,-24,0);
    glEnd();
    //lay2kan
    glBegin(GL_POLYGON);
    glColor3f(40/255.0f, 40/255.0f, 40/255.0f);
    glVertex3f(0,-30,0);
    glVertex3f(0,-30,-26);
    glVertex3f(0,-24,-26);
    glVertex3f(0,-24,0);
    glEnd();
    //lay2bel
    glBegin(GL_POLYGON);
    glColor3f(125/255.0f, 125/255.0f, 125/255.0f);
    glVertex3f(0,-30,-26);
    glVertex3f(-17,-30,-26);
    glVertex3f(-17,-24,-26);
    glVertex3f(0,-24,-26);
    glEnd();
    //lay2dep
    glBegin(GL_POLYGON);
    glColor3f(50/255.0f, 50/255.0f, 50/255.0f);
    glVertex3f(0,-30,0);
    glVertex3f(-17,-30,0);
    glVertex3f(-17,-24,0);
    glVertex3f(0,-24,0);
    glEnd();

    //rak
    glBegin(GL_POLYGON);
    glColor3f(117/255.0f, 91/255.0f, 46/255.0f);
    glVertex3f(-10,-26,-27);
    glVertex3f(-10,-26,-37);
    glVertex3f(0,-26,-37);
    glVertex3f(0,-26,-27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(143/255.0f, 111/255.0f, 56/255.0f);
    glVertex3f(-10,-21,-27);
    glVertex3f(-10,-21,-37);
    glVertex3f(0,-21,-37);
    glVertex3f(0,-21,-27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(175/255.0f, 136/255.0f, 69/255.0f);
    glVertex3f(-10,-16,-27);
    glVertex3f(-10,-16,-37);
    glVertex3f(0,-16,-37);
    glVertex3f(0,-16,-27);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(78/255.0f, 61/255.0f, 31/255.0f);
    glVertex3f(-10,-30,-37);
    glVertex3f(0,-30,-37);
    glVertex3f(0,-16,-37);
    glVertex3f(-10,-16,-37);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(98/255.0f, 77/255.0f, 39/255.0f);
    glVertex3f(-10,-30,-27);
    glVertex3f(0,-30,-27);
    glVertex3f(0,-16,-27);
    glVertex3f(-10,-16,-27);
    glEnd();

    //monitor
    glBegin(GL_POLYGON);
    glColor3f(7/255.0f, 7/255.0f, 7/255.0f);
    glVertex3f(-34,-19,-46);
    glVertex3f(-34,-19,-42);
    glVertex3f(-34,-13,-42);
    glVertex3f(-34,-13,-46);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(64/255.0f, 64/255.0f, 64/255.0f);
    glVertex3f(-28,-19,-48);
    glVertex3f(-28,-19,-40);
    glVertex3f(-28,-10,-40);
    glVertex3f(-28,-10,-48);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0/255.0f, 122/255.0f, 236/255.0f);
    glVertex3f(-27.9,-18,-47);
    glVertex3f(-27.9,-18,-41);
    glVertex3f(-27.9,-11,-41);
    glVertex3f(-27.9,-11,-47);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(45/255.0f, 45/255.0f, 45/255.0f);
    glVertex3f(-28,-19,-48);
    glVertex3f(-34,-19,-46);
    glVertex3f(-34,-13,-46);
    glVertex3f(-28,-10,-48);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(68/255.0f, 68/255.0f, 68/255.0f);
    glVertex3f(-28,-19,-40);
    glVertex3f(-34,-19,-42);
    glVertex3f(-34,-13,-42);
    glVertex3f(-28,-10,-40);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(68/255.0f, 68/255.0f, 68/255.0f);
    glVertex3f(-28,-10,-40);
    glVertex3f(-34,-13,-42);
    glVertex3f(-34,-13,-46);
    glVertex3f(-28,-10,-48);
    glEnd();

    glPushMatrix();
    glPopMatrix();

    glutSwapBuffers();
}

void idle()
{
    if (!mouseDown)
    {
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y)
{

    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y)
{
    look();
    if (mouseDown)
    {
        yrot = x - xdiff;
        xrot = y + ydiff;
        glutPostRedisplay();
    }
}

void ukuran(int lebar, int tinggi)
{
    if (tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50.0, lebar/tinggi, 5.0, 500.0);
    glTranslatef(0.0, -5.0, -150.0);
    glMatrixMode(GL_MODELVIEW);
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'w':
    case 'W':
        glTranslatef(0.0,0.0,3.0);
        break;
    case 'a':
    case 'A':
        glTranslatef(3.0,0.0,0.0);
        break;
    case 's':
    case 'S':
        glTranslatef(0.0,0.0,-3.0);
        break;
    case 'd':
    case 'D':
        glTranslatef(-3.0,0.0,0.0);
        break;
    case '7':
        glTranslatef(0.0,3.0,0.0);
        break;
    case '9':
        glTranslatef(0.0,-3.0,0.0);
        break;
    case '8':
        glRotatef(2.0, 1.0, 0.0, 0.0);
        break;
    case '2':
        glRotatef(-2.0,1.0,0.0,0.0);
        break;
    case '4':
        glRotatef(2.0,0.0,1.0,0.0);
        break;
    case '6':
        glRotatef(-2.0,0.0,1.0,0.0);
        break;
    case '1':
        glRotatef(2.0,0.0,0.0,1.0);
        break;
    case '3':
        glRotatef(-2.0,0.0,0.0,1.0);
        break;
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition(250, 80);
    glutCreateWindow("Aditiya Putra Wirawan - 672018397");
    init();
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutReshapeFunc(ukuran);
    glutMainLoop();
    return 0;
}

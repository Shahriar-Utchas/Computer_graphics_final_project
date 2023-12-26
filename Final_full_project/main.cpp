#include <bits/stdc++.h>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;

bool dayNight = true;
bool fountain = false;
bool keymap=true;
int i;
void setColor(string col){
    //day
    if(dayNight){
        if(col == "background") glColor3ub (23, 201, 205);
        else if(col == "darkBlue") glColor3ub (0, 84, 120);
        else if(col == "navyBlue") glColor3ub (0, 66, 101);
        else if(col == "lightGreen") glColor3ub (122, 250, 137);
        else if(col == "darkGreen") glColor3ub (0, 146, 143);
        else if(col == "white") glColor3ub (255, 255, 255);
        else if(col == "black") glColor3ub (0, 0, 0);
        else if(col == "window") glColor3ub (255, 255, 255);
        else if(col == "mediumGreen") glColor3ub (10, 176, 128);
        else if(col == "teal") glColor3ub (21, 177, 189);
        else if(col == "trainBody") glColor3ub (252, 195, 109);
        else if(col == "trainBodyDark") glColor3ub (227, 177, 102);
        else if(col == "trainBodyStripe") glColor3ub (255, 222, 173);
        else if(col == "darkerGreen") glColor3ub (10, 176, 128);
        else if(col == "blue") glColor3ub (0, 122, 171);
        else if(col == "sun") glColor3ub (246, 247, 193);
        else if(col == "grass") glColor3ub (97, 201, 85);
        else if(col == "gray") glColor3ub (84, 84, 84);
        else if(col == "ash") glColor3ub (156, 156, 156);
        else if(col == "lightRed") glColor3ub (241, 106, 81);
        else if(col == "darkRed") glColor3ub (193, 45, 17);
        else if(col == "jeepWindow") glColor3ub (52, 195, 227);
        else if(col == "fountainLight") glColor3ub (145, 178, 235);
        else if(col == "fountainMid") glColor3ub (92, 145, 214);
        else if(col == "fountainDark") glColor3ub (46, 78, 143);


        else{
            cout<<"INVALID COLOR CODE: "<<col<<"\n";
            glColor3ub (0,0,0);
        }

    }
    //night
    else{
        if(col == "background") glColor3ub (27, 115, 135);
        else if(col == "darkBlue") glColor3ub (30, 48, 88);
        else if(col == "navyBlue") glColor3ub (30, 48, 88);
        else if(col == "lightGreen") glColor3ub (51, 148, 129);
        else if(col == "darkGreen") glColor3ub (25, 81, 104);
        else if(col == "white") glColor3ub (83, 170, 179);
        else if(col == "black") glColor3ub (37, 0, 36);
        else if(col == "window") glColor3ub (247, 242, 171);
        else if(col == "mediumGreen") glColor3ub (83, 70, 53);
        else if(col == "teal") glColor3ub (28, 102, 127);
        else if(col == "trainBody") glColor3ub (201, 93, 64);
        else if(col == "trainBodyDark") glColor3ub (201, 93, 64);
        else if(col == "trainBodyStripe") glColor3ub (221, 106, 85);
        else if(col == "darkerGreen") glColor3ub (27, 97, 105);
        else if(col == "blue") glColor3ub (27, 71, 110);
        else if(col == "sun") glColor3ub (229, 229, 229);
        else if(col == "grass") glColor3ub (47, 118, 102);
        else if(col == "gray") glColor3ub (52, 56, 83);
        else if(col == "ash") glColor3ub (65, 106, 124);
        else if(col == "lightRed") glColor3ub (241, 106, 81);
        else if(col == "darkRed") glColor3ub (193, 45, 17);
        else if(col == "jeepWindow") glColor3ub (52, 195, 227);
        else if(col == "fountainLight") glColor3ub (59, 118, 150);
        else if(col == "fountainMid") glColor3ub (50, 93, 136);
        else if(col == "fountainDark") glColor3ub (42, 51, 98);
        else{
            cout<<"INVALID COLOR CODE: "<<col<<"\n";
            glColor3ub (0,0,0);
        }
    }
}

//animate train
float trainSpeed = 0;
float trainPosition = 1000;

//animate clouds
float cloud1Position = 250;
float cloud2Position = 210;
float cloud3Position = 1100;

float cloud1Speed = 1.0;
float cloud2Speed = 2.5;
float cloud3Speed = 2.0;


//animate jeep
float jeepSpeed = 1.0;
float jeepPosition = 0;


//animate fountain
float fountain1Position = 0;
float fountain1Speed = 2.5;

float fountain2Position = 0;
float fountain2Speed = 3;

void drawBackground(){
    setColor("background");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(1280,0);
    glVertex2i(1280,620);
    glVertex2i(0,620);
    glEnd();
}

void drawStars(){

    glPushMatrix();
    glTranslatef(50,520,0);
    setColor("sun");
    //glColor3ub (1, 0, 0);
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(10,515,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(100,540,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(150,560,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,500,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(280,490,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,490,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(400,510,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(500,530,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(600,525,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(650,510,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(700,500,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(760,540,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(800,520,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(850,540,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(760+100,530,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(800+100,505,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(850+100,510,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(760+200,530,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(800+200,505,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(850+200,550,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(760+300,560,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(800+300,545,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(850+300,510,0);
    setColor("sun");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(5,0);
    glVertex2i(5,5);
    glVertex2i(0,5);
    glEnd();
    glPopMatrix();




}


void drawTrain(){

    glPushMatrix();
    glTranslatef(trainPosition,260, 0);
    glScalef(0.7,0.7,1);
    //main body
    setColor("trainBody");
    glBegin(GL_QUADS);
    glVertex2i(0,170);
    glVertex2i(440,170);
    glVertex2i(440,210);
    glVertex2i(0,210);
    glEnd();

    //upperLine main body
    setColor("trainBody");
    glBegin(GL_QUADS);
    glVertex2i(5,210);
    glVertex2i(435,210);
    glVertex2i(435,215);
    glVertex2i(5,215);
    glEnd();

    setColor("trainBody");
    glBegin(GL_QUADS);
    glVertex2i(5,210);
    glVertex2i(35,210);
    glVertex2i(35,215);
    glVertex2i(5,215);
    glEnd();



    //face
    setColor("trainBodyDark");
    glBegin(GL_QUADS);
    glVertex2i(0,170);
    glVertex2i(40,170);
    glVertex2i(40,205);
    glVertex2i(0,205);
    glEnd();

    //face stripe
    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(0,175);
    glVertex2i(40,175);
    glVertex2i(40,180);
    glVertex2i(0,180);
    glEnd();


    //lights
    if (dayNight) setColor("navyBlue");
    else setColor("window");
    glBegin(GL_QUADS);
    glVertex2i(5,175);
    glVertex2i(10,175);
    glVertex2i(10,185);
    glVertex2i(5,185);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2i(30,175);
    glVertex2i(35,175);
    glVertex2i(35,185);
    glVertex2i(30,185);
    glEnd();

    //frontWindow
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(5,190);
    glVertex2i(35,190);
    glVertex2i(35,205);
    glVertex2i(5,205);
    glEnd();

    //long stripes
    //up
    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(40,205);
    glVertex2i(440,205);
    glVertex2i(440,210);
    glVertex2i(40,210);
    glEnd();


    //down
    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(40,175);
    glVertex2i(65,175);
    glVertex2i(65,180);
    glVertex2i(40,180);
    glEnd();

    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(100,175);
    glVertex2i(200,175);
    glVertex2i(200,180);
    glVertex2i(100,180);
    glEnd();

    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(235,175);
    glVertex2i(335,175);
    glVertex2i(335,180);
    glVertex2i(235,180);
    glEnd();

    setColor("trainBodyStripe");
    glBegin(GL_QUADS);
    glVertex2i(370,175);
    glVertex2i(440,175);
    glVertex2i(440,180);
    glVertex2i(370,180);
    glEnd();



    //train windows and door component(1)
    //window
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(55,185);
    glVertex2i(65,185);
    glVertex2i(65,200);
    glVertex2i(55,200);
    glEnd();

    //doors
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(70,170);
    glVertex2i(80,170);
    glVertex2i(80,200);
    glVertex2i(70,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(85,170);
    glVertex2i(95,170);
    glVertex2i(95,200);
    glVertex2i(85,200);
    glEnd();
    //end doors

    //more windows
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(100,185);
    glVertex2i(110,185);
    glVertex2i(110,200);
    glVertex2i(100,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(115,185);
    glVertex2i(125,185);
    glVertex2i(125,200);
    glVertex2i(115,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(130,185);
    glVertex2i(140,185);
    glVertex2i(140,200);
    glVertex2i(130,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(145,185);
    glVertex2i(155,185);
    glVertex2i(155,200);
    glVertex2i(145,200);
    glEnd();
    //end of window + doors component(1)

    //train windows and door component(2)
    //window
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(185,185);
    glVertex2i(195,185);
    glVertex2i(195,200);
    glVertex2i(185,200);
    glEnd();

    //doors
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(200,170);
    glVertex2i(210,170);
    glVertex2i(210,200);
    glVertex2i(200,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(215,170);
    glVertex2i(225,170);
    glVertex2i(225,200);
    glVertex2i(215,200);
    glEnd();
    //end doors

    //more windows
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(230,185);
    glVertex2i(240,185);
    glVertex2i(240,200);
    glVertex2i(230,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(245,185);
    glVertex2i(255,185);
    glVertex2i(255,200);
    glVertex2i(245,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(260,185);
    glVertex2i(270,185);
    glVertex2i(270,200);
    glVertex2i(260,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(275,185);
    glVertex2i(285,185);
    glVertex2i(285,200);
    glVertex2i(275,200);
    glEnd();
    //end of window + doors component(2)

    //train windows and door component(3)
    //window
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(325,185);
    glVertex2i(335,185);
    glVertex2i(335,200);
    glVertex2i(325,200);
    glEnd();

    //doors
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(340,170);
    glVertex2i(350,170);
    glVertex2i(350,200);
    glVertex2i(340,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(355,170);
    glVertex2i(365,170);
    glVertex2i(365,200);
    glVertex2i(355,200);
    glEnd();
    //end doors

    //more windows
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(370,185);
    glVertex2i(380,185);
    glVertex2i(380,200);
    glVertex2i(370,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(385,185);
    glVertex2i(395,185);
    glVertex2i(395,200);
    glVertex2i(385,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(400,185);
    glVertex2i(410,185);
    glVertex2i(410,200);
    glVertex2i(400,200);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(415,185);
    glVertex2i(425,185);
    glVertex2i(425,200);
    glVertex2i(415,200);
    glEnd();
    //end of window + doors component(3)


    glPopMatrix();
}


void drawBridge(){

    glPushMatrix();
    glTranslatef(0,300,0);
    glScalef(0.7,0.7,1);

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(0,95);
    glVertex2i(2500,95);
    glVertex2i(2500,120);
    glVertex2i(0,120);
    glEnd();


    setColor("darkerGreen");
    glBegin(GL_QUADS);
    glVertex2i(0,80);
    glVertex2i(2500,80);
    glVertex2i(2500,95);
    glVertex2i(0,95);
    glEnd();

    setColor("darkGreen");
    glBegin(GL_QUADS);
    glVertex2i(0,60);
    glVertex2i(2500,60);
    glVertex2i(2500,80);
    glVertex2i(0,80);
    glEnd();



    //pillars
    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(285,0);
    glVertex2i(320,0);
    glVertex2i(320,80);
    glVertex2i(285,80);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(285+245,0);
    glVertex2i(320+245,0);
    glVertex2i(320+245,80);
    glVertex2i(285+245,80);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(285+490,0);
    glVertex2i(320+490,0);
    glVertex2i(320+490,80);
    glVertex2i(285+490,80);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(285+735,0);
    glVertex2i(320+735,0);
    glVertex2i(320+735,80);
    glVertex2i(285+735,80);
    glEnd();

    setColor("navyBlue");
    glBegin(GL_QUADS);
    glVertex2i(285+1180,0);
    glVertex2i(320+1180,0);
    glVertex2i(320+1180,80);
    glVertex2i(285+1180,80);
    glEnd();

    glPopMatrix();

}


void drawTree1(string col){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glPushMatrix();
    glTranslatef(200,550,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 150*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,650,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 120*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

void drawTree2(string col){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glPushMatrix();
    glTranslatef(550,470,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 150*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(550,570,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 120*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

void drawTree3(string col){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glPushMatrix();
    glTranslatef(900,390,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 150*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(900,490,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 120*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

void drawTree4(string col){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glPushMatrix();
    glTranslatef(5900,400,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 150*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(5900,500,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 120*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();
}

void drawTree5(string col){

    glPushMatrix();
    glScalef(0.2,0.2,1);
    glPushMatrix();
    glTranslatef(6240,470,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 150*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(6240,570,0);
    setColor(col);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 120*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
    glPopMatrix();
}


void drawBranches(){
    //1
    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37,30);
    glVertex2i(39,30);
    glVertex2i(39,120);
    glVertex2i(37,120);
    glEnd();

    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37,65);
    glVertex2i(39,65);
    glVertex2i(53,95);
    glVertex2i(50,95);
    glEnd();


    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(38,75);
    glVertex2i(36,75);
    glVertex2i(21,105);
    glVertex2i(23,105);
    glEnd();

    //2
    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+70,30-15);
    glVertex2i(39+70,30-15);
    glVertex2i(39+70,120-15);
    glVertex2i(37+70,120-15);
    glEnd();

    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+70,65-15);
    glVertex2i(39+70,65-15);
    glVertex2i(53+70,95-15);
    glVertex2i(50+70,95-15);
    glEnd();


    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(38+70,75-15);
    glVertex2i(36+70,75-15);
    glVertex2i(21+70,105-15);
    glVertex2i(23+70,105-15);
    glEnd();

    //3
    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+140,30-20);
    glVertex2i(39+140,30-20);
    glVertex2i(39+140,120-20);
    glVertex2i(37+140,120-20);
    glEnd();

    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+140,65-20);
    glVertex2i(39+140,65-20);
    glVertex2i(53+140,95-20);
    glVertex2i(50+140,95-20);
    glEnd();


    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(38+140,75-20);
    glVertex2i(36+140,75-20);
    glVertex2i(21+140,105-20);
    glVertex2i(23+140,105-20);
    glEnd();

    //4
    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+140+1000,30-20);
    glVertex2i(39+140+1000,30-20);
    glVertex2i(39+140+1000,120-20);
    glVertex2i(37+140+1000,120-20);
    glEnd();

    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+140+1000,65-20);
    glVertex2i(39+140+1000,65-20);
    glVertex2i(53+140+1000,95-20);
    glVertex2i(50+140+1000,95-20);
    glEnd();


    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(38+140+1000,75-20);
    glVertex2i(36+140+1000,75-20);
    glVertex2i(21+140+1000,105-20);
    glVertex2i(23+140+1000,105-20);
    glEnd();

    //5
    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+210+1000,30-20);
    glVertex2i(39+210+1000,30-20);
    glVertex2i(39+210+1000,120-20);
    glVertex2i(37+210+1000,120-20);
    glEnd();

    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(37+210+1000,65-20);
    glVertex2i(39+210+1000,65-20);
    glVertex2i(53+210+1000,95-20);
    glVertex2i(50+210+1000,95-20);
    glEnd();


    setColor("white");
    glBegin(GL_QUADS);
    glVertex2i(38+210+1000,75-20);
    glVertex2i(36+210+1000,75-20);
    glVertex2i(21+210+1000,105-20);
    glVertex2i(23+210+1000,105-20);
    glEnd();




}


void drawClouds1(){
    glPushMatrix();
    glTranslatef(cloud1Position,-90,0);
    glScalef(1,1,1);

    glPushMatrix();
    glTranslatef(200,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 30*sin(i);
            float y = 40*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    setColor("background");
    glBegin(GL_QUADS);
    glVertex2i(170,570-70);
    glVertex2i(340,570-70);
    glVertex2i(340,615-70+20);
    glVertex2i(170,615-70+20);

    glEnd();
    glPopMatrix();

}

void drawClouds2(){
    glPushMatrix();
    glTranslatef(cloud2Position,250,0);
    glScalef(0.5,0.4,1);

    glPushMatrix();
    glTranslatef(200,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 30*sin(i);
            float y = 40*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    setColor("background");
    glBegin(GL_QUADS);
    glVertex2i(170,570-70);
    glVertex2i(340,570-70);
    glVertex2i(340,615-70+20);
    glVertex2i(170,615-70+20);

    glEnd();
    glPopMatrix();

}

void drawClouds3(){
    glPushMatrix();
    glTranslatef(cloud3Position,250,0);
    glScalef(0.5,0.4,1);

    glPushMatrix();
    glTranslatef(200,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 30*sin(i);
            float y = 40*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(250,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300,550,0);
    setColor("white");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 35*sin(i);
            float y = 45*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    setColor("background");
    glBegin(GL_QUADS);
    glVertex2i(170,570-70);
    glVertex2i(340,570-70);
    glVertex2i(340,615-70+20);
    glVertex2i(170,615-70+20);

    glEnd();
    glPopMatrix();

}


void drawMountain()
{

    setColor("darkerGreen");
    glBegin(GL_TRIANGLES);
    glVertex2i(300,300);
    glVertex2i(600,300);
    glVertex2i(450,500);
    glEnd();



    setColor("darkBlue");
    glBegin(GL_TRIANGLES);
    glVertex2i(600,300);
    glVertex2i(900,300);
    glVertex2i(750,550);
    glEnd();

    setColor("darkGreen");
    glBegin(GL_TRIANGLES);
    glVertex2i(400,300);
    glVertex2i(800,300);
    glVertex2i(600,600);
    glEnd();


}

void drawRightMountain(){

    glPushMatrix();
    glTranslatef(+650,0,0);
    setColor("navyBlue");
   //glColor3ub (0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex2i(400,300);
    glVertex2i(800,300);
    glVertex2i(600,600);
    glEnd();
    glPopMatrix();

}
void drawFountainMountain(){
     glPushMatrix();
    glTranslatef(-450,0,0);
    setColor("darkGreen");
    glBegin(GL_TRIANGLES);
    glVertex2i(300,300);
    glVertex2i(600,300);
    glVertex2i(450,500);
    glEnd();

    glPopMatrix();
    glPushMatrix();
    glTranslatef(-400,0,0);
    setColor("darkGreen");
    //glColor3ub (23, 201, 205);
    glBegin(GL_TRIANGLES);
    glVertex2i(300,300);
    glVertex2i(600,300);
    glVertex2i(450,500);
    glEnd();

    glPopMatrix();


}


void drawCave(){

    //background + circle half
    glPushMatrix();
    glTranslatef(610,270,0);

    setColor("gray");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 80*sin(i);
            float y = 80*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    setColor("black");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 75*sin(i);
            float y = 75*cos(i);
            glVertex2f(x,y);
        }
    glEnd();

    glPopMatrix();




    setColor("grass");
    glBegin(GL_QUADS);
    glVertex2i(0,0);
    glVertex2i(1280,0);
    glVertex2i(1280,300);
    glVertex2i(0,300);
    glEnd();
    //background + circle half end

    //road
    setColor("ash");
    glBegin(GL_QUADS);
    glVertex2i(540,300);
    glVertex2i(680,300);
    glVertex2i(670,0);
    glVertex2i(450,0);
    glEnd();

    setColor("gray");
    glBegin(GL_QUADS);
    glVertex2i(545,300);
    glVertex2i(675,300);
    glVertex2i(665,0);
    glVertex2i(455,0);
    glEnd();

    //lanes

    glPushMatrix();
    glTranslatef(480,0,0);

    setColor("ash");
    glBegin(GL_QUADS);
    glVertex2i(110,250);
    glVertex2i(120,250);
    glVertex2i(115,230);
    glVertex2i(105,230);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(465,-80,0);

    setColor("ash");
    glBegin(GL_QUADS);
    glVertex2i(110,250);
    glVertex2i(120,250);
    glVertex2i(115,230);
    glVertex2i(105,230);
    glEnd();

    glPopMatrix();

    glPushMatrix();
    glTranslatef(450,-160,0);

    setColor("ash");
    glBegin(GL_QUADS);
    glVertex2i(110,250);
    glVertex2i(120,250);
    glVertex2i(115,230);
    glVertex2i(105,230);
    glEnd();

    glPopMatrix();

}


void drawJeep()
{

    glPushMatrix();
    glTranslatef(-10,jeepPosition,0);


    setColor("ash");
    glBegin(GL_QUADS);
    glVertex2i(575,300);
    glVertex2i(645,300);
    glVertex2i(645,305);
    glVertex2i(575,305);
    glEnd();
    setColor("lightRed");
     //glColor3ub (23, 201, 205);
    glBegin(GL_QUADS);
    glVertex2i(580,305);
    glVertex2i(640,305);
    glVertex2i(640,310);
    glVertex2i(580,310);
    glEnd();
    //lights
    if (dayNight) setColor("navyBlue");
    else setColor("window");
    glBegin(GL_QUADS);
    glVertex2i(590,305);
    glVertex2i(595,305);
    glVertex2i(595,310);
    glVertex2i(590,310);
    glEnd();
    //lights
    if (dayNight) setColor("navyBlue");
    else setColor("window");
    glBegin(GL_QUADS);
    glVertex2i(625,305);
    glVertex2i(630,305);
    glVertex2i(630,310);
    glVertex2i(625,310);
    glEnd();
    setColor("darkRed");
    //glColor3ub (23, 201, 205);
    glBegin(GL_QUADS);
    glVertex2i(580,310);
    glVertex2i(640,310);
    glVertex2i(630,315);
    glVertex2i(590,315);
    glEnd();
    setColor("lightRed");
    //glColor3ub (23, 201, 205);
    glBegin(GL_QUADS);
    glVertex2i(590,315);
    glVertex2i(630,315);
    glVertex2i(630,330);
    glVertex2i(590,330);
    glEnd();
    setColor("jeepWindow");
    glBegin(GL_QUADS);
    glVertex2i(592,317);
    glVertex2i(628,317);
    glVertex2i(628,328);
    glVertex2i(592,328);
    glEnd();
    setColor("black");
    glBegin(GL_QUADS);
    glVertex2i(580,290);
    glVertex2i(590,290);
    glVertex2i(590,300);
    glVertex2i(580,300);
    glEnd();
    setColor("black");
    glBegin(GL_QUADS);
    glVertex2i(630,290);
    glVertex2i(640,290);
    glVertex2i(640,300);
    glVertex2i(630,300);
    glEnd();


    glPopMatrix();
}


void drawSunMoon(){
    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(200,550,0);
    setColor("sun");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 30*sin(i);
            float y = 30*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();
}

void drawBackMountains(){

    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(200,280,0);
    setColor("teal");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 140*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(400,270,0);
    setColor("teal");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 150*sin(i);
            float y = 170*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glScalef(1,1,1);
    glTranslatef(1000,270,0);
    setColor("teal");
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 180*sin(i);
            float y = 160*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();



}

void drawTreeBunch(){


    glPushMatrix();
    glTranslatef(320,250,0);
    glScalef(.7,.7,1);
    drawTree1("lightGreen");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,150,0);
    glScalef(.7,.7,1);
    drawTree1("lightGreen");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,200,0);
    glScalef(.7,.7,1);
    drawTree1("blue");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(700,200,0);
    glScalef(.8,.8,1);
    drawTree1("teal");
    drawTree2("blue");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("teal");
    drawBranches();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(50,50,0);
    glScalef(.7,.7,1);
    drawTree1("teal");
    drawTree2("darkGreen");
    drawTree3("blue");
    drawTree4("darkGreen");
    drawTree5("blue");
    drawBranches();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(20,10,0);
    glScalef(.7,.7,1);
    drawTree1("darkerGreen");
    drawTree2("darkGreen");
    drawTree3("blue");
    drawTree4("teal");
    drawTree5("blue");
    drawBranches();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(80,100,0);
    glScalef(.7,.7,1);
    drawTree1("blue");
    drawTree2("darkGreen");
    drawTree3("blue");
    drawTree4("teal");
    drawTree5("darkerGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(70,10,0);
    glScalef(.7,.7,1);
    drawTree1("darkerGreen");
    drawTree2("lightGreen");
    drawTree3("blue");
    drawTree4("teal");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(220,50,0);
    glScalef(.7,.7,1);
    drawTree1("teal");
    drawTree2("darkGreen");
    drawTree3("blue");
    drawTree4("darkGreen");
    drawTree5("blue");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(210,100,0);
    glScalef(.7,.7,1);
    drawTree1("blue");
    drawTree2("darkGreen");
    drawTree3("blue");
    drawTree4("teal");
    drawTree5("darkerGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(200,10,0);
    glScalef(.7,.7,1);
    drawTree1("darkerGreen");
    drawTree2("lightGreen");
    drawTree3("blue");
    drawTree4("teal");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();



    glPushMatrix();
    glTranslatef(650,120,0);
    glScalef(1,1,1);
    drawTree1("darkGreen");
    drawTree2("lightGreen");
    drawTree3("teal");
    drawTree4("teal");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(850,110,0);
    glScalef(1,1,1);
    drawTree1("darkerGreen");
    drawTree2("lightGreen");
    drawTree3("teal");
    drawTree4("teal");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(750,170,0);
    glScalef(1,1,1);
    drawTree1("teal");
    drawTree2("lightGreen");
    drawTree3("teal");
    drawTree4("teal");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(650,60,0);
    glScalef(1,1,1);
    drawTree1("blue");
    drawTree2("darkGreen");
    drawTree3("lightGreen");
    drawTree4("blue");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(650,10,0);
    glScalef(1,1,1);
    drawTree1("blue");
    drawTree2("darkGreen");
    drawTree3("lightGreen");
    drawTree4("blue");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(350,170,0);
    glScalef(.7,.7,1);
    drawTree1("lightGreen");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkGreen");
    drawTree5("darkerGreen");
    drawBranches();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(330,110,0);
    glScalef(.7,.7,1);
    drawTree1("teal");
    drawTree2("teal");
    drawTree3("darkGreen");
    drawTree4("lightGreen");
    drawTree5("darkerGreen");
    drawBranches();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(330,50,0);
    glScalef(.7,.7,1);
    drawTree1("lightGreen");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(320,0,0);
    glScalef(.7,.7,1);
    drawTree1("lightGreen");
    drawTree2("lightGreen");
    drawTree3("darkGreen");
    drawTree4("darkerGreen");
    drawTree5("lightGreen");
    drawBranches();
    glPopMatrix();

}


void drawWaterFall()
{
    setColor("fountainLight");
    //glColor3ub (23, 201, 205);
    glBegin(GL_QUADS);
    glVertex2i(20,475);
    glVertex2i(35,475);
    glVertex2i(35,445);
    glVertex2i(20,445);
    glEnd();
    setColor("fountainLight");
    glBegin(GL_QUADS);
    glVertex2i(15,470);
    glVertex2i(50,470);
    glVertex2i(50,445);
    glVertex2i(15,445);
    glEnd();
    setColor("fountainLight");
    glBegin(GL_QUADS);
    glVertex2i(10,460);
    glVertex2i(55,460);
    glVertex2i(55,440);
    glVertex2i(10,440);
    glEnd();
    setColor("fountainLight");
    glBegin(GL_QUADS);
    glVertex2i(5,450);
    glVertex2i(60,450);
    glVertex2i(60,300);
    glVertex2i(5,300);
    glEnd();

    //1
    glPushMatrix();
    glTranslatef(0,fountain1Position,0);
    setColor("fountainMid");

    // glColor3ub (23, 201, 205);
    glBegin(GL_QUADS);
    glVertex2i(20,450);
    glVertex2i(25,450);
    glVertex2i(25,400);
    glVertex2i(20,400);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(25,440);
    glVertex2i(30,440);
    glVertex2i(30,410);
    glVertex2i(25,410);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(15,430);
    glVertex2i(20,430);
    glVertex2i(20,420);
    glVertex2i(15,420);
    glEnd();
    glPopMatrix();
    //1

    //2
    glPushMatrix();
    glTranslatef(0,fountain1Position,0);
    glPushMatrix();
    glTranslatef(+20,-10,0);
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(20,450);
    glVertex2i(25,450);
    glVertex2i(25,400);
    glVertex2i(20,400);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(25,440);
    glVertex2i(30,440);
    glVertex2i(30,410);
    glVertex2i(25,410);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(15,430);
    glVertex2i(20,430);
    glVertex2i(20,420);
    glVertex2i(15,420);
    glEnd();
     glPopMatrix();

     glPopMatrix();
    //2

    //3
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
    glPopMatrix();
    //3


    //4
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);

    glPushMatrix();
    glTranslatef(+20,-10,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();
     glPopMatrix();
     //4


    //5
    glPushMatrix();
    glTranslatef(0,fountain1Position,0);

    glPushMatrix();
    glTranslatef(+10,-30,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();
    glPopMatrix();
    //5

    //6
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);

     glPushMatrix();
    glTranslatef(-10,-40,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();

     glPopMatrix();
     //6


    //7
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);

     glPushMatrix();
    glTranslatef(+20,-80,0);
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(20,450);
    glVertex2i(25,450);
    glVertex2i(25,400);
    glVertex2i(20,400);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(25,440);
    glVertex2i(30,440);
    glVertex2i(30,410);
    glVertex2i(25,410);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(15,430);
    glVertex2i(20,430);
    glVertex2i(20,420);
    glVertex2i(15,420);
    glEnd();
     glPopMatrix();
    glPopMatrix();
    //7

    //8
    glPushMatrix();
    glTranslatef(0,fountain1Position,0);

     glPushMatrix();
    glTranslatef(-10,-100,0);
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(20,450);
    glVertex2i(25,450);
    glVertex2i(25,400);
    glVertex2i(20,400);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(25,440);
    glVertex2i(30,440);
    glVertex2i(30,410);
    glVertex2i(25,410);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(15,430);
    glVertex2i(20,430);
    glVertex2i(20,420);
    glVertex2i(15,420);
    glEnd();
     glPopMatrix();
     glPopMatrix();
     //8

    //9
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);
      glPushMatrix();
    glTranslatef(+20,-100,0);
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(20,450);
    glVertex2i(25,450);
    glVertex2i(25,400);
    glVertex2i(20,400);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(25,440);
    glVertex2i(30,440);
    glVertex2i(30,410);
    glVertex2i(25,410);
    glEnd();
    setColor("fountainMid");
    glBegin(GL_QUADS);
    glVertex2i(15,430);
    glVertex2i(20,430);
    glVertex2i(20,420);
    glVertex2i(15,420);
    glEnd();
     glPopMatrix();
     glPopMatrix();
     //9


    //10
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);

     glPushMatrix();
    glTranslatef(+5,-70,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();
     glPopMatrix();
     //10

    //11
    glPushMatrix();
    glTranslatef(0,fountain2Position,0);

     glPushMatrix();
    glTranslatef(+5,+60,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();
     glPopMatrix();
     //11

    //12
        glPushMatrix();
    glTranslatef(0,fountain2Position,0);
     glPushMatrix();
    glTranslatef(-15,+30,0);
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(25,415);
    glVertex2i(30,415);
    glVertex2i(30,385);
    glVertex2i(25,385);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(30,410);
    glVertex2i(35,410);
    glVertex2i(35,380);
    glVertex2i(30,380);
    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(20,405);
    glVertex2i(25,405);
    glVertex2i(25,360);
    glVertex2i(20,360);
    glEnd();
     glPopMatrix();
    glPopMatrix();
    //12



}

void drawPond(){

    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(0,300);
    glVertex2i(200,300);
    glVertex2i(200,220);
    glVertex2i(0,220);

    glEnd();
    setColor("fountainDark");
    glBegin(GL_QUADS);
    glVertex2i(180,300);
    glVertex2i(200,300);
    glVertex2i(213,260);
    glVertex2i(180,260);


    glEnd();


    glPushMatrix();
    glTranslatef(100,240,0);
    setColor("fountainDark");
    // glColor3ub (23, 201, 205);
    glBegin(GL_TRIANGLE_FAN);
        for(float i=0;i<=2*3.14;i+=0.001)
        {
            float x = 120*sin(i);
            float y = 60*cos(i);
            glVertex2f(x,y);
        }
    glEnd();
    glPopMatrix();

}



void update(int val){
    //animate train
    if(trainPosition < -1050) trainPosition = 1000;
    trainPosition -= trainSpeed;

    //animate jeep
    if(jeepPosition < - 350) jeepPosition = 0;
    jeepPosition -= jeepSpeed;

    //animate clouds
    if(cloud1Position > 1280) cloud1Position = -500;
    cloud1Position += cloud1Speed;

    if(cloud2Position < -300) cloud2Position = 1300;
    cloud2Position -= cloud2Speed;

    if(cloud3Position < -300) cloud3Position = 1300;
    cloud3Position -= cloud3Speed;
    glutPostRedisplay();
    glutTimerFunc(10, update,0);


    if(fountain){
    //animate fountain
    if(fountain1Position <= -110)
        fountain1Speed = -2.5;

    else if (fountain1Position >= 0)
        fountain1Speed = 2.5;
    fountain1Position -= fountain1Speed;


    if(fountain2Position <= -110)
        fountain2Speed = -3;

    else if (fountain2Position >= 0)
        fountain2Speed = 3;
    fountain2Position -= fountain2Speed;

    }

}

void anyText(string text, float x, float y, int R, int G, int B){
    glColor3ub(R, G, B);
    glRasterPos2f(x, y);
    for (i = 0; i < text.length(); i++) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, text[i]);
    }}

void keymappings(bool keymap){
    if(keymap==true)
    anyText("n = daynight,f = fountain, w = train Speed, s = train Stop, j = jeep Speed, y = jeep Stop,k = keymap show ,e = exit", 10, 10, 255, 255, 255);
}



void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    drawBackground();
    drawSunMoon();
    drawBackMountains();
    if(!dayNight) {drawStars(); drawTrain(); drawJeep();}
    drawClouds1();
    drawClouds2();
    drawClouds3();


    drawBridge();
    if(dayNight) drawTrain();
    drawMountain();
    drawFountainMountain();

    drawWaterFall();
    drawRightMountain();
    drawCave();
    if(dayNight) drawJeep();
    if(!dayNight){drawJeep();}
    drawPond();
    drawTreeBunch();
    keymappings(keymap);


    glFlush ();
}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1280.0, 0.0, 620.0);
}

void handleKeypress(unsigned char key, int x, int y) {

    switch (key) {
        case 'w':
            trainSpeed += 1;
            break;

        case 'n':
            dayNight = !dayNight;
            break;

        case 's':
            trainSpeed = 0;
            break;

        case 'x':
            trainSpeed = 5;
            break;

        case 'j':
            jeepSpeed += 1;
            break;

        case 'y':
            jeepSpeed = 0;
            break;
        case 'f':
            fountain = !fountain;
            break;
        case 'k':
          keymap = !keymap;
          break;
        case 'e':
           exit(0);
           break;

    glutPostRedisplay();

    }

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1280, 620);
    glutInitWindowPosition (120, 60);
    glutCreateWindow ("Mountain View");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(0, update, 0);
    glutMainLoop();
}

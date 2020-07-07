#include<windows.h>
#include<gl/glut.h>

void init(void);
void tampil(void);
void mouse(int button, int state, int x, int y);
void ukuran(int, int);
void mouseMotion(int x, int y);
void keyboard(unsigned char,int,int);

float xrot=0.0f;
float yrot=0.0f;
float xdiff=0.0f;
float ydiff=0.0f;
bool mouseDown=false;
int is_depth;

int main(int argc, char **argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Dony Tri Prasetyo - 672018119");
	init();
	glutDisplayFunc(tampil);
	glutReshapeFunc(ukuran);

	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutKeyboardFunc(keyboard);

	glutIdleFunc(tampil);
	glutMainLoop();
	return 0;
}

void init(void){
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    //glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth=1;
    glMatrixMode(GL_MODELVIEW);
}


void pintudepan()
{
    //tembok pintu depan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.0, -20.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.0, 5.0, 25.0); //kiri atas
    glVertex3f(10.0, 5.0, 10.0); //kanan atas
    glVertex3f(10.0, -20.0, 10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(10.1, -19.5, 20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.1, 4.5, 20.0); //kiri atas
    glVertex3f(10.1, 4.5, 10.5); //kanan atas
    glVertex3f(10.1, -19.5, 10.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.2, 2.0, 19.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.2, 4.0, 19.5); //kiri atas
    glVertex3f(10.2, 4.0, 11.0); //kanan atas
    glVertex3f(10.2, 2.0, 11.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.2, -7.0, 12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.2, -9.0, 12.0); //kiri atas
    glVertex3f(10.2, -9.0, 11.0); //kanan atas
    glVertex3f(10.2, -7.0, 11.0); //kanan bawah
    glEnd();

}

void depanputih()
{
    //tembok depan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-15.0, -20.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-15.0, 9.0, 25.0); //kiri atas
    glVertex3f(10.0, 9.0, 25.0); //kanan atas
    glVertex3f(10.0, -20.0, 25.0); //kanan bawah
    glEnd();

    // jendela depan 1
    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, 3.0, 25.1); //kiri atas
    glVertex3f(-12.0, 3.0, 25.1); //kanan atas
    glVertex3f(-12.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-11.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-11.0, -2.0, 25.1); //kiri atas
    glVertex3f(-10.5, -2.0, 25.1); //kanan atas
    glVertex3f(-10.5, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-9.5, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-9.5, -2.0, 25.1); //kiri atas
    glVertex3f(-9.0, -2.0, 25.1); //kanan atas
    glVertex3f(-9.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-8.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-8.0, 3.0, 25.1); //kiri atas
    glVertex3f(-7.0, 3.0, 25.1); //kanan atas
    glVertex3f(-7.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-6.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -3.0, 25.1); //kiri atas
    glVertex3f(-5.5, -3.0, 25.1); //kanan atas
    glVertex3f(-5.5, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-4.5, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-4.5, -3.0, 25.1); //kiri atas
    glVertex3f(-4.0, -3.0, 25.1); //kanan atas
    glVertex3f(-4.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(7.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(7.0, 3.0, 25.1); //kiri atas
    glVertex3f(8.0, 3.0, 25.1); //kanan atas
    glVertex3f(8.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(5.5, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(5.5, -3.0, 25.1); //kiri atas
    glVertex3f(6.0, -3.0, 25.1); //kanan atas
    glVertex3f(6.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(4.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(4.0, -3.0, 25.1); //kiri atas
    glVertex3f(4.5, -3.0, 25.1); //kanan atas
    glVertex3f(4.5, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(2.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(2.0, 3.0, 25.1); //kiri atas
    glVertex3f(3.0, 3.0, 25.1); //kanan atas
    glVertex3f(3.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(0.5, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.5, -3.0, 25.1); //kiri atas
    glVertex3f(1.0, -3.0, 25.1); //kanan atas
    glVertex3f(1.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-1.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-1.0, -3.0, 25.1); //kiri atas
    glVertex3f(-0.5, -3.0, 25.1); //kanan atas
    glVertex3f(-0.5, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-3.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-3.0, 3.0, 25.1); //kiri atas
    glVertex3f(-2.0, 3.0, 25.1); //kanan atas
    glVertex3f(-2.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, 2.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, 3.0, 25.1); //kiri atas
    glVertex3f(8.0, 3.0, 25.1); //kanan atas
    glVertex3f(8.0, 2.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -3.5, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -2.0, 25.1); //kiri atas
    glVertex3f(8.0, -2.0, 25.1); //kanan atas
    glVertex3f(8.0, -3.5, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -7.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -6.5, 25.1); //kiri atas
    glVertex3f(8.0, -6.5, 25.1); //kanan atas
    glVertex3f(8.0, -7.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -14.5, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -14.0, 25.1); //kiri atas
    glVertex3f(8.0, -14.0, 25.1); //kanan atas
    glVertex3f(8.0, -14.5, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -17.0, 25.1); //kiri atas
    glVertex3f(8.0, -17.0, 25.1); //kanan atas
    glVertex3f(8.0, -18.0, 25.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(-13.0, -18.0, 25.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -17.0, 25.1); //kiri atas
    glVertex3f(8.0, -17.0, 25.1); //kanan atas
    glVertex3f(8.0, -18.0, 25.1); //kanan bawah
    glEnd();

}

void depanhitam()
{
    //depan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(10.0, -20.0, 10.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.0, 5.0, 10.0); //kiri atas
    glVertex3f(24.0, 5.0, 10.0); //kanan atas
    glVertex3f(24.0, -20.0, 10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(24.0, -20.0, 10.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, 5.0, 10.0); //kiri atas
    glVertex3f(24.0, 5.0, 9.0); //kanan atas
    glVertex3f(24.0, -20.0, 9.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(24.0, -20.0, 9.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, 5.0, 9.0); //kiri atas
    glVertex3f(30.0, 5.0, 9.0); //kanan atas
    glVertex3f(30.0, -20.0, 9.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(30.0, -20.0, 10.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, 5.0, 10.0); //kiri atas
    glVertex3f(30.0, 5.0, 9.0); //kanan atas
    glVertex3f(30.0, -20.0, 9.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(30.0, -20.0, 10.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, 5.0, 10.0); //kiri atas
    glVertex3f(31.0, 5.0, 10.0); //kanan atas
    glVertex3f(31.0, -20.0, 10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(12.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, 2.0, 10.1); //kiri atas
    glVertex3f(13.0, 2.0, 10.1); //kanan atas
    glVertex3f(13.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(14.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(14.0, 2.0, 10.1); //kiri atas
    glVertex3f(14.5, 2.0, 10.1); //kanan atas
    glVertex3f(14.5, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(15.5, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.5, 2.0, 10.1); //kiri atas
    glVertex3f(16.0, 2.0, 10.1); //kanan atas
    glVertex3f(16.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(17.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.0, 2.0, 10.1); //kiri atas
    glVertex3f(18.0, 2.0, 10.1); //kanan atas
    glVertex3f(18.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(19.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, 2.0, 10.1); //kiri atas
    glVertex3f(19.5, 2.0, 10.1); //kanan atas
    glVertex3f(19.5, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(20.5, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.5, 2.0, 10.1); //kiri atas
    glVertex3f(21.0, 2.0, 10.1); //kanan atas
    glVertex3f(21.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(22.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(22.0, 2.0, 10.1); //kiri atas
    glVertex3f(23.0, 2.0, 10.1); //kanan atas
    glVertex3f(23.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(12.0, 1.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, 2.0, 10.1); //kiri atas
    glVertex3f(23.0, 2.0, 10.1); //kanan atas
    glVertex3f(23.0, 1.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(12.0, -3.0, 10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, -2.0, 10.1); //kiri atas
    glVertex3f(23.0, -2.0, 10.1); //kanan atas
    glVertex3f(23.0, -3.0, 10.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, -14.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, 2.0, 9.1); //kiri atas
    glVertex3f(25.0, 2.0, 9.1); //kanan atas
    glVertex3f(25.0, -14.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(26.0, -14.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(26.0, -1.0, 9.1); //kiri atas
    glVertex3f(26.5, -1.0, 9.1); //kanan atas
    glVertex3f(26.5, -14.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(27.5, -14.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(27.5, -1.0, 9.1); //kiri atas
    glVertex3f(28.0, -1.0, 9.1); //kanan atas
    glVertex3f(28.0, -14.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, -1.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, 0.0, 9.1); //kiri atas
    glVertex3f(30.0, 0.0, 9.1); //kanan atas
    glVertex3f(30.0, -1.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, 1.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, 2.0, 9.1); //kiri atas
    glVertex3f(30.0, 2.0, 9.1); //kanan atas
    glVertex3f(30.0, 1.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(29.0, -14.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, 2.0, 9.1); //kiri atas
    glVertex3f(30.0, 2.0, 9.1); //kanan atas
    glVertex3f(30.0, -14.0, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, -4.5, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, -4.0, 9.1); //kiri atas
    glVertex3f(30.0, -4.0, 9.1); //kanan atas
    glVertex3f(30.0, -4.5, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, -10.5, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, -10.0, 9.1); //kiri atas
    glVertex3f(30.0, -10.0, 9.1); //kanan atas
    glVertex3f(30.0, -10.5, 9.1); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(24.0, -14.0, 9.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(24.0, -13.0, 9.1); //kiri atas
    glVertex3f(30.0, -13.0, 9.1); //kanan atas
    glVertex3f(30.0, -14.0, 9.1); //kanan bawah
    glEnd();
}

void teras()
{
    //lantai teras
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(10.0, -20.0, 35.0); //kiri bawah
    glVertex3f(31.0, -20.0, 35.0); //kanan bawah
    glVertex3f(31.0, -20.0, 10.0); //kanan atas
    glVertex3f(10.0, -20.0, 10.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(10.0, -19.0, 35.0); //kiri bawah
    glVertex3f(31.0, -19.0, 35.0); //kanan bawah
    glVertex3f(31.0, -19.0, 10.0); //kanan atas
    glVertex3f(10.0, -19.0, 10.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(10.0, -19.0, 35.0); //kiri bawah
    glVertex3f(31.0, -19.0, 35.0); //kanan bawah
    glVertex3f(31.0, -20.0, 35.0); //kanan atas
    glVertex3f(10.0, -20.0, 35.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(31.0, -19.0, 35.0); //kiri bawah
    glVertex3f(31.0, -19.0, 10.0); //kanan bawah
    glVertex3f(31.0, -20.0, 10.0); //kanan atas
    glVertex3f(31.0, -20.0, 35.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(10.0, -19.0, 35.0); //kiri bawah
    glVertex3f(10.0, -19.0, 25.0); //kanan bawah
    glVertex3f(10.0, -20.0, 25.0); //kanan atas
    glVertex3f(10.0, -20.0, 35.0); //kiri atas
    glEnd();

    //tiang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.5, 2.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 5.0, 34.0); //kiri atas
    glVertex3f(12.0, 5.0, 34.0); //kanan atas
    glVertex3f(12.0, 2.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-15.0, -20.0, 28.0); //kiri bawah
    glVertex3f(10.0, -20.0, 28.0); //kanan bawah
    glVertex3f(10.0, -20.0, 25.0); //kanan atas
    glVertex3f(-15.0, -20.0, 25.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-15.0, -19.0, 28.0); //kiri bawah
    glVertex3f(10.0, -19.0, 28.0); //kanan bawah
    glVertex3f(10.0, -19.0, 25.0); //kanan atas
    glVertex3f(-15.0, -19.0, 25.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex3f(-15.0, -19.0, 28.0); //kiri bawah
    glVertex3f(10.0, -19.0, 28.0); //kanan bawah
    glVertex3f(10.0, -20.0, 28.0); //kanan atas
    glVertex3f(-15.0, -20.0, 28.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(10.5, -20.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 2.0, 34.0); //kiri atas
    glVertex3f(12.0, 2.0, 34.0); //kanan atas
    glVertex3f(12.0, -20.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(10.5, -20.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 2.0, 32.0); //kiri atas
    glVertex3f(12.0, 2.0, 32.0); //kanan atas
    glVertex3f(12.0, -20.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.5, 2.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 5.0, 32.0); //kiri atas
    glVertex3f(12.0, 5.0, 32.0); //kanan atas
    glVertex3f(12.0, 2.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(12.0, -20.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, 2.0, 34.0); //kiri atas
    glVertex3f(12.0, 2.0, 32.0); //kanan atas
    glVertex3f(12.0, -20.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(12.0, 2.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, 5.0, 34.0); //kiri atas
    glVertex3f(12.0, 5.0, 32.0); //kanan atas
    glVertex3f(12.0, 2.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(10.5, -20.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 2.0, 32.0); //kiri atas
    glVertex3f(10.5, 2.0, 34.0); //kanan atas
    glVertex3f(10.5, -20.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.5, 2.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.5, 5.0, 32.0); //kiri atas
    glVertex3f(10.5, 5.0, 34.0); //kanan atas
    glVertex3f(10.5, 2.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(28.0, -20.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 2.0, 34.0); //kiri atas
    glVertex3f(29.5, 2.0, 34.0); //kanan atas
    glVertex3f(29.5, -20.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(28.0, 2.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 5.0, 34.0); //kiri atas
    glVertex3f(29.5, 5.0, 34.0); //kanan atas
    glVertex3f(29.5, 2.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(28.0, -20.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 2.0, 32.0); //kiri atas
    glVertex3f(29.5, 2.0, 32.0); //kanan atas
    glVertex3f(29.5, -20.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(28.0, 2.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 5.0, 32.0); //kiri atas
    glVertex3f(29.5, 5.0, 32.0); //kanan atas
    glVertex3f(29.5, 2.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(29.5, -20.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.5, 2.0, 34.0); //kiri atas
    glVertex3f(29.5, 2.0, 32.0); //kanan atas
    glVertex3f(29.5, -20.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(29.5, 2.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.5, 5.0, 34.0); //kiri atas
    glVertex3f(29.5, 5.0, 32.0); //kanan atas
    glVertex3f(29.5, 2.0, 32.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.2,0.2,7.0);
    glVertex3f(28.0, -20.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 2.0, 32.0); //kiri atas
    glVertex3f(28.0, 2.0, 34.0); //kanan atas
    glVertex3f(28.0, -20.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(28.0, 2.0, 32.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.0, 5.0, 32.0); //kiri atas
    glVertex3f(28.0, 5.0, 34.0); //kanan atas
    glVertex3f(28.0, 2.0, 34.0); //kanan bawah
    glEnd();
}

void atap()
{
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(10.0, 5.0, 40.0); //kiri bawah
    glVertex3f(35.0, 5.0, 40.0); //kanan bawah
    glVertex3f(35.0, 5.0, -30.0); //kanan atas
    glVertex3f(10.0, 5.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(10.0, 9.0, 40.0); //kiri bawah
    glVertex3f(35.0, 9.0, 40.0); //kanan bawah
    glVertex3f(35.0, 9.0, -30.0); //kanan atas
    glVertex3f(10.0, 9.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(-15.0, 2.0, 35.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-15.0, 9.0, 25.0); //kiri atas
    glVertex3f(10.0, 9.0, 25.0); //kanan atas
    glVertex3f(10.0, 2.0, 35.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(-2.5, 21.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-2.5, 21.0, 25.0); //kiri atas
    glVertex3f(12.0, 9.0, 25.0); //kanan atas
    glVertex3f(12.0, 9.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2.5, 19.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-2.5, 19.0, 25.0); //kiri atas
    glVertex3f(12.0, 7.0, 25.0); //kanan atas
    glVertex3f(12.0, 7.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(-2.5, 21.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-2.5, 21.0, 25.0); //kiri atas
    glVertex3f(-14.5, 9.0, 25.0); //kanan atas
    glVertex3f(-14.5, 9.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-2.5, 19.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-2.5, 19.0, 25.0); //kiri atas
    glVertex3f(-13.5, 7.0, 25.0); //kanan atas
    glVertex3f(-13.5, 7.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-14.5, 6.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.5, 9.0, 34.0); //kiri atas
    glVertex3f(-2.5, 21.0, 34.0); //kanan atas
    glVertex3f(-2.5, 19.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(12.0, 6.0, 34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(12.0, 9.0, 34.0); //kiri atas
    glVertex3f(-2.5, 21.0, 34.0); //kanan atas
    glVertex3f(-2.5, 19.0, 34.0); //kanan bawah
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-15.0, 9.0, 25.0); //kiri
    glVertex3f(-2.5, 21.0, 25.0); //atas
    glVertex3f(12.0, 9.0, 25.0); //kanan
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(10.0, 5.0, 40.0); //kiri bawah
    glVertex3f(35.0, 5.0, 40.0); //kanan bawah
    glVertex3f(35.0, 9.0, 40.0); //kanan atas
    glVertex3f(10.0, 9.0, 40.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(10.0, 5.0, 40.0); //kiri bawah
    glVertex3f(10.0, 5.0, 25.0); //kanan bawah
    glVertex3f(10.0, 9.0, 25.0); //kanan atas
    glVertex3f(10.0, 9.0, 40.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(35.0, 5.0, 40.0); //kiri bawah
    glVertex3f(35.0, 5.0, -25.0); //kanan bawah
    glVertex3f(35.0, 9.0, -25.0); //kanan atas
    glVertex3f(35.0, 9.0, 40.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(35.0, 5.0, -25.0); //kiri bawah
    glVertex3f(40.0, 5.0, -25.0); //kanan bawah
    glVertex3f(40.0, 9.0, -25.0); //kanan atas
    glVertex3f(35.0, 9.0, -25.0); //kiri atas
    glEnd();


}

void atap2()
{
    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(15.0, 30.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 30.0, -20.0); //kiri atas
    glVertex3f(30.0, 9.0, -20.0); //kanan atas
    glVertex3f(30.0, 9.0, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(15.0, 27.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 27.0, 15.0); //kiri atas
    glVertex3f(23.0, 16.0, 15.0); //kanan atas
    glVertex3f(23.0, 16.0, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(15.0, 30.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 30.0, -20.0); //kiri atas
    glVertex3f(-15.0, 9.0, -48.0); //kanan atas
    glVertex3f(-15.0, 9.0, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(15.0, 30.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(40.0, 9.0, -48.0); //kiri atas
    glVertex3f(-15.0, 9.0, -48.0); //kanan atas
    glVertex3f(31.0, 8.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(15.0, 30.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(40.0, 9.0, -48.0); //kiri atas
    glVertex3f(40.0, 9.0, -30.0); //kanan atas
    glVertex3f(31.0, 8.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(15.0, 27.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 27.0, 15.0); //kiri atas
    glVertex3f(1.5, 16.5, 15.0); //kanan atas
    glVertex3f(1.5, 16.5, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(15.0, 27.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 27.0, 25.0); //kiri atas
    glVertex3f(30.0, 6.0, 25.0); //kanan atas
    glVertex3f(30.0, 6.0, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(15.0, 27.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 30.0, 25.0); //kiri atas
    glVertex3f(23.0, 19.0, 25.0); //kanan atas
    glVertex3f(23.0, 16.0, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(15.0, 27.0, 25.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(15.0, 30.0, 25.0); //kiri atas
    glVertex3f(0.0, 20.0, 25.0); //kanan atas
    glVertex3f(0.0, 15.5, 25.0); //kanan bawah
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-10.0, 9.0, 15.0); //kiri
    glVertex3f(15.0, 30.0, 15.0); //atas
    glVertex3f(29.0, 10.0, 15.0); //kanan
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(10.0, 9.0, 35.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(10.0, 18.0, 15.0); //kiri atas
    glVertex3f(23.0, 18.0, 15.0); //kanan atas
    glVertex3f(23.0, 9.0, 35.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(7.0, 13.0, 30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, 18.0, 15.0); //kiri atas
    glVertex3f(10.0, 18.0, 15.0); //kanan atas
    glVertex3f(10.0, 9.0, 35.0); //kanan bawah
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.647059, 0.164706, 0.164706);
    glVertex3f(23.0, 9.0, 35.0); //kiri
    glVertex3f(23.0, 18.0, 15.0); //atas
    glVertex3f(30.0, 9.0, 23.0); //kanan
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(35.0, 9.0, -30.0); //kiri bawah
    glVertex3f(40.0, 9.0, -30.0); //kanan bawah
    glVertex3f(40.0, 9.0, -20.0); //kanan atas
    glVertex3f(35.0, 9.0, -20.0); //kiri atas
    glEnd();
}

void tembok1()
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(31.0, -20.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.0, 5.0, -30.0); //kiri atas
    glVertex3f(31.0, 5.0, 10.0); //kanan atas
    glVertex3f(31.0, -20.0, 10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(31.1, -14.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.1, 4.0, -20.0); //kiri atas
    glVertex3f(31.1, 4.0, -1.0); //kanan atas
    glVertex3f(31.1, -14.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, -14.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -13.0, -20.0); //kiri atas
    glVertex3f(31.15, -13.0, -1.0); //kanan atas
    glVertex3f(31.15, -14.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 4.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, 3.0, -20.0); //kiri atas
    glVertex3f(31.15, 3.0, -1.0); //kanan atas
    glVertex3f(31.15, 4.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 1.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, 0.0, -20.0); //kiri atas
    glVertex3f(31.15, 0.0, -1.0); //kanan atas
    glVertex3f(31.15, 1.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, -3.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -3.5, -20.0); //kiri atas
    glVertex3f(31.15, -3.5, -1.0); //kanan atas
    glVertex3f(31.15, -3.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, -10.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -9.5, -20.0); //kiri atas
    glVertex3f(31.15, -9.5, -1.0); //kanan atas
    glVertex3f(31.15, -10.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 4.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -20.0); //kiri atas
    glVertex3f(31.15, -14.0, -19.0); //kanan atas
    glVertex3f(31.15, 4.0, -19.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 4.0, 0.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, 0.0); //kiri atas
    glVertex3f(31.15, -14.0, -1.0); //kanan atas
    glVertex3f(31.15, 4.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 4.0, -6.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -6.5); //kiri atas
    glVertex3f(31.15, -14.0, -7.5); //kanan atas
    glVertex3f(31.15, 4.0, -7.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 4.0, -13.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -13.0); //kiri atas
    glVertex3f(31.15, -14.0, -14.0); //kanan atas
    glVertex3f(31.15, 4.0, -14.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -16.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -16.0); //kiri atas
    glVertex3f(31.15, -14.0, -15.5); //kanan atas
    glVertex3f(31.15, 0.0, -15.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -17.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -17.5); //kiri atas
    glVertex3f(31.15, -14.0, -17.0); //kanan atas
    glVertex3f(31.15, 0.0, -17.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -2.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -2.5); //kiri atas
    glVertex3f(31.15, -14.0, -3.0); //kanan atas
    glVertex3f(31.15, 0.0, -3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -4.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -4.5); //kiri atas
    glVertex3f(31.15, -14.0, -5.0); //kanan atas
    glVertex3f(31.15, 0.0, -5.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -4.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -4.5); //kiri atas
    glVertex3f(31.15, -14.0, -5.0); //kanan atas
    glVertex3f(31.15, 0.0, -5.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -9.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -9.5); //kiri atas
    glVertex3f(31.15, -14.0, -9.0); //kanan atas
    glVertex3f(31.15, 0.0, -9.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -11.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -14.0, -11.5); //kiri atas
    glVertex3f(31.15, -14.0, -12.0); //kanan atas
    glVertex3f(31.15, 0.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(31.15, 0.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.15, -19.5, -30.0); //kiri atas
    glVertex3f(31.15, -19.5, -22.5); //kanan atas
    glVertex3f(31.15, 0.0, -22.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(31.18, -9.0, -24.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.18, -10.0, -24.5); //kiri atas
    glVertex3f(31.18, -10.0, -23.5); //kanan atas
    glVertex3f(31.18, -9.0, -23.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(40.0, -20.0, -20.0); //kiri bawah
    glVertex3f(40.0, -20.0, -30.0); //kanan bawah
    glVertex3f(40.0, 9.0, -30.0); //kanan atas
    glVertex3f(40.0, 9.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(30.0, -20.0, -30.0); //kiri bawah
    glVertex3f(40.0, -20.0, -30.0); //kanan bawah
    glVertex3f(40.0, 9.0, -30.0); //kanan atas
    glVertex3f(30.0, 9.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(33.0, -15.0, -29.9); //kiri bawah
    glVertex3f(37.0, -15.0, -29.9); //kanan bawah
    glVertex3f(37.0, 3.0, -29.9); //kanan atas
    glVertex3f(33.0, 3.0, -29.9); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(33.0, -15.0, -29.8); //kiri bawah
    glVertex3f(33.7, -15.0, -29.8); //kanan bawah
    glVertex3f(33.7, 3.0, -29.8); //kanan atas
    glVertex3f(33.0, 3.0, -29.8); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(37.0, -15.0, -29.8); //kiri bawah
    glVertex3f(36.3, -15.0, -29.8); //kanan bawah
    glVertex3f(36.3, 3.0, -29.8); //kanan atas
    glVertex3f(37.0, 3.0, -29.8); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(37.0, 2.0, -29.8); //kiri bawah
    glVertex3f(33.0, 2.0, -29.8); //kanan bawah
    glVertex3f(33.0, 3.0, -29.8); //kanan atas
    glVertex3f(37.0, 3.0, -29.8); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(37.0, -15.0, -29.8); //kiri bawah
    glVertex3f(33.0, -15.0, -29.8); //kanan bawah
    glVertex3f(33.0, -14.0, -29.8); //kanan atas
    glVertex3f(37.0, -14.0, -29.8); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(40.0, -20.0, -30.0); //kiri bawah
    glVertex3f(40.0, -20.0, -48.0); //kanan bawah
    glVertex3f(40.0, 9.0, -48.0); //kanan atas
    glVertex3f(40.0, 9.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(42.0, -20.0, -20.0); //kiri bawah
    glVertex3f(42.0, -20.0, -48.0); //kanan bawah
    glVertex3f(42.0, 9.0, -48.0); //kanan atas
    glVertex3f(42.0, 9.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(40.0, -20.0, -20.0); //kiri bawah
    glVertex3f(42.0, -20.0, -20.0); //kanan bawah
    glVertex3f(42.0, 9.0, -20.0); //kanan atas
    glVertex3f(40.0, 9.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(40.0, 9.0, -20.0); //kiri bawah
    glVertex3f(40.0, 9.0, -48.0); //kanan bawah
    glVertex3f(42.0, 9.0, -48.0); //kanan atas
    glVertex3f(42.0, 9.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(40.0, -20.0, -20.0); //kiri bawah
    glVertex3f(40.0, -20.0, -48.0); //kanan bawah
    glVertex3f(42.0, -20.0, -48.0); //kanan atas
    glVertex3f(42.0, -20.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.9,0.9,1.0);
    glVertex3f(42.0, -20.0, -48.0); //kiri bawah
    glVertex3f(-17.0, -20.0, -48.0); //kanan bawah
    glVertex3f(-17.0, 9.0, -48.0); //kanan atas
    glVertex3f(42.0, 9.0, -48.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(10.0, -19.0, -48.1); //kiri bawah
    glVertex3f(2.0, -19.0, -48.1); //kanan bawah
    glVertex3f(2.0, 0.0, -48.1); //kanan atas
    glVertex3f(10.0, 0.0, -48.1); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(9.0, -10.0, -48.15); //kiri bawah
    glVertex3f(8.0, -10.0, -48.15); //kanan bawah
    glVertex3f(8.0, -9.0, -48.15); //kanan atas
    glVertex3f(9.0, -9.0, -48.15); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(-15.0, -20.0, -48.0); //kiri bawah
    glVertex3f(-15.0, -20.0, 25.0); //kanan bawah
    glVertex3f(-15.0, 9.0, 25.0); //kanan atas
    glVertex3f(-15.0, 9.0, -48.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(-17.0, -20.0, -48.0); //kiri bawah
    glVertex3f(-17.0, -20.0, 25.0); //kanan bawah
    glVertex3f(-17.0, 9.0, 25.0); //kanan atas
    glVertex3f(-17.0, 9.0, -48.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(-17.0, 9.0, -48.0); //kiri bawah
    glVertex3f(-17.0, 9.0, 35.0); //kanan bawah
    glVertex3f(-15.0, 9.0, 35.0); //kanan atas
    glVertex3f(-15.0, 9.0, -48.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-15.0, -20.0, 35.0); //kiri bawah
    glVertex3f(-15.0, -20.0, 25.0); //kanan bawah
    glVertex3f(-15.0, 9.0, 25.0); //kanan atas
    glVertex3f(-15.0, 9.0, 35.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-17.0, -20.0, 35.0); //kiri bawah
    glVertex3f(-17.0, -20.0, 25.0); //kanan bawah
    glVertex3f(-17.0, 9.0, 25.0); //kanan atas
    glVertex3f(-17.0, 9.0, 35.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-17.0, -20.0, 35.0); //kiri bawah
    glVertex3f(-15.0, -20.0, 35.0); //kanan bawah
    glVertex3f(-15.0, 9.0, 35.0); //kanan atas
    glVertex3f(-17.0, 9.0, 35.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-17.0, -20.0, 45.0); //kiri bawah
    glVertex3f(-15.0, -20.0, 45.0); //kanan bawah
    glVertex3f(-15.0, -5.0, 45.0); //kanan atas
    glVertex3f(-17.0, -5.0, 45.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-17.0, -5.0, 35.0); //kiri bawah
    glVertex3f(-15.0, -5.0, 35.0); //kanan bawah
    glVertex3f(-15.0, -5.0, 45.0); //kanan atas
    glVertex3f(-17.0, -5.0, 45.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.7,0.7,0.7);
    glVertex3f(-17.0, -20.0, -48.0); //kiri bawah
    glVertex3f(-15.0, -20.0, -48.0); //kanan bawah
    glVertex3f(-15.0, -20.0, 45.0); //kanan atas
    glVertex3f(-17.0, -20.0, 45.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-15.0, -20.0, 35.0); //kiri bawah
    glVertex3f(-15.0, -5.0, 35.0); //kanan bawah
    glVertex3f(-15.0, -5.0, 45.0); //kanan atas
    glVertex3f(-15.0, -20.0, 45.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex3f(-17.0, -20.0, 35.0); //kiri bawah
    glVertex3f(-17.0, -5.0, 35.0); //kanan bawah
    glVertex3f(-17.0, -5.0, 45.0); //kanan atas
    glVertex3f(-17.0, -20.0, 45.0); //kiri atas
    glEnd();
}

void lantai()
{
    //lantai
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-10.0, -20.0, 10.0); //kiri bawah
    glVertex3f(31.0, -20.0, 10.0); //kanan bawah
    glVertex3f(31.0, -20.0, -30.0); //kanan atas
    glVertex3f(-10.0, -20.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-15.0, -20.0, 25.0); //kiri bawah
    glVertex3f(10.0, -20.0, 25.0); //kanan bawah
    glVertex3f(10.0, -20.0, -30.0); //kanan atas
    glVertex3f(-15.0, -20.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-15.0, -20.0, -48.0); //kiri bawah
    glVertex3f(40.0, -20.0, -48.0); //kanan bawah
    glVertex3f(40.0, -20.0, -30.0); //kanan atas
    glVertex3f(-15.0, -20.0, -30.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(31.0, -20.0, -30.0); //kiri bawah
    glVertex3f(40.0, -20.0, -30.0); //kanan bawah
    glVertex3f(40.0, -20.0, -20.0); //kanan atas
    glVertex3f(31.0, -20.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(31.0, -19.0, -30.0); //kiri bawah
    glVertex3f(40.0, -19.0, -30.0); //kanan bawah
    glVertex3f(40.0, -19.0, -20.0); //kanan atas
    glVertex3f(31.0, -19.0, -20.0); //kiri atas
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(31.0, -19.0, -20.0); //kiri bawah
    glVertex3f(40.0, -19.0, -20.0); //kanan bawah
    glVertex3f(40.0, -20.0, -20.0); //kanan atas
    glVertex3f(31.0, -20.0, -20.0); //kiri atas
    glEnd();
}

void meja()
{
    //depan kanan
    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 0.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 0.0); //kiri atas
    glVertex3f(30.0, -15.0, 0.0); //kanan atas
    glVertex3f(30.0, -20.0, 0.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 1.0); //kiri atas
    glVertex3f(30.0, -15.0, 1.0); //kanan atas
    glVertex3f(30.0, -20.0, 1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 1.0); //kiri atas
    glVertex3f(28.5, -15.0, 0.0); //kanan atas
    glVertex3f(28.5, -20.0, 0.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.0, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -15.0, 1.0); //kiri atas
    glVertex3f(30.0, -15.0, 0.0); //kanan atas
    glVertex3f(30.0, -20.0, 0.0); //kanan bawah
    glEnd();

    //depan kiri
    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 0.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 0.0); //kiri atas
    glVertex3f(20.0, -15.0, 0.0); //kanan atas
    glVertex3f(20.0, -20.0, 0.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 1.0); //kiri atas
    glVertex3f(20.0, -15.0, 1.0); //kanan atas
    glVertex3f(20.0, -20.0, 1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 1.0); //kiri atas
    glVertex3f(18.5, -15.0, 0.0); //kanan atas
    glVertex3f(18.5, -20.0, 0.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(20.0, -20.0, 1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.0, -15.0, 1.0); //kiri atas
    glVertex3f(20.0, -15.0, 0.0); //kanan atas
    glVertex3f(20.0, -20.0, 0.0); //kanan bawah
    glEnd();

    //belakang kanan
    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 7.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 7.0); //kiri atas
    glVertex3f(30.0, -15.0, 7.0); //kanan atas
    glVertex3f(30.0, -20.0, 7.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 8.0); //kiri atas
    glVertex3f(30.0, -15.0, 8.0); //kanan atas
    glVertex3f(30.0, -20.0, 8.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(28.5, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(28.5, -15.0, 8.0); //kiri atas
    glVertex3f(28.5, -15.0, 7.0); //kanan atas
    glVertex3f(28.5, -20.0, 7.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.0, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -15.0, 8.0); //kiri atas
    glVertex3f(30.0, -15.0, 7.0); //kanan atas
    glVertex3f(30.0, -20.0, 7.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 7.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 7.0); //kiri atas
    glVertex3f(20.0, -15.0, 7.0); //kanan atas
    glVertex3f(20.0, -20.0, 7.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 8.0); //kiri atas
    glVertex3f(20.0, -15.0, 8.0); //kanan atas
    glVertex3f(20.0, -20.0, 8.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(18.5, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -15.0, 8.0); //kiri atas
    glVertex3f(18.5, -15.0, 7.0); //kanan atas
    glVertex3f(18.5, -20.0, 7.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(20.0, -20.0, 8.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.0, -15.0, 8.0); //kiri atas
    glVertex3f(20.0, -15.0, 7.0); //kanan atas
    glVertex3f(20.0, -20.0, 7.0); //kanan bawah
    glEnd();

    //atas
    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.9, -15.0, 9.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.5, -15.0, 9.0); //kiri atas
    glVertex3f(17.5, -15.0, -1.0); //kanan atas
    glVertex3f(30.9, -15.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.9, -14.0, 9.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.5, -14.0, 9.0); //kiri atas
    glVertex3f(17.5, -14.0, -1.0); //kanan atas
    glVertex3f(30.9, -14.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.9, -14.0, -1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.5, -14.0, -1.0); //kiri atas
    glVertex3f(17.5, -15.0, -1.0); //kanan atas
    glVertex3f(30.9, -15.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.9, -14.0, 9.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.5, -14.0, 9.0); //kiri atas
    glVertex3f(17.5, -15.0, 9.0); //kanan atas
    glVertex3f(30.9, -15.0, 9.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(17.5, -14.0, -1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.5, -14.0, 9.0); //kiri atas
    glVertex3f(17.5, -15.0, 9.0); //kanan atas
    glVertex3f(17.5, -15.0, -1.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.52, 0.37, 0.26);
    glVertex3f(30.9, -14.0, -1.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.9, -14.0, 9.0); //kiri atas
    glVertex3f(30.9, -15.0, 9.0); //kanan atas
    glVertex3f(30.9, -15.0, -1.0); //kanan bawah
    glEnd();
}

void tv()
{
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -5.0, 3.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -13.0, 3.0); //kiri atas
    glVertex3f(29.5, -13.0, 3.0); //kanan atas
    glVertex3f(29.5, -5.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(20.0, -6.0, 2.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.0, -12.0, 2.9); //kiri atas
    glVertex3f(28.5, -12.0, 2.9); //kanan atas
    glVertex3f(28.5, -6.0, 2.9); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -5.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -13.0, 4.0); //kiri atas
    glVertex3f(29.5, -13.0, 4.0); //kanan atas
    glVertex3f(29.5, -5.0, 4.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -5.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -13.0, 4.0); //kiri atas
    glVertex3f(19.0, -13.0, 3.0); //kanan atas
    glVertex3f(19.0, -5.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.5, -5.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.5, -13.0, 4.0); //kiri atas
    glVertex3f(29.5, -13.0, 3.0); //kanan atas
    glVertex3f(29.5, -5.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.5, -13.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -13.0, 4.0); //kiri atas
    glVertex3f(19.0, -13.0, 3.0); //kanan atas
    glVertex3f(29.5, -13.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.5, -5.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -5.0, 4.0); //kiri atas
    glVertex3f(19.0, -5.0, 3.0); //kanan atas
    glVertex3f(29.5, -5.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(27.5, -13.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(27.5, -14.0, 5.0); //kiri atas
    glVertex3f(29.5, -14.0, 5.0); //kanan atas
    glVertex3f(29.5, -13.0, 4.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -13.0, 4.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -14.0, 5.0); //kiri atas
    glVertex3f(21.0, -14.0, 5.0); //kanan atas
    glVertex3f(21.0, -13.0, 4.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(27.5, -13.0, 3.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(27.5, -14.0, 2.0); //kiri atas
    glVertex3f(29.5, -14.0, 2.0); //kanan atas
    glVertex3f(29.5, -13.0, 3.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -13.0, 3.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -14.0, 2.0); //kiri atas
    glVertex3f(21.0, -14.0, 2.0); //kanan atas
    glVertex3f(21.0, -13.0, 3.0); //kanan bawah
    glEnd();

}

void kursi()
{
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -20.0); //kiri atas
    glVertex3f(20.0, -20.0, -20.0); //kanan atas
    glVertex3f(20.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -19.0); //kiri atas
    glVertex3f(20.0, -20.0, -19.0); //kanan atas
    glVertex3f(20.0, -18.0, -19.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.0, -20.0, -19.0); //kiri atas
    glVertex3f(20.0, -20.0, -20.0); //kanan atas
    glVertex3f(20.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -19.0); //kiri atas
    glVertex3f(19.0, -20.0, -20.0); //kanan atas
    glVertex3f(19.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -20.0); //kiri atas
    glVertex3f(30.0, -20.0, -20.0); //kanan atas
    glVertex3f(30.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -19.0); //kiri atas
    glVertex3f(30.0, -20.0, -19.0); //kanan atas
    glVertex3f(30.0, -18.0, -19.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -20.0, -19.0); //kiri atas
    glVertex3f(30.0, -20.0, -20.0); //kanan atas
    glVertex3f(30.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -19.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -19.0); //kiri atas
    glVertex3f(29.0, -20.0, -20.0); //kanan atas
    glVertex3f(29.0, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -13.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -13.0); //kiri atas
    glVertex3f(30.0, -20.0, -13.0); //kanan atas
    glVertex3f(30.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -12.0); //kiri atas
    glVertex3f(30.0, -20.0, -12.0); //kanan atas
    glVertex3f(30.0, -18.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -20.0, -12.0); //kiri atas
    glVertex3f(30.0, -20.0, -13.0); //kanan atas
    glVertex3f(30.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(29.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.0, -20.0, -12.0); //kiri atas
    glVertex3f(29.0, -20.0, -13.0); //kanan atas
    glVertex3f(29.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -13.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -13.0); //kiri atas
    glVertex3f(20.0, -20.0, -13.0); //kanan atas
    glVertex3f(20.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -12.0); //kiri atas
    glVertex3f(20.0, -20.0, -12.0); //kanan atas
    glVertex3f(20.0, -18.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(20.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(20.0, -20.0, -12.0); //kiri atas
    glVertex3f(20.0, -20.0, -13.0); //kanan atas
    glVertex3f(20.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.0, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.0, -20.0, -12.0); //kiri atas
    glVertex3f(19.0, -20.0, -13.0); //kanan atas
    glVertex3f(19.0, -18.0, -13.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(18.5, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -18.0, -12.0); //kiri atas
    glVertex3f(30.5, -18.0, -20.0); //kanan atas
    glVertex3f(18.5, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(18.5, -16.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -16.0, -12.0); //kiri atas
    glVertex3f(30.5, -16.0, -20.0); //kanan atas
    glVertex3f(18.5, -16.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(18.5, -7.0, -18.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -7.0, -18.0); //kiri atas
    glVertex3f(30.5, -7.0, -20.0); //kanan atas
    glVertex3f(18.5, -7.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(30.5, -7.0, -20.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -7.0, -20.0); //kiri atas
    glVertex3f(18.5, -18.0, -20.0); //kanan atas
    glVertex3f(30.5, -18.0, -20.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(30.5, -7.0, -18.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -7.0, -18.5); //kiri atas
    glVertex3f(18.5, -16.0, -18.5); //kanan atas
    glVertex3f(30.5, -16.0, -18.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(18.5, -7.0, -18.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -7.0, -20.0); //kiri atas
    glVertex3f(18.5, -18.0, -20.0); //kanan atas
    glVertex3f(18.5, -18.0, -18.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(30.5, -7.0, -18.5); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -7.0, -20.0); //kiri atas
    glVertex3f(30.5, -18.0, -20.0); //kanan atas
    glVertex3f(30.5, -18.0, -18.5); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(30.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -12.0, -20.0); //kiri atas
    glVertex3f(30.5, -18.0, -20.0); //kanan atas
    glVertex3f(30.5, -18.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(29.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(29.5, -12.0, -20.0); //kiri atas
    glVertex3f(29.5, -16.0, -20.0); //kanan atas
    glVertex3f(29.5, -16.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(30.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -12.0, -20.0); //kiri atas
    glVertex3f(29.5, -12.0, -20.0); //kanan atas
    glVertex3f(29.5, -12.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -16.0, -12.0); //kiri atas
    glVertex3f(29.5, -16.0, -12.0); //kanan atas
    glVertex3f(29.5, -12.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(19.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.5, -16.0, -12.0); //kiri atas
    glVertex3f(18.5, -16.0, -12.0); //kanan atas
    glVertex3f(18.5, -12.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(30.5, -18.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.5, -16.0, -12.0); //kiri atas
    glVertex3f(18.5, -16.0, -12.0); //kanan atas
    glVertex3f(18.5, -18.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(19.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.5, -12.0, -20.0); //kiri atas
    glVertex3f(18.5, -12.0, -20.0); //kanan atas
    glVertex3f(18.5, -12.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(19.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(19.5, -12.0, -20.0); //kiri atas
    glVertex3f(19.5, -16.0, -20.0); //kanan atas
    glVertex3f(19.5, -16.0, -12.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 0.5, 0.0);
    glVertex3f(18.5, -12.0, -12.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.5, -12.0, -20.0); //kiri atas
    glVertex3f(18.5, -18.0, -20.0); //kanan atas
    glVertex3f(18.5, -18.0, -12.0); //kanan bawah
    glEnd();
}

void kasur()
{
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -5.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -30.0); //kiri atas
    glVertex3f(0.0, -20.0, -30.0); //kanan atas
    glVertex3f(0.0, -5.0, -30.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -5.0, -29.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -29.0); //kiri atas
    glVertex3f(0.0, -20.0, -29.0); //kanan atas
    glVertex3f(0.0, -5.0, -29.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -5.0, -29.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -29.0); //kiri atas
    glVertex3f(-14.0, -20.0, -30.0); //kanan atas
    glVertex3f(-14.0, -5.0, -30.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -5.0, -29.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, -20.0, -29.0); //kiri atas
    glVertex3f(0.0, -20.0, -30.0); //kanan atas
    glVertex3f(0.0, -5.0, -30.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -5.0, -29.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-0.0, -5.0, -29.0); //kiri atas
    glVertex3f(-0.0, -5.0, -30.0); //kanan atas
    glVertex3f(-14.0, -5.0, -30.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -12.0, -10.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -10.0); //kiri atas
    glVertex3f(-0.0, -20.0, -10.0); //kanan atas
    glVertex3f(-0.0, -12.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -12.0, -11.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -11.0); //kiri atas
    glVertex3f(-0.0, -20.0, -11.0); //kanan atas
    glVertex3f(-0.0, -12.0, -11.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -12.0, -11.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -11.0); //kiri atas
    glVertex3f(-14.0, -20.0, -10.0); //kanan atas
    glVertex3f(-14.0, -12.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -12.0, -11.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, -20.0, -11.0); //kiri atas
    glVertex3f(0.0, -20.0, -10.0); //kanan atas
    glVertex3f(0.0, -12.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -12.0, -11.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -12.0, -11.0); //kiri atas
    glVertex3f(-14.0, -12.0, -10.0); //kanan atas
    glVertex3f(0.0, -12.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -17.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, -17.0, -30.0); //kiri atas
    glVertex3f(0.0, -17.0, -10.0); //kanan atas
    glVertex3f(-14.0, -17.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(0.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, -17.0, -30.0); //kiri atas
    glVertex3f(0.0, -17.0, -10.0); //kanan atas
    glVertex3f(0.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-1.0, -17.0, -30.0); //kiri atas
    glVertex3f(-1.0, -17.0, -10.0); //kanan atas
    glVertex3f(-1.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-1.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(0.0, -13.0, -30.0); //kiri atas
    glVertex3f(0.0, -13.0, -10.0); //kanan atas
    glVertex3f(-1.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-13.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -17.0, -30.0); //kiri atas
    glVertex3f(-13.0, -17.0, -10.0); //kanan atas
    glVertex3f(-13.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -17.0, -30.0); //kiri atas
    glVertex3f(-14.0, -17.0, -10.0); //kanan atas
    glVertex3f(-14.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
    glVertex3f(-14.0, -13.0, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-13.0, -13.0, -30.0); //kiri atas
    glVertex3f(-13.0, -13.0, -10.0); //kanan atas
    glVertex3f(-14.0, -13.0, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.9, -16.9, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-1.1, -16.9, -30.0); //kiri atas
    glVertex3f(-1.1, -16.9, -10.0); //kanan atas
    glVertex3f(-12.9, -16.9, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.9, -12.5, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-1.1, -12.5, -30.0); //kiri atas
    glVertex3f(-1.1, -12.5, -10.0); //kanan atas
    glVertex3f(-12.9, -12.5, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-1.1, -12.5, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-1.1, -16.9, -30.0); //kiri atas
    glVertex3f(-1.1, -16.9, -10.0); //kanan atas
    glVertex3f(-1.1, -12.5, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.9, -12.5, -30.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-12.9, -16.9, -30.0); //kiri atas
    glVertex3f(-12.9, -16.9, -10.0); //kanan atas
    glVertex3f(-12.9, -12.5, -10.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.9, -12.5, -29.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-12.9, -16.9, -29.9); //kiri atas
    glVertex3f(-1.1, -16.9, -29.9); //kanan atas
    glVertex3f(-1.1, -12.5, -29.9); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-12.9, -12.5, -10.1); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-12.9, -16.9, -10.1); //kiri atas
    glVertex3f(-1.1, -16.9, -10.1); //kanan atas
    glVertex3f(-1.1, -12.5, -10.1); //kanan bawah
    glEnd();
}

void almari()
{
    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -33.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -33.0); //kiri atas
    glVertex3f(-12.0, -20.0, -33.0); //kanan atas
    glVertex3f(-12.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -34.0); //kiri atas
    glVertex3f(-12.0, -20.0, -34.0); //kanan atas
    glVertex3f(-12.0, -17.0, -34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-12.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-12.0, -20.0, -34.0); //kiri atas
    glVertex3f(-12.0, -20.0, -33.0); //kanan atas
    glVertex3f(-12.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -34.0); //kiri atas
    glVertex3f(-14.0, -20.0, -33.0); //kanan atas
    glVertex3f(-14.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -33.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -33.0); //kiri atas
    glVertex3f(-8.0, -20.0, -33.0); //kanan atas
    glVertex3f(-8.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -34.0); //kiri atas
    glVertex3f(-8.0, -20.0, -34.0); //kanan atas
    glVertex3f(-8.0, -17.0, -34.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-8.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-8.0, -20.0, -34.0); //kiri atas
    glVertex3f(-8.0, -20.0, -33.0); //kanan atas
    glVertex3f(-8.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -34.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -34.0); //kiri atas
    glVertex3f(-6.0, -20.0, -33.0); //kanan atas
    glVertex3f(-6.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -43.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -43.0); //kiri atas
    glVertex3f(-8.0, -20.0, -43.0); //kanan atas
    glVertex3f(-8.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -44.0); //kiri atas
    glVertex3f(-8.0, -20.0, -44.0); //kanan atas
    glVertex3f(-8.0, -17.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-8.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-8.0, -20.0, -44.0); //kiri atas
    glVertex3f(-8.0, -20.0, -43.0); //kanan atas
    glVertex3f(-8.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -20.0, -44.0); //kiri atas
    glVertex3f(-6.0, -20.0, -43.0); //kanan atas
    glVertex3f(-6.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -43.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -43.0); //kiri atas
    glVertex3f(-12.0, -20.0, -43.0); //kanan atas
    glVertex3f(-12.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -44.0); //kiri atas
    glVertex3f(-12.0, -20.0, -44.0); //kanan atas
    glVertex3f(-12.0, -17.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-12.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-12.0, -20.0, -44.0); //kiri atas
    glVertex3f(-12.0, -20.0, -43.0); //kanan atas
    glVertex3f(-12.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -20.0, -44.0); //kiri atas
    glVertex3f(-14.0, -20.0, -43.0); //kanan atas
    glVertex3f(-14.0, -17.0, -43.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -17.0, -44.0); //kiri atas
    glVertex3f(-6.0, -17.0, -33.0); //kanan atas
    glVertex3f(-14.0, -17.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -1.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -1.0, -44.0); //kiri atas
    glVertex3f(-6.0, -1.0, -33.0); //kanan atas
    glVertex3f(-14.0, -1.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-14.0, -1.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-14.0, -17.0, -44.0); //kiri atas
    glVertex3f(-14.0, -17.0, -33.0); //kanan atas
    glVertex3f(-14.0, -1.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -1.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -17.0, -44.0); //kiri atas
    glVertex3f(-6.0, -17.0, -33.0); //kanan atas
    glVertex3f(-6.0, -1.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -1.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -17.0, -44.0); //kiri atas
    glVertex3f(-14.0, -17.0, -44.0); //kanan atas
    glVertex3f(-14.0, -1.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -1.0, -33.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -17.0, -33.0); //kiri atas
    glVertex3f(-14.0, -17.0, -33.0); //kanan atas
    glVertex3f(-14.0, -1.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(-6.0, -1.0, -33.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-6.0, -17.0, -33.0); //kiri atas
    glVertex3f(-14.0, -17.0, -33.0); //kanan atas
    glVertex3f(-14.0, -1.0, -33.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.9, -8.0, -40.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-5.9, -10.0, -40.0); //kiri atas
    glVertex3f(-5.9, -10.0, -39.0); //kanan atas
    glVertex3f(-5.9, -8.0, -39.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.9, -8.0, -38.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-5.9, -10.0, -38.0); //kiri atas
    glVertex3f(-5.9, -10.0, -37.0); //kanan atas
    glVertex3f(-5.9, -8.0, -37.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(-5.9, -1.0, -38.3); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(-5.9, -17.0, -38.3); //kiri atas
    glVertex3f(-5.9, -17.0, -38.7); //kanan atas
    glVertex3f(-5.9, -1.0, -38.7); //kanan bawah
    glEnd();
}

void rak()
{
   glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(17.0, -5.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.0, -20.0, -47.0); //kiri atas
    glVertex3f(31.0, -20.0, -47.0); //kanan atas
    glVertex3f(31.0, -5.0, -47.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(17.0, -5.0, -47.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.0, -20.0, -47.9); //kiri atas
    glVertex3f(31.0, -20.0, -47.9); //kanan atas
    glVertex3f(31.0, -5.0, -47.9); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(30.0, -5.0, -47.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -20.0, -47.9); //kiri atas
    glVertex3f(30.0, -20.0, -44.0); //kanan atas
    glVertex3f(30.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(31.0, -5.0, -47.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.0, -20.0, -47.9); //kiri atas
    glVertex3f(31.0, -20.0, -44.0); //kanan atas
    glVertex3f(31.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(31.0, -5.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(31.0, -20.0, -44.0); //kiri atas
    glVertex3f(30.0, -20.0, -44.0); //kanan atas
    glVertex3f(30.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(18.0, -5.0, -47.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(18.0, -20.0, -47.9); //kiri atas
    glVertex3f(18.0, -20.0, -44.0); //kanan atas
    glVertex3f(18.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(17.0, -5.0, -47.9); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.0, -20.0, -47.9); //kiri atas
    glVertex3f(17.0, -20.0, -44.0); //kanan atas
    glVertex3f(17.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0.35, 0.16, 0.14);
    glVertex3f(17.0, -5.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(17.0, -20.0, -44.0); //kiri atas
    glVertex3f(18.0, -20.0, -44.0); //kanan atas
    glVertex3f(18.0, -5.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -8.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -8.0, -47.0); //kiri atas
    glVertex3f(30.0, -8.0, -44.0); //kanan atas
    glVertex3f(18.0, -8.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -7.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -7.0, -47.0); //kiri atas
    glVertex3f(30.0, -7.0, -44.0); //kanan atas
    glVertex3f(18.0, -7.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -7.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -7.0, -44.0); //kiri atas
    glVertex3f(30.0, -8.0, -44.0); //kanan atas
    glVertex3f(18.0, -8.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -13.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -13.0, -47.0); //kiri atas
    glVertex3f(30.0, -13.0, -44.0); //kanan atas
    glVertex3f(18.0, -13.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -12.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -12.0, -47.0); //kiri atas
    glVertex3f(30.0, -12.0, -44.0); //kanan atas
    glVertex3f(18.0, -12.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -12.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -12.0, -44.0); //kiri atas
    glVertex3f(30.0, -13.0, -44.0); //kanan atas
    glVertex3f(18.0, -13.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -18.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -18.0, -47.0); //kiri atas
    glVertex3f(30.0, -18.0, -44.0); //kanan atas
    glVertex3f(18.0, -18.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -17.0, -47.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -17.0, -47.0); //kiri atas
    glVertex3f(30.0, -17.0, -44.0); //kanan atas
    glVertex3f(18.0, -17.0, -44.0); //kanan bawah
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 1.0);
    glVertex3f(18.0, -17.0, -44.0); //kiri bawah(kiri/kanan, atas/ bawah, depan/belakang)
    glVertex3f(30.0, -17.0, -44.0); //kiri atas
    glVertex3f(30.0, -18.0, -44.0); //kanan atas
    glVertex3f(18.0, -18.0, -44.0); //kanan bawah
    glEnd();
}


void tampil(void){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    gluLookAt(0,0,3,0,0,0,0,1,0);
    glRotatef(xrot, 1, 0, 0);
    glRotatef(yrot, 0, 1, 0);
    glPushMatrix();

    lantai();
    tembok1();
    teras();
    depanhitam();
    pintudepan();
    depanputih();
    atap();
    atap2();
    meja();
    tv();
    kursi();
    kasur();
    almari();
    rak();

    glPopMatrix();
    glutSwapBuffers();
}

void idle(){
    if(!mouseDown){
        xrot += 0.3f;
        yrot += 0.4f;
    }
    glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
    if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
    mouseDown = false;
}

void mouseMotion(int x, int y){
    if(mouseDown){
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void keyboard(unsigned char key,int x, int y)
{
    switch(key)
    {
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
void ukuran(int lebar, int tinggi){
    if(tinggi == 0) tinggi = 1;

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(50, lebar / tinggi, 5, 500);
    glTranslatef(0, -5, -150);
    glMatrixMode(GL_MODELVIEW);
}

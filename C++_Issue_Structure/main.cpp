#include<stdio.h>

//�ۑ����
/*
struct  Vector2
{
public:
	//int Vector_x() { return numx; }
	//int Vector_y() { return numy; }
	int numx,numy;
	void Set_x(int setNum_x) { numx = setNum_x; }
	void Set_y(int setNum_y) { numy = setNum_y; }
};
int main()
{
	Vector2 Test;
	printf("���l1����͂��Ă�������\n");
	scanf_s("%d", &Test.numx);
	printf("���l2����͂��Ă�������\n");
	scanf_s("%d", &Test.numy);
	printf("���͂��ꂽ���l��%d,%d", Test.numx, Test.numy);
}
*/
//�ۑ����
/*struct  Vector2
{
public:
	int getVectorX() { return numx; };
	void setVectorX(int setNum);
	int getVectorY() { return numy; };
	void setVectorY(int setNum2);
	
private:
	int numx, numy;
};
int main()
{
	Vector2 Test;
	int numX, numY;
	printf_s("X���W�̓���\n");
	scanf_s("%d", &numX);
	printf_s("Y���W�̓���\n");
	scanf_s("%d", &numY);
	Test.setVectorX(numX);
	Test.setVectorY(numY);
	printf("x���W%d\n,y���W%d\n", Test.getVectorX(), Test.getVectorY());
}
void Vector2::setVectorX(int setNum) {
	this->numx = setNum;
	numx = setNum;
}
void Vector2::setVectorY(int setNum2) {
	this->numy = setNum2;
	numy = setNum2;
}
*/
//�ۑ�3���
/*struct  Vector2
{
public:
	int getVectorX() { return numx; };
	void setVectorX(int setNum);
	int getVectorY() { return numy; };
	void setVectorY(int setNum2);
	int getVectorZ() { return numz; };
	void setVectorZ(int setNum3);
private:
	int numx,numy,numz;
};
int main()
{
	Vector2 Test;
	int numX, numY,numZ;
	printf_s("X���W�̓���\n");
	scanf_s("%d", &numX);
	printf_s("Y���W�̓���\n");
	scanf_s("%d", &numY);
	printf_s("Z���W�̓���\n");
	scanf_s("%d", &numZ);
	Test.setVectorX(numX);
	Test.setVectorY(numY);
	Test.setVectorZ(numZ);
	printf("X���W%d\n,Y���W%d\n,Z���W%d", Test.getVectorX(),Test.getVectorY(),Test.getVectorZ());
}
void Vector2::setVectorX(int setNum)
{
this->numx = setNum;
numx = setNum;   
}
void Vector2::setVectorY(int setNum2) 
{
this->numy = setNum2;
numy = setNum2;   
}
void Vector2::setVectorZ(int setNum3)
{
this->numz = setNum3;
numz = setNum3;   
}
*/


#pragma once
#ifndef __hitbox__
#define __hitbox__

struct hitbox {
	bool shape;//0��Բ,1�Ƿ�,�������Ƶ��
	int width;//��� �����ǿ�ȵ�һ��,��x��ƽ��
	int height;//�߶� ������һ��,��y��ƽ��
	int radius;//�뾶
	int x;//���ö���
	int y;//������Ҳ��
};
bool compare(hitbox b1, hitbox b2);//��ײ�ж�
static hitbox rectangleSample={ 1,10,10,0,300,300 };
static hitbox circleSample = { 0,0,0,10,300,300 };
#endif // ! 
//	�A�C�e���I�u�W�F�N�g�̐���

//	���d��`�h�~
#ifndef ITEM_H
#define ITEM_H


//	�t�@�C������
#include "game.h"
#include "goal.h"

//	�}�N���E�萔��`
#define NUM_MaxItem			(NUM_MaxGoal*NUM_ItemToGoal+10)				//	�A�C�e���I�u�W�F�N�g�̊Ǘ���
#define ADR_TextureFruit00	"Data/Graphics/Textures_2D/OBJ_Fruit00.png"	//	�A�C�e���I�u�W�F�N�g�̃e�N�X�`��
const float INIT_SizItem = 10.0f;		//	�A�C�e���I�u�W�F�N�g�̑傫���i�ėp�j

//	�v���g�^�C�v�錾
void InitItems(LPDIRECT3DDEVICE9 pDevice);	//	������
void UninitItems(void);						//	�������J��
void UpdateItems(void);						//	�X�V
void DrawItems(LPDIRECT3DDEVICE9 pDevice);	//	�`��

int CreateItem(D3DXVECTOR3 pos,float siz);				//	�A�C�e���I�u�W�F�N�g�̐���
void EraseItem(int Manager);							//	�w�肳�ꂽ�A�C�e���I�u�W�F�N�g�𖳌���
int Get_TouchedItem(D3DXVECTOR3 pos, D3DXVECTOR3 siz);	//	�A�C�e���I�u�W�F�N�g�Ƃ̐ڐG����


//	�Œ�ʒu(SurvivalMode)
const D3DXVECTOR3 POS_SurvivalItems[NUM_MaxItem] = {
	D3DXVECTOR3(00.0f,100.0f,00.0f),		//	0
	D3DXVECTOR3(00.0f,100.0f,1000.0f),
	D3DXVECTOR3(1000.0f,100.0f,1000.0f),
	D3DXVECTOR3(1000.0f,100.0f,00.0f),
	D3DXVECTOR3(1000.0f,100.0f,-1000.0f),
	D3DXVECTOR3(00.0f,100.0f,-1000.0f),		//	5
	D3DXVECTOR3(-1000.0f,100.0f,-1000.0f),
	D3DXVECTOR3(-1000.0f,100.0f,00.0f),
	D3DXVECTOR3(-1000.0f,100.0f,1000.0f),
	D3DXVECTOR3(1000.0f,100.0f,2000.0f),
	D3DXVECTOR3(2000.0f,100.0f,2000.0f),		//	100
	D3DXVECTOR3(2000.0f,100.0f,1000.0f),
	D3DXVECTOR3(2000.0f,100.0f,00.0f),		//
	D3DXVECTOR3(2000.0f,100.0f,-1000.0f),
	D3DXVECTOR3(2000.0f,100.0f,-2000.0f),
	D3DXVECTOR3(1000.0f,100.0f,-2000.0f),		//	15
	D3DXVECTOR3(00.0f,100.0f,-2000.0f),
	D3DXVECTOR3(-1000.0f,100.0f,-2000.0f),	//
	D3DXVECTOR3(-2000.0f,100.0f,2000.0f),
	D3DXVECTOR3(-2000.0f,100.0f,1000.0f),
	D3DXVECTOR3(-2000.0f,100.0f,00.0f),		//	200
	D3DXVECTOR3(-2000.0f,100.0f,1000.0f),
	D3DXVECTOR3(-2000.0f,100.0f,2000.0f),		//
	D3DXVECTOR3(-1000.0f,100.0f,2000.0f),
	D3DXVECTOR3(00.0f,100.0f,2000.0f),
	D3DXVECTOR3(2000.0f,100.0f,3000.0f),	//	25
	D3DXVECTOR3(3000.0f,100.0f,3000.0f),
	D3DXVECTOR3(3000.0f,100.0f,2000.0f),	//
	D3DXVECTOR3(3000.0f,100.0f,1000.0f),
	D3DXVECTOR3(3000.0f,100.0f,00.0f),
	D3DXVECTOR3(3000.0f,100.0f,1000.0f),	//	300
	D3DXVECTOR3(3000.0f,100.0f,-2000.0f),
	D3DXVECTOR3(3000.0f,100.0f,-3000.0f),	//
	D3DXVECTOR3(2000.0f,100.0f,-3000.0f),
	D3DXVECTOR3(1000.0f,100.0f,-3000.0f),
	D3DXVECTOR3(00.0f,100.0f,-3000.0f),	//	35
	D3DXVECTOR3(-1000.0f,100.0f,-3000.0f),
	D3DXVECTOR3(-2000.0f,100.0f,-3000.0f),	//
	D3DXVECTOR3(-3000.0f,100.0f,-3000.0f),
	D3DXVECTOR3(-3000.0f,100.0f,-2000.0f),
	D3DXVECTOR3(-3000.0f,100.0f,-1000.0f),	//	40
	D3DXVECTOR3(-3000.0f,100.0f,00.0f),
	D3DXVECTOR3(-3000.0f,100.0f,1000.0f),	//
	D3DXVECTOR3(-3000.0f,100.0f,2000.0f),
	D3DXVECTOR3(-3000.0f,100.0f,3000.0f),
	D3DXVECTOR3(-2000.0f,100.0f,3000.0f),	//	45
	D3DXVECTOR3(-1000.0f,100.0f,3000.0f),
	D3DXVECTOR3(00.0f,100.0f,3000.0f),	//
	D3DXVECTOR3(1000.0f,100.0f,3000.0f),
	D3DXVECTOR3(7500.0f,100.0f,7500.0f),
	D3DXVECTOR3(7500.0f,100.0f,00.0f),	//	50
	D3DXVECTOR3(7500.0f,100.0f,-7500.0f),
	D3DXVECTOR3(00.0f,100.0f,-7500.0f),	//
	D3DXVECTOR3(-7500.0f,100.0f,-7500.0f),
	D3DXVECTOR3(-7500.0f,100.0f,00.0f),
	D3DXVECTOR3(-7500.0f,100.0f,7500.0f),	//	
	D3DXVECTOR3(00.0f,100.0f,7500.0f),
	D3DXVECTOR3(10000.0f,100.0f,10000.0f),	//
	D3DXVECTOR3(-10000.0f,100.0f,-10000.0f),
	D3DXVECTOR3(00.0f,100.0f,00.0f),	//	59
};


#endif
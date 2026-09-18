#include "PlayScene.h"
#include "Tank.h"
#include "Ground.h"

PlayScene::PlayScene(GameObject* parent)
	:GameObject(parent, "PlayScene")
{
}

void PlayScene::Initialize()
{
	// 実体化するところ
	Instantiate<Ground>(this); // 親をPlaySceneにして地面を生成
	Instantiate<Tank>(this);
}

void PlayScene::Update()
{
}

void PlayScene::Draw()
{
}

void PlayScene::Release()
{
}

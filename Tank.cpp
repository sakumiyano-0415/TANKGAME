#include "Tank.h"
#include "Engine\\Input.h"
#include "Engine\\Model.h"

Tank::Tank(GameObject* parent)
	: GameObject(parent, "Tank"), hModel_(-1)
{
}

Tank::~Tank()
{
	
}

void Tank::Initialize()
{
	hModel_ = Model::Load("TankBody.fbx");
	assert(hModel_ >= 0);
}

void Tank::Update()
{
	if (Input::IsKey(DIK_LEFT) || Input::IsKey(DIK_A))
	{
		transform_.rotate_.y = transform_.rotate_.y - 0.5f;
	}
	if (Input::IsKey(DIK_RIGHT) || Input::IsKey(DIK_D))
	{
		transform_.rotate_.y = transform_.rotate_.y + 0.5f;
	}
}

void Tank::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Tank::Release()
{
}

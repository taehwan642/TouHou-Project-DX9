#pragma once
#include "Types.h"
#include "Node.h"

class Renderer : public Singleton<Renderer>
{
public:
	void AddRenderTarget(Node* node);
	void RemoveRenderTarget(Node* node);
	void Render();
private:
	//�̰ǹ��ϴ¿뵵��? ��Ȯ�� �갡 ��� ���� �� �ϴ��� �˷��a
	list<Node*> _rendertargets;
	//�ֽ���ƽ������?
	static bool Comp(Node* a,Node* b);
};


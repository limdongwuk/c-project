#pragma once
//4005: �׷��� �������̽� ->��ũ�� ������ ��� -> �̸� �����ϰڴ�.
#pragma warning(dsiable :4005)

//�ڵ� �� ��� ���� -> OS �������� ����
#include<SDKDDKVer.h> //������ �Լ�(������ ���ʿ������ �޸𸮾ȸ���(����� ���غ��� �ʴ´�)

//���� ������ �ʴ� ������ Windows ������� ��Ȱ��ȭ�մϴ�.
#define WIN32_LEAN_AND_MEAN
 // #include <ole2.h> ȸ���Ҷ� �� ���Ϸ� �ޱ� win32_lean_and_mean�ȿ� ���ԵǾ��ֱ⶧���� undefine �������

 // ! Windows ��� ����
#include <Windows.h>

// ! C ��Ÿ�� ��� ����
#include <stdlib.h>
#include<malloc.h> //malloc�� Ŭ������ ���⶧���� �����ڸ� ȣ������ �ʰ� new�� ȣ����
#include<memory.h>
// memcpy() / memset() �޸� ���ۿ� ���õ� �κ�
#include <stdio.h>
#include <tchar.h>//���ڼ� ������ ���� �ڵ������� ��ȯ�� ���ִ� �߰� ��ũ�� �ڷ���
//MBCS / WBCS ��Ƽ����Ʈ ĳ���� ��(1����Ʈ) , ������̵� ĳ���� ��(2����Ʈ)

//! C++ ��Ÿ�� ��� ����
#include <iostream>

// STL -> �پ��� ��� / ���е��� ���� (���� �и�)
// �� OS�� ���������� ������ �Ѵٴ°� ���� �Ÿ�Ʈ�� �ִ�.(������ ������� �����ϸ�ȴ�)
#include <chrono>
#include <random>
#include <vector> //���밡���� �������̻� ���� ������? ERASE�� CLEAR ������ (��� ������ �Ѵ� �����ϳ� �����͸� �����ϳ�)

//�˻��ӵ��� ���Ͱ� ������ ���� ������.

#include <map> //�ڷᱸ�� ���� ��� Ʈ������(����) �����Ʈ��<<ã�ƺ���

//�Ϲ��� ��Ȳ������ map���� ���� �� �ִ�.
// �� �� ������ �ϴ� �ߺ� �����͸� ������� �ʴ´�.
// �� ��, ���� �����Ͱ� ���ٸ� �ؽ� �浹 �߻� ���ΰ� �׻� �����Ѵ�.
#include <unordered_map>//�ؽ� �ڷᱸ����

//#include <D2D1.h>
//#include <d2d1helper.h>
//#include <d3dx9.h>
//#include <D3DX11.h>
//#include <d3d11shader.h>
//#include <dinput.h>
//
//#pragma comment(lib, "d2d1.lib")
//#pragma comment(lib, "d3d9.lib")
//#pragma comment(lib, "d3dx9.lib")
//#pragma comment(lib, "d3d11.lib")
//#pragma comment(lib, "d3dd11.lib")
//#pragma comment(lib, "dinput8.lib")
//#pragma comment(lib, "dxguid.lib")
//
//ID2D1Factory* _ID2DFactory = nullptr;
//ID2D1HwndRenderTarget* _ID2DRenderTarget = nullptr;

#include "CommonMacroFunction.h"
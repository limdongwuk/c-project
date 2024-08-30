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

//Stdafx (Standard Application Frameworks)
//�� VS�� �̿��Ͽ� ������Ʈ�� �����ϸ� �����Ǵ� Ŭ���� ��� ->MS
//�� ǥ�� ���ø����̼� �����ӿ�ũ ��

// #���� ���� ��� ����#
#include "CommonMacroFunction.h"
#include "RandomFunction.h"

//#������ ����#
#define RND RandomFunction::getSingleton()  ///������ ���Ͽ� ���� define�� �ظ��ϸ� Ǯ�������� ����)
 //#define RANDOMFUNCTION RandomFunction::getSingleton() //�빮�ڷ�

// #��ũ��#
#define WINNAME             (LPSTR)(TEXT("WindowsAPI"))
#define WINSTART_X          400
#define WINSTART_Y          400
#define WINSIZE_X           800
#define WINSIZE_Y           800
#define WINSTYLE            WS_CAPTION|WS_SYSMENU    //WS_CAPTION Ÿ��Ʋ�ٸ� ������ ���� �ɼ�
//constexpr WINSTYLE
//define �� constexpr�� ���� ������ �˾ƺ�����


/*
define
��ó���� �����ڷ� c++��ó���⸦ ���� ����� ���� �ؽ�Ʈ ġȯ�� ���� �ش� ���� �������� �״�� �ٲ��.
Ÿ�� �˻糪 ���� ������ ���� ������, ������ �������� �ٸ� ��� ���Ͽ� ���ǵǾ� �ִ� 
��ũ�� ���� ����ڰ� ������ ��ũ�� ���� �ߺ��Ǿ� ������ ��ȣ���� �߻��� �� �ִ�.

constexpr
������ �ð��� �̸� ���� �� �ֵ��� ������ �� �ִ� Ű����
������ �����ϴ� ����� ����, Ÿ�� �����̳� ���ͷ� ����, ���ø�, ����� ���� ���ĵ� ����
��Ÿ�ӿ� ����� ���ϰ� ������ Ÿ�ӿ� �ϱ� ������ ������. 
constexpr �Լ� ���� ���ǻ���
1. �Լ� �ٱ��� �����͸� �аų� ���� �� �ȴ�.
2. if�� for ���� ���� ������ ����� �Ѵ�.
3. �ϳ��� ��� ���常 �����ϰ� ���� �� �ִ�.
4. �ٸ� constexpr �Լ��� ȣ���� �����ϴ�.

���ڿ� ġȯ ��� ���� �ؽ�Ʈġȯ �����̸�
define ����ؾ� �ϰ�
����� �Լ��� ������ �ǵ��� constexpr

// constexpr �Լ� ����
constexpr int square(int x) {
    return x * x;
}

int main() {
    // ������ Ÿ�ӿ� ����
    constexpr int result = square(5);

    // �Ϲ� �������� ��� ����
    int num = 10;
    int result2 = square(num);
*/




//# ��ũ�� �Լ�#
#define SAFE_DELETE(p)          {if(p) {delete (p); (p) = nullptr;}}
#define SAFE_DELETE_ARRAY(p)    {if(p) {delete[] (p); (p) = nullptr;}}
#define SAFE_RELEASE(p)         {if(p) {(p)->release(); (p) = nullptr;}}

//tempplate <typename InterfaceType>


//#��������#
// ������ ����Ǿ��ִٴ°� ����ϴ� ���Ű����� �����ؾ��� 
// �����ߴٰ� �����ϸ� �ȵȴ�. �̰� �ִٰ� ��ø� ���ִ� ��
//ĳ���� �ε�â���� ĳ���Ͱ� �ҷ������� �ʰ� ���õ� �ٸ��͵��� �ҷ��������� ĳ���Ϳ� ����ȰͿ� ���� ������������� �Ѿ�� �ϴ� ���Ű����
extern HINSTANCE    _hInstance;
extern HWND         _hWnd;
extern POINT        _ptMouse;
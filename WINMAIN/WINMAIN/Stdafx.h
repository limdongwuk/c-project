#pragma once
//4005: 그래픽 인터페이스 ->매크로 관련한 경고 -> 이를 무시하겠다.
#pragma warning(dsiable :4005)

//코드 및 상수 제어 -> OS 레벨에서 관리
#include<SDKDDKVer.h> //컨버팅 함수(컨버팅 할필요없으면 메모리안먹음(써놔도 손해보지 않는다)

//거의 사용되지 않는 내용을 Windows 헤더에서 비활성화합니다.
#define WIN32_LEAN_AND_MEAN
 // #include <ole2.h> 회전할때 씀 오일러 앵글 win32_lean_and_mean안에 포함되어있기때문에 undefine 해줘야함

 // ! Windows 헤더 파일
#include <Windows.h>

// ! C 런타임 헤더 파일
#include <stdlib.h>
#include<malloc.h> //malloc은 클래스가 없기때문에 생성자를 호출하지 않고 new는 호출함
#include<memory.h>
// memcpy() / memset() 메모리 조작에 관련된 부분
#include <stdio.h>
#include <tchar.h>//문자셋 설정에 따라 자동적으로 변환을 해주는 중간 매크로 자료형
//MBCS / WBCS 멀티바이트 캐릭터 샛(1바이트) , 월드와이드 캐릭터 샛(2바이트)

//! C++ 런타임 헤더 파일
#include <iostream>

// STL -> 다양한 기능 / 정밀도가 높다 (나노 밀리)
// ㄴ OS와 독립적으로 동작을 한다는게 아주 매리트가 있다.(완전한 난수라고 생각하면된다)
#include <chrono>
#include <random>
#include <vector> //가용가능한 데이터이상 값이 들어오면? ERASE나 CLEAR 차이점 (방과 데이터 둘다 삭제하냐 데이터만 삭제하냐)

//검색속도가 벡터가 느리고 맵이 빠르다.

#include <map> //자료구조 많이 물어봄 트리구조(비선형) 레드블랙트리<<찾아볼것

//일반적 상황에서는 map보다 빠를 수 있다.
// ㄴ 그 이유는 일단 중복 데이터를 허용하지 않는다.
// ㄴ 단, 유사 데이터가 많다면 해시 충돌 발생 여부가 항상 존재한다.
#include <unordered_map>//해쉬 자료구조형

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
//ㄴ VS를 이용하여 프로젝트를 생성하면 생성되는 클래스 약어 ->MS
//ㄴ 표준 어플리케이션 프레임워크 툴

// #내가 만든 헤더 파일#
#include "CommonMacroFunction.h"
#include "RandomFunction.h"

//#디자인 패턴#
#define RND RandomFunction::getSingleton()  ///디자인 패턴에 대한 define은 왠만하면 풀네임으로 적음)
 //#define RANDOMFUNCTION RandomFunction::getSingleton() //대문자로

// #메크로#
#define WINNAME             (LPSTR)(TEXT("WindowsAPI"))
#define WINSTART_X          400
#define WINSTART_Y          400
#define WINSIZE_X           800
#define WINSIZE_Y           800
#define WINSTYLE            WS_CAPTION|WS_SYSMENU    //WS_CAPTION 타이틀바를 가지기 위한 옵션
//constexpr WINSTYLE
//define 과 constexpr중 선택 차이점 알아봐야함


/*
define
전처리기 지시자로 c++전처리기를 통해 상수를 정의 텍스트 치환을 통해 해당 정의 내용으로 그대로 바뀐다.
타입 검사나 범위 지정이 없기 때문에, 컴파일 과정에서 다른 헤더 파일에 정의되어 있는 
매크로 값과 사용자가 정의한 매크로 값이 중복되어 오류나 모호성이 발생할 수 있다.

constexpr
컴파일 시간에 미리 계산될 수 있도록 지정할 수 있는 키워드
변수를 선언하는 방법과 같게, 타입 지정이나 리터럴 지정, 템플릿, 사용자 정의 형식도 가능
런타임에 계산을 안하고 컴파일 타임에 하기 때문에 빠르다. 
constexpr 함수 사용시 조건사항
1. 함수 바깥의 데이터를 읽거나 쓰면 안 된다.
2. if나 for 같은 제어 구조가 없어야 한다.
3. 하나의 계산 문장만 간단하게 담을 수 있다.
4. 다른 constexpr 함수만 호출이 가능하다.

문자열 치환 등과 같이 텍스트치환 목적이면
define 사용해야 하고
상수나 함수를 쓸때는 되도록 constexpr

// constexpr 함수 예제
constexpr int square(int x) {
    return x * x;
}

int main() {
    // 컴파일 타임에 계산됨
    constexpr int result = square(5);

    // 일반 변수에도 사용 가능
    int num = 10;
    int result2 = square(num);
*/




//# 매크로 함수#
#define SAFE_DELETE(p)          {if(p) {delete (p); (p) = nullptr;}}
#define SAFE_DELETE_ARRAY(p)    {if(p) {delete[] (p); (p) = nullptr;}}
#define SAFE_RELEASE(p)         {if(p) {(p)->release(); (p) = nullptr;}}

//tempplate <typename InterfaceType>


//#전역변수#
// 변수가 선언되어있다는걸 명시하는 명시키워드로 생각해야함 
// 선언했다고 생각하면 안된다. 이게 있다고 명시만 해주는 것
//캐릭터 로딩창에서 캐릭터가 불러와지지 않고 관련된 다른것들이 불러와졌을때 캐릭터와 연결된것에 대해 오류띄우지말고 넘어가게 하는 명시키워드
extern HINSTANCE    _hInstance;
extern HWND         _hWnd;
extern POINT        _ptMouse;
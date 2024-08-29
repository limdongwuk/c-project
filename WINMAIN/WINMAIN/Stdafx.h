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

#include "CommonMacroFunction.h"
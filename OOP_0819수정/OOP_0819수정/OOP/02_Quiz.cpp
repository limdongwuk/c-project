/*



핵심 개념: enum class 활용
1.  fanSpeed 변수에 대해 getter, setter를 선언하고 구현하세요. 그리고 02_Main.cpp에서 setter를 통해 선풍기 객체를 "미풍" 상태로 설정하세요.


1-1. Fan 클래스에 fanSpeed의 값에 따라 현재 바람세기를 출력하는 PrintSpeedInfo() 함수를 만드세요.
	Off: 전원꺼짐 / Low: 미풍 / Middle: 약풍 / High: 강풍
	※ Hint: switch 문을 활용해보세요.


1-2. 이번에는 위에서 추가한 switch 문에서 fanSpeed에 따라 팬 속도를 출력하는 코드를 추가하세요.
	팬 속도는 각각 다음과 같습니다.
	Off: 0 / Low: 10 / Middle: 20 / High: 30
	※ Hint: enum class는 정수값을 넣을 수 있습니다. 이를 활용하면 switch 문 없이 한 줄로 코딩이 가능해요.


1-3. 1-2번을 풀었다면, 생각하고 본인의 생각을 써보세요.
	enum class FanSpeed를 사용하므로써 장점이라고 생각되는 부분을 적어주세요
	서술형 답:



핵심 개념: Setter의 활용
2. Fan 클래스에서 전원이 꺼지게 된다면, 팬 속도가 자동으로 0이 되도록 함수 내용들을 수정해보세요.
	※ Hint: 전원의 켜짐꺼짐을 조종하는 함수는 SetActivate() 입니다.





*/
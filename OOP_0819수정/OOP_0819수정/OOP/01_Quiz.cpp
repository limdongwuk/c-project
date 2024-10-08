/*

핵심 개념: 객체 생성 및 초기화
1. AirConditioner 클래스 코드의 문제점을 찾고, 해당 문제를 수정해보세요.
	※ Hint: 에어컨 객체의 기본 상태는 전원이 꺼져있어야 합니다.



핵심 개념: 객체의 상태 추가
2. AirConditioner 클래스에 "목표 온도"를 나타내는 변수를 추가하고, 01_Main.cpp에서 출력해보세요.
	※ 단 "목표 온도" 변수는 반드시 private으로 설정되어야 합니다.
	※ Advanced: setter를 이용해 직접 온도 설정이 가능하겠지만, 실제랑 비슷하게 1도씩 ± 되도록 함수를 만들어보세요.



핵심 개념: 객체의 행동 추가 / 객체에게 일 시키기
3. AirConditioner 클래스에서 "현재 온도"를 받아 "목표 온도"가 되도록 수정하는 Cooling이라는 함수를 만들어보세요.
	※ Hint: 외부의 값을 수정하기 위해서는 <값을 수정한 뒤 돌려줘야> 겠죠?
	※ Advanced1: 참조타입의 매개변수를 이용해서 수정해보세요.
	※ Advanced2: Cooling 함수가 호출되면 한번에 목표온도로 바꾸지 말고, while문과 Sleep()을 활용해서 천천히 올라가도록 해보세요!



핵심 개념: 두 개 이상의 값 반환하기
Bonus 3. 에어컨을 키면 온도 뿐만 아니라 습도도 낮아지죠? 현재 온도와 습도를 "둘 다" 받아서, 모두 수정하도록 Cooling 함수를 수정해보세요.
	※ 3번 문제의 Advanced1을 푸셨다면 가능합니다.



핵심 개념: 객체의 상수 멤버 변수 / getter와 setter를 활용한 캡슐화
4. AirConditioner 클래스에 "에어컨 브랜드 이름"을 저장하는 변수를 선언해주세요. 단 이 변수는 상수로 선언해야 합니다.
	※ Hint: '에어컨 브랜드'는 에어컨 객체가 <만들어지는 순간 정해지고 바뀌지 않죠>
	


	4-1. "에어컨 브랜드" 변수는 어디서 초기화해야 할까요? - 1번에 적힌 브랜드 라는 특징을 생각해보세요.
	서술형 답:


	4-2. 브랜드 라는 특징을 생각할 때, getter와 setter 중 필요한 것들을 선언하고 구현해보세요. 왜 그렇게 구현했는지 적어주세요.
	서술형 답:


*/
## JAVA Courses
 생활 코딩 : [Java 입문 수업](https://www.youtube.com/playlist?list=PLuHgQVnccGMCeAy-2-llhw3nWoQKUvQck)

## JAVA Calculator
- 자바로 터미널 계산기 만들기
- 자바로 GUI 계산기 만들기
    - [참고 사이트](https://m.blog.naver.com/dawonchu99/221754223779)


---
### 변수
- 숫자
```java
int a = 1
System.out.println(a+2);
```
- 문자
```java
String hi = "안녕"
System.out.println(hi+"하세요");
```

### 반복문
- while문
```java
while(조건){
    반복 실행 영역
}
```
- for문
```java
for(초기화; 종료조건; 반복실행){
    반복적으로 실행될 구문
}
```

### 객체 지향 프로그래밍(Object-Oriented Programming)
- 객체(상태+행위) 기반 프로그래밍
- 객체화 : 반복적으로 사용되는 것을 줄이기 위해
```java
class Calculator {} // 클래스

Calculator c1 = new Calculator(); // 인스턴스
```

### 생성자
- 값을 반환 X
- 생성자의 이름 == 클래스의 이름
```java
Calculator c1 = new Calculator(10, 20); // 생성자 생성
```

### 상속
- 기존의 객체 유지 + 새로운 기능 추가
- super : 부모 클래스 지칭
```java
class B extends A {
    public B(int left, int right){
        super(left,right);
    }
}
```

### OverLoading(오버로딩)
- 하나의 메소드로 여러 기능 구현
- 같은 이름 메소드, 여러 매개변수 유형/개수

### OverRiding(오버라이딩)
- 상위 클래스 메소드를 하위 클래스가 재정의

|         |OverLoading|OverRiding|
|---------|:----------:|:---------:|
|리턴값|상관X|동일|
|메소드명|동일|동일|
|매개변수|다름|동일|
|적용범위|동일 클래스 내|상속관계|

### 접근 제어자
|         |같은 클래스|같은 패키지|다른 패키지 서브클래스|관계없음|
|---------|:-------:|:--------:|:-----------------:|:-----:|
|public|O|O|O|O|
|protected|O|O|O|X|
|default|O|O|X|X|
|private|O|X|X|X|

### 예외
- Checked Exception : 예외 상황 복구 가능 ex) 파일 불러오기 오류
- UnChecked Exception : 예외 상황 복구 불가능 ex) 산술 문제

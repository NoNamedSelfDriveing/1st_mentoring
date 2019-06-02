Study
======

## 전처리기
- #표시가 들어가는 것
- #include 말 그대로, 뒤에 '파일을 포함한다.'라는 기능을 가지고 있다.

## 헤더파일
- 라이브러리를 사용하기 위한 파일
- 파일 확장자는 *.h로 정의
- 라이브러리 파일과 연결되어 있음
- 항상 소스의 가장 상단에 위치

## include <stdio.h>
- printf와 같은 함수를 쓰기위한 정보를 stdio라는 라이브러리에서 불러 온다.

## main 
- 프로그램의 시작점이자 프로그램의 끝
- main함수가 없으면 컴파일러는 오류 메세지 하나를 남긴체 죽게 되다.
고로 main함수는 필수 요소이다.

## main함수 파헤치기
~~~c
#include <stdio.h>
int main() {
    
    printf("Hello, Wrold!\n");
    
    return 0;

}
~~~
- int main() {} : 가장 먼저 실행되는 특별한 함수입니다.     
- printf("Hello World!\n"); : ""안에 있는 Hello World를 출력한다. \n은 줄옴기기이다.
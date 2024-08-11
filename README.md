---
# 프로젝트 주제 (ROS Turtlebot을 활용한 프로젝트)
---
![header](https://capsule-render.vercel.app/api?type=venom&color=0:B6FFFA,100:80B3FF&height=200&section=header&text=자율주행%20로봇%20기반%20지능형%20운반%20시스템&fontSize=40)
---
## 작품 기간 : 24.06.03 ~ 24.07.10
![image](https://github.com/user-attachments/assets/9c66d258-1c28-4061-ad8c-472d166aa00f)
---
## 주제 선정 배경
ROS Turtlebot3를 활용하여 자율주행이 가능한 무인 운반 시스템과 스마트 물류 시스템 적용을 하여 근로환경 개선을 위해 선정하게 되었다.

## 활용 분야
창고 및 유통 센터, 제조업, 소매 및 마트 체인, 항만 및 공항, 농업 분야, 건설 현장, 의료 및 병원 다양한 곳에서 운반 및 적재 시스템을 활용 가능

## 기술 구현 목표
### ROS(자율 주행 시스템), QT
- QT로 수동, 자율 주행, 귀환 모드를 만들어 ROS로 제어
- ROS의 위치 상태를 실시간으로 체크해 QT로 Map 표시
- 적재 위치를 매핑시켜 ROS에게 임무를 주면 지정 포인트 좌표로 이동
- QT에서 기능 선택 시 server에 명령어 메시지 전송

### STM32 MCU
- BlueTooth 통신을 통해 리니어 액추에이터 작동 구현으로 지게차의 지게 기능을 구현한다.
- QT에서 명령어를 보내거나, 동작을 시키면 server로 명령어 메시지 전송

## 기대 효과
- 작업 효율성 증가<br>
: 프로그래밍된 경로를 따라 작동 가능해 전체적인 작업 흐름을 빠르고 효율적으로 만들 수 있다.

- 인건비 절감<br>
: 자동화된 시스템으로 더욱 전략적이고 생산적인 작업을 할당함으로써 인건비 절감이 가능하다.

- 작업자 안전 개선<br>
: 작업시 물리적 부상과 사고를 줄일 수 있다.

- 자원 이용 최적화<br>
: 에너지 및 자원 사용을 최적화하여 운영하므로 전체 에너지 소비를 줄이고 환경에 미치는 영향 최소화 시킨다.

- 스마트 물류 시스템의 확장성과 유연성<br>
: 시스템을 쉽게 확장하거나 수정하여 다양한 작업 요구와 환경 변화에 맞출 수 있다.
---
## 시스템 구성도
![image](https://github.com/user-attachments/assets/d707298b-339e-4a9b-be23-c5fea90e1362)

# STM32 Cortex-M4와 Linear Actuator 회로도
![image](https://github.com/user-attachments/assets/9a045bd9-0c09-4b24-bf5e-0432467e10b8)

---
## 개발 환경
![image](https://github.com/user-attachments/assets/e9307b05-652a-429f-90f9-0a7a2798e9ac)

## 프로젝트 팀원
|  | 이  름 | 역할 분담 |
| --- | --- | --- |
| 팀장 | 이유진 | ROS Turtlebot3 자율주행 구현 및 제어, 시스템 인터페이스 구현, QT GUI 설계 및 개발 |
| 팀원 | 권유진 | ROS Turtlebot3 자율주행 구현 및 제어, 시스템 인터페이스 구현, QT GUI 설계 및 개발 |
| 팀원 | 신혜원 | STM32 Cortex-M4 Linear Actuator, Bluetooth |
| 팀원 | 이병찬 | ROS Turtlebot3 자율주행 구현 및 제어, 시스템 인터페이스 구현, QT GUI 설계 및 개발 |
| 팀원 | 정우택 | STM32 Cortex-M4 Linear Actuator, Bluetooth |

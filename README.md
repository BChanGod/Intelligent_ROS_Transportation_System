# 인텔리전트ROS_운송_시스템

---
# Project Topic
---
![서문](https:/ 캡슐 - 렌더.vercel.app/api?type= venom&color= 0:3ABEF9,100:b678c4&높이=200§이온=header&text=자율%20주행%20로봇%20기반%20지능형%20운반%20시스템&폰츠사이즈=40)
---
## 공사기간 : 24.04.15 ~ 24.04.22
---
## 주제 선택 배경
저희는 운동에 관심이 많다 보니 운동을 할 때 불편한 점이 무엇일까 고민하다가 STM32 MCU로 구현할 운동 기계를 생각했습니다.
<br>

헬스장에는 대표적인 유산소 운동기구로 러닝머신이 있습니다. 하지만 기존 러닝머신이 운동을 마치고 기계를 종료하면 더 이상 운동 기록을 볼 수 없게 되어 운동을 하면서 신체의 성장이나 운동 계획의 진행을 이해하기가 어려워집니다.
<br>

이 때문에 운동 후에도 개인이나 서버에 운동 기록을 저장하면 운동 계획과 목표를 세우고 달성할 수 있으며, 건강 관리나 운동 루틴을 만들고 자신이 성장하는 모습을 보면서 운동을 즐길 수 있습니다.

## 기술 구현 목표
<Using STM32 MCU 키트>
1. DC 모터를 사용한 런닝 머신 구현
2. Push Button으로 런닝머신 기능 추가<br>
(Start/Stop 1, Speed Down 2(--), Speed up 3(++ PWM 제어)
3.LCD에 출력되는 Kcal(km), Kcal는 평균 중량을 기준으로 계산됩니다<br>
(Km = speed x time, Kcal = 0.0157*((0.1 * speed + 3.5) / 3.5) * weight * time)
4.Array FND는 UpCount를 4자리 FND까지 구현하고 Motor가 작동 중인 경우에만 Count 기능을 추가합니다.
5.BlueTooth로 DB에 결과 전송

<Using 아두이노 위원회>
1. DHT 센서로 온/습도를 측정하여 불쾌지수를 표시합니다.
2.A/C will be implemented with Servo Motor and A/C operation if the discomfort index is 75 or higher (usually high if the discomfort index is 75 or higher).
3.Send sensor data to DB with WIFI

< RaspberryPi DB 구축 >
1. Create a DB using MariaDB
2.Machine table, A/C table and receive data every n seconds
3. Table PHP, graph visualization

<Android 앱. >
1. Sensor sent to DB, actuator data value in app
-데이터 방식은 Clean@temp/humi/disgusting index, Machine@Km@Kcal@time 입니다.

---
## Configuration diagram
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/7bb57cba-f162-4255-adbf-fbfcb36f936d)
## 하드웨어
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/dffa27f8-3e7c-45a3-bfc4-4f95e32a5787)
## op/humidity 센서로 불쾌지수 측정
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/41df776a-a675-433c-b379-0db9db23b340)
## Android 앱에서 센서, 액추에이터 데이터 생성
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/13187e5f-c8c2-4ef4-ae5c-64846ae80763)
## 기계 표 DB
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/1a1070b7-8b4c-459b-aae2-bffb2de40046)
## 에어컨 테이블 DB
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/3b9494df-6e19-4779-9d35-028bb00c30ba)
---
## 개발 환경
| 위원회 | 아두이노. | STM32 MCU KIT | 복분자 파이|
| --- | --- | --- | --- |
|언어 | C++ |C/C++ |C, PHP|
|OS | Windows | RaspberryPi, Linux|
|시스템 | 아두이노 IDE | STM32CubeIDE | 안드로이드, APACH, 마리아DB|

## 프로젝트팀원
|  | 이름. | 역할공유 |
| --- | --- | --- |
|팀원 | 구주헌 | STM32CubeIDE Running Machine 구현, DB 생성, 데이터 시각화, Android|

## 문제
Bluetooth 모듈을 사용한 메시지 전송이 제대로 처리되지 않을 때 문제가 발생합니다.
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/3760d6c1-9c95-46dd-b0e9-633b5006f67e)

## 솔루션플랜
Delay를 주어 해결
![이미지](https://github.com/BChanGod/HealthCareSystem/assets/159971128/88fb59f2-a934-420e-8faa-a6607d389b07)

## 향후 목표
1. 웨어러블을 접목하여 심박 측정 기능 추가
2.운동 앱으로 운동기구 제어기능 추가
3. anaerobic운동기록 측정

## references, literature
불쾌지수 > 생활기상지수 > 도움말 (weather.go.kr)
![image](https://github.com/BChanGod/HealthCareSystem/assets/159971128/0f53c483-f3a0-47d7-b963-3881681d64bf)

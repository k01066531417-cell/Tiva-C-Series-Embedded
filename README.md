# 📟 Tiva C Series Embedded System Development
Texas Instruments의 **TM4C123GXL (Tiva C)** 보드와 **Code Composer Studio (CCS)**를 활용한 마이크로컨트롤러 제어 및 임베디드 소프트웨어 실습 기록입니다.

### 🛠 Development Environment
- **MCU:** Tiva C Series (ARM Cortex-M4F)
- **IDE:** Code Composer Studio (CCS) v12+
- **Compiler:** TI v22.6.x LTS
- **Language:** C, C++

### 🚀 핵심 실습 및 구현 내용
이번 학기 동안 CCS를 활용하여 구현한 주요 하드웨어 제어 기능들입니다.

1. **System Control & Clock Configuration**
   - `SysCtlClockFreqSet`을 활용한 시스템 클럭 설정 및 전력 최적화
   - 정밀한 시간 제어를 위한 타이머 인터럽트 구현

2. **Peripheral Interfacing (GPIO & UART)**
   - **GPIO:** 포트 및 핀 방향 설정, 인터럽트 처리를 통한 LED 및 스위치 제어
   - **UART:** 시리얼 통신을 이용한 PC와의 데이터 송수신 및 디버깅 환경 구축

3. **Memory Management (Embedded C)**
   - 제한된 SRAM 환경에서의 효율적인 변수 할당 및 메모리 맵 분석
   - 직접 구현한 자료구조(Linked List 등)를 임베디드 시스템에 이식

### 💡 CCS 활용 역량
- **Debugger 활용:** Breakpoint 및 Watch Window를 통한 실시간 변수 모니터링 및 로직 검증
- **Project Structure:** 복잡한 헤더 파일(.h)과 소스 파일(.c)의 종속 관계를 관리하고 빌드 설정을 최적화함

---
"하드웨어와 소프트웨어의 경계에서 최적의 성능을 끌어내는 개발을 지향합니다."

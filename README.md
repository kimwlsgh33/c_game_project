# c_game_project

--- 
2024-03-19
---

- Doxyfile
  - `sudo apt install doxygen doxygen-gui`
- .gitignore 추가
- .vscode/ 추가
  - tasks.json
  - launch.json
  - settings.json
  - c_cpp_properties.json

- CMakeFiles.txt 작성
  - 폴내 내부 모든 소스 파일 인식 
    - `file(GLOB SRC_FILES "*.c")`
  - 실행 파일 install 설정
    - `install(TARGETS main DESTINATION /usr/local/bin)`
  - 헤더 및 소스 파일 install 설정
    - `install(DIRECTORY ${CMAKE_SOURCE_DIR}/include/ DESTINATION /usr/local/include)`
    - `install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/ DESTINATION /usr/local/src FILES_MATCHING PATTERN "*.c")`
  - 오브젝트 파일은 라이브러리 배포가 아니기 때문에 생략(?)
  
- 파일 나누기
  - 메인 함수: main.c
  - 화면 출력: display_menu.c, display_tetris.c
  - 게임 로직: update.c
  - 키  인 식: getch.c

- 화면을 1/60초 마다 새로고침 -> signal 함수를 60Hz 설정

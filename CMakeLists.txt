cmake_minimum_required(VERSION 3.29.0)
#x项目描述 
project(planning
    VERSION 0.01
    DESCRIPTION "a demo of lenrnning complicated cmake"
    HOMEPAGE_URL "https://github.com/yushubo/cmake_planning_2.git"
    LANGUAGES CXX
)
# C++版本
set(CMAKE_CXX_STANDARD 17)
#设置exe和dll的输出目录
# PROJECT_SOURCE_DIR 和 CMAKE_SOURCE_DIR 的区别
# PROJECT_SOURCE_DIR　是会随着　CMakeLists.txt　位置变化　　　　是项目目录
#　CMAKE_SOURCE_DIR　一直是根目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#　设置变量，方便子文件使用
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_MAP_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)
#　添加子目录
add_subdirectory(src)
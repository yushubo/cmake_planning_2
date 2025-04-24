project(planning_main)
# 添加子目录
add_subdirectory(pnc_map)
add_subdirectory(process)
# 可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)
# 添加头文件搜索路径
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
)
# 连接动态库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    process
)
project(planning_main)
# 添加子目录
add_subdirectory(pnc_map)
add_subdirectory(process)
add_subdirectory(show_result)
# 可执行文件
add_executable(${PROJECT_NAME} planning_main.cpp)
# 添加头文件搜索路径
target_include_directories(${PROJECT_NAME}
PUBLIC
${Process_Dir}
${Show_Result_Dir}
)
# 连接动态库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    process
)
# 连接绘制结果动态库
target_link_libraries(${PROJECT_NAME}
    PUBLIC
    show_result
)
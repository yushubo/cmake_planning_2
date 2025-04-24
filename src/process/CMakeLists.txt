project(process)
# 生成动态库
add_library(${PROJECT_NAME}
SHARED
process.cpp
)
# 添加使用到的头文件目录
target_include_directories(${PROJECT_NAME}
PUBLIC
${PNC_MAP_Dir}
)
# 动态库链接另外一个动态库
target_link_libraries(${PROJECT_NAME}
PUBLIC
pnc_map
)
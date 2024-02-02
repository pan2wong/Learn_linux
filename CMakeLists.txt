# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)

# 项目信息
project (Part3)

aux_source_directory(. DIR_SRCS)

#LINK_LIBRARIES(m)  #链接math

# 指定生成目标
#add_subdirectory(smpSine) #指定子文件
#aux_source_directory(. DIR_SRCS)
add_executable(Part3 ${DIR_SRCS})

# 添加链接库
#target_link_libraries(Demo smpSineFunctions)

#include "ros/ros.h"
#include "head_src/haha.h"

namespace hello_ns
{
    my::my(int m_count)         // 构造函数，加作用域 my::my
    {
        this->count = m_count;
    }

    void my::run()
    {
        ROS_INFO("hello! 会飞的熊 %d", count);
        count += 1;
    }

} // namespace name

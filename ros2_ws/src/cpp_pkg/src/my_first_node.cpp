#include "rclcpp/rclcpp.hpp"
using namespace rclcpp;
using namespace std;

class MyNode : public Node
{
public:
    MyNode() : Node("cpp_test"), counter_(0)
    {
        RCLCPP_INFO(this->get_logger(), "Hello CPP node");
        timer_ = this->create_wall_timer(chrono::seconds(1), bind(&MyNode::timerCallback, this));
    }

private:
    void timerCallback()
    {
        counter_++;
        RCLCPP_INFO(this->get_logger(), "Hello %d", counter_);
    }

    TimerBase::SharedPtr timer_;
    int counter_;
};

int main(int argc, char **argv)
{

    init(argc, argv); // initialize ROS 2 communication

    auto node = make_shared<MyNode>(); // create a node

    // RCLCPP_INFO(node->get_logger(), "Hello CPP node"); // print a message to the screen

    spin(node);

    shutdown(); // shutdown ROS 2 communication
    return 0;
}

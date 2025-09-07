#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[])
{
  // Initialize the ROS 2 client library
  rclcpp::init(argc, argv);
  // Create a node named "helloworld_node"
  auto node = rclcpp::Node::make_shared("helloworld_node");
  // Log "Hello, world!" to the console
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Hello, world!");
  // Shutdown the ROS 2 client library
  rclcpp::shutdown();
  return 0;
}

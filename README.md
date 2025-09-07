# HelloWorld-C++

## 1. 创建功能包

进入工作区的 `src` 目录下，执行以下命令：

`ros2 pkg create helloworld_cpp --build-type ament_cmake --dependencies rclcpp --node-name helloworld-node`

## 2. 编写源代码

## 3. 设置编译规则

`package.xml` 与 `CMakeLists.txt` 文件

## 4. 编译与调试

进入工作区，执行 `colcon build` 命令

## 5. 功能运行

进入工作区，执行以下指令：

```bash
source install/setup.bash
ros2 run helloworld_cpp helloworld-node
```


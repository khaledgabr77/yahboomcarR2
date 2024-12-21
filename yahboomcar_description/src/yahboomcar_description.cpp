#include <functional>

#include <yahboomcar_description/yahboomcar_description.hpp>


namespace yahboomcar_description {


/**
 * @brief Constructor
 *
 * @param options node options
 */
YahboomcarDescription::YahboomcarDescription() : Node("yahboomcar_description") {

  this->setup();
}


/**
 * @brief Sets up subscribers, publishers, etc. to configure the node
 */
void YahboomcarDescription::setup() {
}


}


int main(int argc, char *argv[]) {

  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<yahboomcar_description::YahboomcarDescription>());
  rclcpp::shutdown();

  return 0;
}

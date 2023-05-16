#include <coroutine>
#include <iostream>
#include <memory>
template<typename T_0>
struct date_future {
  std::shared_ptr<T_0> value;
  date_future(std::shared_ptr<T_0> p_1): value(p_1) {}
  ~date_future() { }
  T_0 get() {
    return *value;
  }
  struct promise_type {
    std::shared_ptr<T_0> ptr = std::make_shared<T_0>();
    ~promise_type() { }
    date_future<T_0> get_return_object() {
      return ptr;
  }
  void return_value(T_0 k) {
    *ptr = k;
  }
  std::suspend_never initial_suspend() {
    return {};
  }
  std::suspend_never final_suspend() noexcept {
    return {};
  }
  void unhandled_exception() {
    std::exit(1);
  }
};
};
date_future<int> createFuture_0() {
co_return 2022;
}
int main() {
std::cout << '\n';
auto fut_1 = createFuture_0();
std::cout << "fut_1.get(): " << fut_1.get() << '\n';
std::cout << '\n';
}

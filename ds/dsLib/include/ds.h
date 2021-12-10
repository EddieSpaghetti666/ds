#include <optional>
#include <vector>

namespace ds {

  template<typename C, typename V>
  auto contains(const C& c, const V& v) -> decltype(std::end(c), true){
    return std::end(c) != std::find(c.begin(), c.end(), v);
  }

template <typename T>
std::optional<T> find(const std::vector<T>& vec, const T target) {
   const auto targetPosition = std::find(vec.begin(), vec.end(), target);
  if (targetPosition != vec.end())
    return *targetPosition;
  else
    return std::nullopt;
}
}  // namespace ds
#pragma once
// IWYU pragma private; include "Unity/Cinemachine/ICinemachineMixer.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineMixer_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineCamera_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::ICinemachineMixer.IsLiveChild
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::ICinemachineMixer::*)(::Unity::Cinemachine::ICinemachineCamera*, bool)>(&::Unity::Cinemachine::ICinemachineMixer::IsLiveChild)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::ICinemachineMixer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::ICinemachineMixer*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Unity::Cinemachine::ICinemachineMixer::IsLiveChild(::Unity::Cinemachine::ICinemachineCamera*  child, bool  dominantChildOnly)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::ICinemachineMixer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child, dominantChildOnly);
}
/// @brief Convert operator to "::Unity::Cinemachine::ICinemachineCamera"
constexpr  Unity::Cinemachine::ICinemachineMixer::operator ::Unity::Cinemachine::ICinemachineCamera*() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}
/// @brief Convert to "::Unity::Cinemachine::ICinemachineCamera"
constexpr ::Unity::Cinemachine::ICinemachineCamera* Unity::Cinemachine::ICinemachineMixer::i___Unity__Cinemachine__ICinemachineCamera() noexcept {
return static_cast<::Unity::Cinemachine::ICinemachineCamera*>(static_cast<void*>(this));
}

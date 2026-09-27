#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/QuaternionUnityEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__QuaternionUnityEvent_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::QuaternionUnityEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::QuaternionUnityEvent::*)()>(&::Unity::XR::CoreUtils::QuaternionUnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3f29c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::QuaternionUnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::QuaternionUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::QuaternionUnityEvent* Unity::XR::CoreUtils::QuaternionUnityEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::QuaternionUnityEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::QuaternionUnityEvent::QuaternionUnityEvent()   {
}

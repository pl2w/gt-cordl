#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ColorUnityEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ColorUnityEvent_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::ColorUnityEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::ColorUnityEvent::*)()>(&::Unity::XR::CoreUtils::ColorUnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3f2a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ColorUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::ColorUnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ColorUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::ColorUnityEvent* Unity::XR::CoreUtils::ColorUnityEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ColorUnityEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::ColorUnityEvent::ColorUnityEvent()   {
}

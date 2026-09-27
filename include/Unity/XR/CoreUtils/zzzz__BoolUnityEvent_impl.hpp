#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/BoolUnityEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__BoolUnityEvent_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::BoolUnityEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::BoolUnityEvent::*)()>(&::Unity::XR::CoreUtils::BoolUnityEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb3f285c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoolUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::BoolUnityEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::BoolUnityEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::XR::CoreUtils::BoolUnityEvent* Unity::XR::CoreUtils::BoolUnityEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::BoolUnityEvent*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::BoolUnityEvent::BoolUnityEvent()   {
}

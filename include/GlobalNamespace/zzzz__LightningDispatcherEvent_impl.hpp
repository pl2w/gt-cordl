#pragma once
// IWYU pragma private; include "GlobalNamespace/LightningDispatcherEvent.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightningDispatcherEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightningDispatcherEvent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightningDispatcherEvent::*)()>(&::GlobalNamespace::LightningDispatcherEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5b2ea84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcherEvent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LightningDispatcherEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightningDispatcherEvent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightningDispatcherEvent* GlobalNamespace::LightningDispatcherEvent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightningDispatcherEvent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightningDispatcherEvent::LightningDispatcherEvent()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GameNoiseEvent.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__GameNoiseEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameNoiseEvent.IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameNoiseEvent::*)()>(&::GlobalNamespace::GameNoiseEvent::IsValid)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x589f128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameNoiseEvent>(),
                        {"IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::GameNoiseEvent::IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameNoiseEvent>(),
                        {"IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "eventTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "magnitude", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GameNoiseEvent::GameNoiseEvent(::UnityEngine::Vector3  position, double_t  eventTime, float_t  duration, float_t  magnitude) noexcept  {
this->position = position;
this->eventTime = eventTime;
this->duration = duration;
this->magnitude = magnitude;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameNoiseEvent::GameNoiseEvent()   {
}

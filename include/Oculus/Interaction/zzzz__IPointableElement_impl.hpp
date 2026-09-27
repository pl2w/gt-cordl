#pragma once
// IWYU pragma private; include "Oculus/Interaction/IPointableElement.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::IPointableElement.ProcessPointerEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::IPointableElement::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::IPointableElement::ProcessPointerEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::IPointableElement*>(),
                    {::i2c::class_of<::Oculus::Interaction::IPointableElement*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::IPointableElement::ProcessPointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::IPointableElement*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
constexpr  Oculus::Interaction::IPointableElement::operator ::Oculus::Interaction::IPointable*() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointable"
constexpr ::Oculus::Interaction::IPointable* Oculus::Interaction::IPointableElement::i___Oculus__Interaction__IPointable() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}

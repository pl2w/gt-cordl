#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/OVRTouch.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Touch_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__OVRTouch_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IButton_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRTouch.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Input::OVRTouch::*)()>(&::Oculus::Interaction::Input::OVRTouch::Value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4212e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRTouch*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::OVRTouch._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::OVRTouch::*)()>(&::Oculus::Interaction::Input::OVRTouch::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa421344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRTouch*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::Input::OVRTouch::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::Input::OVRTouch::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::Input::OVRTouch::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::GlobalNamespace::OVRInput_Touch& Oculus::Interaction::Input::OVRTouch::__cordl_internal_get__touch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touch;
}
constexpr ::GlobalNamespace::OVRInput_Touch const& Oculus::Interaction::Input::OVRTouch::__cordl_internal_get__touch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____touch;
}
constexpr void Oculus::Interaction::Input::OVRTouch::__cordl_internal_set__touch(::GlobalNamespace::OVRInput_Touch  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____touch = value;
}
inline bool Oculus::Interaction::Input::OVRTouch::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRTouch*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::OVRTouch::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::OVRTouch*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Input::OVRTouch* Oculus::Interaction::Input::OVRTouch::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::OVRTouch*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr  Oculus::Interaction::Input::OVRTouch::operator ::Oculus::Interaction::Input::IButton*() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* Oculus::Interaction::Input::OVRTouch::i___Oculus__Interaction__Input__IButton() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::OVRTouch::OVRTouch()   {
}

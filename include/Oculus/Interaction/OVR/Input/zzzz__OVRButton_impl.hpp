#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRButton.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Button_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/OVR/Input/zzzz__OVRButton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IButton_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRButton.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OVR::Input::OVRButton::*)()>(&::Oculus::Interaction::OVR::Input::OVRButton::Value)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa41b2b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButton*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OVR::Input::OVRButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OVR::Input::OVRButton::*)()>(&::Oculus::Interaction::OVR::Input::OVRButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa41b318;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRInput_Controller& Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::GlobalNamespace::OVRInput_Controller const& Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
constexpr ::GlobalNamespace::OVRInput_Button& Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr ::GlobalNamespace::OVRInput_Button const& Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Oculus::Interaction::OVR::Input::OVRButton::__cordl_internal_set__button(::GlobalNamespace::OVRInput_Button  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
inline bool Oculus::Interaction::OVR::Input::OVRButton::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButton*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::OVR::Input::OVRButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OVR::Input::OVRButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OVR::Input::OVRButton* Oculus::Interaction::OVR::Input::OVRButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OVR::Input::OVRButton*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr  Oculus::Interaction::OVR::Input::OVRButton::operator ::Oculus::Interaction::Input::IButton*() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* Oculus::Interaction::OVR::Input::OVRButton::i___Oculus__Interaction__Input__IButton() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OVR::Input::OVRButton::OVRButton()   {
}

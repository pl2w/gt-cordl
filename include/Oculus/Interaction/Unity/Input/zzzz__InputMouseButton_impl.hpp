#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputMouseButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Unity/Input/zzzz__InputMouseButton_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IButton_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputMouseButton.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Unity::Input::InputMouseButton::*)()>(&::Oculus::Interaction::Unity::Input::InputMouseButton::Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4928e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputMouseButton*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputMouseButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Unity::Input::InputMouseButton::*)()>(&::Oculus::Interaction::Unity::Input::InputMouseButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4928f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputMouseButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::Unity::Input::InputMouseButton::__cordl_internal_get__button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr int32_t const& Oculus::Interaction::Unity::Input::InputMouseButton::__cordl_internal_get__button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____button;
}
constexpr void Oculus::Interaction::Unity::Input::InputMouseButton::__cordl_internal_set__button(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____button = value;
}
inline bool Oculus::Interaction::Unity::Input::InputMouseButton::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputMouseButton*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Unity::Input::InputMouseButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputMouseButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Unity::Input::InputMouseButton* Oculus::Interaction::Unity::Input::InputMouseButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Unity::Input::InputMouseButton*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr  Oculus::Interaction::Unity::Input::InputMouseButton::operator ::Oculus::Interaction::Input::IButton*() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* Oculus::Interaction::Unity::Input::InputMouseButton::i___Oculus__Interaction__Input__IButton() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Unity::Input::InputMouseButton::InputMouseButton()   {
}

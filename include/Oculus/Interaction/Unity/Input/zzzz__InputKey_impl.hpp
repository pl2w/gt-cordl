#pragma once
// IWYU pragma private; include "Oculus/Interaction/Unity/Input/InputKey.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Unity/Input/zzzz__InputKey_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IButton_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputKey.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Unity::Input::InputKey::*)()>(&::Oculus::Interaction::Unity::Input::InputKey::Value)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4928d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputKey*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Unity::Input::InputKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Unity::Input::InputKey::*)()>(&::Oculus::Interaction::Unity::Input::InputKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4928dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputKey*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& Oculus::Interaction::Unity::Input::InputKey::__cordl_internal_get__key()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr ::UnityEngine::KeyCode const& Oculus::Interaction::Unity::Input::InputKey::__cordl_internal_get__key() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____key;
}
constexpr void Oculus::Interaction::Unity::Input::InputKey::__cordl_internal_set__key(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____key = value;
}
inline bool Oculus::Interaction::Unity::Input::InputKey::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputKey*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Unity::Input::InputKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Unity::Input::InputKey*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Unity::Input::InputKey* Oculus::Interaction::Unity::Input::InputKey::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Unity::Input::InputKey*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IButton"
constexpr  Oculus::Interaction::Unity::Input::InputKey::operator ::Oculus::Interaction::Input::IButton*() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IButton"
constexpr ::Oculus::Interaction::Input::IButton* Oculus::Interaction::Unity::Input::InputKey::i___Oculus__Interaction__Input__IButton() noexcept {
return static_cast<::Oculus::Interaction::Input::IButton*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Unity::Input::InputKey::InputKey()   {
}

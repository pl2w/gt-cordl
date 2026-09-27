#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerPrefFlagButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlagButton_ButtonMode_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlags_Flag_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlagButton_def.hpp"
#include "GlobalNamespace/zzzz__PlayerPrefFlagButton_ButtonMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlagButton.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPrefFlagButton::*)()>(&::GlobalNamespace::PlayerPrefFlagButton::OnEnable)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x571277c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlagButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPrefFlagButton::*)()>(&::GlobalNamespace::PlayerPrefFlagButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5712808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(),
                    {::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerPrefFlagButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerPrefFlagButton::*)()>(&::GlobalNamespace::PlayerPrefFlagButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57129e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_flag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr ::GlobalNamespace::PlayerPrefFlags_Flag const& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_flag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flag;
}
constexpr void GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_set_flag(::GlobalNamespace::PlayerPrefFlags_Flag  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flag = value;
}
constexpr ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::PlayerPrefFlagButton_ButtonMode const& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_set_mode(::GlobalNamespace::PlayerPrefFlagButton_ButtonMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr bool& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr bool const& GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::PlayerPrefFlagButton::__cordl_internal_set_value(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void GlobalNamespace::PlayerPrefFlagButton::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPrefFlagButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerPrefFlagButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PlayerPrefFlagButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerPrefFlagButton* GlobalNamespace::PlayerPrefFlagButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerPrefFlagButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerPrefFlagButton::PlayerPrefFlagButton()   {
}

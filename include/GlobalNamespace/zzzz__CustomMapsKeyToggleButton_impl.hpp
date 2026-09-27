#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapsKeyToggleButton.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapsKeyButton_impl.hpp"
#include "GlobalNamespace/zzzz__CustomMapsKeyToggleButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomMapsKeyToggleButton.PressButtonColourUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsKeyToggleButton::*)()>(&::GlobalNamespace::CustomMapsKeyToggleButton::PressButtonColourUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fe9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(),
                    {::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsKeyToggleButton.SetButtonStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsKeyToggleButton::*)(bool)>(&::GlobalNamespace::CustomMapsKeyToggleButton::SetButtonStatus)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x59fe9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(),
                        {"SetButtonStatus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomMapsKeyToggleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CustomMapsKeyToggleButton::*)()>(&::GlobalNamespace::CustomMapsKeyToggleButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59feb38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::CustomMapsKeyToggleButton::__cordl_internal_get_isPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPressed;
}
constexpr bool const& GlobalNamespace::CustomMapsKeyToggleButton::__cordl_internal_get_isPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isPressed;
}
constexpr void GlobalNamespace::CustomMapsKeyToggleButton::__cordl_internal_set_isPressed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isPressed = value;
}
inline void GlobalNamespace::CustomMapsKeyToggleButton::PressButtonColourUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CustomMapsKeyToggleButton::SetButtonStatus(bool  newIsPressed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(),
                        {"SetButtonStatus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIsPressed);
}
inline void GlobalNamespace::CustomMapsKeyToggleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CustomMapsKeyToggleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomMapsKeyToggleButton* GlobalNamespace::CustomMapsKeyToggleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CustomMapsKeyToggleButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomMapsKeyToggleButton::CustomMapsKeyToggleButton()   {
}

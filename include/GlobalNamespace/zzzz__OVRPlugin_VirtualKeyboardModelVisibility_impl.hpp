#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_VirtualKeyboardModelVisibility.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Bool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_VirtualKeyboardModelVisibility_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility.get_Visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::*)()>(&::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::get_Visible)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa60f6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>(),
                        {"get_Visible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility.set_Visible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::*)(bool)>(&::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::set_Visible)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa60f708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>(),
                        {"set_Visible", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::get_Visible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>(),
                        {"get_Visible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::set_Visible(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility>(),
                        {"set_Visible", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_visible", ty: "::GlobalNamespace::OVRPlugin_Bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::OVRPlugin_VirtualKeyboardModelVisibility(::GlobalNamespace::OVRPlugin_Bool  _visible) noexcept  {
this->_visible = _visible;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPlugin_VirtualKeyboardModelVisibility::OVRPlugin_VirtualKeyboardModelVisibility()   {
}

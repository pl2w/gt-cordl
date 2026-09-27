#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapsKeyboard.hpp"
#include "GorillaTagScripts/UI/zzzz__GorillaKeyWrapper_1_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_impl.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapsKeyboard_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapKeyboardBinding_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard.BindingToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding)>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::BindingToString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5bf113c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*>(),
                        {"BindingToString", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::*)()>(&::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5bf12b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::BindingToString(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding  binding)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*>(),
                        {"BindingToString", {}, {::i2c::type_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapKeyboardBinding>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, binding);
}
inline void GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard* GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapsKeyboard::CustomMapsKeyboard()   {
}

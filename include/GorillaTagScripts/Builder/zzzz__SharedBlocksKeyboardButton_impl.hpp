#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksKeyboardButton.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksKeyboardBindings_impl.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksKeyboardButton_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksKeyboardButton.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksKeyboardButton::*)()>(&::GorillaTagScripts::Builder::SharedBlocksKeyboardButton::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c36224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::Builder::SharedBlocksKeyboardButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::Builder::SharedBlocksKeyboardButton::*)()>(&::GorillaTagScripts::Builder::SharedBlocksKeyboardButton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c362a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::Builder::SharedBlocksKeyboardButton::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTagScripts::Builder::SharedBlocksKeyboardButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::Builder::SharedBlocksKeyboardButton* GorillaTagScripts::Builder::SharedBlocksKeyboardButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::Builder::SharedBlocksKeyboardButton*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::Builder::SharedBlocksKeyboardButton::SharedBlocksKeyboardButton()   {
}

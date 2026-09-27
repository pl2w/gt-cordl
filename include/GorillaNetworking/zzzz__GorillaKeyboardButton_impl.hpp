#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaKeyboardButton.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardBindings_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaKeyboardButton_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaKeyboardButton.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaKeyboardButton::*)()>(&::GorillaNetworking::GorillaKeyboardButton::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c876f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaKeyboardButton*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaKeyboardButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaKeyboardButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaKeyboardButton::*)()>(&::GorillaNetworking::GorillaKeyboardButton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c87770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::GorillaKeyboardButton::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaKeyboardButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaKeyboardButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaKeyboardButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaKeyboardButton* GorillaNetworking::GorillaKeyboardButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaKeyboardButton*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaKeyboardButton::GorillaKeyboardButton()   {
}

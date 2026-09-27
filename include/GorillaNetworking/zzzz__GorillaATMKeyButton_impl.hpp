#pragma once
// IWYU pragma private; include "GorillaNetworking/GorillaATMKeyButton.hpp"
#include "GlobalNamespace/zzzz__GorillaKeyButton_1_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaATMKeyBindings_impl.hpp"
#include "GorillaNetworking/zzzz__GorillaATMKeyButton_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::GorillaATMKeyButton.OnButtonPressedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaATMKeyButton::*)()>(&::GorillaNetworking::GorillaATMKeyButton::OnButtonPressedEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c74144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaNetworking::GorillaATMKeyButton*>(),
                    {::i2c::class_of<::GorillaNetworking::GorillaATMKeyButton*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::GorillaATMKeyButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::GorillaATMKeyButton::*)()>(&::GorillaNetworking::GorillaATMKeyButton::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5c741c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaATMKeyButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaNetworking::GorillaATMKeyButton::OnButtonPressedEvent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaNetworking::GorillaATMKeyButton*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaNetworking::GorillaATMKeyButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::GorillaATMKeyButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::GorillaATMKeyButton* GorillaNetworking::GorillaATMKeyButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::GorillaATMKeyButton*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::GorillaATMKeyButton::GorillaATMKeyButton()   {
}

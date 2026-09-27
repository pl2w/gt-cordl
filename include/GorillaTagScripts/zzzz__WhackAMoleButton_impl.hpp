#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMoleButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GorillaTagScripts/zzzz__WhackAMoleButton_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::WhackAMoleButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMoleButton::*)(bool)>(&::GorillaTagScripts::WhackAMoleButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::WhackAMoleButton*>(),
                    {::i2c::class_of<::GorillaTagScripts::WhackAMoleButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTagScripts::WhackAMoleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTagScripts::WhackAMoleButton::*)()>(&::GorillaTagScripts::WhackAMoleButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b80958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTagScripts::WhackAMoleButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::WhackAMoleButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GorillaTagScripts::WhackAMoleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTagScripts::WhackAMoleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTagScripts::WhackAMoleButton* GorillaTagScripts::WhackAMoleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTagScripts::WhackAMoleButton*>());
}
// Ctor Parameters []
constexpr ::GorillaTagScripts::WhackAMoleButton::WhackAMoleButton()   {
}

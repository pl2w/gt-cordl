#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaActionButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaActionButton_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaActionButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaActionButton::*)()>(&::GlobalNamespace::GorillaActionButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x56755f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaActionButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaActionButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaActionButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaActionButton::*)()>(&::GlobalNamespace::GorillaActionButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5675618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaActionButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GorillaActionButton::__cordl_internal_get_onPress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPress;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GorillaActionButton::__cordl_internal_get_onPress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPress;
}
constexpr void GlobalNamespace::GorillaActionButton::__cordl_internal_set_onPress(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPress = value;
}
inline void GlobalNamespace::GorillaActionButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaActionButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaActionButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaActionButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaActionButton* GlobalNamespace::GorillaActionButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaActionButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaActionButton::GorillaActionButton()   {
}

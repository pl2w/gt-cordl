#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModeSelectButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GameModeSelectButton_def.hpp"
#include "GlobalNamespace/zzzz__GameModePages_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectButton::*)()>(&::GlobalNamespace::GameModeSelectButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x579d220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModeSelectButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModeSelectButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModeSelectButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModeSelectButton::*)()>(&::GlobalNamespace::GameModeSelectButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579d24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModePages>& GlobalNamespace::GameModeSelectButton::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::UnityW<::GlobalNamespace::GameModePages> const& GlobalNamespace::GameModeSelectButton::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void GlobalNamespace::GameModeSelectButton::__cordl_internal_set_selector(::UnityW<::GlobalNamespace::GameModePages>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr int32_t& GlobalNamespace::GameModeSelectButton::__cordl_internal_get_buttonIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr int32_t const& GlobalNamespace::GameModeSelectButton::__cordl_internal_get_buttonIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr void GlobalNamespace::GameModeSelectButton::__cordl_internal_set_buttonIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonIndex = value;
}
inline void GlobalNamespace::GameModeSelectButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModeSelectButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModeSelectButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModeSelectButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModeSelectButton* GlobalNamespace::GameModeSelectButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModeSelectButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModeSelectButton::GameModeSelectButton()   {
}

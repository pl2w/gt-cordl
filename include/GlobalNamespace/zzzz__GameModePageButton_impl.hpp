#pragma once
// IWYU pragma private; include "GlobalNamespace/GameModePageButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__GameModePageButton_def.hpp"
#include "GlobalNamespace/zzzz__GameModePages_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameModePageButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePageButton::*)()>(&::GlobalNamespace::GameModePageButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x579c7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GameModePageButton*>(),
                    {::i2c::class_of<::GlobalNamespace::GameModePageButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameModePageButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameModePageButton::*)()>(&::GlobalNamespace::GameModePageButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x579c7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePageButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameModePages>& GlobalNamespace::GameModePageButton::__cordl_internal_get_selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr ::UnityW<::GlobalNamespace::GameModePages> const& GlobalNamespace::GameModePageButton::__cordl_internal_get_selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___selector;
}
constexpr void GlobalNamespace::GameModePageButton::__cordl_internal_set_selector(::UnityW<::GlobalNamespace::GameModePages>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___selector = value;
}
constexpr bool& GlobalNamespace::GameModePageButton::__cordl_internal_get_left()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr bool const& GlobalNamespace::GameModePageButton::__cordl_internal_get_left() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___left;
}
constexpr void GlobalNamespace::GameModePageButton::__cordl_internal_set_left(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___left = value;
}
inline void GlobalNamespace::GameModePageButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GameModePageButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameModePageButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameModePageButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameModePageButton* GlobalNamespace::GameModePageButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameModePageButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameModePageButton::GameModePageButton()   {
}

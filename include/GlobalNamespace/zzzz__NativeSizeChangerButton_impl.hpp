#pragma once
// IWYU pragma private; include "GlobalNamespace/NativeSizeChangerButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerButton_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChangerSettings_def.hpp"
#include "GlobalNamespace/zzzz__NativeSizeChanger_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerButton.ButtonActivation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChangerButton::*)()>(&::GlobalNamespace::NativeSizeChangerButton::ButtonActivation)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56d3a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::NativeSizeChangerButton*>(),
                    {::i2c::class_of<::GlobalNamespace::NativeSizeChangerButton*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NativeSizeChangerButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NativeSizeChangerButton::*)()>(&::GlobalNamespace::NativeSizeChangerButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d3a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::NativeSizeChanger>& GlobalNamespace::NativeSizeChangerButton::__cordl_internal_get_nativeSizeChanger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSizeChanger;
}
constexpr ::UnityW<::GlobalNamespace::NativeSizeChanger> const& GlobalNamespace::NativeSizeChangerButton::__cordl_internal_get_nativeSizeChanger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nativeSizeChanger;
}
constexpr void GlobalNamespace::NativeSizeChangerButton::__cordl_internal_set_nativeSizeChanger(::UnityW<::GlobalNamespace::NativeSizeChanger>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nativeSizeChanger = value;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings*& GlobalNamespace::NativeSizeChangerButton::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::GlobalNamespace::NativeSizeChangerSettings* const& GlobalNamespace::NativeSizeChangerButton::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void GlobalNamespace::NativeSizeChangerButton::__cordl_internal_set_settings(::GlobalNamespace::NativeSizeChangerSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline void GlobalNamespace::NativeSizeChangerButton::ButtonActivation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::NativeSizeChangerButton*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NativeSizeChangerButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NativeSizeChangerButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NativeSizeChangerButton* GlobalNamespace::NativeSizeChangerButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NativeSizeChangerButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NativeSizeChangerButton::NativeSizeChangerButton()   {
}

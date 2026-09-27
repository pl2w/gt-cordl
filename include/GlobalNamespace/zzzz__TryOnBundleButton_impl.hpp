#pragma once
// IWYU pragma private; include "GlobalNamespace/TryOnBundleButton.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_impl.hpp"
#include "GlobalNamespace/zzzz__TryOnBundleButton_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TryOnBundleButton.ButtonActivationWithHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundleButton::*)(bool)>(&::GlobalNamespace::TryOnBundleButton::ButtonActivationWithHand)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x57802a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(),
                    {::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundleButton.UpdateColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundleButton::*)()>(&::GlobalNamespace::TryOnBundleButton::UpdateColor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5780324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(),
                    {::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TryOnBundleButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TryOnBundleButton::*)()>(&::GlobalNamespace::TryOnBundleButton::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5780418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::TryOnBundleButton::__cordl_internal_get_buttonIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr int32_t const& GlobalNamespace::TryOnBundleButton::__cordl_internal_get_buttonIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonIndex;
}
constexpr void GlobalNamespace::TryOnBundleButton::__cordl_internal_set_buttonIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonIndex = value;
}
constexpr ::StringW& GlobalNamespace::TryOnBundleButton::__cordl_internal_get_playfabBundleID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabBundleID;
}
constexpr ::StringW const& GlobalNamespace::TryOnBundleButton::__cordl_internal_get_playfabBundleID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playfabBundleID;
}
constexpr void GlobalNamespace::TryOnBundleButton::__cordl_internal_set_playfabBundleID(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playfabBundleID = value;
}
inline void GlobalNamespace::TryOnBundleButton::ButtonActivationWithHand(bool  isLeftHand)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLeftHand);
}
inline void GlobalNamespace::TryOnBundleButton::UpdateColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TryOnBundleButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TryOnBundleButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TryOnBundleButton* GlobalNamespace::TryOnBundleButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TryOnBundleButton*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TryOnBundleButton::TryOnBundleButton()   {
}

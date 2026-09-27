#pragma once
// IWYU pragma private; include "GorillaTag/ButtonColorSettings.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GorillaTag/zzzz__ButtonColorSettings_def.hpp"
//  Writing Method size for method: ::GorillaTag::ButtonColorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::ButtonColorSettings::*)()>(&::GorillaTag::ButtonColorSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d348c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ButtonColorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GorillaTag::ButtonColorSettings::__cordl_internal_get_UnpressedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnpressedColor;
}
constexpr ::UnityEngine::Color const& GorillaTag::ButtonColorSettings::__cordl_internal_get_UnpressedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UnpressedColor;
}
constexpr void GorillaTag::ButtonColorSettings::__cordl_internal_set_UnpressedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UnpressedColor = value;
}
constexpr ::UnityEngine::Color& GorillaTag::ButtonColorSettings::__cordl_internal_get_PressedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedColor;
}
constexpr ::UnityEngine::Color const& GorillaTag::ButtonColorSettings::__cordl_internal_get_PressedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedColor;
}
constexpr void GorillaTag::ButtonColorSettings::__cordl_internal_set_PressedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PressedColor = value;
}
constexpr float_t& GorillaTag::ButtonColorSettings::__cordl_internal_get_PressedTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedTime;
}
constexpr float_t const& GorillaTag::ButtonColorSettings::__cordl_internal_get_PressedTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PressedTime;
}
constexpr void GorillaTag::ButtonColorSettings::__cordl_internal_set_PressedTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PressedTime = value;
}
inline void GorillaTag::ButtonColorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ButtonColorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::ButtonColorSettings* GorillaTag::ButtonColorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ButtonColorSettings*>());
}
// Ctor Parameters []
constexpr ::GorillaTag::ButtonColorSettings::ButtonColorSettings()   {
}

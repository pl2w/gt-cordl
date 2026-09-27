#pragma once
// IWYU pragma private; include "Drawing/DrawingSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Drawing/zzzz__DrawingSettings_def.hpp"
#include "Drawing/zzzz__DrawingSettings_def.hpp"
//  Writing Method size for method: ::Drawing::DrawingSettings.get_DefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Drawing::DrawingSettings_Settings* (*)()>(&::Drawing::DrawingSettings::get_DefaultSettings)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x55d451c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {"get_DefaultSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingSettings.GetSettingsAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Drawing::DrawingSettings> (*)()>(&::Drawing::DrawingSettings::GetSettingsAsset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x55cc2e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {"GetSettingsAsset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Drawing::DrawingSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingSettings::*)()>(&::Drawing::DrawingSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x55d45b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Drawing::DrawingSettings::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& Drawing::DrawingSettings::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void Drawing::DrawingSettings::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
constexpr ::Drawing::DrawingSettings_Settings*& Drawing::DrawingSettings::__cordl_internal_get_settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr ::Drawing::DrawingSettings_Settings* const& Drawing::DrawingSettings::__cordl_internal_get_settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___settings;
}
constexpr void Drawing::DrawingSettings::__cordl_internal_set_settings(::Drawing::DrawingSettings_Settings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___settings = value;
}
inline ::Drawing::DrawingSettings_Settings* Drawing::DrawingSettings::get_DefaultSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {"get_DefaultSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Drawing::DrawingSettings_Settings*>(nullptr, ___internal_method);
}
inline ::UnityW<::Drawing::DrawingSettings> Drawing::DrawingSettings::GetSettingsAsset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {"GetSettingsAsset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Drawing::DrawingSettings>>(nullptr, ___internal_method);
}
inline void Drawing::DrawingSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::DrawingSettings* Drawing::DrawingSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingSettings*>());
}
// Ctor Parameters []
constexpr ::Drawing::DrawingSettings::DrawingSettings()   {
}
//  Writing Method size for method: ::Drawing::DrawingSettings_Settings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Drawing::DrawingSettings_Settings::*)()>(&::Drawing::DrawingSettings_Settings::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x55d4590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings_Settings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_lineOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOpacity;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_lineOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOpacity;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_lineOpacity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineOpacity = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_solidOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solidOpacity;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_solidOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solidOpacity;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_solidOpacity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___solidOpacity = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_textOpacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpacity;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_textOpacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpacity;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_textOpacity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textOpacity = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_lineOpacityBehindObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOpacityBehindObjects;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_lineOpacityBehindObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lineOpacityBehindObjects;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_lineOpacityBehindObjects(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lineOpacityBehindObjects = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_solidOpacityBehindObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solidOpacityBehindObjects;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_solidOpacityBehindObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___solidOpacityBehindObjects;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_solidOpacityBehindObjects(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___solidOpacityBehindObjects = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_textOpacityBehindObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpacityBehindObjects;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_textOpacityBehindObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textOpacityBehindObjects;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_textOpacityBehindObjects(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textOpacityBehindObjects = value;
}
constexpr float_t& Drawing::DrawingSettings_Settings::__cordl_internal_get_curveResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveResolution;
}
constexpr float_t const& Drawing::DrawingSettings_Settings::__cordl_internal_get_curveResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveResolution;
}
constexpr void Drawing::DrawingSettings_Settings::__cordl_internal_set_curveResolution(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveResolution = value;
}
inline void Drawing::DrawingSettings_Settings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Drawing::DrawingSettings_Settings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Drawing::DrawingSettings_Settings* Drawing::DrawingSettings_Settings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Drawing::DrawingSettings_Settings*>());
}
// Ctor Parameters []
constexpr ::Drawing::DrawingSettings_Settings::DrawingSettings_Settings()   {
}

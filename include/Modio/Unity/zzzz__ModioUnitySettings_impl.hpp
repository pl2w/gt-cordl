#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnitySettings.hpp"
#include "Modio/zzzz__IModioServiceSettings_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Modio/Unity/zzzz__ModioUnitySettings_def.hpp"
#include "Modio/zzzz__ModioSettings_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioUnitySettings.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioSettings* (::Modio::Unity::ModioUnitySettings::*)()>(&::Modio::Unity::ModioUnitySettings::get_Settings)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9f95364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnitySettings*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnitySettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnitySettings::*)()>(&::Modio::Unity::ModioUnitySettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9583c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnitySettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::ModioSettings*& Modio::Unity::ModioUnitySettings::__cordl_internal_get__settings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr ::Modio::ModioSettings* const& Modio::Unity::ModioUnitySettings::__cordl_internal_get__settings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____settings;
}
constexpr void Modio::Unity::ModioUnitySettings::__cordl_internal_set__settings(::Modio::ModioSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____settings = value;
}
constexpr ::ArrayW<::Modio::IModioServiceSettings*>& Modio::Unity::ModioUnitySettings::__cordl_internal_get__platformSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformSettings;
}
constexpr ::ArrayW<::Modio::IModioServiceSettings*> const& Modio::Unity::ModioUnitySettings::__cordl_internal_get__platformSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformSettings;
}
constexpr void Modio::Unity::ModioUnitySettings::__cordl_internal_set__platformSettings(::ArrayW<::Modio::IModioServiceSettings*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____platformSettings = value;
}
inline ::Modio::ModioSettings* Modio::Unity::ModioUnitySettings::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnitySettings*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioSettings*>(this, ___internal_method);
}
inline void Modio::Unity::ModioUnitySettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnitySettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::ModioUnitySettings* Modio::Unity::ModioUnitySettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioUnitySettings*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioUnitySettings::ModioUnitySettings()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Platform/Android/AppInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Platform/Android/zzzz__AppInfo_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__IMetadata_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedString_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AppInfo.get_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::LocalizedString* (::UnityEngine::Localization::Platform::Android::AppInfo::*)()>(&::UnityEngine::Localization::Platform::Android::AppInfo::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {"get_DisplayName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AppInfo.set_DisplayName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Platform::Android::AppInfo::*)(::UnityEngine::Localization::LocalizedString*)>(&::UnityEngine::Localization::Platform::Android::AppInfo::set_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04b758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Platform::Android::AppInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Platform::Android::AppInfo::*)()>(&::UnityEngine::Localization::Platform::Android::AppInfo::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb04b760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::LocalizedString*& UnityEngine::Localization::Platform::Android::AppInfo::__cordl_internal_get_m_DisplayName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr ::UnityEngine::Localization::LocalizedString* const& UnityEngine::Localization::Platform::Android::AppInfo::__cordl_internal_get_m_DisplayName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DisplayName;
}
constexpr void UnityEngine::Localization::Platform::Android::AppInfo::__cordl_internal_set_m_DisplayName(::UnityEngine::Localization::LocalizedString*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DisplayName = value;
}
inline ::UnityEngine::Localization::LocalizedString* UnityEngine::Localization::Platform::Android::AppInfo::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {"get_DisplayName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::LocalizedString*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Platform::Android::AppInfo::set_DisplayName(::UnityEngine::Localization::LocalizedString*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {"set_DisplayName", {}, {::i2c::type_of<::UnityEngine::Localization::LocalizedString*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Localization::Platform::Android::AppInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Platform::Android::AppInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Platform::Android::AppInfo* UnityEngine::Localization::Platform::Android::AppInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Platform::Android::AppInfo*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr  UnityEngine::Localization::Platform::Android::AppInfo::operator ::UnityEngine::Localization::Metadata::IMetadata*() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* UnityEngine::Localization::Platform::Android::AppInfo::i___UnityEngine__Localization__Metadata__IMetadata() noexcept {
return static_cast<::UnityEngine::Localization::Metadata::IMetadata*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Platform::Android::AppInfo::AppInfo()   {
}

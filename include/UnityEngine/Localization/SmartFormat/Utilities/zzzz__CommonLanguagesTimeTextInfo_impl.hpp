#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/CommonLanguagesTimeTextInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__CommonLanguagesTimeTextInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeTextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo.get_English
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* (*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo::get_English)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0xb03734c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*>(),
                        {"get_English", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo.GetTimeTextInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* (*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo::GetTimeTextInfo)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb0378b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*>(),
                        {"GetTimeTextInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo::get_English()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*>(),
                        {"get_English", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo::GetTimeTextInfo(::StringW  twoLetterIsoLanguageName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo*>(),
                        {"GetTimeTextInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*>(nullptr, ___internal_method, twoLetterIsoLanguageName);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::CommonLanguagesTimeTextInfo::CommonLanguagesTimeTextInfo()   {
}

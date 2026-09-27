#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Utilities/TimeSpanUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanUtility_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeTextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility.ToTimeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::TimeSpan, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::ToTimeString)> {
  constexpr static std::size_t size = 0x8d8;
  constexpr static std::size_t addrs = 0xb0353b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"ToTimeString", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility.get_DefaultFormatOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::get_DefaultFormatOptions)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb035e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"get_DefaultFormatOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility.set_DefaultFormatOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::set_DefaultFormatOptions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb035ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"set_DefaultFormatOptions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility.get_AbsoluteDefaults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (*)()>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::get_AbsoluteDefaults)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb035f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"get_AbsoluteDefaults", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility.Round
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, int64_t)>(&::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::Round)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb035f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"Round", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::setStaticF__DefaultFormatOptions_k__BackingField(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, "<DefaultFormatOptions>k__BackingField", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(std::forward<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::getStaticF__DefaultFormatOptions_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, "<DefaultFormatOptions>k__BackingField", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>();
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::setStaticF__AbsoluteDefaults_k__BackingField(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
::cordl_internals::setStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, "<AbsoluteDefaults>k__BackingField", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(std::forward<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(value));
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::getStaticF__AbsoluteDefaults_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions, "<AbsoluteDefaults>k__BackingField", ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>();
}
inline ::StringW UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::ToTimeString(::System::TimeSpan  FromTime, ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  options, ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*  timeTextInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"ToTimeString", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(), ::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, FromTime, options, timeTextInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::get_DefaultFormatOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"get_DefaultFormatOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(nullptr, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::set_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"set_DefaultFormatOptions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::get_AbsoluteDefaults()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"get_AbsoluteDefaults", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(nullptr, ___internal_method);
}
inline ::System::TimeSpan UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::Round(::System::TimeSpan  fromTime, int64_t  intervalTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility*>(),
                        {"Round", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, fromTime, intervalTicks);
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::TimeSpanUtility()   {
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::AbbreviateAll{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::LessThanAll{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::RangeAll{static_cast<int32_t>(0x3f00)};
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  UnityEngine::Localization::SmartFormat::Utilities::TimeSpanUtility::TruncateAll{static_cast<int32_t>(0xf0)};

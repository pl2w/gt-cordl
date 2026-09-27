#pragma once
// IWYU pragma private; include "UnityEngine/Localization/SmartFormat/Extensions/TimeFormatter.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__FormatterBase_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_impl.hpp"
#include "UnityEngine/Localization/SmartFormat/Extensions/zzzz__TimeFormatter_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Core/Extensions/zzzz__IFormattingInfo_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeSpanFormatOptions_def.hpp"
#include "UnityEngine/Localization/SmartFormat/Utilities/zzzz__TimeTextInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb028364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.get_DefaultNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultNames)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb043540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.get_DefaultFormatOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultFormatOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb043664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"get_DefaultFormatOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.set_DefaultFormatOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions)>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::set_DefaultFormatOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb04366c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"set_DefaultFormatOptions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.get_DefaultTwoLetterISOLanguageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)()>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultTwoLetterISOLanguageName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb043674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"get_DefaultTwoLetterISOLanguageName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.set_DefaultTwoLetterISOLanguageName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)(::StringW)>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::set_DefaultTwoLetterISOLanguageName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb04367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"set_DefaultTwoLetterISOLanguageName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.TryEvaluateFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*)>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::TryEvaluateFormat)> {
  constexpr static std::size_t size = 0x628;
  constexpr static std::size_t addrs = 0xb04371c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                    {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter.GetTimeTextInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* (::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::*)(::System::IFormatProvider*)>(&::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::GetTimeTextInfo)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb043d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"GetTimeTextInfo", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions& UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_get_m_DefaultFormatOptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultFormatOptions;
}
constexpr ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions const& UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_get_m_DefaultFormatOptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultFormatOptions;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_set_m_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultFormatOptions = value;
}
constexpr ::StringW& UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_get_m_DefaultTwoLetterIsoLanguageName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTwoLetterIsoLanguageName;
}
constexpr ::StringW const& UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_get_m_DefaultTwoLetterIsoLanguageName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DefaultTwoLetterIsoLanguageName;
}
constexpr void UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::__cordl_internal_set_m_DefaultTwoLetterIsoLanguageName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DefaultTwoLetterIsoLanguageName = value;
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::ArrayW<::StringW> UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultFormatOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"get_DefaultFormatOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::set_DefaultFormatOptions(::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"set_DefaultFormatOptions", {}, {::i2c::type_of<::UnityEngine::Localization::SmartFormat::Utilities::TimeSpanFormatOptions>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::get_DefaultTwoLetterISOLanguageName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"get_DefaultTwoLetterISOLanguageName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::set_DefaultTwoLetterISOLanguageName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"set_DefaultTwoLetterISOLanguageName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::TryEvaluateFormat(::UnityEngine::Localization::SmartFormat::Core::Extensions::IFormattingInfo*  formattingInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, formattingInfo);
}
inline ::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo* UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::GetTimeTextInfo(::System::IFormatProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>(),
                        {"GetTimeTextInfo", {}, {::i2c::type_of<::System::IFormatProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::SmartFormat::Utilities::TimeTextInfo*>(this, ___internal_method, provider);
}
inline ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter* UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::SmartFormat::Extensions::TimeFormatter::TimeFormatter()   {
}

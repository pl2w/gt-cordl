#pragma once
// IWYU pragma private; include "PlayFab/Internal/PlayFabUtil.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Internal/zzzz__PlayFabUtil_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUtil.get_timeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::Internal::PlayFabUtil::get_timeStamp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa843e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"get_timeStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUtil.get_utcTimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::PlayFab::Internal::PlayFabUtil::get_utcTimeStamp)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa84d180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"get_utcTimeStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUtil.Format
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::PlayFab::Internal::PlayFabUtil::Format)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa843f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUtil.ReadAllFileText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayFab::Internal::PlayFabUtil::ReadAllFileText)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0xa84d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"ReadAllFileText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Internal::PlayFabUtil.GetLocalSettingsFileProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::PlayFab::Internal::PlayFabUtil::GetLocalSettingsFileProperty)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xa84d698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"GetLocalSettingsFileProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Internal::PlayFabUtil::setStaticF__localSettingsFileName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "_localSettingsFileName", ::PlayFab::Internal::PlayFabUtil*>(std::forward<::StringW>(value));
}
inline ::StringW PlayFab::Internal::PlayFabUtil::getStaticF__localSettingsFileName()  {
return ::cordl_internals::getStaticField<::StringW, "_localSettingsFileName", ::PlayFab::Internal::PlayFabUtil*>();
}
inline void PlayFab::Internal::PlayFabUtil::setStaticF__defaultDateTimeFormats(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "_defaultDateTimeFormats", ::PlayFab::Internal::PlayFabUtil*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> PlayFab::Internal::PlayFabUtil::getStaticF__defaultDateTimeFormats()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "_defaultDateTimeFormats", ::PlayFab::Internal::PlayFabUtil*>();
}
inline void PlayFab::Internal::PlayFabUtil::setStaticF_DateTimeStyles(::System::Globalization::DateTimeStyles  value)  {
::cordl_internals::setStaticField<::System::Globalization::DateTimeStyles, "DateTimeStyles", ::PlayFab::Internal::PlayFabUtil*>(std::forward<::System::Globalization::DateTimeStyles>(value));
}
inline ::System::Globalization::DateTimeStyles PlayFab::Internal::PlayFabUtil::getStaticF_DateTimeStyles()  {
return ::cordl_internals::getStaticField<::System::Globalization::DateTimeStyles, "DateTimeStyles", ::PlayFab::Internal::PlayFabUtil*>();
}
inline void PlayFab::Internal::PlayFabUtil::setStaticF__sb(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "_sb", ::PlayFab::Internal::PlayFabUtil*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* PlayFab::Internal::PlayFabUtil::getStaticF__sb()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "_sb", ::PlayFab::Internal::PlayFabUtil*>();
}
inline ::StringW PlayFab::Internal::PlayFabUtil::get_timeStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"get_timeStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW PlayFab::Internal::PlayFabUtil::get_utcTimeStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"get_utcTimeStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW PlayFab::Internal::PlayFabUtil::Format(::StringW  text, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"Format", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, text, args);
}
inline ::StringW PlayFab::Internal::PlayFabUtil::ReadAllFileText(::StringW  filename)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"ReadAllFileText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filename);
}
template<typename T>
inline T PlayFab::Internal::PlayFabUtil::TryEnumParse(::StringW  value, T  defaultValue)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                    {"TryEnumParse", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, value, defaultValue);
}
inline ::StringW PlayFab::Internal::PlayFabUtil::GetLocalSettingsFileProperty(::StringW  propertyKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Internal::PlayFabUtil*>(),
                        {"GetLocalSettingsFileProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, propertyKey);
}
// Ctor Parameters []
constexpr ::PlayFab::Internal::PlayFabUtil::PlayFabUtil()   {
}

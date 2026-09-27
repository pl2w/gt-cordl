#pragma once
// IWYU pragma private; include "GorillaTag/GTTime.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__GTTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeZoneInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GorillaTag::GTTime.get_timeZoneInfoLA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZoneInfo* (*)()>(&::GorillaTag::GTTime::get_timeZoneInfoLA)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d21884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"get_timeZoneInfoLA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.set_timeZoneInfoLA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::TimeZoneInfo*)>(&::GorillaTag::GTTime::set_timeZoneInfoLA)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d218dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"set_timeZoneInfoLA", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime._Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GorillaTag::GTTime::_Init)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5d21940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"_Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime._TryCreateCustomPST
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::System::TimeZoneInfo*>)>(&::GorillaTag::GTTime::_TryCreateCustomPST)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5d21d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"_TryCreateCustomPST", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.get_usingServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GorillaTag::GTTime::get_usingServerTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5d220c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"get_usingServerTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.set_usingServerTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::GorillaTag::GTTime::set_usingServerTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5d22120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"set_usingServerTime", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetServerStartupTimeAsMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTag::GTTime::GetServerStartupTimeAsMilliseconds)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d22180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetServerStartupTimeAsMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetDeviceStartupTimeAsMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTag::GTTime::GetDeviceStartupTimeAsMilliseconds)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5d221e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetDeviceStartupTimeAsMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetStartupTimeAsMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTag::GTTime::GetStartupTimeAsMilliseconds)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5d222dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetStartupTimeAsMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.TimeAsMilliseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTag::GTTime::TimeAsMilliseconds)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5d22464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TimeAsMilliseconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.TimeAsDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::GorillaTag::GTTime::TimeAsDouble)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d224ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TimeAsDouble", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetAAxiomDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)()>(&::GorillaTag::GTTime::GetAAxiomDateTime)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5d22560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetAAxiomDateTimeAsStringForDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaTag::GTTime::GetAAxiomDateTimeAsStringForDisplay)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d22650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsStringForDisplay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetAAxiomDateTimeAsStringForFilename
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GorillaTag::GTTime::GetAAxiomDateTimeAsStringForFilename)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5d226f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsStringForFilename", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.GetAAxiomDateTimeAsHumanReadableLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::GorillaTag::GTTime::GetAAxiomDateTimeAsHumanReadableLong)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d22798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsHumanReadableLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.ConvertDateTimeHumanReadableLongToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::GorillaTag::GTTime::ConvertDateTimeHumanReadableLongToDateTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5d22844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"ConvertDateTimeHumanReadableLongToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::GTTime.TryUpdateTimeText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::TMPro::TMP_Text*, ::System::TimeSpan, ::ArrayW<char16_t>, int32_t, ::by_ref<int32_t>)>(&::GorillaTag::GTTime::TryUpdateTimeText)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5d2290c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TryUpdateTimeText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GorillaTag::GTTime::setStaticF__isInitialized(bool  value)  {
::cordl_internals::setStaticField<bool, "_isInitialized", ::GorillaTag::GTTime*>(std::forward<bool>(value));
}
inline bool GorillaTag::GTTime::getStaticF__isInitialized()  {
return ::cordl_internals::getStaticField<bool, "_isInitialized", ::GorillaTag::GTTime*>();
}
inline void GorillaTag::GTTime::setStaticF__timeZoneInfoLA_k__BackingField(::System::TimeZoneInfo*  value)  {
::cordl_internals::setStaticField<::System::TimeZoneInfo*, "<timeZoneInfoLA>k__BackingField", ::GorillaTag::GTTime*>(std::forward<::System::TimeZoneInfo*>(value));
}
inline ::System::TimeZoneInfo* GorillaTag::GTTime::getStaticF__timeZoneInfoLA_k__BackingField()  {
return ::cordl_internals::getStaticField<::System::TimeZoneInfo*, "<timeZoneInfoLA>k__BackingField", ::GorillaTag::GTTime*>();
}
inline void GorillaTag::GTTime::setStaticF__usingServerTime_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<usingServerTime>k__BackingField", ::GorillaTag::GTTime*>(std::forward<bool>(value));
}
inline bool GorillaTag::GTTime::getStaticF__usingServerTime_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<usingServerTime>k__BackingField", ::GorillaTag::GTTime*>();
}
inline ::System::TimeZoneInfo* GorillaTag::GTTime::get_timeZoneInfoLA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"get_timeZoneInfoLA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZoneInfo*>(nullptr, ___internal_method);
}
inline void GorillaTag::GTTime::set_timeZoneInfoLA(::System::TimeZoneInfo*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"set_timeZoneInfoLA", {}, {::i2c::type_of<::System::TimeZoneInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void GorillaTag::GTTime::_Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"_Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool GorillaTag::GTTime::_TryCreateCustomPST(::by_ref<::System::TimeZoneInfo*>  out_tz)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"_TryCreateCustomPST", {}, {::i2c::type_of<::by_ref<::System::TimeZoneInfo*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, out_tz);
}
inline bool GorillaTag::GTTime::get_usingServerTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"get_usingServerTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GorillaTag::GTTime::set_usingServerTime(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"set_usingServerTime", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int64_t GorillaTag::GTTime::GetServerStartupTimeAsMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetServerStartupTimeAsMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t GorillaTag::GTTime::GetDeviceStartupTimeAsMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetDeviceStartupTimeAsMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t GorillaTag::GTTime::GetStartupTimeAsMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetStartupTimeAsMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t GorillaTag::GTTime::TimeAsMilliseconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TimeAsMilliseconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline double_t GorillaTag::GTTime::TimeAsDouble()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TimeAsDouble", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline ::System::DateTime GorillaTag::GTTime::GetAAxiomDateTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method);
}
inline ::StringW GorillaTag::GTTime::GetAAxiomDateTimeAsStringForDisplay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsStringForDisplay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GorillaTag::GTTime::GetAAxiomDateTimeAsStringForFilename()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsStringForFilename", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int64_t GorillaTag::GTTime::GetAAxiomDateTimeAsHumanReadableLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"GetAAxiomDateTimeAsHumanReadableLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline ::System::DateTime GorillaTag::GTTime::ConvertDateTimeHumanReadableLongToDateTime(int64_t  humanReadableLong)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"ConvertDateTimeHumanReadableLongToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, humanReadableLong);
}
inline bool GorillaTag::GTTime::TryUpdateTimeText(::TMPro::TMP_Text*  textComponent, ::System::TimeSpan  timeSpan, ::ArrayW<char16_t>  chars, int32_t  index, ::by_ref<int32_t>  ref_lastUpdateSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::GTTime*>(),
                        {"TryUpdateTimeText", {}, {::i2c::type_of<::TMPro::TMP_Text*>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, textComponent, timeSpan, chars, index, ref_lastUpdateSeconds);
}
// Ctor Parameters []
constexpr ::GorillaTag::GTTime::GTTime()   {
}

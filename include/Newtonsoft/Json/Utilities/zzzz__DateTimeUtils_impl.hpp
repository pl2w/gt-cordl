#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/DateTimeUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DateTimeUtils_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__DateTimeParser_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StringReference_def.hpp"
#include "Newtonsoft/Json/zzzz__DateFormatHandling_def.hpp"
#include "Newtonsoft/Json/zzzz__DateTimeZoneHandling_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/Xml/zzzz__XmlDateTimeSerializationMode_def.hpp"
#include "System/zzzz__DateTimeKind_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.GetUtcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::GetUtcOffset)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa396fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ToSerializationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDateTimeSerializationMode (*)(::System::DateTimeKind)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ToSerializationMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa397010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToSerializationMode", {}, {::i2c::type_of<::System::DateTimeKind>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.EnsureDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime, ::Newtonsoft::Json::DateTimeZoneHandling)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::EnsureDateTime)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa397188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"EnsureDateTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.SwitchToLocalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToLocalTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa3972d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"SwitchToLocalTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.SwitchToUtcTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToUtcTime)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa3973b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"SwitchToUtcTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ToUniversalTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa397490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToUniversalTicks", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ToUniversalTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime, ::System::TimeSpan)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa397550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToUniversalTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime, ::System::TimeSpan)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa3976a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa39778c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ConvertDateTimeToJavaScriptTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::DateTime, bool)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa3977e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.UniversalTicksToJavaScriptTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(int64_t)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::UniversalTicksToJavaScriptTicks)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa397710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"UniversalTicksToJavaScriptTicks", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.ConvertJavaScriptTicksToDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(int64_t)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::ConvertJavaScriptTicksToDateTime)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa3978a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertJavaScriptTicksToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeIso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::by_ref<::System::DateTime>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeIso)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0xa397928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeIso", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetIso
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::by_ref<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetIso)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0xa397e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetIso", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.CreateDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (*)(::Newtonsoft::Json::Utilities::DateTimeParser)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::CreateDateTime)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa397d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"CreateDateTime", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::DateTimeParser>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTime>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa3980e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Newtonsoft::Json::DateTimeZoneHandling, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTime>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa398730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0xa398a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffset", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xa398e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffset", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseMicrosoftDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::by_ref<int64_t>, ::by_ref<::System::TimeSpan>, ::by_ref<::System::DateTimeKind>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseMicrosoftDate)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa399108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseMicrosoftDate", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<::System::DateTimeKind>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeMicrosoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::Newtonsoft::Json::DateTimeZoneHandling, ::by_ref<::System::DateTime>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeMicrosoft)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa3984bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeMicrosoft", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::Newtonsoft::Json::DateTimeZoneHandling, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTime>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeExact)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa398648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetMicrosoft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, ::by_ref<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetMicrosoft)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa398c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetMicrosoft", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryParseDateTimeOffsetExact
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW, ::System::Globalization::CultureInfo*, ::by_ref<::System::DateTimeOffset>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetExact)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa398d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.TryReadOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Newtonsoft::Json::Utilities::StringReference, int32_t, ::by_ref<::System::TimeSpan>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::TryReadOffset)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xa399304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryReadOffset", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::System::DateTime, ::Newtonsoft::Json::DateFormatHandling, ::StringW, ::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa39949c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, ::System::DateTime, ::System::Nullable_1<::System::TimeSpan>, ::System::DateTimeKind, ::Newtonsoft::Json::DateFormatHandling)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0xa39960c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeString", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.WriteDefaultIsoDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, ::System::DateTime)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::WriteDefaultIsoDate)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xa399ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDefaultIsoDate", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.CopyIntToCharArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<char16_t>, int32_t, int32_t, int32_t)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::CopyIntToCharArray)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa39a138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"CopyIntToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<char16_t>, int32_t, ::System::TimeSpan, ::Newtonsoft::Json::DateFormatHandling)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffset)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa39991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeOffset", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.WriteDateTimeOffsetString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IO::TextWriter*, ::System::DateTimeOffset, ::Newtonsoft::Json::DateFormatHandling, ::StringW, ::System::Globalization::CultureInfo*)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffsetString)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xa39a1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeOffsetString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Utilities::DateTimeUtils.GetDateValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::Newtonsoft::Json::Utilities::DateTimeUtils::GetDateValues)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0xa399efc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"GetDateValues", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Utilities::DateTimeUtils::setStaticF_InitialJavaScriptDateTicks(int64_t  value)  {
::cordl_internals::setStaticField<int64_t, "InitialJavaScriptDateTicks", ::Newtonsoft::Json::Utilities::DateTimeUtils*>(std::forward<int64_t>(value));
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::getStaticF_InitialJavaScriptDateTicks()  {
return ::cordl_internals::getStaticField<int64_t, "InitialJavaScriptDateTicks", ::Newtonsoft::Json::Utilities::DateTimeUtils*>();
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::setStaticF_DaysToMonth365(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::Newtonsoft::Json::Utilities::DateTimeUtils*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Newtonsoft::Json::Utilities::DateTimeUtils::getStaticF_DaysToMonth365()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth365", ::Newtonsoft::Json::Utilities::DateTimeUtils*>();
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::setStaticF_DaysToMonth366(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::Newtonsoft::Json::Utilities::DateTimeUtils*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Newtonsoft::Json::Utilities::DateTimeUtils::getStaticF_DaysToMonth366()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "DaysToMonth366", ::Newtonsoft::Json::Utilities::DateTimeUtils*>();
}
inline ::System::TimeSpan Newtonsoft::Json::Utilities::DateTimeUtils::GetUtcOffset(::System::DateTime  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"GetUtcOffset", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, d);
}
inline ::System::Xml::XmlDateTimeSerializationMode Newtonsoft::Json::Utilities::DateTimeUtils::ToSerializationMode(::System::DateTimeKind  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToSerializationMode", {}, {::i2c::type_of<::System::DateTimeKind>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDateTimeSerializationMode>(nullptr, ___internal_method, kind);
}
inline ::System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::EnsureDateTime(::System::DateTime  value, ::Newtonsoft::Json::DateTimeZoneHandling  timeZone)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"EnsureDateTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value, timeZone);
}
inline ::System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToLocalTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"SwitchToLocalTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline ::System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::SwitchToUtcTime(::System::DateTime  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"SwitchToUtcTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, value);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToUniversalTicks", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ToUniversalTicks(::System::DateTime  dateTime, ::System::TimeSpan  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ToUniversalTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime, offset);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(::System::DateTime  dateTime, ::System::TimeSpan  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::TimeSpan>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime, offset);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::ConvertDateTimeToJavaScriptTicks(::System::DateTime  dateTime, bool  convertToUtc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertDateTimeToJavaScriptTicks", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, dateTime, convertToUtc);
}
inline int64_t Newtonsoft::Json::Utilities::DateTimeUtils::UniversalTicksToJavaScriptTicks(int64_t  universalTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"UniversalTicksToJavaScriptTicks", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, universalTicks);
}
inline ::System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::ConvertJavaScriptTicksToDateTime(int64_t  javaScriptTicks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"ConvertJavaScriptTicksToDateTime", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, javaScriptTicks);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeIso(::Newtonsoft::Json::Utilities::StringReference  text, ::Newtonsoft::Json::DateTimeZoneHandling  dateTimeZoneHandling, ::by_ref<::System::DateTime>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeIso", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dateTimeZoneHandling, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetIso(::Newtonsoft::Json::Utilities::StringReference  text, ::by_ref<::System::DateTimeOffset>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetIso", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dt);
}
inline ::System::DateTime Newtonsoft::Json::Utilities::DateTimeUtils::CreateDateTime(::Newtonsoft::Json::Utilities::DateTimeParser  dateTimeParser)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"CreateDateTime", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::DateTimeParser>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(nullptr, ___internal_method, dateTimeParser);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime(::Newtonsoft::Json::Utilities::StringReference  s, ::Newtonsoft::Json::DateTimeZoneHandling  dateTimeZoneHandling, /* [Nullable(2)] */ ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTime>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dateTimeZoneHandling, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTime(::StringW  s, ::Newtonsoft::Json::DateTimeZoneHandling  dateTimeZoneHandling, /* [Nullable(2)] */ ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTime>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTime", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dateTimeZoneHandling, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset(::Newtonsoft::Json::Utilities::StringReference  s, /* [Nullable(2)] */ ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTimeOffset>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffset", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffset(::StringW  s, /* [Nullable(2)] */ ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTimeOffset>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffset", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, s, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseMicrosoftDate(::Newtonsoft::Json::Utilities::StringReference  text, ::by_ref<int64_t>  ticks, ::by_ref<::System::TimeSpan>  offset, ::by_ref<::System::DateTimeKind>  kind)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseMicrosoftDate", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>(), ::i2c::type_of<::by_ref<::System::DateTimeKind>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, ticks, offset, kind);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeMicrosoft(::Newtonsoft::Json::Utilities::StringReference  text, ::Newtonsoft::Json::DateTimeZoneHandling  dateTimeZoneHandling, ::by_ref<::System::DateTime>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeMicrosoft", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dateTimeZoneHandling, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeExact(::StringW  text, ::Newtonsoft::Json::DateTimeZoneHandling  dateTimeZoneHandling, ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTime>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::DateTimeZoneHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTime>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dateTimeZoneHandling, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetMicrosoft(::Newtonsoft::Json::Utilities::StringReference  text, ::by_ref<::System::DateTimeOffset>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetMicrosoft", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryParseDateTimeOffsetExact(::StringW  text, ::StringW  dateFormatString, ::System::Globalization::CultureInfo*  culture, ::by_ref<::System::DateTimeOffset>  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryParseDateTimeOffsetExact", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>(), ::i2c::type_of<::by_ref<::System::DateTimeOffset>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, text, dateFormatString, culture, dt);
}
inline bool Newtonsoft::Json::Utilities::DateTimeUtils::TryReadOffset(::Newtonsoft::Json::Utilities::StringReference  offsetText, int32_t  startIndex, ::by_ref<::System::TimeSpan>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"TryReadOffset", {}, {::i2c::type_of<::Newtonsoft::Json::Utilities::StringReference>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::System::TimeSpan>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, offsetText, startIndex, offset);
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString(::System::IO::TextWriter*  writer, ::System::DateTime  value, ::Newtonsoft::Json::DateFormatHandling  format, /* [Nullable(2)] */ ::StringW  formatString, ::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value, format, formatString, culture);
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeString(::ArrayW<char16_t>  chars, int32_t  start, ::System::DateTime  value, ::System::Nullable_1<::System::TimeSpan>  offset, ::System::DateTimeKind  kind, ::Newtonsoft::Json::DateFormatHandling  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeString", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::System::Nullable_1<::System::TimeSpan>>(), ::i2c::type_of<::System::DateTimeKind>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, start, value, offset, kind, format);
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDefaultIsoDate(::ArrayW<char16_t>  chars, int32_t  start, ::System::DateTime  dt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDefaultIsoDate", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, start, dt);
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::CopyIntToCharArray(::ArrayW<char16_t>  chars, int32_t  start, int32_t  value, int32_t  digits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"CopyIntToCharArray", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, chars, start, value, digits);
}
inline int32_t Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffset(::ArrayW<char16_t>  chars, int32_t  start, ::System::TimeSpan  offset, ::Newtonsoft::Json::DateFormatHandling  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeOffset", {}, {::i2c::type_of<::ArrayW<char16_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, chars, start, offset, format);
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::WriteDateTimeOffsetString(::System::IO::TextWriter*  writer, ::System::DateTimeOffset  value, ::Newtonsoft::Json::DateFormatHandling  format, /* [Nullable(2)] */ ::StringW  formatString, ::System::Globalization::CultureInfo*  culture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"WriteDateTimeOffsetString", {}, {::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::DateTimeOffset>(), ::i2c::type_of<::Newtonsoft::Json::DateFormatHandling>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Globalization::CultureInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, value, format, formatString, culture);
}
inline void Newtonsoft::Json::Utilities::DateTimeUtils::GetDateValues(::System::DateTime  td, ::by_ref<int32_t>  year, ::by_ref<int32_t>  month, ::by_ref<int32_t>  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Utilities::DateTimeUtils*>(),
                        {"GetDateValues", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, td, year, month, day);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Utilities::DateTimeUtils::DateTimeUtils()   {
}

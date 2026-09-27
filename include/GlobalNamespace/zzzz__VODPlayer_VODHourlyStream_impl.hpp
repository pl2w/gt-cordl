#pragma once
// IWYU pragma private; include "GlobalNamespace/VODPlayer_VODHourlyStream.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODStream_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "GlobalNamespace/zzzz__VODPlayer_VODHourlyStream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODHourlyStream.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VODPlayer_VODHourlyStream::*)(::GlobalNamespace::VODPlayer_VODHourlyStream)>(&::GlobalNamespace::VODPlayer_VODHourlyStream::CompareTo)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5d049d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODHourlyStream>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODHourlyStream.ValidateDate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VODPlayer_VODHourlyStream::*)()>(&::GlobalNamespace::VODPlayer_VODHourlyStream::ValidateDate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5d04790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"ValidateDate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODHourlyStream.IsDateInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VODPlayer_VODHourlyStream::*)(::System::DateTime)>(&::GlobalNamespace::VODPlayer_VODHourlyStream::IsDateInRange)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d049e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"IsDateInRange", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VODPlayer_VODHourlyStream.ClampedDateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::VODPlayer_VODHourlyStream::*)(::System::DateTime)>(&::GlobalNamespace::VODPlayer_VODHourlyStream::ClampedDateTime)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5d04a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"ClampedDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::VODPlayer_VODHourlyStream::CompareTo(::GlobalNamespace::VODPlayer_VODHourlyStream  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::VODPlayer_VODHourlyStream>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline void GlobalNamespace::VODPlayer_VODHourlyStream::ValidateDate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"ValidateDate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::VODPlayer_VODHourlyStream::IsDateInRange(::System::DateTime  serverTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"IsDateInRange", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, serverTime);
}
inline ::System::DateTime GlobalNamespace::VODPlayer_VODHourlyStream::ClampedDateTime(::System::DateTime  dateTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::VODPlayer_VODHourlyStream>(),
                        {"ClampedDateTime", {}, {::i2c::type_of<::System::DateTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method, dateTime);
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>"
constexpr  GlobalNamespace::VODPlayer_VODHourlyStream::operator ::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>"
constexpr ::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>* GlobalNamespace::VODPlayer_VODHourlyStream::i___System__IComparable_1___GlobalNamespace__VODPlayer_VODHourlyStream_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::VODPlayer_VODHourlyStream>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "stream", ty: "::GlobalNamespace::VODPlayer_VODStream", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minute", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "repeats", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startDateTime", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "startDT", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endDateTime", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "endDT", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::VODPlayer_VODHourlyStream::VODPlayer_VODHourlyStream(::GlobalNamespace::VODPlayer_VODStream  stream, int32_t  minute, ::ArrayW<int32_t>  repeats, ::StringW  startDateTime, ::System::DateTime  startDT, ::StringW  endDateTime, ::System::DateTime  endDT) noexcept  {
this->stream = stream;
this->minute = minute;
this->repeats = repeats;
this->startDateTime = startDateTime;
this->startDT = startDT;
this->endDateTime = endDateTime;
this->endDT = endDT;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VODPlayer_VODHourlyStream::VODPlayer_VODHourlyStream()   {
}

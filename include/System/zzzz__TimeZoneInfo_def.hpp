#pragma once
// IWYU pragma private; include "System/TimeZoneInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "System/zzzz__TimeZoneInfo_TransitionTime_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo)
namespace GlobalNamespace {
struct Sys_Interop_DirectoryEntry;
}
namespace GlobalNamespace {
struct TimeZoneInfo_TZVersion;
}
namespace GlobalNamespace {
struct TimeZoneInfo_TZifHead;
}
namespace GlobalNamespace {
struct TimeZoneInfo_TZifType;
}
namespace GlobalNamespace {
struct TimeZoneInfo_TimeZoneInfoResult;
}
namespace GlobalNamespace {
struct TimeZoneInfo_TransitionTime;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
struct DaylightTimeStruct;
}
namespace System::Runtime::Serialization {
class IDeserializationCallback;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
struct DateTimeKind;
}
namespace System {
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
struct TimeZoneInfoOptions;
}
namespace System {
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
class TimeZoneInfo___c;
}
namespace System {
class TimeZoneInfo___c__DisplayClass16_0;
}
// Forward declare root types
namespace System {
class TimeZoneInfo;
}
namespace System {
class TimeZoneInfo_AdjustmentRule;
}
namespace System {
class TimeZoneInfo_CachedData;
}
namespace System {
class TimeZoneInfo___c;
}
namespace System {
class TimeZoneInfo___c__DisplayClass16_0;
}
// Write type traits
MARK_REF_T(::System::TimeZoneInfo*);
MARK_REF_T(::System::TimeZoneInfo_AdjustmentRule*);
MARK_REF_T(::System::TimeZoneInfo_CachedData*);
MARK_REF_T(::System::TimeZoneInfo___c*);
MARK_REF_T(::System::TimeZoneInfo___c__DisplayClass16_0*);
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo*, "System", "TimeZoneInfo");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_AdjustmentRule*, "System", "TimeZoneInfo/AdjustmentRule");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo_CachedData*, "System", "TimeZoneInfo/CachedData");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo___c*, "System", "TimeZoneInfo/<>c");
DEFINE_IL2CPP_CLASS(::System::TimeZoneInfo___c__DisplayClass16_0*, "System", "TimeZoneInfo/<>c__DisplayClass16_0");
// [TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
// Dependencies System.DateTime, System.Object, System.TimeSpan, System.TimeZoneInfo::AdjustmentRule
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo
class CORDL_TYPE TimeZoneInfo : public ::System::Object {
public:
// Declarations
using TZVersion = ::GlobalNamespace::TimeZoneInfo_TZVersion;

using TZifHead = ::GlobalNamespace::TimeZoneInfo_TZifHead;

using TZifType = ::GlobalNamespace::TimeZoneInfo_TZifType;

using TimeZoneInfoResult = ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult;

using TransitionTime = ::GlobalNamespace::TimeZoneInfo_TransitionTime;

using AdjustmentRule = ::System::TimeZoneInfo_AdjustmentRule;

using CachedData = ::System::TimeZoneInfo_CachedData;

using __c = ::System::TimeZoneInfo___c;

using __c__DisplayClass16_0 = ::System::TimeZoneInfo___c__DisplayClass16_0;

 __declspec(property(get=get_BaseUtcOffset)) ::System::TimeSpan  BaseUtcOffset;

 __declspec(property(get=get_DaylightName)) ::StringW  DaylightName;

 __declspec(property(get=get_DisplayName)) ::StringW  DisplayName;

/// @brief Field MaxOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaxOffset, put=setStaticF_MaxOffset)) ::System::TimeSpan  MaxOffset;

/// @brief Field MinOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MinOffset, put=setStaticF_MinOffset)) ::System::TimeSpan  MinOffset;

 __declspec(property(get=get_StandardName)) ::StringW  StandardName;

 __declspec(property(get=get_SupportsDaylightSavingTime)) bool  SupportsDaylightSavingTime;

/// @brief Field _adjustmentRules, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__adjustmentRules, put=__cordl_internal_set__adjustmentRules)) ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  _adjustmentRules;

/// @brief Field _baseUtcOffset, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseUtcOffset, put=__cordl_internal_set__baseUtcOffset)) ::System::TimeSpan  _baseUtcOffset;

/// @brief Field _daylightDisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__daylightDisplayName, put=__cordl_internal_set__daylightDisplayName)) ::StringW  _daylightDisplayName;

/// @brief Field _displayName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayName, put=__cordl_internal_set__displayName)) ::StringW  _displayName;

/// @brief Field _id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::StringW  _id;

/// @brief Field _standardDisplayName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__standardDisplayName, put=__cordl_internal_set__standardDisplayName)) ::StringW  _standardDisplayName;

/// @brief Field _supportsDaylightSavingTime, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__supportsDaylightSavingTime, put=__cordl_internal_set__supportsDaylightSavingTime)) bool  _supportsDaylightSavingTime;

/// @brief Field s_cachedData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cachedData, put=setStaticF_s_cachedData)) ::System::TimeZoneInfo_CachedData*  s_cachedData;

/// @brief Field s_maxDateOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_maxDateOnly, put=setStaticF_s_maxDateOnly)) ::System::DateTime  s_maxDateOnly;

/// @brief Field s_minDateOnly, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_minDateOnly, put=setStaticF_s_minDateOnly)) ::System::DateTime  s_minDateOnly;

/// @brief Field s_utcTimeZone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_utcTimeZone, put=setStaticF_s_utcTimeZone)) ::System::TimeZoneInfo*  s_utcTimeZone;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CheckIsDst, addr 0xa221818, size 0x240, virtual false, abstract: false, final false
static inline bool CheckIsDst(::System::DateTime  startTime, ::System::DateTime  time, ::System::DateTime  endTime, bool  ignoreYearAdjustment, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

/// @brief Method CompareAdjustmentRuleToDateTime, addr 0xa220fa4, size 0x1b0, virtual false, abstract: false, final false
inline int32_t CompareAdjustmentRuleToDateTime(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::TimeZoneInfo_AdjustmentRule*  previousRule, ::System::DateTime  dateTime, ::System::DateTime  dateOnly, bool  dateTimeisUtc) ;

/// @brief Method CompareTimeZoneFile, addr 0xa21a378, size 0x398, virtual false, abstract: false, final false
static inline bool CompareTimeZoneFile(::StringW  filePath, ::ArrayW<uint8_t>  buffer, ::ArrayW<uint8_t>  rawData) ;

/// @brief Method ConvertFromUtc, addr 0xa221310, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime ConvertFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertTime, addr 0xa21e528, size 0x88, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method ConvertTime, addr 0xa21eae4, size 0x468, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTime(::System::DateTime  dateTime, ::System::TimeZoneInfo*  sourceTimeZone, ::System::TimeZoneInfo*  destinationTimeZone, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method ConvertTimeFromUtc, addr 0xa21fca4, size 0x74, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTimeFromUtc(::System::DateTime  dateTime, ::System::TimeZoneInfo*  destinationTimeZone) ;

/// @brief Method ConvertTimeToUtc, addr 0xa21fd18, size 0xf4, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertTimeToUtc(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method ConvertToFromUtc, addr 0xa22115c, size 0x1b4, virtual false, abstract: false, final false
inline ::System::DateTime ConvertToFromUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta, bool  convertToUtc) ;

/// @brief Method ConvertToUtc, addr 0xa221154, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime ConvertToUtc(::System::DateTime  dateTime, ::System::TimeSpan  daylightDelta, ::System::TimeSpan  baseUtcOffsetDelta) ;

/// @brief Method ConvertUtcToTimeZone, addr 0xa21fa84, size 0x220, virtual false, abstract: false, final false
static inline ::System::DateTime ConvertUtcToTimeZone(int64_t  ticks, ::System::TimeZoneInfo*  destinationTimeZone, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method CreateAdjustmentRule, addr 0xa222c28, size 0x8a4, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>* CreateAdjustmentRule(int32_t  year, ::by_ref<::ArrayW<int64_t>>  data, ::by_ref<::ArrayW<::StringW>>  names) ;

/// @brief Method CreateCustomTimeZone, addr 0xa2203d0, size 0x94, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName) ;

/// @brief Method CreateCustomTimeZone, addr 0xa220464, size 0x98, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules) ;

/// @brief Method CreateCustomTimeZone, addr 0xa2204fc, size 0x104, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* CreateCustomTimeZone(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method CreateLocalUnity, addr 0xa21a710, size 0x4cc, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* CreateLocalUnity() ;

/// @brief Method EnumerateFilesRecursively, addr 0xa219dec, size 0x584, virtual false, abstract: false, final false
static inline void EnumerateFilesRecursively(::StringW  path, ::System::Predicate_1<::StringW>*  condition) ;

/// @brief Method Equals, addr 0xa21ffd0, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa21fe0c, size 0x50, virtual true, abstract: false, final true
inline bool Equals(::System::TimeZoneInfo*  other) ;

/// @brief Method FindSystemTimeZoneById, addr 0xa21ac10, size 0x3a4, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* FindSystemTimeZoneById(::StringW  id) ;

/// @brief Method FindTimeZoneId, addr 0xa2199c0, size 0x2c0, virtual false, abstract: false, final false
static inline ::StringW FindTimeZoneId(::ArrayW<uint8_t>  rawData) ;

/// @brief Method FindTimeZoneIdUsingReadLink, addr 0xa2198b4, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW FindTimeZoneIdUsingReadLink(::StringW  tzFilePath) ;

/// @brief Method GetAdjustmentRuleForTime, addr 0xa220dec, size 0x1b8, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, bool  dateTimeisUtc, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method GetAdjustmentRuleForTime, addr 0xa21efcc, size 0xc, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetAdjustmentRuleForTime(::System::DateTime  dateTime, ::by_ref<::System::Nullable_1<int32_t>>  ruleIndex) ;

/// @brief Method GetAdjustmentRules, addr 0xa218754, size 0x480, virtual false, abstract: false, final false
inline ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> GetAdjustmentRules() ;

/// @brief Method GetDateTimeNowUtcOffsetFromUtc, addr 0xa21b280, size 0x78, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetDateTimeNowUtcOffsetFromUtc(::System::DateTime  time, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method GetDaylightSavingsEndOffsetFromUtc, addr 0xa221f24, size 0x78, virtual false, abstract: false, final false
inline ::System::TimeSpan GetDaylightSavingsEndOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule) ;

/// @brief Method GetDaylightSavingsStartOffsetFromUtc, addr 0xa221e5c, size 0xc8, virtual false, abstract: false, final false
inline ::System::TimeSpan GetDaylightSavingsStartOffsetFromUtc(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetDaylightTime, addr 0xa21f13c, size 0x12c, virtual false, abstract: false, final false
inline ::System::Globalization::DaylightTimeStruct GetDaylightTime(int32_t  year, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetDirectoryEntryFullPath, addr 0xa219c80, size 0x16c, virtual false, abstract: false, final false
static inline ::StringW GetDirectoryEntryFullPath(::by_ref<::GlobalNamespace::Sys_Interop_DirectoryEntry>  dirent, ::StringW  currentPath) ;

/// @brief Method GetHashCode, addr 0xa220034, size 0xa0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetIsAmbiguousTime, addr 0xa221a58, size 0x404, virtual false, abstract: false, final false
static inline bool GetIsAmbiguousTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetIsDaylightSavings, addr 0xa21f268, size 0x3d0, virtual false, abstract: false, final false
static inline bool GetIsDaylightSavings(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetIsDaylightSavingsFromUtc, addr 0xa221f9c, size 0x840, virtual false, abstract: false, final false
static inline bool GetIsDaylightSavingsFromUtc(::System::DateTime  time, int32_t  year, ::System::TimeSpan  utc, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex, ::by_ref<bool>  isAmbiguousLocalDst, ::System::TimeZoneInfo*  zone) ;

/// @brief Method GetIsInvalidTime, addr 0xa21f678, size 0x40c, virtual false, abstract: false, final false
static inline bool GetIsInvalidTime(::System::DateTime  time, ::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Globalization::DaylightTimeStruct  daylightTime) ;

/// @brief Method GetLocalTimeZone, addr 0xa218d1c, size 0x4c, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetLocalTimeZone(::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method GetLocalTimeZoneFromTzFile, addr 0xa218d68, size 0x184, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetLocalTimeZoneFromTzFile() ;

/// @brief Method GetLocalUtcOffset, addr 0xa21e350, size 0x9c, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetLocalUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetPreviousAdjustmentRule, addr 0xa21e024, size 0x120, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo_AdjustmentRule* GetPreviousAdjustmentRule(::System::TimeZoneInfo_AdjustmentRule*  rule, ::System::Nullable_1<int32_t>  ruleIndex) ;

/// @brief Method GetTimeZoneDirectory, addr 0xa2191a0, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW GetTimeZoneDirectory() ;

/// @brief Method GetTimeZoneDirectoryUnity, addr 0xa222c10, size 0x18, virtual false, abstract: false, final false
static inline ::StringW GetTimeZoneDirectoryUnity() ;

/// @brief Method GetTimeZoneFromTzData, addr 0xa2192dc, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* GetTimeZoneFromTzData(::ArrayW<uint8_t>  rawData, ::StringW  id) ;

/// @brief Method GetTzEnvironmentVariable, addr 0xa219664, size 0x98, virtual false, abstract: false, final false
static inline ::StringW GetTzEnvironmentVariable() ;

/// @brief Method GetUtcOffset, addr 0xa222b48, size 0xc8, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffset(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule) ;

/// @brief Method GetUtcOffset, addr 0xa21e144, size 0x74, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime) ;

/// @brief Method GetUtcOffset, addr 0xa21e424, size 0x78, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffset, addr 0xa21e1b8, size 0x198, virtual false, abstract: false, final false
inline ::System::TimeSpan GetUtcOffset(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method GetUtcOffset, addr 0xa21e620, size 0x1a8, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffset(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0xa21e5b0, size 0x70, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0xa21ef4c, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings) ;

/// @brief Method GetUtcOffsetFromUtc, addr 0xa21b2f8, size 0x2d0, virtual false, abstract: false, final false
static inline ::System::TimeSpan GetUtcOffsetFromUtc(::System::DateTime  time, ::System::TimeZoneInfo*  zone, ::by_ref<bool>  isDaylightSavings, ::by_ref<bool>  isAmbiguousLocalDst) ;

/// @brief Method HasSameRules, addr 0xa21fe5c, size 0x174, virtual false, abstract: false, final false
inline bool HasSameRules(::System::TimeZoneInfo*  other) ;

/// @brief Method IsDaylightSavingTime, addr 0xa21e7c8, size 0x74, virtual false, abstract: false, final false
inline bool IsDaylightSavingTime(::System::DateTime  dateTime) ;

/// @brief Method IsDaylightSavingTime, addr 0xa21ea6c, size 0x78, virtual false, abstract: false, final false
inline bool IsDaylightSavingTime(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags) ;

/// @brief Method IsDaylightSavingTime, addr 0xa21e83c, size 0x230, virtual false, abstract: false, final false
inline bool IsDaylightSavingTime(::System::DateTime  dateTime, ::System::TimeZoneInfoOptions  flags, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method IsValidAdjustmentRuleOffest, addr 0xa21bf50, size 0x74, virtual false, abstract: false, final false
static inline bool IsValidAdjustmentRuleOffest(::System::TimeSpan  baseUtcOffset, ::System::TimeZoneInfo_AdjustmentRule*  adjustmentRule) ;

static inline ::System::TimeZoneInfo* New_ctor() ;

static inline ::System::TimeZoneInfo* New_ctor(::ArrayW<uint8_t>  data, ::StringW  id, bool  dstDisabled) ;

static inline ::System::TimeZoneInfo* New_ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime) ;

static inline ::System::TimeZoneInfo* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method NormalizeAdjustmentRuleOffset, addr 0xa21bfc4, size 0x25c, virtual false, abstract: false, final false
static inline void NormalizeAdjustmentRuleOffset(::System::TimeSpan  baseUtcOffset, ::by_ref<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRule) ;

/// @brief Method ParseTimeOfDay, addr 0xa21cd0c, size 0x25c, virtual false, abstract: false, final false
static inline ::System::DateTime ParseTimeOfDay(::StringW  time) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0xa220600, size 0x1d4, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xa2207d4, size 0x1d8, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method TZif_CalculateTransitionOffsetFromBase, addr 0xa21bd94, size 0xf4, virtual false, abstract: false, final false
static inline ::System::TimeSpan TZif_CalculateTransitionOffsetFromBase(::System::TimeSpan  transitionOffset, ::System::TimeSpan  timeZoneBaseUtcOffset) ;

/// @brief Method TZif_CreateAdjustmentRuleForPosixFormat, addr 0xa21c220, size 0x3e8, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* TZif_CreateAdjustmentRuleForPosixFormat(::StringW  posixFormat, ::System::DateTime  startTransitionDate, ::System::TimeSpan  timeZoneBaseUtcOffset) ;

/// @brief Method TZif_CreateTransitionTimeFromPosixRule, addr 0xa21cab8, size 0x254, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime> TZif_CreateTransitionTimeFromPosixRule(::StringW  date, ::StringW  time) ;

/// @brief Method TZif_GenerateAdjustmentRule, addr 0xa21b5c8, size 0x71c, virtual false, abstract: false, final false
static inline void TZif_GenerateAdjustmentRule(::by_ref<int32_t>  index, ::System::TimeSpan  timeZoneBaseUtcOffset, ::System::Collections::Generic::List_1<::System::TimeZoneInfo_AdjustmentRule*>*  rulesList, ::ArrayW<::System::DateTime>  dts, ::ArrayW<uint8_t>  typeOfLocalTime, ::ArrayW<::GlobalNamespace::TimeZoneInfo_TZifType>  transitionTypes, ::ArrayW<bool>  StandardTime, ::ArrayW<bool>  GmtTime, ::StringW  futureTransitionsPosixFormat) ;

/// @brief Method TZif_GenerateAdjustmentRules, addr 0xa218280, size 0x18c, virtual false, abstract: false, final false
static inline void TZif_GenerateAdjustmentRules(::by_ref<::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>>  rules, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::DateTime>  dts, ::ArrayW<uint8_t>  typeOfLocalTime, ::ArrayW<::GlobalNamespace::TimeZoneInfo_TZifType>  transitionType, ::ArrayW<bool>  StandardTime, ::ArrayW<bool>  GmtTime, ::StringW  futureTransitionsPosixFormat) ;

/// @brief Method TZif_GetEarlyDateTransitionType, addr 0xa21bce4, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TZifType TZif_GetEarlyDateTransitionType(::ArrayW<::GlobalNamespace::TimeZoneInfo_TZifType>  transitionTypes) ;

/// @brief Method TZif_GetZoneAbbreviation, addr 0xa21821c, size 0x64, virtual false, abstract: false, final false
static inline ::StringW TZif_GetZoneAbbreviation(::StringW  zoneAbbreviations, int32_t  index) ;

/// @brief Method TZif_ParseJulianDay, addr 0xa21d1cc, size 0x1e0, virtual false, abstract: false, final false
static inline void TZif_ParseJulianDay(::StringW  date, ::by_ref<int32_t>  month, ::by_ref<int32_t>  day) ;

/// @brief Method TZif_ParseMDateRule, addr 0xa21cf68, size 0x1fc, virtual false, abstract: false, final false
static inline bool TZif_ParseMDateRule(::StringW  dateRule, ::by_ref<int32_t>  month, ::by_ref<int32_t>  week, ::by_ref<::System::DayOfWeek>  dayOfWeek) ;

/// @brief Method TZif_ParseOffsetString, addr 0xa21c89c, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Nullable_1<::System::TimeSpan> TZif_ParseOffsetString(::StringW  offset) ;

/// @brief Method TZif_ParsePosixDate, addr 0xa21d8ac, size 0x114, virtual false, abstract: false, final false
static inline ::StringW TZif_ParsePosixDate(::StringW  posixFormat, ::by_ref<int32_t>  index) ;

/// @brief Method TZif_ParsePosixDateTime, addr 0xa21d704, size 0x110, virtual false, abstract: false, final false
static inline void TZif_ParsePosixDateTime(::StringW  posixFormat, ::by_ref<int32_t>  index, ::by_ref<::StringW>  date, ::by_ref<::StringW>  time) ;

/// @brief Method TZif_ParsePosixFormat, addr 0xa21c608, size 0x294, virtual false, abstract: false, final false
static inline bool TZif_ParsePosixFormat(::StringW  posixFormat, ::by_ref<::StringW>  standardName, ::by_ref<::StringW>  standardOffset, ::by_ref<::StringW>  daylightSavingsName, ::by_ref<::StringW>  daylightSavingsOffset, ::by_ref<::StringW>  start, ::by_ref<::StringW>  startTime, ::by_ref<::StringW>  end, ::by_ref<::StringW>  endTime) ;

/// @brief Method TZif_ParsePosixName, addr 0xa21d3ac, size 0x244, virtual false, abstract: false, final false
static inline ::StringW TZif_ParsePosixName(::StringW  posixFormat, ::by_ref<int32_t>  index) ;

/// @brief Method TZif_ParsePosixOffset, addr 0xa21d5f0, size 0x114, virtual false, abstract: false, final false
static inline ::StringW TZif_ParsePosixOffset(::StringW  posixFormat, ::by_ref<int32_t>  index) ;

/// @brief Method TZif_ParsePosixString, addr 0xa21d814, size 0x98, virtual false, abstract: false, final false
static inline ::StringW TZif_ParsePosixString(::StringW  posixFormat, ::by_ref<int32_t>  index, ::System::Func_2<char16_t,bool>*  breakCondition) ;

/// @brief Method TZif_ParsePosixTime, addr 0xa21d9c0, size 0x114, virtual false, abstract: false, final false
static inline ::StringW TZif_ParsePosixTime(::StringW  posixFormat, ::by_ref<int32_t>  index) ;

/// @brief Method TZif_ParseRaw, addr 0xa217c64, size 0x5b8, virtual false, abstract: false, final false
static inline void TZif_ParseRaw(::ArrayW<uint8_t>  data, ::by_ref<::GlobalNamespace::TimeZoneInfo_TZifHead>  t, ::by_ref<::ArrayW<::System::DateTime>>  dts, ::by_ref<::ArrayW<uint8_t>>  typeOfLocalTime, ::by_ref<::ArrayW<::GlobalNamespace::TimeZoneInfo_TZifType>>  transitionType, ::by_ref<::StringW>  zoneAbbreviations, ::by_ref<::ArrayW<bool>>  StandardTime, ::by_ref<::ArrayW<bool>>  GmtTime, ::by_ref<::StringW>  futureTransitionsPosixFormat) ;

/// @brief Method TZif_ToInt32, addr 0xa21dad4, size 0x30, virtual false, abstract: false, final false
static inline int32_t TZif_ToInt32(::ArrayW<uint8_t>  value, int32_t  startIndex) ;

/// @brief Method TZif_ToInt64, addr 0xa21db04, size 0x30, virtual false, abstract: false, final false
static inline int64_t TZif_ToInt64(::ArrayW<uint8_t>  value, int32_t  startIndex) ;

/// @brief Method TZif_ToUnixTime, addr 0xa21db34, size 0x98, virtual false, abstract: false, final false
static inline int64_t TZif_ToUnixTime(::ArrayW<uint8_t>  value, int32_t  startIndex, ::GlobalNamespace::TimeZoneInfo_TZVersion  version) ;

/// @brief Method TZif_UnixTimeToDateTime, addr 0xa21dbcc, size 0xf4, virtual false, abstract: false, final false
static inline ::System::DateTime TZif_UnixTimeToDateTime(int64_t  unixTime) ;

/// @brief Method ToString, addr 0xa220238, size 0x24, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TransitionTimeToDateTime, addr 0xa221318, size 0x2d0, virtual false, abstract: false, final false
static inline ::System::DateTime TransitionTimeToDateTime(int32_t  year, ::GlobalNamespace::TimeZoneInfo_TransitionTime  transitionTime) ;

/// @brief Method TryGetLocalTzFile, addr 0xa219484, size 0x1e0, virtual false, abstract: false, final false
static inline bool TryGetLocalTzFile(::by_ref<::ArrayW<uint8_t>>  rawData, ::by_ref<::StringW>  id) ;

/// @brief Method TryGetTimeZone, addr 0xa21b0ac, size 0x1d4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZone(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData, bool  alwaysFallbackToLocalMachine) ;

/// @brief Method TryGetTimeZoneFromLocalMachine, addr 0xa2227dc, size 0x238, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(::StringW  id, bool  dstDisabled, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e, ::System::TimeZoneInfo_CachedData*  cachedData) ;

/// @brief Method TryGetTimeZoneFromLocalMachine, addr 0xa218eec, size 0x2b4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(::StringW  id, ::by_ref<::System::TimeZoneInfo*>  value, ::by_ref<::System::Exception*>  e) ;

/// @brief Method TryLoadTzFile, addr 0xa2196fc, size 0x1b8, virtual false, abstract: false, final false
static inline bool TryLoadTzFile(::StringW  tzFilePath, ::by_ref<::ArrayW<uint8_t>>  rawData, ::by_ref<::StringW>  id) ;

/// @brief Method UtcOffsetOutOfRange, addr 0xa222a14, size 0xf0, virtual false, abstract: false, final false
static inline bool UtcOffsetOutOfRange(::System::TimeSpan  offset) ;

/// @brief Method ValidateTimeZoneInfo, addr 0xa21840c, size 0x348, virtual false, abstract: false, final false
static inline void ValidateTimeZoneInfo(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, ::by_ref<bool>  adjustmentRulesSupportDst) ;

constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*> const& __cordl_internal_get__adjustmentRules() const;

constexpr ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>& __cordl_internal_get__adjustmentRules() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffset() const;

constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffset() ;

constexpr ::StringW const& __cordl_internal_get__daylightDisplayName() const;

constexpr ::StringW& __cordl_internal_get__daylightDisplayName() ;

constexpr ::StringW const& __cordl_internal_get__displayName() const;

constexpr ::StringW& __cordl_internal_get__displayName() ;

constexpr ::StringW const& __cordl_internal_get__id() const;

constexpr ::StringW& __cordl_internal_get__id() ;

constexpr ::StringW const& __cordl_internal_get__standardDisplayName() const;

constexpr ::StringW& __cordl_internal_get__standardDisplayName() ;

constexpr bool const& __cordl_internal_get__supportsDaylightSavingTime() const;

constexpr bool& __cordl_internal_get__supportsDaylightSavingTime() ;

constexpr void __cordl_internal_set__adjustmentRules(::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  value) ;

constexpr void __cordl_internal_set__baseUtcOffset(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__daylightDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set__displayName(::StringW  value) ;

constexpr void __cordl_internal_set__id(::StringW  value) ;

constexpr void __cordl_internal_set__standardDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set__supportsDaylightSavingTime(bool  value) ;

/// @brief Method .ctor, addr 0xa223658, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa2177cc, size 0x498, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t>  data, ::StringW  id, bool  dstDisabled) ;

/// @brief Method .ctor, addr 0xa2202b4, size 0x11c, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::System::TimeSpan  baseUtcOffset, ::StringW  displayName, ::StringW  standardDisplayName, ::StringW  daylightDisplayName, ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  adjustmentRules, bool  disableDaylightSavingTime) ;

/// @brief Method .ctor, addr 0xa2209ac, size 0x440, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::System::TimeSpan getStaticF_MaxOffset() ;

static inline ::System::TimeSpan getStaticF_MinOffset() ;

static inline ::System::TimeZoneInfo_CachedData* getStaticF_s_cachedData() ;

static inline ::System::DateTime getStaticF_s_maxDateOnly() ;

static inline ::System::DateTime getStaticF_s_minDateOnly() ;

static inline ::System::TimeZoneInfo* getStaticF_s_utcTimeZone() ;

/// @brief Method get_BaseUtcOffset, addr 0xa21e014, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_BaseUtcOffset() ;

/// @brief Method get_DaylightName, addr 0xa21dff0, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_DaylightName() ;

/// @brief Method get_DisplayName, addr 0xa21dfa8, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_DisplayName() ;

/// @brief Method get_Local, addr 0xa21afb4, size 0x80, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* get_Local() ;

/// @brief Method get_StandardName, addr 0xa21dfcc, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_StandardName() ;

/// @brief Method get_SupportsDaylightSavingTime, addr 0xa21e01c, size 0x8, virtual false, abstract: false, final false
inline bool get_SupportsDaylightSavingTime() ;

/// @brief Method get_Utc, addr 0xa22025c, size 0x58, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo* get_Utc() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo*>* i___System__IEquatable_1___System__TimeZoneInfo__() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

static inline void setStaticF_MaxOffset(::System::TimeSpan  value) ;

static inline void setStaticF_MinOffset(::System::TimeSpan  value) ;

static inline void setStaticF_s_cachedData(::System::TimeZoneInfo_CachedData*  value) ;

static inline void setStaticF_s_maxDateOnly(::System::DateTime  value) ;

static inline void setStaticF_s_minDateOnly(::System::DateTime  value) ;

static inline void setStaticF_s_utcTimeZone(::System::TimeZoneInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo(TimeZoneInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo(TimeZoneInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5424};

/// @brief Field _id, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id;

/// @brief Field _displayName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____displayName;

/// @brief Field _standardDisplayName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____standardDisplayName;

/// @brief Field _daylightDisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____daylightDisplayName;

/// @brief Field _baseUtcOffset, offset: 0x30, size: 0x8, def value: None
 ::System::TimeSpan  ____baseUtcOffset;

/// @brief Field _supportsDaylightSavingTime, offset: 0x38, size: 0x1, def value: None
 bool  ____supportsDaylightSavingTime;

/// @brief Field _adjustmentRules, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::System::TimeZoneInfo_AdjustmentRule*>  ____adjustmentRules;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo, ____id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____displayName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____standardDisplayName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____daylightDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____baseUtcOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____supportsDaylightSavingTime) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo, ____adjustmentRules) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo) == 0x48, "Size mismatch!");

} // namespace end def System
// [CompilerGenerated]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/<>c
class CORDL_TYPE TimeZoneInfo___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::TimeZoneInfo___c*  __9;

/// @brief Field <>9__161_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__161_0, put=setStaticF___9__161_0)) ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>*  __9__161_0;

/// @brief Field <>9__34_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_0, put=setStaticF___9__34_0)) ::System::Func_2<char16_t,bool>*  __9__34_0;

/// @brief Field <>9__34_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__34_1, put=setStaticF___9__34_1)) ::System::Func_2<char16_t,bool>*  __9__34_1;

/// @brief Field <>9__35_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__35_0, put=setStaticF___9__35_0)) ::System::Func_2<char16_t,bool>*  __9__35_0;

/// @brief Field <>9__37_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__37_0, put=setStaticF___9__37_0)) ::System::Func_2<char16_t,bool>*  __9__37_0;

/// @brief Field <>9__38_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__38_0, put=setStaticF___9__38_0)) ::System::Func_2<char16_t,bool>*  __9__38_0;

static inline ::System::TimeZoneInfo___c* New_ctor() ;

/// @brief Method <CreateLocalUnity>b__161_0, addr 0xa2253c0, size 0x88, virtual false, abstract: false, final false
inline int32_t _CreateLocalUnity_b__161_0(::System::TimeZoneInfo_AdjustmentRule*  rule1, ::System::TimeZoneInfo_AdjustmentRule*  rule2) ;

/// @brief Method <TZif_ParsePosixDate>b__37_0, addr 0xa225398, size 0x18, virtual false, abstract: false, final false
inline bool _TZif_ParsePosixDate_b__37_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixName>b__34_0, addr 0xa225290, size 0x48, virtual false, abstract: false, final false
inline bool _TZif_ParsePosixName_b__34_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixName>b__34_1, addr 0xa225280, size 0x10, virtual false, abstract: false, final false
inline bool _TZif_ParsePosixName_b__34_1(char16_t  c) ;

/// @brief Method <TZif_ParsePosixOffset>b__35_0, addr 0xa225338, size 0x60, virtual false, abstract: false, final false
inline bool _TZif_ParsePosixOffset_b__35_0(char16_t  c) ;

/// @brief Method <TZif_ParsePosixTime>b__38_0, addr 0xa2253b0, size 0x10, virtual false, abstract: false, final false
inline bool _TZif_ParsePosixTime_b__38_0(char16_t  c) ;

/// @brief Method .ctor, addr 0xa225278, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::TimeZoneInfo___c* getStaticF___9() ;

static inline ::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>* getStaticF___9__161_0() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__34_0() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__34_1() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__35_0() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__37_0() ;

static inline ::System::Func_2<char16_t,bool>* getStaticF___9__38_0() ;

static inline void setStaticF___9(::System::TimeZoneInfo___c*  value) ;

static inline void setStaticF___9__161_0(::System::Comparison_1<::System::TimeZoneInfo_AdjustmentRule*>*  value) ;

static inline void setStaticF___9__34_0(::System::Func_2<char16_t,bool>*  value) ;

static inline void setStaticF___9__34_1(::System::Func_2<char16_t,bool>*  value) ;

static inline void setStaticF___9__35_0(::System::Func_2<char16_t,bool>*  value) ;

static inline void setStaticF___9__37_0(::System::Func_2<char16_t,bool>*  value) ;

static inline void setStaticF___9__38_0(::System::Func_2<char16_t,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo___c(TimeZoneInfo___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo___c(TimeZoneInfo___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5423};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::TimeZoneInfo___c) == 0x10, "Size mismatch!");

} // namespace end def System
// [CompilerGenerated]
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/<>c__DisplayClass16_0
class CORDL_TYPE TimeZoneInfo___c__DisplayClass16_0 : public ::System::Object {
public:
// Declarations
/// @brief Field buffer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<uint8_t>  buffer;

/// @brief Field id, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::StringW  id;

/// @brief Field localtimeFilePath, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_localtimeFilePath, put=__cordl_internal_set_localtimeFilePath)) ::StringW  localtimeFilePath;

/// @brief Field posixrulesFilePath, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_posixrulesFilePath, put=__cordl_internal_set_posixrulesFilePath)) ::StringW  posixrulesFilePath;

/// @brief Field rawData, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rawData, put=__cordl_internal_set_rawData)) ::ArrayW<uint8_t>  rawData;

/// @brief Field timeZoneDirectory, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeZoneDirectory, put=__cordl_internal_set_timeZoneDirectory)) ::StringW  timeZoneDirectory;

static inline ::System::TimeZoneInfo___c__DisplayClass16_0* New_ctor() ;

/// @brief Method <FindTimeZoneId>b__0, addr 0xa225100, size 0x110, virtual false, abstract: false, final false
inline bool _FindTimeZoneId_b__0(::StringW  filePath) ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_buffer() ;

constexpr ::StringW const& __cordl_internal_get_id() const;

constexpr ::StringW& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_localtimeFilePath() const;

constexpr ::StringW& __cordl_internal_get_localtimeFilePath() ;

constexpr ::StringW const& __cordl_internal_get_posixrulesFilePath() const;

constexpr ::StringW& __cordl_internal_get_posixrulesFilePath() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_rawData() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_rawData() ;

constexpr ::StringW const& __cordl_internal_get_timeZoneDirectory() const;

constexpr ::StringW& __cordl_internal_get_timeZoneDirectory() ;

constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_id(::StringW  value) ;

constexpr void __cordl_internal_set_localtimeFilePath(::StringW  value) ;

constexpr void __cordl_internal_set_posixrulesFilePath(::StringW  value) ;

constexpr void __cordl_internal_set_rawData(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_timeZoneDirectory(::StringW  value) ;

/// @brief Method .ctor, addr 0xa21a370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo___c__DisplayClass16_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c__DisplayClass16_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo___c__DisplayClass16_0(TimeZoneInfo___c__DisplayClass16_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo___c__DisplayClass16_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo___c__DisplayClass16_0(TimeZoneInfo___c__DisplayClass16_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5422};

/// @brief Field localtimeFilePath, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___localtimeFilePath;

/// @brief Field posixrulesFilePath, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___posixrulesFilePath;

/// @brief Field buffer, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___buffer;

/// @brief Field rawData, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___rawData;

/// @brief Field id, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___id;

/// @brief Field timeZoneDirectory, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___timeZoneDirectory;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___localtimeFilePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___posixrulesFilePath) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___rawData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___id) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo___c__DisplayClass16_0, ___timeZoneDirectory) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo___c__DisplayClass16_0) == 0x40, "Size mismatch!");

} // namespace end def System
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/CachedData
class CORDL_TYPE TimeZoneInfo_CachedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Local)) ::System::TimeZoneInfo*  Local;

/// @brief Field _allSystemTimeZonesRead, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__allSystemTimeZonesRead, put=__cordl_internal_set__allSystemTimeZonesRead)) bool  _allSystemTimeZonesRead;

/// @brief Field _localTimeZone, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__localTimeZone, put=__cordl_internal_set__localTimeZone)) ::System::TimeZoneInfo*  _localTimeZone;

/// @brief Field _systemTimeZones, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__systemTimeZones, put=__cordl_internal_set__systemTimeZones)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  _systemTimeZones;

/// @brief Method CreateLocal, addr 0xa224f70, size 0x190, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo* CreateLocal() ;

/// @brief Method GetCorrespondingKind, addr 0xa21e49c, size 0x8c, virtual false, abstract: false, final false
inline ::System::DateTimeKind GetCorrespondingKind(::System::TimeZoneInfo*  timeZone) ;

static inline ::System::TimeZoneInfo_CachedData* New_ctor() ;

constexpr bool const& __cordl_internal_get__allSystemTimeZonesRead() const;

constexpr bool& __cordl_internal_get__allSystemTimeZonesRead() ;

constexpr ::System::TimeZoneInfo* const& __cordl_internal_get__localTimeZone() const;

constexpr ::System::TimeZoneInfo*& __cordl_internal_get__localTimeZone() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>* const& __cordl_internal_get__systemTimeZones() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*& __cordl_internal_get__systemTimeZones() ;

constexpr void __cordl_internal_set__allSystemTimeZonesRead(bool  value) ;

constexpr void __cordl_internal_set__localTimeZone(::System::TimeZoneInfo*  value) ;

constexpr void __cordl_internal_set__systemTimeZones(::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa223650, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Local, addr 0xa21e3ec, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeZoneInfo* get_Local() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_CachedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo_CachedData(TimeZoneInfo_CachedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_CachedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo_CachedData(TimeZoneInfo_CachedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5421};

/// @brief Field _localTimeZone, offset: 0x10, size: 0x8, def value: None
 ::System::TimeZoneInfo*  ____localTimeZone;

/// @brief Field _systemTimeZones, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::TimeZoneInfo*>*  ____systemTimeZones;

/// @brief Field _allSystemTimeZonesRead, offset: 0x20, size: 0x1, def value: None
 bool  ____allSystemTimeZonesRead;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____localTimeZone) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____systemTimeZones) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_CachedData, ____allSystemTimeZonesRead) == 0x20, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_CachedData) == 0x28, "Size mismatch!");

} // namespace end def System
// Dependencies System.DateTime, System.Object, System.TimeSpan, System.TimeZoneInfo::TransitionTime
namespace System {
// Is value type: false
// CS Name: System.TimeZoneInfo/AdjustmentRule
class CORDL_TYPE TimeZoneInfo_AdjustmentRule : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_BaseUtcOffsetDelta)) ::System::TimeSpan  BaseUtcOffsetDelta;

 __declspec(property(get=get_DateEnd)) ::System::DateTime  DateEnd;

 __declspec(property(get=get_DateStart)) ::System::DateTime  DateStart;

 __declspec(property(get=get_DaylightDelta)) ::System::TimeSpan  DaylightDelta;

 __declspec(property(get=get_DaylightTransitionEnd)) ::GlobalNamespace::TimeZoneInfo_TransitionTime  DaylightTransitionEnd;

 __declspec(property(get=get_DaylightTransitionStart)) ::GlobalNamespace::TimeZoneInfo_TransitionTime  DaylightTransitionStart;

 __declspec(property(get=get_HasDaylightSaving)) bool  HasDaylightSaving;

 __declspec(property(get=get_NoDaylightTransitions)) bool  NoDaylightTransitions;

/// @brief Field _baseUtcOffsetDelta, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__baseUtcOffsetDelta, put=__cordl_internal_set__baseUtcOffsetDelta)) ::System::TimeSpan  _baseUtcOffsetDelta;

/// @brief Field _dateEnd, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateEnd, put=__cordl_internal_set__dateEnd)) ::System::DateTime  _dateEnd;

/// @brief Field _dateStart, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__dateStart, put=__cordl_internal_set__dateStart)) ::System::DateTime  _dateStart;

/// @brief Field _daylightDelta, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__daylightDelta, put=__cordl_internal_set__daylightDelta)) ::System::TimeSpan  _daylightDelta;

/// @brief Field _daylightTransitionEnd, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__daylightTransitionEnd, put=__cordl_internal_set__daylightTransitionEnd)) ::GlobalNamespace::TimeZoneInfo_TransitionTime  _daylightTransitionEnd;

/// @brief Field _daylightTransitionStart, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__daylightTransitionStart, put=__cordl_internal_set__daylightTransitionStart)) ::GlobalNamespace::TimeZoneInfo_TransitionTime  _daylightTransitionStart;

/// @brief Field _noDaylightTransitions, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__noDaylightTransitions, put=__cordl_internal_set__noDaylightTransitions)) bool  _noDaylightTransitions;

/// @brief Convert operator to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr operator  ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CreateAdjustmentRule, addr 0xa218c34, size 0xe8, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionEnd) ;

/// @brief Method CreateAdjustmentRule, addr 0xa21be88, size 0xc8, virtual false, abstract: false, final false
static inline ::System::TimeZoneInfo_AdjustmentRule* CreateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method Equals, addr 0xa2200d4, size 0x164, virtual true, abstract: false, final true
inline bool Equals(::System::TimeZoneInfo_AdjustmentRule*  other) ;

/// @brief Method GetHashCode, addr 0xa2237ec, size 0x58, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsEndDateMarkerForEndOfYear, addr 0xa221700, size 0x118, virtual false, abstract: false, final false
inline bool IsEndDateMarkerForEndOfYear() ;

/// @brief Method IsStartDateMarkerForBeginningOfYear, addr 0xa2215e8, size 0x118, virtual false, abstract: false, final false
inline bool IsStartDateMarkerForBeginningOfYear() ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor() ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

static inline ::System::TimeZoneInfo_AdjustmentRule* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0xa223e54, size 0x114, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xa223f68, size 0x240, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ValidateAdjustmentRule, addr 0xa223908, size 0x4e8, virtual false, abstract: false, final false
static inline void ValidateAdjustmentRule(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionEnd, bool  noDaylightTransitions) ;

constexpr ::System::TimeSpan const& __cordl_internal_get__baseUtcOffsetDelta() const;

constexpr ::System::TimeSpan& __cordl_internal_get__baseUtcOffsetDelta() ;

constexpr ::System::DateTime const& __cordl_internal_get__dateEnd() const;

constexpr ::System::DateTime& __cordl_internal_get__dateEnd() ;

constexpr ::System::DateTime const& __cordl_internal_get__dateStart() const;

constexpr ::System::DateTime& __cordl_internal_get__dateStart() ;

constexpr ::System::TimeSpan const& __cordl_internal_get__daylightDelta() const;

constexpr ::System::TimeSpan& __cordl_internal_get__daylightDelta() ;

constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionEnd() const;

constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionEnd() ;

constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime const& __cordl_internal_get__daylightTransitionStart() const;

constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime& __cordl_internal_get__daylightTransitionStart() ;

constexpr bool const& __cordl_internal_get__noDaylightTransitions() const;

constexpr bool& __cordl_internal_get__noDaylightTransitions() ;

constexpr void __cordl_internal_set__baseUtcOffsetDelta(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__dateEnd(::System::DateTime  value) ;

constexpr void __cordl_internal_set__dateStart(::System::DateTime  value) ;

constexpr void __cordl_internal_set__daylightDelta(::System::TimeSpan  value) ;

constexpr void __cordl_internal_set__daylightTransitionEnd(::GlobalNamespace::TimeZoneInfo_TransitionTime  value) ;

constexpr void __cordl_internal_set__daylightTransitionStart(::GlobalNamespace::TimeZoneInfo_TransitionTime  value) ;

constexpr void __cordl_internal_set__noDaylightTransitions(bool  value) ;

/// @brief Method .ctor, addr 0xa224590, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa223844, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  dateStart, ::System::DateTime  dateEnd, ::System::TimeSpan  daylightDelta, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionStart, ::GlobalNamespace::TimeZoneInfo_TransitionTime  daylightTransitionEnd, ::System::TimeSpan  baseUtcOffsetDelta, bool  noDaylightTransitions) ;

/// @brief Method .ctor, addr 0xa2241a8, size 0x3e8, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method get_BaseUtcOffsetDelta, addr 0xa2236d0, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_BaseUtcOffsetDelta() ;

/// @brief Method get_DateEnd, addr 0xa223698, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateEnd() ;

/// @brief Method get_DateStart, addr 0xa223690, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateStart() ;

/// @brief Method get_DaylightDelta, addr 0xa2236a0, size 0x8, virtual false, abstract: false, final false
inline ::System::TimeSpan get_DaylightDelta() ;

/// @brief Method get_DaylightTransitionEnd, addr 0xa2236bc, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeZoneInfo_TransitionTime get_DaylightTransitionEnd() ;

/// @brief Method get_DaylightTransitionStart, addr 0xa2236a8, size 0x14, virtual false, abstract: false, final false
inline ::GlobalNamespace::TimeZoneInfo_TransitionTime get_DaylightTransitionStart() ;

/// @brief Method get_HasDaylightSaving, addr 0xa21efd8, size 0x164, virtual false, abstract: false, final false
inline bool get_HasDaylightSaving() ;

/// @brief Method get_NoDaylightTransitions, addr 0xa2236d8, size 0x8, virtual false, abstract: false, final false
inline bool get_NoDaylightTransitions() ;

/// @brief Convert to "::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>"
constexpr ::System::IEquatable_1<::System::TimeZoneInfo_AdjustmentRule*>* i___System__IEquatable_1___System__TimeZoneInfo_AdjustmentRule__() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_AdjustmentRule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TimeZoneInfo_AdjustmentRule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TimeZoneInfo_AdjustmentRule(TimeZoneInfo_AdjustmentRule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5418};

/// @brief Field _dateStart, offset: 0x10, size: 0x8, def value: None
 ::System::DateTime  ____dateStart;

/// @brief Field _dateEnd, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____dateEnd;

/// @brief Field _daylightDelta, offset: 0x20, size: 0x8, def value: None
 ::System::TimeSpan  ____daylightDelta;

/// @brief Field _daylightTransitionStart, offset: 0x28, size: 0x18, def value: None
 ::GlobalNamespace::TimeZoneInfo_TransitionTime  ____daylightTransitionStart;

/// @brief Field _daylightTransitionEnd, offset: 0x40, size: 0x18, def value: None
 ::GlobalNamespace::TimeZoneInfo_TransitionTime  ____daylightTransitionEnd;

/// @brief Field _baseUtcOffsetDelta, offset: 0x58, size: 0x8, def value: None
 ::System::TimeSpan  ____baseUtcOffsetDelta;

/// @brief Field _noDaylightTransitions, offset: 0x60, size: 0x1, def value: None
 bool  ____noDaylightTransitions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____dateEnd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightDelta) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____daylightTransitionEnd) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____baseUtcOffsetDelta) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::TimeZoneInfo_AdjustmentRule, ____noDaylightTransitions) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::TimeZoneInfo_AdjustmentRule) == 0x68, "Size mismatch!");

} // namespace end def System

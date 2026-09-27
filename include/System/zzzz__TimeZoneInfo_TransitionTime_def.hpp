#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TransitionTime.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TimeZoneInfo_TransitionTime)
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
struct DateTime;
}
namespace System {
struct DayOfWeek;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct TimeZoneInfo_TransitionTime;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TimeZoneInfo_TransitionTime);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TimeZoneInfo_TransitionTime, "System", "TimeZoneInfo/TransitionTime");
// [IsReadOnly]
// Dependencies System.DateTime, System.DayOfWeek
namespace GlobalNamespace {
// Is value type: true
// CS Name: System.TimeZoneInfo/TransitionTime
struct CORDL_TYPE TimeZoneInfo_TransitionTime {
public:
// Declarations
 __declspec(property(get=get_Day)) int32_t  Day;

 __declspec(property(get=get_DayOfWeek)) ::System::DayOfWeek  DayOfWeek;

 __declspec(property(get=get_IsFixedDateRule)) bool  IsFixedDateRule;

 __declspec(property(get=get_Month)) int32_t  Month;

 __declspec(property(get=get_TimeOfDay)) ::System::DateTime  TimeOfDay;

 __declspec(property(get=get_Week)) int32_t  Week;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr operator  ::System::Runtime::Serialization::IDeserializationCallback*() ;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() ;

/// @brief Method CreateFixedDateRule, addr 0xa218bd4, size 0x60, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TransitionTime CreateFixedDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  day) ;

/// @brief Method CreateFloatingDateRule, addr 0xa21d164, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TimeZoneInfo_TransitionTime CreateFloatingDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method Equals, addr 0xa2245f8, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa223714, size 0xd8, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::TimeZoneInfo_TransitionTime  other) ;

/// @brief Method GetHashCode, addr 0xa224688, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0xa2249b0, size 0xec, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0xa224a9c, size 0x1a8, virtual true, abstract: false, final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ValidateTransitionTime, addr 0xa224700, size 0x2b0, virtual false, abstract: false, final false
static inline void ValidateTransitionTime(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek) ;

/// @brief Method .ctor, addr 0xa224c44, size 0x32c, virtual false, abstract: false, final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor, addr 0xa224690, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek, bool  isFixedDateRule) ;

/// @brief Method get_Day, addr 0xa2245e0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Day() ;

/// @brief Method get_DayOfWeek, addr 0xa2245e8, size 0x8, virtual false, abstract: false, final false
inline ::System::DayOfWeek get_DayOfWeek() ;

/// @brief Method get_IsFixedDateRule, addr 0xa2245f0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFixedDateRule() ;

/// @brief Method get_Month, addr 0xa2245d0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Month() ;

/// @brief Method get_TimeOfDay, addr 0xa2245c8, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_TimeOfDay() ;

/// @brief Method get_Week, addr 0xa2245d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Week() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>"
constexpr ::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>* i___System__IEquatable_1___GlobalNamespace__TimeZoneInfo_TransitionTime_() ;

/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() ;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() ;

/// @brief Method op_Inequality, addr 0xa2236e0, size 0x34, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::TimeZoneInfo_TransitionTime  t1, ::GlobalNamespace::TimeZoneInfo_TransitionTime  t2) ;

// Ctor Parameters []
// @brief default ctor
constexpr TimeZoneInfo_TransitionTime() ;

// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: None, comment: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: None, comment: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr TimeZoneInfo_TransitionTime(::System::DateTime  _timeOfDay, uint8_t  _month, uint8_t  _week, uint8_t  _day, ::System::DayOfWeek  _dayOfWeek, bool  _isFixedDateRule) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5419};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field _timeOfDay, offset: 0x0, size: 0x8, def value: None
 ::System::DateTime  _timeOfDay;

/// @brief Field _month, offset: 0x8, size: 0x1, def value: None
 uint8_t  _month;

/// @brief Field _week, offset: 0x9, size: 0x1, def value: None
 uint8_t  _week;

/// @brief Field _day, offset: 0xa, size: 0x1, def value: None
 uint8_t  _day;

/// @brief Field _dayOfWeek, offset: 0xc, size: 0x4, def value: None
 ::System::DayOfWeek  _dayOfWeek;

/// @brief Field _isFixedDateRule, offset: 0x10, size: 0x1, def value: None
 bool  _isFixedDateRule;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _timeOfDay) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _month) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _week) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _day) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _dayOfWeek) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TimeZoneInfo_TransitionTime, _isFixedDateRule) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TimeZoneInfo_TransitionTime) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "System/TimeZoneInfo_TransitionTime.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__DayOfWeek_impl.hpp"
#include "System/zzzz__TimeZoneInfo_TransitionTime_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_TimeOfDay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_TimeOfDay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_Month
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_Month)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Month", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_Week
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_Week)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Week", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_Day
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_Day)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Day", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_DayOfWeek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DayOfWeek (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_DayOfWeek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_DayOfWeek", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.get_IsFixedDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::get_IsFixedDateRule)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2245f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_IsFixedDateRule", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa2245f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                    {::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::TimeZoneInfo_TransitionTime, ::GlobalNamespace::TimeZoneInfo_TransitionTime)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::op_Inequality)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa2236e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::GlobalNamespace::TimeZoneInfo_TransitionTime)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::Equals)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa223714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)()>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa224688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                    {::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek, bool)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa224690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.CreateFixedDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::CreateFixedDateRule)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa218bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"CreateFixedDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.CreateFloatingDateRule
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TimeZoneInfo_TransitionTime (*)(::System::DateTime, int32_t, int32_t, ::System::DayOfWeek)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::CreateFloatingDateRule)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa21d164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"CreateFloatingDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.ValidateTransitionTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime, int32_t, int32_t, int32_t, ::System::DayOfWeek)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::ValidateTransitionTime)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0xa224700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"ValidateTransitionTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::System::Object*)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa2249b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime.System_Runtime_Serialization_ISerializable_GetObjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa224a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimeZoneInfo_TransitionTime._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimeZoneInfo_TransitionTime::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::GlobalNamespace::TimeZoneInfo_TransitionTime::_ctor)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa224c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::DateTime GlobalNamespace::TimeZoneInfo_TransitionTime::get_TimeOfDay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_TimeOfDay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeZoneInfo_TransitionTime::get_Month()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Month", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeZoneInfo_TransitionTime::get_Week()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Week", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::TimeZoneInfo_TransitionTime::get_Day()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_Day", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::System::DayOfWeek GlobalNamespace::TimeZoneInfo_TransitionTime::get_DayOfWeek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_DayOfWeek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DayOfWeek>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeZoneInfo_TransitionTime::get_IsFixedDateRule()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"get_IsFixedDateRule", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::TimeZoneInfo_TransitionTime::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::TimeZoneInfo_TransitionTime::op_Inequality(::GlobalNamespace::TimeZoneInfo_TransitionTime  t1, ::GlobalNamespace::TimeZoneInfo_TransitionTime  t2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"op_Inequality", {}, {::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), ::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t1, t2);
}
inline bool GlobalNamespace::TimeZoneInfo_TransitionTime::Equals(::GlobalNamespace::TimeZoneInfo_TransitionTime  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::TimeZoneInfo_TransitionTime::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::TimeZoneInfo_TransitionTime::_ctor(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek, bool  isFixedDateRule)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
}
inline ::GlobalNamespace::TimeZoneInfo_TransitionTime GlobalNamespace::TimeZoneInfo_TransitionTime::CreateFixedDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  day)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"CreateFixedDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, day);
}
inline ::GlobalNamespace::TimeZoneInfo_TransitionTime GlobalNamespace::TimeZoneInfo_TransitionTime::CreateFloatingDateRule(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, ::System::DayOfWeek  dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"CreateFloatingDateRule", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TimeZoneInfo_TransitionTime>(nullptr, ___internal_method, timeOfDay, month, week, dayOfWeek);
}
inline void GlobalNamespace::TimeZoneInfo_TransitionTime::ValidateTransitionTime(::System::DateTime  timeOfDay, int32_t  month, int32_t  week, int32_t  day, ::System::DayOfWeek  dayOfWeek)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"ValidateTransitionTime", {}, {::i2c::type_of<::System::DateTime>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::DayOfWeek>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, timeOfDay, month, week, day, dayOfWeek);
}
inline void GlobalNamespace::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object*  sender)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, sender);
}
inline void GlobalNamespace::TimeZoneInfo_TransitionTime::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {"System.Runtime.Serialization.ISerializable.GetObjectData", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
inline void GlobalNamespace::TimeZoneInfo_TransitionTime::_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimeZoneInfo_TransitionTime>(),
                        {".ctor", {}, {::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, info, context);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>"
constexpr  GlobalNamespace::TimeZoneInfo_TransitionTime::operator ::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>"
constexpr ::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>* GlobalNamespace::TimeZoneInfo_TransitionTime::i___System__IEquatable_1___GlobalNamespace__TimeZoneInfo_TransitionTime_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::TimeZoneInfo_TransitionTime>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr  GlobalNamespace::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::ISerializable*()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* GlobalNamespace::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__ISerializable()  {
return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr  GlobalNamespace::TimeZoneInfo_TransitionTime::operator ::System::Runtime::Serialization::IDeserializationCallback*()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* GlobalNamespace::TimeZoneInfo_TransitionTime::i___System__Runtime__Serialization__IDeserializationCallback()  {
return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_timeOfDay", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_month", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_week", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_day", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_dayOfWeek", ty: "::System::DayOfWeek", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_isFixedDateRule", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime(::System::DateTime  _timeOfDay, uint8_t  _month, uint8_t  _week, uint8_t  _day, ::System::DayOfWeek  _dayOfWeek, bool  _isFixedDateRule) noexcept  {
this->_timeOfDay = _timeOfDay;
this->_month = _month;
this->_week = _week;
this->_day = _day;
this->_dayOfWeek = _dayOfWeek;
this->_isFixedDateRule = _isFixedDateRule;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimeZoneInfo_TransitionTime::TimeZoneInfo_TransitionTime()   {
}

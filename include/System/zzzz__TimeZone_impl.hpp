#pragma once
// IWYU pragma private; include "System/TimeZone.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TimeZone_def.hpp"
#include "System/Globalization/zzzz__DaylightTime_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::TimeZone.get_InternalSyncObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)()>(&::System::TimeZone::get_InternalSyncObject)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa2f6ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {"get_InternalSyncObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::TimeZone::*)()>(&::System::TimeZone::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f6f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.get_CurrentTimeZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeZone* (*)()>(&::System::TimeZone::get_CurrentTimeZone)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa2f6f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {"get_CurrentTimeZone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.ToLocalTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::System::TimeZone::*)(::System::DateTime)>(&::System::TimeZone::ToLocalTime)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa2f710c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZone*>(),
                    {::i2c::class_of<::System::TimeZone*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TimeZone.GetDaylightChanges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Globalization::DaylightTime* (::System::TimeZone::*)(int32_t)>(&::System::TimeZone::GetDaylightChanges)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::TimeZone*>(),
                    {::i2c::class_of<::System::TimeZone*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void System::TimeZone::setStaticF_currentTimeZone(::System::TimeZone*  value)  {
::cordl_internals::setStaticField<::System::TimeZone*, "currentTimeZone", ::System::TimeZone*>(std::forward<::System::TimeZone*>(value));
}
inline ::System::TimeZone* System::TimeZone::getStaticF_currentTimeZone()  {
return ::cordl_internals::getStaticField<::System::TimeZone*, "currentTimeZone", ::System::TimeZone*>();
}
inline void System::TimeZone::setStaticF_s_InternalSyncObject(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "s_InternalSyncObject", ::System::TimeZone*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::TimeZone::getStaticF_s_InternalSyncObject()  {
return ::cordl_internals::getStaticField<::System::Object*, "s_InternalSyncObject", ::System::TimeZone*>();
}
inline ::System::Object* System::TimeZone::get_InternalSyncObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {"get_InternalSyncObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method);
}
inline void System::TimeZone::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::TimeZone* System::TimeZone::get_CurrentTimeZone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::TimeZone*>(),
                        {"get_CurrentTimeZone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeZone*>(nullptr, ___internal_method);
}
inline ::System::DateTime System::TimeZone::ToLocalTime(::System::DateTime  time)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZone*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(this, ___internal_method, time);
}
inline ::System::Globalization::DaylightTime* System::TimeZone::GetDaylightChanges(int32_t  year)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::TimeZone*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Globalization::DaylightTime*>(this, ___internal_method, year);
}
inline ::System::TimeZone* System::TimeZone::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::TimeZone*>());
}
// Ctor Parameters []
constexpr ::System::TimeZone::TimeZone()   {
}

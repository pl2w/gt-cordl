#pragma once
// IWYU pragma private; include "UniLabs/Time/TimeUnitExtensions.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UniLabs/Time/zzzz__TimeUnitExtensions_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnitExtensions_def.hpp"
#include "UniLabs/Time/zzzz__TimeUnit_def.hpp"
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.ToShortString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::ToShortString)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5b6bf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"ToShortString", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.ToSeparatorString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::ToSeparatorString)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5b6c084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"ToSeparatorString", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.GetUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::GetUnitValue)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5b6c158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.WithUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t)>(&::UniLabs::Time::TimeUnitExtensions::WithUnitValue)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5b6c304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.GetLowestUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::GetLowestUnitValue)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5b6c524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetLowestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.WithLowestUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t)>(&::UniLabs::Time::TimeUnitExtensions::WithLowestUnitValue)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x5b6c7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithLowestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.GetHighestUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::GetHighestUnitValue)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x5b6cafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetHighestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.WithHighestUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t)>(&::UniLabs::Time::TimeUnitExtensions::WithHighestUnitValue)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5b6cdb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithHighestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.GetSingleUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::GetSingleUnitValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5b6d0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetSingleUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.FromSingleUnitValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t)>(&::UniLabs::Time::TimeUnitExtensions::FromSingleUnitValue)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x5b6d270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"FromSingleUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions.SnapToUnit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions::SnapToUnit)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5b6d484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"SnapToUnit", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UniLabs::Time::TimeUnitExtensions::ToShortString(::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"ToShortString", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timeUnit);
}
inline ::StringW UniLabs::Time::TimeUnitExtensions::ToSeparatorString(::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"ToSeparatorString", {}, {::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, timeUnit);
}
inline double_t UniLabs::Time::TimeUnitExtensions::GetUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, timeSpan, timeUnit);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions::WithUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, timeSpan, timeUnit, value);
}
inline double_t UniLabs::Time::TimeUnitExtensions::GetLowestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetLowestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, timeSpan, timeUnit);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions::WithLowestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithLowestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, timeSpan, timeUnit, value);
}
inline double_t UniLabs::Time::TimeUnitExtensions::GetHighestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetHighestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, timeSpan, timeUnit);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions::WithHighestUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"WithHighestUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, timeSpan, timeUnit, value);
}
inline double_t UniLabs::Time::TimeUnitExtensions::GetSingleUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"GetSingleUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, timeSpan, timeUnit);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions::FromSingleUnitValue(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"FromSingleUnitValue", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, timeSpan, timeUnit, value);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions::SnapToUnit(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions*>(),
                        {"SnapToUnit", {}, {::i2c::type_of<::System::TimeSpan>(), ::i2c::type_of<::UniLabs::Time::TimeUnit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(nullptr, ___internal_method, timeSpan, timeUnit);
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeUnitExtensions::TimeUnitExtensions()   {
}
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b6d878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit)>(&::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6d918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::AsyncCallback*, ::System::Object*)>(&::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5b6d92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::*)(::System::IAsyncResult*)>(&::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6d9e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline double_t UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::Invoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, timeSpan, timeUnit);
}
inline ::System::IAsyncResult* UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::BeginInvoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, timeSpan, timeUnit, callback, object);
}
inline double_t UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method, result);
}
inline ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate* UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeUnitExtensions_GetUnitValueDelegate::TimeUnitExtensions_GetUnitValueDelegate()   {
}
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b6d6c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t)>(&::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5b6d764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, double_t, ::System::AsyncCallback*, ::System::Object*)>(&::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5b6d778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TimeSpan (::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::*)(::System::IAsyncResult*)>(&::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5b6d850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(),
                    {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::Invoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, timeSpan, timeUnit, value);
}
inline ::System::IAsyncResult* UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::BeginInvoke(::System::TimeSpan  timeSpan, ::UniLabs::Time::TimeUnit  timeUnit, double_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, timeSpan, timeUnit, value, callback, object);
}
inline ::System::TimeSpan UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TimeSpan>(this, ___internal_method, result);
}
inline ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate* UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UniLabs::Time::TimeUnitExtensions_WithUnitValueDelegate::TimeUnitExtensions_WithUnitValueDelegate()   {
}

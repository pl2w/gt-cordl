#pragma once
// IWYU pragma private; include "Unity/Burst/BurstRuntime.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/zzzz__BurstRuntime_def.hpp"
#include "Unity/Burst/zzzz__BurstRuntime_HashCode64_1_def.hpp"
#include "Unity/Burst/zzzz__BurstRuntime_def.hpp"
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.HashStringWithFNV1A64
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::StringW)>(&::Unity::Burst::BurstRuntime::HashStringWithFNV1A64)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae8129c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"HashStringWithFNV1A64", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.RuntimeLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstRuntime::RuntimeLog)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae81328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"RuntimeLog", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.PreventRequiredAttributeStrip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Burst::BurstRuntime::PreventRequiredAttributeStrip)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xae81340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"PreventRequiredAttributeStrip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::BurstRuntime.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, int32_t, uint8_t*, int32_t)>(&::Unity::Burst::BurstRuntime::Log)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae81438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"Log", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
template<typename T>
inline int64_t Unity::Burst::BurstRuntime::GetHashCode64()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                    {"GetHashCode64", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t Unity::Burst::BurstRuntime::HashStringWithFNV1A64(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"HashStringWithFNV1A64", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, text);
}
inline void Unity::Burst::BurstRuntime::RuntimeLog(uint8_t*  message, int32_t  logType, uint8_t*  fileName, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"RuntimeLog", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, logType, fileName, lineNumber);
}
inline void Unity::Burst::BurstRuntime::PreventRequiredAttributeStrip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"PreventRequiredAttributeStrip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Burst::BurstRuntime::Log(uint8_t*  message, int32_t  logType, uint8_t*  fileName, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime*>(),
                        {"Log", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message, logType, fileName, lineNumber);
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstRuntime::BurstRuntime()   {
}
//  Writing Method size for method: ::Unity::Burst::BurstRuntime_PreserveAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Burst::BurstRuntime_PreserveAttribute::*)()>(&::Unity::Burst::BurstRuntime_PreserveAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae81450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::Burst::BurstRuntime_PreserveAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::BurstRuntime_PreserveAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Burst::BurstRuntime_PreserveAttribute* Unity::Burst::BurstRuntime_PreserveAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Burst::BurstRuntime_PreserveAttribute*>());
}
// Ctor Parameters []
constexpr ::Unity::Burst::BurstRuntime_PreserveAttribute::BurstRuntime_PreserveAttribute()   {
}

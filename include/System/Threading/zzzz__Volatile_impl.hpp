#pragma once
// IWYU pragma private; include "System/Threading/Volatile.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__Volatile_def.hpp"
#include "System/Threading/zzzz__Volatile_VolatileBoolean_def.hpp"
#include "System/Threading/zzzz__Volatile_VolatileInt32_def.hpp"
#include "System/Threading/zzzz__Volatile_VolatileIntPtr_def.hpp"
#include "System/Threading/zzzz__Volatile_VolatileObject_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Threading::Volatile.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<bool>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa35621c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<bool>, bool)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa356234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<int32_t>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa356258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int32_t>, int32_t)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa356270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::System::IntPtr>)>(&::System::Threading::Volatile::Read)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa356294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Volatile.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<int64_t>, int64_t)>(&::System::Threading::Volatile::Write)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa3562ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
inline bool System::Threading::Volatile::Read(::by_ref<bool>  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, location);
}
inline void System::Threading::Volatile::Write(::by_ref<bool>  location, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
inline int32_t System::Threading::Volatile::Read(::by_ref<int32_t>  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, location);
}
inline void System::Threading::Volatile::Write(::by_ref<int32_t>  location, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
inline ::System::IntPtr System::Threading::Volatile::Read(::by_ref<::System::IntPtr>  location)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Read", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, location);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline T System::Threading::Volatile::Read(::by_ref<T>  location)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Volatile*>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, location);
}
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
inline void System::Threading::Volatile::Write(::by_ref<T>  location, T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::System::Threading::Volatile*>(),
                    {"Write", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
inline void System::Threading::Volatile::Write(::by_ref<int64_t>  location, int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Threading::Volatile*>(),
                        {"Write", {}, {::i2c::type_of<::by_ref<int64_t>>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, location, value);
}
// Ctor Parameters []
constexpr ::System::Threading::Volatile::Volatile()   {
}

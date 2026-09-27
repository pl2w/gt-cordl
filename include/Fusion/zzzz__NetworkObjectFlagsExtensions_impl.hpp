#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectFlagsExtensions.hpp"
#include "Fusion/zzzz__NetworkObjectFlags_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectFlagsExtensions_def.hpp"
#include "Fusion/zzzz__NetworkObjectFlags_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkObjectFlags)>(&::Fusion::NetworkObjectFlagsExtensions::GetVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faa684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"GetVersion", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.IsVersionCurrent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectFlags)>(&::Fusion::NetworkObjectFlagsExtensions::IsVersionCurrent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"IsVersionCurrent", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.SetCurrentVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectFlags (*)(::Fusion::NetworkObjectFlags)>(&::Fusion::NetworkObjectFlagsExtensions::SetCurrentVersion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faa69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetCurrentVersion", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.IsIgnored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectFlags)>(&::Fusion::NetworkObjectFlagsExtensions::IsIgnored)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faa6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"IsIgnored", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.SetIgnored
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectFlags (*)(::Fusion::NetworkObjectFlags, bool)>(&::Fusion::NetworkObjectFlagsExtensions::SetIgnored)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5faa6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetIgnored", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectFlagsExtensions.SetWithMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectFlags (*)(::Fusion::NetworkObjectFlags, ::Fusion::NetworkObjectFlags, ::Fusion::NetworkObjectFlags)>(&::Fusion::NetworkObjectFlagsExtensions::SetWithMask)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faa6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetWithMask", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Fusion::NetworkObjectFlagsExtensions::GetVersion(::Fusion::NetworkObjectFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"GetVersion", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, flags);
}
inline bool Fusion::NetworkObjectFlagsExtensions::IsVersionCurrent(::Fusion::NetworkObjectFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"IsVersionCurrent", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags);
}
inline ::Fusion::NetworkObjectFlags Fusion::NetworkObjectFlagsExtensions::SetCurrentVersion(::Fusion::NetworkObjectFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetCurrentVersion", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectFlags>(nullptr, ___internal_method, flags);
}
inline bool Fusion::NetworkObjectFlagsExtensions::IsIgnored(::Fusion::NetworkObjectFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"IsIgnored", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, flags);
}
inline ::Fusion::NetworkObjectFlags Fusion::NetworkObjectFlagsExtensions::SetIgnored(::Fusion::NetworkObjectFlags  flags, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetIgnored", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectFlags>(nullptr, ___internal_method, flags, value);
}
inline ::Fusion::NetworkObjectFlags Fusion::NetworkObjectFlagsExtensions::SetWithMask(::Fusion::NetworkObjectFlags  flags, ::Fusion::NetworkObjectFlags  value, ::Fusion::NetworkObjectFlags  mask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectFlagsExtensions*>(),
                        {"SetWithMask", {}, {::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<::Fusion::NetworkObjectFlags>(), ::i2c::type_of<::Fusion::NetworkObjectFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectFlags>(nullptr, ___internal_method, flags, value, mask);
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectFlagsExtensions::NetworkObjectFlagsExtensions()   {
}
constexpr ::Fusion::NetworkObjectFlags  Fusion::NetworkObjectFlagsExtensions::CurrentVersion{static_cast<int32_t>(0x1)};

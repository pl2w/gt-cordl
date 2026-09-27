#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDTelemetry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__KIDTelemetry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.get_GameVersionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDTelemetry::get_GameVersionCustomTag)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a3e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.get_Open_MetricActionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDTelemetry::get_Open_MetricActionCustomTag)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a3e484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Open_MetricActionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.get_Updated_MetricActionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDTelemetry::get_Updated_MetricActionCustomTag)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a3e4c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Updated_MetricActionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.get_Closed_MetricActionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDTelemetry::get_Closed_MetricActionCustomTag)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a3e504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Closed_MetricActionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.get_GameEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::KIDTelemetry::get_GameEnvironment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5a3e544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.GetPermissionManagedByBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::KIDTelemetry::GetPermissionManagedByBodyData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a3e584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"GetPermissionManagedByBodyData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDTelemetry.GetPermissionEnabledBodyData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::KIDTelemetry::GetPermissionEnabledBodyData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a3e5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"GetPermissionEnabledBodyData", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::KIDTelemetry::get_GameVersionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDTelemetry::get_Open_MetricActionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Open_MetricActionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDTelemetry::get_Updated_MetricActionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Updated_MetricActionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDTelemetry::get_Closed_MetricActionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_Closed_MetricActionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDTelemetry::get_GameEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::KIDTelemetry::GetPermissionManagedByBodyData(::StringW  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"GetPermissionManagedByBodyData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, permission);
}
inline ::StringW GlobalNamespace::KIDTelemetry::GetPermissionEnabledBodyData(::StringW  permission)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDTelemetry*>(),
                        {"GetPermissionEnabledBodyData", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, permission);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDTelemetry::KIDTelemetry()   {
}

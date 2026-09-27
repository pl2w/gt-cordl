#pragma once
// IWYU pragma private; include "GlobalNamespace/GhostReactorTelemetry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GhostReactorTelemetry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostReactorTelemetry.get_GameVersionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::GhostReactorTelemetry::get_GameVersionCustomTag)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5866048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorTelemetry.get_GameEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::GhostReactorTelemetry::get_GameEnvironment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58660c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostReactorTelemetry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostReactorTelemetry::*)()>(&::GlobalNamespace::GhostReactorTelemetry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5866100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GhostReactorTelemetry::get_GameVersionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::GhostReactorTelemetry::get_GameEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::GhostReactorTelemetry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GhostReactorTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostReactorTelemetry* GlobalNamespace::GhostReactorTelemetry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostReactorTelemetry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostReactorTelemetry::GhostReactorTelemetry()   {
}

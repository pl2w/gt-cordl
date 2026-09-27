#pragma once
// IWYU pragma private; include "GlobalNamespace/SuperInfectionTelemetry.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionTelemetry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionTelemetry.get_GameVersionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::SuperInfectionTelemetry::get_GameVersionCustomTag)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5bf8148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionTelemetry.get_GameEnvironment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::SuperInfectionTelemetry::get_GameEnvironment)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5bf81c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SuperInfectionTelemetry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SuperInfectionTelemetry::*)()>(&::GlobalNamespace::SuperInfectionTelemetry::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5bf8200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::SuperInfectionTelemetry::get_GameVersionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::StringW GlobalNamespace::SuperInfectionTelemetry::get_GameEnvironment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {"get_GameEnvironment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void GlobalNamespace::SuperInfectionTelemetry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SuperInfectionTelemetry*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SuperInfectionTelemetry* GlobalNamespace::SuperInfectionTelemetry::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SuperInfectionTelemetry*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SuperInfectionTelemetry::SuperInfectionTelemetry()   {
}

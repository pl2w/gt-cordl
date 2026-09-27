#pragma once
// IWYU pragma private; include "GlobalNamespace/GRReviveMeter.hpp"
#include "GlobalNamespace/zzzz__MonoBehaviourTick_impl.hpp"
#include "GlobalNamespace/zzzz__GRReviveMeter_def.hpp"
#include "GlobalNamespace/zzzz__GRReviveStation_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRReviveMeter.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveMeter::*)()>(&::GlobalNamespace::GRReviveMeter::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58a981c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveMeter.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveMeter::*)()>(&::GlobalNamespace::GRReviveMeter::Tick)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x58a9820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(),
                    {::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRReviveMeter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRReviveMeter::*)()>(&::GlobalNamespace::GRReviveMeter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58a9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& GlobalNamespace::GRReviveMeter::__cordl_internal_get_reviveStation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStation;
}
constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& GlobalNamespace::GRReviveMeter::__cordl_internal_get_reviveStation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reviveStation;
}
constexpr void GlobalNamespace::GRReviveMeter::__cordl_internal_set_reviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reviveStation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GRReviveMeter::__cordl_internal_get_meter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GRReviveMeter::__cordl_internal_get_meter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___meter;
}
constexpr void GlobalNamespace::GRReviveMeter::__cordl_internal_set_meter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___meter = value;
}
inline void GlobalNamespace::GRReviveMeter::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRReviveMeter::Tick()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GRReviveMeter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRReviveMeter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRReviveMeter* GlobalNamespace::GRReviveMeter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRReviveMeter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRReviveMeter::GRReviveMeter()   {
}

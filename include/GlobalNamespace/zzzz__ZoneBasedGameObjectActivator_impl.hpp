#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneBasedGameObjectActivator.hpp"
#include "GlobalNamespace/zzzz__GTZone_impl.hpp"
#include "UnityEngine/zzzz__GameObject_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ZoneBasedGameObjectActivator_def.hpp"
#include "GlobalNamespace/zzzz__ZoneData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedGameObjectActivator.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneBasedGameObjectActivator::*)()>(&::GlobalNamespace::ZoneBasedGameObjectActivator::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b410d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedGameObjectActivator.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneBasedGameObjectActivator::*)()>(&::GlobalNamespace::ZoneBasedGameObjectActivator::OnDisable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b41154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedGameObjectActivator.ZoneManagement_OnZoneChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneBasedGameObjectActivator::*)(::ArrayW<::GlobalNamespace::ZoneData*>)>(&::GlobalNamespace::ZoneBasedGameObjectActivator::ZoneManagement_OnZoneChange)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b411d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"ZoneManagement_OnZoneChange", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ZoneBasedGameObjectActivator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ZoneBasedGameObjectActivator::*)()>(&::GlobalNamespace::ZoneBasedGameObjectActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b41334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::GTZone>& GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_get_zones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr ::ArrayW<::GlobalNamespace::GTZone> const& GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_get_zones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___zones;
}
constexpr void GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___zones = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_get_gameObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_get_gameObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameObjects;
}
constexpr void GlobalNamespace::ZoneBasedGameObjectActivator::__cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameObjects = value;
}
inline void GlobalNamespace::ZoneBasedGameObjectActivator::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneBasedGameObjectActivator::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ZoneBasedGameObjectActivator::ZoneManagement_OnZoneChange(::ArrayW<::GlobalNamespace::ZoneData*>  zoneData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {"ZoneManagement_OnZoneChange", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::ZoneData*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, zoneData);
}
inline void GlobalNamespace::ZoneBasedGameObjectActivator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ZoneBasedGameObjectActivator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ZoneBasedGameObjectActivator* GlobalNamespace::ZoneBasedGameObjectActivator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ZoneBasedGameObjectActivator*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ZoneBasedGameObjectActivator::ZoneBasedGameObjectActivator()   {
}

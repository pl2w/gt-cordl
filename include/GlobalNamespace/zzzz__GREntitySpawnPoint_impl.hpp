#pragma once
// IWYU pragma private; include "GlobalNamespace/GREntitySpawnPoint.hpp"
#include "GlobalNamespace/zzzz__GhostReactorSpawnConfig_SpawnPointType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GREntitySpawnPoint_def.hpp"
#include "GlobalNamespace/zzzz__GRPatrolPath_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GREntitySpawnPoint._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GREntitySpawnPoint::*)()>(&::GlobalNamespace::GREntitySpawnPoint::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589a85c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntitySpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_spawnPointType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointType;
}
constexpr ::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType const& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_spawnPointType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spawnPointType;
}
constexpr void GlobalNamespace::GREntitySpawnPoint::__cordl_internal_set_spawnPointType(::GlobalNamespace::GhostReactorSpawnConfig_SpawnPointType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spawnPointType = value;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___entity;
}
constexpr void GlobalNamespace::GREntitySpawnPoint::__cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___entity = value;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath>& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_patrolPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr ::UnityW<::GlobalNamespace::GRPatrolPath> const& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_patrolPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___patrolPath;
}
constexpr void GlobalNamespace::GREntitySpawnPoint::__cordl_internal_set_patrolPath(::UnityW<::GlobalNamespace::GRPatrolPath>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___patrolPath = value;
}
constexpr bool& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_applyScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyScale;
}
constexpr bool const& GlobalNamespace::GREntitySpawnPoint::__cordl_internal_get_applyScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___applyScale;
}
constexpr void GlobalNamespace::GREntitySpawnPoint::__cordl_internal_set_applyScale(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___applyScale = value;
}
inline void GlobalNamespace::GREntitySpawnPoint::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GREntitySpawnPoint*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GREntitySpawnPoint* GlobalNamespace::GREntitySpawnPoint::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GREntitySpawnPoint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GREntitySpawnPoint::GREntitySpawnPoint()   {
}

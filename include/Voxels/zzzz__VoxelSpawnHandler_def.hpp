#pragma once
// IWYU pragma private; include "Voxels/VoxelSpawnHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VoxelSpawnHandler)
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGameEntityComponent;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace UnityEngine {
struct Vector3;
}
namespace Voxels {
class VoxelMaterialSet;
}
namespace Voxels {
class VoxelSpawnHandler_SpawnableSet;
}
namespace Voxels {
class VoxelWorld;
}
// Forward declare root types
namespace Voxels {
class VoxelSpawnHandler;
}
namespace Voxels {
class VoxelSpawnHandler_SpawnableSet;
}
// Write type traits
MARK_REF_T(::Voxels::VoxelSpawnHandler*);
MARK_REF_T(::Voxels::VoxelSpawnHandler_SpawnableSet*);
DEFINE_IL2CPP_CLASS(::Voxels::VoxelSpawnHandler*, "Voxels", "VoxelSpawnHandler");
DEFINE_IL2CPP_CLASS(::Voxels::VoxelSpawnHandler_SpawnableSet*, "Voxels", "VoxelSpawnHandler/SpawnableSet");
// [RequireComponent(typeof(GameEntity))]
// Dependencies UnityEngine.MonoBehaviour, Voxels.VoxelSpawnHandler::SpawnableSet
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelSpawnHandler
class CORDL_TYPE VoxelSpawnHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SpawnableSet = ::Voxels::VoxelSpawnHandler_SpawnableSet;

/// @brief Field _counts, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__counts, put=__cordl_internal_set__counts)) ::ArrayW<int32_t>  _counts;

/// @brief Field _isListening, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__isListening, put=__cordl_internal_set__isListening)) bool  _isListening;

/// @brief Field _managerIsAuthority, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__managerIsAuthority, put=__cordl_internal_set__managerIsAuthority)) bool  _managerIsAuthority;

/// @brief Field _spawnablesRegistered, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__spawnablesRegistered, put=__cordl_internal_set__spawnablesRegistered)) bool  _spawnablesRegistered;

/// @brief Field _zoneIsActive, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__zoneIsActive, put=__cordl_internal_set__zoneIsActive)) bool  _zoneIsActive;

/// @brief Field entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_entity, put=__cordl_internal_set_entity)) ::UnityW<::GlobalNamespace::GameEntity>  entity;

/// @brief Field materialSet, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_materialSet, put=__cordl_internal_set_materialSet)) ::UnityW<::Voxels::VoxelMaterialSet>  materialSet;

/// @brief Field spawnables, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnables, put=__cordl_internal_set_spawnables)) ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>  spawnables;

/// @brief Convert operator to "::GlobalNamespace::IGameEntityComponent"
constexpr operator  ::GlobalNamespace::IGameEntityComponent*() noexcept;

/// @brief Method Awake, addr 0x5dd0554, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Voxels::VoxelSpawnHandler* New_ctor() ;

/// @brief Method OnAuthorityChanged, addr 0x5dd0bd4, size 0x54, virtual false, abstract: false, final false
inline void OnAuthorityChanged(::GlobalNamespace::NetPlayer*  fromPlayer, ::GlobalNamespace::NetPlayer*  toPlayer) ;

/// @brief Method OnDisable, addr 0x5dd0800, size 0x4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEntityDestroy, addr 0x5dd0adc, size 0xf4, virtual true, abstract: false, final true
inline void OnEntityDestroy() ;

/// @brief Method OnEntityInit, addr 0x5dd08e4, size 0x1c0, virtual true, abstract: false, final true
inline void OnEntityInit() ;

/// @brief Method OnEntityStateChange, addr 0x5dd0bd0, size 0x4, virtual true, abstract: false, final true
inline void OnEntityStateChange(int64_t  prevState, int64_t  newState) ;

/// @brief Method OnResourcesMined, addr 0x5dd0c44, size 0x22c, virtual false, abstract: false, final false
inline void OnResourcesMined(::Voxels::VoxelWorld*  world, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal, ::ArrayW<int32_t>  amounts) ;

/// @brief Method OnZoneActiveChanged, addr 0x5dd0c28, size 0x1c, virtual false, abstract: false, final false
inline void OnZoneActiveChanged(bool  zoneActive) ;

/// @brief Method RegisterSpawnables, addr 0x5dd0558, size 0x2a8, virtual false, abstract: false, final false
inline void RegisterSpawnables() ;

/// @brief Method Reset, addr 0x5dd04fc, size 0x58, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetIsAuthority, addr 0x5dd0aa4, size 0x1c, virtual false, abstract: false, final false
inline void SetIsAuthority(bool  newAuthority) ;

/// @brief Method SetZoneActive, addr 0x5dd0ac0, size 0x1c, virtual false, abstract: false, final false
inline void SetZoneActive(bool  newActive) ;

/// @brief Method SpawnItem, addr 0x5dd0e70, size 0x2e4, virtual false, abstract: false, final false
inline void SpawnItem(::Voxels::VoxelSpawnHandler_SpawnableSet*  spawns, ::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitNormal) ;

/// @brief Method UpdateListeningState, addr 0x5dd0804, size 0xe0, virtual false, abstract: false, final false
inline void UpdateListeningState() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__counts() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__counts() ;

constexpr bool const& __cordl_internal_get__isListening() const;

constexpr bool& __cordl_internal_get__isListening() ;

constexpr bool const& __cordl_internal_get__managerIsAuthority() const;

constexpr bool& __cordl_internal_get__managerIsAuthority() ;

constexpr bool const& __cordl_internal_get__spawnablesRegistered() const;

constexpr bool& __cordl_internal_get__spawnablesRegistered() ;

constexpr bool const& __cordl_internal_get__zoneIsActive() const;

constexpr bool& __cordl_internal_get__zoneIsActive() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_entity() ;

constexpr ::UnityW<::Voxels::VoxelMaterialSet> const& __cordl_internal_get_materialSet() const;

constexpr ::UnityW<::Voxels::VoxelMaterialSet>& __cordl_internal_get_materialSet() ;

constexpr ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*> const& __cordl_internal_get_spawnables() const;

constexpr ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>& __cordl_internal_get_spawnables() ;

constexpr void __cordl_internal_set__counts(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__isListening(bool  value) ;

constexpr void __cordl_internal_set__managerIsAuthority(bool  value) ;

constexpr void __cordl_internal_set__spawnablesRegistered(bool  value) ;

constexpr void __cordl_internal_set__zoneIsActive(bool  value) ;

constexpr void __cordl_internal_set_entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_materialSet(::UnityW<::Voxels::VoxelMaterialSet>  value) ;

constexpr void __cordl_internal_set_spawnables(::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>  value) ;

/// @brief Method .ctor, addr 0x5dd1154, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGameEntityComponent"
constexpr ::GlobalNamespace::IGameEntityComponent* i___GlobalNamespace__IGameEntityComponent() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelSpawnHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelSpawnHandler(VoxelSpawnHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelSpawnHandler(VoxelSpawnHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5081};

/// [SerializeField]
/// @brief Field entity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___entity;

/// [SerializeField]
/// @brief Field materialSet, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Voxels::VoxelMaterialSet>  ___materialSet;

/// [SerializeField]
/// @brief Field spawnables, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Voxels::VoxelSpawnHandler_SpawnableSet*>  ___spawnables;

/// @brief Field _managerIsAuthority, offset: 0x38, size: 0x1, def value: None
 bool  ____managerIsAuthority;

/// @brief Field _zoneIsActive, offset: 0x39, size: 0x1, def value: None
 bool  ____zoneIsActive;

/// @brief Field _isListening, offset: 0x3a, size: 0x1, def value: None
 bool  ____isListening;

/// @brief Field _counts, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____counts;

/// @brief Field _spawnablesRegistered, offset: 0x48, size: 0x1, def value: None
 bool  ____spawnablesRegistered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelSpawnHandler, ___entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ___materialSet) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ___spawnables) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ____managerIsAuthority) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ____zoneIsActive) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ____isListening) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ____counts) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler, ____spawnablesRegistered) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelSpawnHandler) == 0x50, "Size mismatch!");

} // namespace end def Voxels
// Dependencies GameEntity, System.Object
namespace Voxels {
// Is value type: false
// CS Name: Voxels.VoxelSpawnHandler/SpawnableSet
class CORDL_TYPE VoxelSpawnHandler_SpawnableSet : public ::System::Object {
public:
// Declarations
/// @brief Field chance, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_chance, put=__cordl_internal_set_chance)) float_t  chance;

/// @brief Field interval, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_interval, put=__cordl_internal_set_interval)) int32_t  interval;

/// @brief Field prefabs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_prefabs, put=__cordl_internal_set_prefabs)) ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  prefabs;

static inline ::Voxels::VoxelSpawnHandler_SpawnableSet* New_ctor() ;

constexpr float_t const& __cordl_internal_get_chance() const;

constexpr float_t& __cordl_internal_get_chance() ;

constexpr int32_t const& __cordl_internal_get_interval() const;

constexpr int32_t& __cordl_internal_get_interval() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>> const& __cordl_internal_get_prefabs() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>& __cordl_internal_get_prefabs() ;

constexpr void __cordl_internal_set_chance(float_t  value) ;

constexpr void __cordl_internal_set_interval(int32_t  value) ;

constexpr void __cordl_internal_set_prefabs(::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  value) ;

/// @brief Method .ctor, addr 0x5dd115c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoxelSpawnHandler_SpawnableSet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnHandler_SpawnableSet", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoxelSpawnHandler_SpawnableSet(VoxelSpawnHandler_SpawnableSet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoxelSpawnHandler_SpawnableSet", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoxelSpawnHandler_SpawnableSet(VoxelSpawnHandler_SpawnableSet const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5080};

/// @brief Field interval, offset: 0x10, size: 0x4, def value: None
 int32_t  ___interval;

/// @brief Field chance, offset: 0x14, size: 0x4, def value: None
 float_t  ___chance;

/// @brief Field prefabs, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GameEntity>>  ___prefabs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Voxels::VoxelSpawnHandler_SpawnableSet, ___interval) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler_SpawnableSet, ___chance) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Voxels::VoxelSpawnHandler_SpawnableSet, ___prefabs) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Voxels::VoxelSpawnHandler_SpawnableSet) == 0x20, "Size mismatch!");

} // namespace end def Voxels

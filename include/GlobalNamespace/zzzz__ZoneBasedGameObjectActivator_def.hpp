#pragma once
// IWYU pragma private; include "GlobalNamespace/ZoneBasedGameObjectActivator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ZoneBasedGameObjectActivator)
namespace GlobalNamespace {
class ZoneData;
}
// Forward declare root types
namespace GlobalNamespace {
class ZoneBasedGameObjectActivator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ZoneBasedGameObjectActivator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneBasedGameObjectActivator*, "", "ZoneBasedGameObjectActivator");
// Dependencies GTZone, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ZoneBasedGameObjectActivator
class CORDL_TYPE ZoneBasedGameObjectActivator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameObjects, put=__cordl_internal_set_gameObjects)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  gameObjects;

/// @brief Field zones, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_zones, put=__cordl_internal_set_zones)) ::ArrayW<::GlobalNamespace::GTZone>  zones;

static inline ::GlobalNamespace::ZoneBasedGameObjectActivator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5b41154, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b410d4, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ZoneManagement_OnZoneChange, addr 0x5b411d4, size 0x160, virtual false, abstract: false, final false
inline void ZoneManagement_OnZoneChange(::ArrayW<::GlobalNamespace::ZoneData*>  zoneData) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_gameObjects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_gameObjects() ;

constexpr ::ArrayW<::GlobalNamespace::GTZone> const& __cordl_internal_get_zones() const;

constexpr ::ArrayW<::GlobalNamespace::GTZone>& __cordl_internal_get_zones() ;

constexpr void __cordl_internal_set_gameObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_zones(::ArrayW<::GlobalNamespace::GTZone>  value) ;

/// @brief Method .ctor, addr 0x5b41334, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneBasedGameObjectActivator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneBasedGameObjectActivator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneBasedGameObjectActivator(ZoneBasedGameObjectActivator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneBasedGameObjectActivator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneBasedGameObjectActivator(ZoneBasedGameObjectActivator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3724};

/// [SerializeField]
/// @brief Field zones, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  ___zones;

/// [SerializeField]
/// @brief Field gameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___gameObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneBasedGameObjectActivator, ___zones) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZoneBasedGameObjectActivator, ___gameObjects) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneBasedGameObjectActivator) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

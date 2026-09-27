#pragma once
// IWYU pragma private; include "GlobalNamespace/ColliderEnabledManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSurfaceOverride_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ColliderEnabledManager)
// Forward declare root types
namespace GlobalNamespace {
class ColliderEnabledManager;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ColliderEnabledManager*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ColliderEnabledManager*, "", "ColliderEnabledManager");
// Dependencies GorillaSurfaceOverride, UnityEngine.Collider, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColliderEnabledManager
class CORDL_TYPE ColliderEnabledManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field disableLength, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_disableLength, put=__cordl_internal_set_disableLength)) float_t  disableLength;

/// @brief Field floorCollider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_floorCollider, put=__cordl_internal_set_floorCollider)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  floorCollider;

/// @brief Field floorCollidersEnabled, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_floorCollidersEnabled, put=__cordl_internal_set_floorCollidersEnabled)) bool  floorCollidersEnabled;

/// @brief Field floorEnabled, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_floorEnabled, put=__cordl_internal_set_floorEnabled)) bool  floorEnabled;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::ColliderEnabledManager>  instance;

/// @brief Field timeDisabled, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeDisabled, put=__cordl_internal_set_timeDisabled)) float_t  timeDisabled;

/// @brief Field walls, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_walls, put=__cordl_internal_set_walls)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>  walls;

/// @brief Field wallsAfterMaterial, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallsAfterMaterial, put=__cordl_internal_set_wallsAfterMaterial)) int32_t  wallsAfterMaterial;

/// @brief Field wallsBeforeMaterial, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_wallsBeforeMaterial, put=__cordl_internal_set_wallsBeforeMaterial)) int32_t  wallsBeforeMaterial;

/// @brief Field wasFloorEnabled, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasFloorEnabled, put=__cordl_internal_set_wasFloorEnabled)) bool  wasFloorEnabled;

/// @brief Method DisableFloor, addr 0x55ee2a0, size 0x20, virtual false, abstract: false, final false
inline void DisableFloor() ;

/// @brief Method DisableFloorForFrame, addr 0x55ee148, size 0x8, virtual false, abstract: false, final false
inline void DisableFloorForFrame() ;

/// @brief Method LateUpdate, addr 0x55ee150, size 0x150, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::ColliderEnabledManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x55ee0f4, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Start, addr 0x55ee090, size 0x64, virtual false, abstract: false, final false
inline void Start() ;

constexpr float_t const& __cordl_internal_get_disableLength() const;

constexpr float_t& __cordl_internal_get_disableLength() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_floorCollider() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_floorCollider() ;

constexpr bool const& __cordl_internal_get_floorCollidersEnabled() const;

constexpr bool& __cordl_internal_get_floorCollidersEnabled() ;

constexpr bool const& __cordl_internal_get_floorEnabled() const;

constexpr bool& __cordl_internal_get_floorEnabled() ;

constexpr float_t const& __cordl_internal_get_timeDisabled() const;

constexpr float_t& __cordl_internal_get_timeDisabled() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>> const& __cordl_internal_get_walls() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>& __cordl_internal_get_walls() ;

constexpr int32_t const& __cordl_internal_get_wallsAfterMaterial() const;

constexpr int32_t& __cordl_internal_get_wallsAfterMaterial() ;

constexpr int32_t const& __cordl_internal_get_wallsBeforeMaterial() const;

constexpr int32_t& __cordl_internal_get_wallsBeforeMaterial() ;

constexpr bool const& __cordl_internal_get_wasFloorEnabled() const;

constexpr bool& __cordl_internal_get_wasFloorEnabled() ;

constexpr void __cordl_internal_set_disableLength(float_t  value) ;

constexpr void __cordl_internal_set_floorCollider(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_floorCollidersEnabled(bool  value) ;

constexpr void __cordl_internal_set_floorEnabled(bool  value) ;

constexpr void __cordl_internal_set_timeDisabled(float_t  value) ;

constexpr void __cordl_internal_set_walls(::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>  value) ;

constexpr void __cordl_internal_set_wallsAfterMaterial(int32_t  value) ;

constexpr void __cordl_internal_set_wallsBeforeMaterial(int32_t  value) ;

constexpr void __cordl_internal_set_wasFloorEnabled(bool  value) ;

/// @brief Method .ctor, addr 0x55ee2c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::ColliderEnabledManager> getStaticF_instance() ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::ColliderEnabledManager>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderEnabledManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderEnabledManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderEnabledManager(ColliderEnabledManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderEnabledManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderEnabledManager(ColliderEnabledManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{59};

/// @brief Field floorCollider, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___floorCollider;

/// @brief Field floorEnabled, offset: 0x28, size: 0x1, def value: None
 bool  ___floorEnabled;

/// @brief Field wasFloorEnabled, offset: 0x29, size: 0x1, def value: None
 bool  ___wasFloorEnabled;

/// @brief Field floorCollidersEnabled, offset: 0x2a, size: 0x1, def value: None
 bool  ___floorCollidersEnabled;

/// [GorillaSoundLookup]
/// @brief Field wallsBeforeMaterial, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___wallsBeforeMaterial;

/// [GorillaSoundLookup]
/// @brief Field wallsAfterMaterial, offset: 0x30, size: 0x4, def value: None
 int32_t  ___wallsAfterMaterial;

/// @brief Field walls, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaSurfaceOverride>>  ___walls;

/// @brief Field timeDisabled, offset: 0x40, size: 0x4, def value: None
 float_t  ___timeDisabled;

/// @brief Field disableLength, offset: 0x44, size: 0x4, def value: None
 float_t  ___disableLength;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___floorCollider) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___floorEnabled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___wasFloorEnabled) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___floorCollidersEnabled) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___wallsBeforeMaterial) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___wallsAfterMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___walls) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___timeDisabled) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ColliderEnabledManager, ___disableLength) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ColliderEnabledManager) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapBoundarySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__TriggerSettings_def.hpp"
CORDL_MODULE_EXPORT(MapBoundarySettings)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapBoundarySettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapBoundarySettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapBoundarySettings*, "GT_CustomMapSupportRuntime", "MapBoundarySettings");
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.TriggerSettings
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapBoundarySettings
class CORDL_TYPE MapBoundarySettings : public ::GT_CustomMapSupportRuntime::TriggerSettings {
public:
// Declarations
/// @brief Field ShouldTagPlayer, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_ShouldTagPlayer, put=__cordl_internal_set_ShouldTagPlayer)) bool  ShouldTagPlayer;

/// @brief Field TeleportPoints, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_TeleportPoints, put=__cordl_internal_set_TeleportPoints)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  TeleportPoints;

/// @brief Field syncedToAllPlayers, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncedToAllPlayers, put=__cordl_internal_set_syncedToAllPlayers)) bool  syncedToAllPlayers;

static inline ::GT_CustomMapSupportRuntime::MapBoundarySettings* New_ctor() ;

/// @brief Method PropagateProperties, addr 0x9cb71fc, size 0xc, virtual true, abstract: false, final false
inline void PropagateProperties() ;

constexpr bool const& __cordl_internal_get_ShouldTagPlayer() const;

constexpr bool& __cordl_internal_get_ShouldTagPlayer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_TeleportPoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_TeleportPoints() ;

constexpr bool const& __cordl_internal_get_syncedToAllPlayers() const;

constexpr bool& __cordl_internal_get_syncedToAllPlayers() ;

constexpr void __cordl_internal_set_ShouldTagPlayer(bool  value) ;

constexpr void __cordl_internal_set_TeleportPoints(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_syncedToAllPlayers(bool  value) ;

/// @brief Method .ctor, addr 0x9cb7208, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapBoundarySettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapBoundarySettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapBoundarySettings(MapBoundarySettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapBoundarySettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapBoundarySettings(MapBoundarySettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30907};

/// [Tooltip("Should this Trigger sync to all players, or only be processed for the person who triggered it?\nMapBoundary triggers generally shouldn\'t need to do this, but doing so will sync it\'s internal TriggerCount to all players.")]
/// @brief Field syncedToAllPlayers, offset: 0x59, size: 0x1, def value: None
 bool  ___syncedToAllPlayers;

/// [Nullable(1)]
/// [Tooltip("Teleport points used to return the player to the map. Chosen at random.")]
/// [SerializeField]
/// @brief Field TeleportPoints, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___TeleportPoints;

/// [Tooltip("Should the player get Tagged when they hit this Boundary?")]
/// @brief Field ShouldTagPlayer, offset: 0x68, size: 0x1, def value: None
 bool  ___ShouldTagPlayer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MapBoundarySettings, ___syncedToAllPlayers) == 0x59, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapBoundarySettings, ___TeleportPoints) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapBoundarySettings, ___ShouldTagPlayer) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MapBoundarySettings) == 0x70, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

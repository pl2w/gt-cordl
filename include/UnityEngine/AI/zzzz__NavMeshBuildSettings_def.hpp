#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AI/zzzz__NavMeshBuildDebugSettings_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuildSettings)
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshBuildSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshBuildSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuildSettings, "UnityEngine.AI", "NavMeshBuildSettings");
// [NativeHeader("Modules/AI/Public/NavMeshBuildSettings.h")]
// Dependencies UnityEngine.AI.NavMeshBuildDebugSettings
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshBuildSettings
struct CORDL_TYPE NavMeshBuildSettings {
public:
// Declarations
 __declspec(property(put=set_agentClimb)) float_t  agentClimb;

 __declspec(property(put=set_agentHeight)) float_t  agentHeight;

 __declspec(property(get=get_agentRadius, put=set_agentRadius)) float_t  agentRadius;

 __declspec(property(put=set_agentSlope)) float_t  agentSlope;

 __declspec(property(get=get_agentTypeID, put=set_agentTypeID)) int32_t  agentTypeID;

 __declspec(property(put=set_buildHeightMesh)) bool  buildHeightMesh;

 __declspec(property(put=set_minRegionArea)) float_t  minRegionArea;

 __declspec(property(put=set_overrideTileSize)) bool  overrideTileSize;

 __declspec(property(put=set_overrideVoxelSize)) bool  overrideVoxelSize;

 __declspec(property(put=set_tileSize)) int32_t  tileSize;

 __declspec(property(put=set_voxelSize)) float_t  voxelSize;

/// [NativeHeader("Modules/AI/Public/NavMeshBuildSettings.h")]
/// [FreeFunction]
/// @brief Method InternalValidationReport, addr 0xb52216c, size 0x44, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> InternalValidationReport(::UnityEngine::AI::NavMeshBuildSettings  buildSettings, ::UnityEngine::Bounds  buildBounds) ;

/// @brief Method InternalValidationReport_Injected, addr 0xb5221b0, size 0x420, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> InternalValidationReport_Injected(::by_ref<::UnityEngine::AI::NavMeshBuildSettings>  buildSettings, ::by_ref<::UnityEngine::Bounds>  buildBounds) ;

/// @brief Method ValidationReport, addr 0xb52210c, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> ValidationReport(::UnityEngine::Bounds  buildBounds) ;

/// @brief Method get_agentRadius, addr 0xb5220a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_agentRadius() ;

/// @brief Method get_agentTypeID, addr 0xb51df58, size 0x8, virtual false, abstract: false, final false
inline int32_t get_agentTypeID() ;

/// @brief Method set_agentClimb, addr 0xb5220c8, size 0x8, virtual false, abstract: false, final false
inline void set_agentClimb(float_t  value) ;

/// @brief Method set_agentHeight, addr 0xb5220b8, size 0x8, virtual false, abstract: false, final false
inline void set_agentHeight(float_t  value) ;

/// @brief Method set_agentRadius, addr 0xb5220b0, size 0x8, virtual false, abstract: false, final false
inline void set_agentRadius(float_t  value) ;

/// @brief Method set_agentSlope, addr 0xb5220c0, size 0x8, virtual false, abstract: false, final false
inline void set_agentSlope(float_t  value) ;

/// @brief Method set_agentTypeID, addr 0xb5220a0, size 0x8, virtual false, abstract: false, final false
inline void set_agentTypeID(int32_t  value) ;

/// @brief Method set_buildHeightMesh, addr 0xb522100, size 0xc, virtual false, abstract: false, final false
inline void set_buildHeightMesh(bool  value) ;

/// @brief Method set_minRegionArea, addr 0xb5220d0, size 0x8, virtual false, abstract: false, final false
inline void set_minRegionArea(float_t  value) ;

/// @brief Method set_overrideTileSize, addr 0xb5220ec, size 0xc, virtual false, abstract: false, final false
inline void set_overrideTileSize(bool  value) ;

/// @brief Method set_overrideVoxelSize, addr 0xb5220d8, size 0xc, virtual false, abstract: false, final false
inline void set_overrideVoxelSize(bool  value) ;

/// @brief Method set_tileSize, addr 0xb5220f8, size 0x8, virtual false, abstract: false, final false
inline void set_tileSize(int32_t  value) ;

/// @brief Method set_voxelSize, addr 0xb5220e4, size 0x8, virtual false, abstract: false, final false
inline void set_voxelSize(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuildSettings() ;

// Ctor Parameters [CppParam { name: "m_AgentTypeID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AgentRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AgentHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AgentSlope", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_AgentClimb", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_LedgeDropHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxJumpAcrossDistance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MinRegionArea", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OverrideVoxelSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_VoxelSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_OverrideTileSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TileSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BuildHeightMesh", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_MaxJobWorkers", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_PreserveTilesOutsideBounds", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Debug", ty: "::UnityEngine::AI::NavMeshBuildDebugSettings", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshBuildSettings(int32_t  m_AgentTypeID, float_t  m_AgentRadius, float_t  m_AgentHeight, float_t  m_AgentSlope, float_t  m_AgentClimb, float_t  m_LedgeDropHeight, float_t  m_MaxJumpAcrossDistance, float_t  m_MinRegionArea, int32_t  m_OverrideVoxelSize, float_t  m_VoxelSize, int32_t  m_OverrideTileSize, int32_t  m_TileSize, int32_t  m_BuildHeightMesh, uint32_t  m_MaxJobWorkers, int32_t  m_PreserveTilesOutsideBounds, ::UnityEngine::AI::NavMeshBuildDebugSettings  m_Debug) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32116};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field m_AgentTypeID, offset: 0x0, size: 0x4, def value: None
 int32_t  m_AgentTypeID;

/// @brief Field m_AgentRadius, offset: 0x4, size: 0x4, def value: None
 float_t  m_AgentRadius;

/// @brief Field m_AgentHeight, offset: 0x8, size: 0x4, def value: None
 float_t  m_AgentHeight;

/// @brief Field m_AgentSlope, offset: 0xc, size: 0x4, def value: None
 float_t  m_AgentSlope;

/// @brief Field m_AgentClimb, offset: 0x10, size: 0x4, def value: None
 float_t  m_AgentClimb;

/// @brief Field m_LedgeDropHeight, offset: 0x14, size: 0x4, def value: None
 float_t  m_LedgeDropHeight;

/// @brief Field m_MaxJumpAcrossDistance, offset: 0x18, size: 0x4, def value: None
 float_t  m_MaxJumpAcrossDistance;

/// @brief Field m_MinRegionArea, offset: 0x1c, size: 0x4, def value: None
 float_t  m_MinRegionArea;

/// @brief Field m_OverrideVoxelSize, offset: 0x20, size: 0x4, def value: None
 int32_t  m_OverrideVoxelSize;

/// @brief Field m_VoxelSize, offset: 0x24, size: 0x4, def value: None
 float_t  m_VoxelSize;

/// @brief Field m_OverrideTileSize, offset: 0x28, size: 0x4, def value: None
 int32_t  m_OverrideTileSize;

/// @brief Field m_TileSize, offset: 0x2c, size: 0x4, def value: None
 int32_t  m_TileSize;

/// @brief Field m_BuildHeightMesh, offset: 0x30, size: 0x4, def value: None
 int32_t  m_BuildHeightMesh;

/// @brief Field m_MaxJobWorkers, offset: 0x34, size: 0x4, def value: None
 uint32_t  m_MaxJobWorkers;

/// @brief Field m_PreserveTilesOutsideBounds, offset: 0x38, size: 0x4, def value: None
 int32_t  m_PreserveTilesOutsideBounds;

/// @brief Field m_Debug, offset: 0x3c, size: 0x1, def value: None
 ::UnityEngine::AI::NavMeshBuildDebugSettings  m_Debug;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_AgentTypeID) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_AgentRadius) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_AgentHeight) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_AgentSlope) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_AgentClimb) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_LedgeDropHeight) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_MaxJumpAcrossDistance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_MinRegionArea) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_OverrideVoxelSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_VoxelSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_OverrideTileSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_TileSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_BuildHeightMesh) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_MaxJobWorkers) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_PreserveTilesOutsideBounds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AI::NavMeshBuildSettings, m_Debug) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshBuildSettings) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::AI

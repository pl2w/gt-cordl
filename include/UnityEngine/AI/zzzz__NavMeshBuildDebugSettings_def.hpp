#pragma once
// IWYU pragma private; include "UnityEngine/AI/NavMeshBuildDebugSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NavMeshBuildDebugSettings)
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshBuildDebugSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AI::NavMeshBuildDebugSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::AI::NavMeshBuildDebugSettings, "UnityEngine.AI", "NavMeshBuildDebugSettings");
// [NativeHeader("Modules/AI/Public/NavMeshBuildDebugSettings.h")]
// Dependencies 
namespace UnityEngine::AI {
// Is value type: true
// CS Name: UnityEngine.AI.NavMeshBuildDebugSettings
struct CORDL_TYPE NavMeshBuildDebugSettings {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr NavMeshBuildDebugSettings() ;

// Ctor Parameters [CppParam { name: "m_Flags", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NavMeshBuildDebugSettings(uint8_t  m_Flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field m_Flags, offset: 0x0, size: 0x1, def value: None
 uint8_t  m_Flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AI::NavMeshBuildDebugSettings, m_Flags) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::AI::NavMeshBuildDebugSettings) == 0x1, "Size mismatch!");

} // namespace end def UnityEngine::AI

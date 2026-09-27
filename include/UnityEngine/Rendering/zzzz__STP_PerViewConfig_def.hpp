#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_PerViewConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(STP_PerViewConfig)
// Forward declare root types
namespace GlobalNamespace {
struct STP_PerViewConfig;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::STP_PerViewConfig);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::STP_PerViewConfig, "UnityEngine.Rendering", "STP/PerViewConfig");
// Dependencies UnityEngine.Matrix4x4
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.STP/PerViewConfig
struct CORDL_TYPE STP_PerViewConfig {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr STP_PerViewConfig() ;

// Ctor Parameters [CppParam { name: "currentProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastLastProj", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "currentView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }, CppParam { name: "lastLastView", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None, comment: None }]
constexpr STP_PerViewConfig(::UnityEngine::Matrix4x4  currentProj, ::UnityEngine::Matrix4x4  lastProj, ::UnityEngine::Matrix4x4  lastLastProj, ::UnityEngine::Matrix4x4  currentView, ::UnityEngine::Matrix4x4  lastView, ::UnityEngine::Matrix4x4  lastLastView) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16940};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x180};

/// @brief Field currentProj, offset: 0x0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  currentProj;

/// @brief Field lastProj, offset: 0x40, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  lastProj;

/// @brief Field lastLastProj, offset: 0x80, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  lastLastProj;

/// @brief Field currentView, offset: 0xc0, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  currentView;

/// @brief Field lastView, offset: 0x100, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  lastView;

/// @brief Field lastLastView, offset: 0x140, size: 0x40, def value: None
 ::UnityEngine::Matrix4x4  lastLastView;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, currentProj) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, lastProj) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, lastLastProj) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, currentView) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, lastView) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::STP_PerViewConfig, lastLastView) == 0x140, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::STP_PerViewConfig) == 0x180, "Size mismatch!");

} // namespace end def GlobalNamespace

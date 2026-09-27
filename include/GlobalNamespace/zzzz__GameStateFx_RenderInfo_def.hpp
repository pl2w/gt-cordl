#pragma once
// IWYU pragma private; include "GlobalNamespace/GameStateFx_RenderInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GameStateFx_RenderInfo)
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameStateFx_RenderInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameStateFx_RenderInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameStateFx_RenderInfo, "", "GameStateFx/RenderInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameStateFx/RenderInfo
struct CORDL_TYPE GameStateFx_RenderInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameStateFx_RenderInfo() ;

// Ctor Parameters [CppParam { name: "enable", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "renderer", ty: "::UnityW<::UnityEngine::Renderer>", modifiers: "", def_value: None, comment: None }]
constexpr GameStateFx_RenderInfo(bool  enable, ::UnityW<::UnityEngine::Renderer>  renderer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{666};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field enable, offset: 0x0, size: 0x1, def value: None
 bool  enable;

/// @brief Field renderer, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  renderer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameStateFx_RenderInfo, enable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameStateFx_RenderInfo, renderer) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameStateFx_RenderInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

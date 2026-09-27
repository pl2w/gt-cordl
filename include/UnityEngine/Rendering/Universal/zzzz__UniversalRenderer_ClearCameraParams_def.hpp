#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_ClearCameraParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(UniversalRenderer_ClearCameraParams)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct UniversalRenderer_ClearCameraParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UniversalRenderer_ClearCameraParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UniversalRenderer_ClearCameraParams, "UnityEngine.Rendering.Universal", "UniversalRenderer/ClearCameraParams");
// [IsReadOnly]
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.UniversalRenderer/ClearCameraParams
struct CORDL_TYPE UniversalRenderer_ClearCameraParams {
public:
// Declarations
/// @brief Method .ctor, addr 0xb2b9208, size 0x14, virtual false, abstract: false, final false
inline void _ctor(bool  clearColor, bool  clearDepth, ::UnityEngine::Color  clearVal) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniversalRenderer_ClearCameraParams() ;

// Ctor Parameters [CppParam { name: "mustClearColor", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mustClearDepth", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "clearValue", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }]
constexpr UniversalRenderer_ClearCameraParams(bool  mustClearColor, bool  mustClearDepth, ::UnityEngine::Color  clearValue) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18662};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field mustClearColor, offset: 0x0, size: 0x1, def value: None
 bool  mustClearColor;

/// @brief Field mustClearDepth, offset: 0x1, size: 0x1, def value: None
 bool  mustClearDepth;

/// @brief Field clearValue, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::Color  clearValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UniversalRenderer_ClearCameraParams, mustClearColor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_ClearCameraParams, mustClearDepth) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UniversalRenderer_ClearCameraParams, clearValue) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UniversalRenderer_ClearCameraParams) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace

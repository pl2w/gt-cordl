#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimatinonNode_InputNodeState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRGLTFAnimatinonNode_InputNodeState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFAnimatinonNode_InputNodeState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, "", "OVRGLTFAnimatinonNode/InputNodeState");
// Dependencies UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRGLTFAnimatinonNode/InputNodeState
struct CORDL_TYPE OVRGLTFAnimatinonNode_InputNodeState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRGLTFAnimatinonNode_InputNodeState() ;

// Ctor Parameters [CppParam { name: "down", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "t", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "vecT", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr OVRGLTFAnimatinonNode_InputNodeState(bool  down, float_t  t, ::UnityEngine::Vector2  vecT) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11903};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field down, offset: 0x0, size: 0x1, def value: None
 bool  down;

/// @brief Field t, offset: 0x4, size: 0x4, def value: None
 float_t  t;

/// @brief Field vecT, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  vecT;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, down) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, t) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState, vecT) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRGLTFAnimatinonNode_InputNodeState) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

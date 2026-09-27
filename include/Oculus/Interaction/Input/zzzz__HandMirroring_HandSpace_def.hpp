#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandMirroring_HandSpace.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HandMirroring_HandSpace)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct HandMirroring_HandSpace;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HandMirroring_HandSpace);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HandMirroring_HandSpace, "Oculus.Interaction.Input", "HandMirroring/HandSpace");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.Input.HandMirroring/HandSpace
struct CORDL_TYPE HandMirroring_HandSpace {
public:
// Declarations
/// @brief Method .ctor, addr 0xa50f954, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  distal, ::UnityEngine::Vector3  dorsal, ::UnityEngine::Vector3  thumbSide) ;

// Ctor Parameters []
// @brief default ctor
constexpr HandMirroring_HandSpace() ;

// Ctor Parameters [CppParam { name: "distal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "dorsal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "thumbSide", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr HandMirroring_HandSpace(::UnityEngine::Vector3  distal, ::UnityEngine::Vector3  dorsal, ::UnityEngine::Vector3  thumbSide, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16492};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x34};

/// @brief Field distal, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  distal;

/// @brief Field dorsal, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  dorsal;

/// @brief Field thumbSide, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  thumbSide;

/// @brief Field rotation, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HandMirroring_HandSpace, distal) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMirroring_HandSpace, dorsal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMirroring_HandSpace, thumbSide) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HandMirroring_HandSpace, rotation) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HandMirroring_HandSpace) == 0x34, "Size mismatch!");

} // namespace end def GlobalNamespace

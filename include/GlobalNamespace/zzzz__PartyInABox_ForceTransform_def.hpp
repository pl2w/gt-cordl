#pragma once
// IWYU pragma private; include "GlobalNamespace/PartyInABox_ForceTransform.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PartyInABox_ForceTransform)
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct PartyInABox_ForceTransform;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PartyInABox_ForceTransform);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PartyInABox_ForceTransform, "", "PartyInABox/ForceTransform");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: PartyInABox/ForceTransform
struct CORDL_TYPE PartyInABox_ForceTransform {
public:
// Declarations
/// @brief Method Apply, addr 0x565868c, size 0x40, virtual false, abstract: false, final false
inline void Apply() ;

// Ctor Parameters []
// @brief default ctor
constexpr PartyInABox_ForceTransform() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr PartyInABox_ForceTransform(::UnityW<::UnityEngine::Transform>  transform, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{754};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field transform, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  transform;

/// @brief Field localPosition, offset: 0x8, size: 0xc, def value: None
 ::UnityEngine::Vector3  localPosition;

/// @brief Field localRotation, offset: 0x14, size: 0x10, def value: None
 ::UnityEngine::Quaternion  localRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PartyInABox_ForceTransform, transform) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox_ForceTransform, localPosition) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PartyInABox_ForceTransform, localRotation) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PartyInABox_ForceTransform) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

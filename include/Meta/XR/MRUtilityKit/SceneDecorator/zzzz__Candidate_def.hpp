#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/Candidate.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(Candidate)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Meta::XR::MRUtilityKit::SceneDecorator {
struct Candidate;
}
// Write type traits
MARK_VAL_T(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate);
DEFINE_IL2CPP_CLASS(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, "Meta.XR.MRUtilityKit.SceneDecorator", "Candidate");
// Dependencies UnityEngine.RaycastHit, UnityEngine.Vector2, UnityEngine.Vector3
namespace Meta::XR::MRUtilityKit::SceneDecorator {
// Is value type: true
// CS Name: Meta.XR.MRUtilityKit.SceneDecorator.Candidate
struct CORDL_TYPE Candidate {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Candidate() ;

// Ctor Parameters [CppParam { name: "decorationPrefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPos", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "localPosNormalized", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "hit", ty: "::UnityEngine::RaycastHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchorCompDists", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "anchorDist", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "slope", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr Candidate(::UnityW<::UnityEngine::GameObject>  decorationPrefab, ::UnityEngine::Vector2  localPos, ::UnityEngine::Vector2  localPosNormalized, ::UnityEngine::RaycastHit  hit, ::UnityEngine::Vector3  anchorCompDists, float_t  anchorDist, float_t  slope) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25973};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field decorationPrefab, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  decorationPrefab;

/// @brief Field localPos, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  localPos;

/// @brief Field localPosNormalized, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  localPosNormalized;

/// @brief Field hit, offset: 0x18, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  hit;

/// @brief Field anchorCompDists, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  anchorCompDists;

/// @brief Field anchorDist, offset: 0x50, size: 0x4, def value: None
 float_t  anchorDist;

/// @brief Field slope, offset: 0x54, size: 0x4, def value: None
 float_t  slope;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, decorationPrefab) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, localPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, localPosNormalized) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, hit) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, anchorCompDists) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, anchorDist) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate, slope) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::MRUtilityKit::SceneDecorator::Candidate) == 0x58, "Size mismatch!");

} // namespace end def Meta::XR::MRUtilityKit::SceneDecorator

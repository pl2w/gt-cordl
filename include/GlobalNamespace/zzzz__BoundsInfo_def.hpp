#pragma once
// IWYU pragma private; include "GlobalNamespace/BoundsInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BoundsInfo)
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct BoundsInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoundsInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoundsInfo, "", "BoundsInfo");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: BoundsInfo
struct CORDL_TYPE BoundsInfo {
public:
// Declarations
 __declspec(property(get=get_sizeComputed)) ::UnityEngine::Vector3  sizeComputed;

 __declspec(property(get=get_sizeComputedAA)) ::UnityEngine::Vector3  sizeComputedAA;

/// @brief Method ComputeBounds, addr 0x5b41870, size 0x250, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BoundsInfo ComputeBounds(::ArrayW<::UnityEngine::Vector3>  vertices) ;

/// @brief Method CreateBoxCollider, addr 0x5b41c3c, size 0x260, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::BoxCollider> CreateBoxCollider(::GlobalNamespace::BoundsInfo  bounds) ;

/// @brief Method CreateBoxColliderAA, addr 0x5b41e9c, size 0x21c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::BoxCollider> CreateBoxColliderAA(::GlobalNamespace::BoundsInfo  bounds) ;

/// @brief Method get_sizeComputed, addr 0x5b41bec, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_sizeComputed() ;

/// @brief Method get_sizeComputedAA, addr 0x5b41c14, size 0x28, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_sizeComputedAA() ;

// Ctor Parameters []
// @brief default ctor
constexpr BoundsInfo() ;

// Ctor Parameters [CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "inflate", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "centerAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "sizeAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleAA", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "inflateAA", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BoundsInfo(::UnityEngine::Vector3  center, ::UnityEngine::Vector3  size, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  scale, float_t  inflate, ::UnityEngine::Vector3  centerAA, ::UnityEngine::Vector3  sizeAA, ::UnityEngine::Vector3  scaleAA, float_t  inflateAA) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3726};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x60};

/// @brief Field center, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field size, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  size;

/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

/// @brief Field scale, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  scale;

/// @brief Field inflate, offset: 0x34, size: 0x4, def value: None
 float_t  inflate;

/// [Space]
/// @brief Field centerAA, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  centerAA;

/// @brief Field sizeAA, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  sizeAA;

/// @brief Field scaleAA, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  scaleAA;

/// @brief Field inflateAA, offset: 0x5c, size: 0x4, def value: None
 float_t  inflateAA;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoundsInfo, center) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, size) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, scale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, inflate) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, centerAA) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, sizeAA) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, scaleAA) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BoundsInfo, inflateAA) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoundsInfo) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

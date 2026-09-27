#pragma once
// IWYU pragma private; include "Unity/Cinemachine/TargetPositionCache_CacheCurve_Item.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(TargetPositionCache_CacheCurve_Item)
// Forward declare root types
namespace GlobalNamespace {
struct CacheCurve_TargetPositionCache_Item;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CacheCurve_TargetPositionCache_Item);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CacheCurve_TargetPositionCache_Item, "Unity.Cinemachine", "TargetPositionCache/CacheCurve/Item");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: Unity.Cinemachine.TargetPositionCache/CacheCurve/Item
struct CORDL_TYPE CacheCurve_TargetPositionCache_Item {
public:
// Declarations
/// @brief Method Lerp, addr 0xaebfee4, size 0x78, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item Lerp(::GlobalNamespace::CacheCurve_TargetPositionCache_Item  a, ::GlobalNamespace::CacheCurve_TargetPositionCache_Item  b, float_t  t) ;

/// @brief Method get_Empty, addr 0xaebff5c, size 0x58, virtual false, abstract: false, final false
static inline ::GlobalNamespace::CacheCurve_TargetPositionCache_Item get_Empty() ;

// Ctor Parameters []
// @brief default ctor
constexpr CacheCurve_TargetPositionCache_Item() ;

// Ctor Parameters [CppParam { name: "Pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr CacheCurve_TargetPositionCache_Item(::UnityEngine::Vector3  Pos, ::UnityEngine::Quaternion  Rot) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22370};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field Pos, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  Pos;

/// @brief Field Rot, offset: 0xc, size: 0x10, def value: None
 ::UnityEngine::Quaternion  Rot;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CacheCurve_TargetPositionCache_Item, Pos) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CacheCurve_TargetPositionCache_Item, Rot) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CacheCurve_TargetPositionCache_Item) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace

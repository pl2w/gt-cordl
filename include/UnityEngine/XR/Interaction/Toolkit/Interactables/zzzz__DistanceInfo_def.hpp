#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/DistanceInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistanceInfo)
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct DistanceInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo, "UnityEngine.XR.Interaction.Toolkit.Interactables", "DistanceInfo");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.Vector3
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.DistanceInfo
struct CORDL_TYPE DistanceInfo {
public:
// Declarations
 __declspec(property(get=get_collider, put=set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

 __declspec(property(get=get_distanceSqr, put=set_distanceSqr)) float_t  distanceSqr;

 __declspec(property(get=get_point, put=set_point)) ::UnityEngine::Vector3  point;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_collider, addr 0xb490e9c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Collider> get_collider() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_distanceSqr, addr 0xb490e8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_distanceSqr() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_point, addr 0xb490e74, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_point() ;

/// [CompilerGenerated]
/// @brief Method set_collider, addr 0xb490ea4, size 0x8, virtual false, abstract: false, final false
inline void set_collider(::UnityEngine::Collider*  value) ;

/// [CompilerGenerated]
/// @brief Method set_distanceSqr, addr 0xb490e94, size 0x8, virtual false, abstract: false, final false
inline void set_distanceSqr(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_point, addr 0xb490e80, size 0xc, virtual false, abstract: false, final false
inline void set_point(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr DistanceInfo() ;

// Ctor Parameters [CppParam { name: "_point_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "_distanceSqr_k__BackingField", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_collider_k__BackingField", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }]
constexpr DistanceInfo(::UnityEngine::Vector3  _point_k__BackingField, float_t  _distanceSqr_k__BackingField, ::UnityW<::UnityEngine::Collider>  _collider_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11506};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [CompilerGenerated]
/// @brief Field <point>k__BackingField, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  _point_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <distanceSqr>k__BackingField, offset: 0xc, size: 0x4, def value: None
 float_t  _distanceSqr_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <collider>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  _collider_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo, _point_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo, _distanceSqr_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo, _collider_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables

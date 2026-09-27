#pragma once
// IWYU pragma private; include "Fusion/LagCompensatedHit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__HitType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LagCompensatedHit)
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion {
class Hitbox;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace Fusion {
struct LagCompensatedHit;
}
// Write type traits
MARK_VAL_T(::Fusion::LagCompensatedHit);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensatedHit, "Fusion", "LagCompensatedHit");
// Dependencies Fusion.LagCompensation.HitType, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion {
// Is value type: true
// CS Name: Fusion.LagCompensatedHit
struct CORDL_TYPE LagCompensatedHit {
public:
// Declarations
/// @brief Method FromHitboxHit, addr 0x5f937bc, size 0xd4, virtual false, abstract: false, final false
static inline ::Fusion::LagCompensatedHit FromHitboxHit(::by_ref<::Fusion::LagCompensation::HitboxHit>  hitboxHit) ;

/// @brief Method QuickSort, addr 0x5f94aa8, size 0x218, virtual false, abstract: false, final false
static inline void QuickSort(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  low, int32_t  high) ;

/// @brief Method QuickSortDistance, addr 0x5f94cc0, size 0x218, virtual false, abstract: false, final false
static inline void QuickSortDistance(::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, int32_t  low, int32_t  high) ;

/// @brief Method op_Explicit, addr 0x5f948d4, size 0xec, virtual false, abstract: false, final false
static inline ::Fusion::LagCompensatedHit op_Explicit___Fusion__LagCompensatedHit(::UnityEngine::RaycastHit  raycastHit) ;

/// @brief Method op_Explicit, addr 0x5f949c0, size 0xe8, virtual false, abstract: false, final false
static inline ::Fusion::LagCompensatedHit op_Explicit___Fusion__LagCompensatedHit(::UnityEngine::RaycastHit2D  raycastHit2D) ;

// Ctor Parameters []
// @brief default ctor
constexpr LagCompensatedHit() ;

// Ctor Parameters [CppParam { name: "Type", ty: "::Fusion::LagCompensation::HitType", modifiers: "", def_value: None, comment: None }, CppParam { name: "GameObject", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Normal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "Point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "HitboxColliderPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "HitboxColliderRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }, CppParam { name: "Distance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Hitbox", ty: "::UnityW<::Fusion::Hitbox>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Collider", ty: "::UnityW<::UnityEngine::Collider>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Collider2D", ty: "::UnityW<::UnityEngine::Collider2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_sortAux", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LagCompensatedHit(::Fusion::LagCompensation::HitType  Type, ::UnityW<::UnityEngine::GameObject>  GameObject, ::UnityEngine::Vector3  Normal, ::UnityEngine::Vector3  Point, ::UnityEngine::Vector3  HitboxColliderPosition, ::UnityEngine::Quaternion  HitboxColliderRotation, float_t  Distance, ::UnityW<::Fusion::Hitbox>  Hitbox, ::UnityW<::UnityEngine::Collider>  Collider, ::UnityW<::UnityEngine::Collider2D>  Collider2D, float_t  _sortAux) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18962};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x68};

/// @brief Field Type, offset: 0x0, size: 0x4, def value: None
 ::Fusion::LagCompensation::HitType  Type;

/// @brief Field GameObject, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  GameObject;

/// @brief Field Normal, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  Normal;

/// @brief Field Point, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  Point;

/// @brief Field HitboxColliderPosition, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  HitboxColliderPosition;

/// @brief Field HitboxColliderRotation, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Quaternion  HitboxColliderRotation;

/// @brief Field Distance, offset: 0x44, size: 0x4, def value: None
 float_t  Distance;

/// @brief Field Hitbox, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::Hitbox>  Hitbox;

/// @brief Field Collider, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  Collider;

/// @brief Field Collider2D, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  Collider2D;

/// @brief Field _sortAux, offset: 0x60, size: 0x4, def value: None
 float_t  _sortAux;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensatedHit, Type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, GameObject) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Normal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Point) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, HitboxColliderPosition) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, HitboxColliderRotation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Distance) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Hitbox) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Collider) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, Collider2D) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensatedHit, _sortAux) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensatedHit) == 0x68, "Size mismatch!");

} // namespace end def Fusion

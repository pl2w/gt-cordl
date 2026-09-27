#pragma once
// IWYU pragma private; include "Pathfinding/RaycastModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__MonoModifier_def.hpp"
#include "Pathfinding/zzzz__RaycastModifier_Quality_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastModifier)
namespace GlobalNamespace {
struct RaycastModifier_Quality;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class RaycastModifier_Filter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class RaycastModifier;
}
namespace Pathfinding {
class RaycastModifier_Filter;
}
// Write type traits
MARK_REF_T(::Pathfinding::RaycastModifier*);
MARK_REF_T(::Pathfinding::RaycastModifier_Filter*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RaycastModifier*, "Pathfinding", "RaycastModifier");
DEFINE_IL2CPP_CLASS(::Pathfinding::RaycastModifier_Filter*, "Pathfinding", "RaycastModifier/Filter");
// [AddComponentMenu("Pathfinding/Modifiers/Raycast Modifier")]
// [RequireComponent(typeof(Pathfinding.Seeker))]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_raycast_modifier.php")]
// Dependencies Pathfinding.MonoModifier, Pathfinding.RaycastModifier::Quality, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RaycastModifier
class CORDL_TYPE RaycastModifier : public ::Pathfinding::MonoModifier {
public:
// Declarations
using Quality = ::GlobalNamespace::RaycastModifier_Quality;

using Filter = ::Pathfinding::RaycastModifier_Filter;

/// @brief Field DPCosts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DPCosts, put=setStaticF_DPCosts)) ::ArrayW<float_t>  DPCosts;

/// @brief Field DPParents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DPParents, put=setStaticF_DPParents)) ::ArrayW<int32_t>  DPParents;

 __declspec(property(get=get_Order)) int32_t  Order;

/// @brief Field buffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_buffer, put=setStaticF_buffer)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer;

/// @brief Field cachedFilter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedFilter, put=__cordl_internal_set_cachedFilter)) ::Pathfinding::RaycastModifier_Filter*  cachedFilter;

/// @brief Field cachedNNConstraint, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedNNConstraint, put=__cordl_internal_set_cachedNNConstraint)) ::Pathfinding::NNConstraint*  cachedNNConstraint;

/// @brief Field iterationsByQuality, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_iterationsByQuality, put=setStaticF_iterationsByQuality)) ::ArrayW<int32_t>  iterationsByQuality;

/// @brief Field mask, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field quality, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_quality, put=__cordl_internal_set_quality)) ::GlobalNamespace::RaycastModifier_Quality  quality;

/// @brief Field raycastOffset, offset 0x44, size 0xc 
 __declspec(property(get=__cordl_internal_get_raycastOffset, put=__cordl_internal_set_raycastOffset)) ::UnityEngine::Vector3  raycastOffset;

/// @brief Field thickRaycast, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_thickRaycast, put=__cordl_internal_set_thickRaycast)) bool  thickRaycast;

/// @brief Field thickRaycastRadius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_thickRaycastRadius, put=__cordl_internal_set_thickRaycastRadius)) float_t  thickRaycastRadius;

/// @brief Field use2DPhysics, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_use2DPhysics, put=__cordl_internal_set_use2DPhysics)) bool  use2DPhysics;

/// @brief Field useGraphRaycasting, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_useGraphRaycasting, put=__cordl_internal_set_useGraphRaycasting)) bool  useGraphRaycasting;

/// @brief Field useRaycasting, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useRaycasting, put=__cordl_internal_set_useRaycasting)) bool  useRaycasting;

/// @brief Method Apply, addr 0x5ea2594, size 0x464, virtual true, abstract: false, final false
inline void Apply(::Pathfinding::Path*  p) ;

/// @brief Method ApplyDP, addr 0x5ea3688, size 0x7a8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ApplyDP(::Pathfinding::Path*  p, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint) ;

/// @brief Method ApplyGreedy, addr 0x5ea3148, size 0x540, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* ApplyGreedy(::Pathfinding::Path*  p, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  points, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint) ;

static inline ::Pathfinding::RaycastModifier* New_ctor() ;

/// @brief Method ValidateLine, addr 0x5ea29f8, size 0x750, virtual false, abstract: false, final false
inline bool ValidateLine(::Pathfinding::GraphNode*  n1, ::Pathfinding::GraphNode*  n2, ::UnityEngine::Vector3  v1, ::UnityEngine::Vector3  v2, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, ::Pathfinding::NNConstraint*  nnConstraint) ;

constexpr ::Pathfinding::RaycastModifier_Filter* const& __cordl_internal_get_cachedFilter() const;

constexpr ::Pathfinding::RaycastModifier_Filter*& __cordl_internal_get_cachedFilter() ;

constexpr ::Pathfinding::NNConstraint* const& __cordl_internal_get_cachedNNConstraint() const;

constexpr ::Pathfinding::NNConstraint*& __cordl_internal_get_cachedNNConstraint() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr ::GlobalNamespace::RaycastModifier_Quality const& __cordl_internal_get_quality() const;

constexpr ::GlobalNamespace::RaycastModifier_Quality& __cordl_internal_get_quality() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_raycastOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_raycastOffset() ;

constexpr bool const& __cordl_internal_get_thickRaycast() const;

constexpr bool& __cordl_internal_get_thickRaycast() ;

constexpr float_t const& __cordl_internal_get_thickRaycastRadius() const;

constexpr float_t& __cordl_internal_get_thickRaycastRadius() ;

constexpr bool const& __cordl_internal_get_use2DPhysics() const;

constexpr bool& __cordl_internal_get_use2DPhysics() ;

constexpr bool const& __cordl_internal_get_useGraphRaycasting() const;

constexpr bool& __cordl_internal_get_useGraphRaycasting() ;

constexpr bool const& __cordl_internal_get_useRaycasting() const;

constexpr bool& __cordl_internal_get_useRaycasting() ;

constexpr void __cordl_internal_set_cachedFilter(::Pathfinding::RaycastModifier_Filter*  value) ;

constexpr void __cordl_internal_set_cachedNNConstraint(::Pathfinding::NNConstraint*  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_quality(::GlobalNamespace::RaycastModifier_Quality  value) ;

constexpr void __cordl_internal_set_raycastOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_thickRaycast(bool  value) ;

constexpr void __cordl_internal_set_thickRaycastRadius(float_t  value) ;

constexpr void __cordl_internal_set_use2DPhysics(bool  value) ;

constexpr void __cordl_internal_set_useGraphRaycasting(bool  value) ;

constexpr void __cordl_internal_set_useRaycasting(bool  value) ;

/// @brief Method .ctor, addr 0x5ea3e30, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<float_t> getStaticF_DPCosts() ;

static inline ::ArrayW<int32_t> getStaticF_DPParents() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* getStaticF_buffer() ;

static inline ::ArrayW<int32_t> getStaticF_iterationsByQuality() ;

/// @brief Method get_Order, addr 0x5ea258c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Order() ;

static inline void setStaticF_DPCosts(::ArrayW<float_t>  value) ;

static inline void setStaticF_DPParents(::ArrayW<int32_t>  value) ;

static inline void setStaticF_buffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

static inline void setStaticF_iterationsByQuality(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastModifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastModifier", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastModifier(RaycastModifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastModifier(RaycastModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21371};

/// @brief Field useRaycasting, offset: 0x30, size: 0x1, def value: None
 bool  ___useRaycasting;

/// @brief Field mask, offset: 0x34, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// [Tooltip("Checks around the line between two points, not just the exact line.\nMake sure the ground is either too far below or is not inside the mask since otherwise the raycast might always hit the ground.")]
/// @brief Field thickRaycast, offset: 0x38, size: 0x1, def value: None
 bool  ___thickRaycast;

/// [Tooltip("Distance from the ray which will be checked for colliders")]
/// @brief Field thickRaycastRadius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___thickRaycastRadius;

/// [Tooltip("Check for intersections with 2D colliders instead of 3D colliders.")]
/// @brief Field use2DPhysics, offset: 0x40, size: 0x1, def value: None
 bool  ___use2DPhysics;

/// [Tooltip("Offset from the original positions to perform the raycast.\nCan be useful to avoid the raycast intersecting the ground or similar things you do not want to it intersect")]
/// @brief Field raycastOffset, offset: 0x44, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___raycastOffset;

/// [Tooltip("Use raycasting on the graphs. Only currently works with GridGraph and NavmeshGraph and RecastGraph. This is a pro version feature.")]
/// @brief Field useGraphRaycasting, offset: 0x50, size: 0x1, def value: None
 bool  ___useGraphRaycasting;

/// [Tooltip("When using the high quality mode the script will try harder to find a shorter path. This is significantly slower than the greedy low quality approach.")]
/// @brief Field quality, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::RaycastModifier_Quality  ___quality;

/// @brief Field cachedFilter, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::RaycastModifier_Filter*  ___cachedFilter;

/// @brief Field cachedNNConstraint, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::NNConstraint*  ___cachedNNConstraint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RaycastModifier, ___useRaycasting) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___mask) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___thickRaycast) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___thickRaycastRadius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___use2DPhysics) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___raycastOffset) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___useGraphRaycasting) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___quality) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___cachedFilter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier, ___cachedNNConstraint) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RaycastModifier) == 0x68, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.RaycastModifier/Filter
class CORDL_TYPE RaycastModifier_Filter : public ::System::Object {
public:
// Declarations
/// @brief Field cachedDelegate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedDelegate, put=__cordl_internal_set_cachedDelegate)) ::System::Func_2<::Pathfinding::GraphNode*,bool>*  cachedDelegate;

/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

/// @brief Method CanTraverse, addr 0x5ea40f4, size 0x18, virtual false, abstract: false, final false
inline bool CanTraverse(::Pathfinding::GraphNode*  node) ;

static inline ::Pathfinding::RaycastModifier_Filter* New_ctor() ;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>* const& __cordl_internal_get_cachedDelegate() const;

constexpr ::System::Func_2<::Pathfinding::GraphNode*,bool>*& __cordl_internal_get_cachedDelegate() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_cachedDelegate(::System::Func_2<::Pathfinding::GraphNode*,bool>*  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

/// @brief Method .ctor, addr 0x5ea3f10, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastModifier_Filter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastModifier_Filter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastModifier_Filter(RaycastModifier_Filter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastModifier_Filter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastModifier_Filter(RaycastModifier_Filter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21370};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

/// @brief Field cachedDelegate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::Pathfinding::GraphNode*,bool>*  ___cachedDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RaycastModifier_Filter, ___path) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RaycastModifier_Filter, ___cachedDelegate) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RaycastModifier_Filter) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding

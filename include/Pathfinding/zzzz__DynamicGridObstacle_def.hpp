#pragma once
// IWYU pragma private; include "Pathfinding/DynamicGridObstacle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphModifier_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DynamicGridObstacle)
namespace Pathfinding {
class GraphUpdateObject;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Collider2D;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Pathfinding {
class DynamicGridObstacle;
}
// Write type traits
MARK_REF_T(::Pathfinding::DynamicGridObstacle*);
DEFINE_IL2CPP_CLASS(::Pathfinding::DynamicGridObstacle*, "Pathfinding", "DynamicGridObstacle");
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_dynamic_grid_obstacle.php")]
// Dependencies Pathfinding.GraphModifier, UnityEngine.Bounds, UnityEngine.Quaternion
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.DynamicGridObstacle
class CORDL_TYPE DynamicGridObstacle : public ::Pathfinding::GraphModifier {
public:
// Declarations
 __declspec(property(get=get_bounds)) ::UnityEngine::Bounds  bounds;

/// @brief Field checkTime, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_checkTime, put=__cordl_internal_set_checkTime)) float_t  checkTime;

/// @brief Field coll, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_coll, put=__cordl_internal_set_coll)) ::UnityW<::UnityEngine::Collider>  coll;

/// @brief Field coll2D, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_coll2D, put=__cordl_internal_set_coll2D)) ::UnityW<::UnityEngine::Collider2D>  coll2D;

 __declspec(property(get=get_colliderEnabled)) bool  colliderEnabled;

/// @brief Field lastCheckTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCheckTime, put=__cordl_internal_set_lastCheckTime)) float_t  lastCheckTime;

/// @brief Field pendingGraphUpdates, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingGraphUpdates, put=__cordl_internal_set_pendingGraphUpdates)) ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  pendingGraphUpdates;

/// @brief Field prevBounds, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_prevBounds, put=__cordl_internal_set_prevBounds)) ::UnityEngine::Bounds  prevBounds;

/// @brief Field prevEnabled, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get_prevEnabled, put=__cordl_internal_set_prevEnabled)) bool  prevEnabled;

/// @brief Field prevRotation, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_prevRotation, put=__cordl_internal_set_prevRotation)) ::UnityEngine::Quaternion  prevRotation;

/// @brief Field tr, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tr, put=__cordl_internal_set_tr)) ::UnityW<::UnityEngine::Transform>  tr;

/// @brief Field updateError, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_updateError, put=__cordl_internal_set_updateError)) float_t  updateError;

/// @brief Method Awake, addr 0x5eb4b48, size 0x22c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BoundsVolume, addr 0x5eb58f4, size 0x74, virtual false, abstract: false, final false
static inline float_t BoundsVolume(::UnityEngine::Bounds  b) ;

/// @brief Method DoUpdateGraphs, addr 0x5eb5284, size 0x4d8, virtual false, abstract: false, final false
inline void DoUpdateGraphs() ;

static inline ::Pathfinding::DynamicGridObstacle* New_ctor() ;

/// @brief Method OnDisable, addr 0x5eb575c, size 0x198, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnPostScan, addr 0x5eb4d74, size 0xb0, virtual true, abstract: false, final false
inline void OnPostScan() ;

/// @brief Method Update, addr 0x5eb4e24, size 0x460, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_checkTime() const;

constexpr float_t& __cordl_internal_get_checkTime() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_coll() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_coll() ;

constexpr ::UnityW<::UnityEngine::Collider2D> const& __cordl_internal_get_coll2D() const;

constexpr ::UnityW<::UnityEngine::Collider2D>& __cordl_internal_get_coll2D() ;

constexpr float_t const& __cordl_internal_get_lastCheckTime() const;

constexpr float_t& __cordl_internal_get_lastCheckTime() ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>* const& __cordl_internal_get_pendingGraphUpdates() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*& __cordl_internal_get_pendingGraphUpdates() ;

constexpr ::UnityEngine::Bounds const& __cordl_internal_get_prevBounds() const;

constexpr ::UnityEngine::Bounds& __cordl_internal_get_prevBounds() ;

constexpr bool const& __cordl_internal_get_prevEnabled() const;

constexpr bool& __cordl_internal_get_prevEnabled() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_prevRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_prevRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tr() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tr() ;

constexpr float_t const& __cordl_internal_get_updateError() const;

constexpr float_t& __cordl_internal_get_updateError() ;

constexpr void __cordl_internal_set_checkTime(float_t  value) ;

constexpr void __cordl_internal_set_coll(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_coll2D(::UnityW<::UnityEngine::Collider2D>  value) ;

constexpr void __cordl_internal_set_lastCheckTime(float_t  value) ;

constexpr void __cordl_internal_set_pendingGraphUpdates(::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  value) ;

constexpr void __cordl_internal_set_prevBounds(::UnityEngine::Bounds  value) ;

constexpr void __cordl_internal_set_prevEnabled(bool  value) ;

constexpr void __cordl_internal_set_prevRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_updateError(float_t  value) ;

/// @brief Method .ctor, addr 0x5eb5968, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bounds, addr 0x5eb49b8, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds get_bounds() ;

/// @brief Method get_colliderEnabled, addr 0x5eb4ab8, size 0x90, virtual false, abstract: false, final false
inline bool get_colliderEnabled() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DynamicGridObstacle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DynamicGridObstacle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DynamicGridObstacle(DynamicGridObstacle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DynamicGridObstacle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DynamicGridObstacle(DynamicGridObstacle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21411};

/// @brief Field coll, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___coll;

/// @brief Field coll2D, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider2D>  ___coll2D;

/// @brief Field tr, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tr;

/// @brief Field updateError, offset: 0x58, size: 0x4, def value: None
 float_t  ___updateError;

/// @brief Field checkTime, offset: 0x5c, size: 0x4, def value: None
 float_t  ___checkTime;

/// @brief Field prevBounds, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::Bounds  ___prevBounds;

/// @brief Field prevRotation, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___prevRotation;

/// @brief Field prevEnabled, offset: 0x88, size: 0x1, def value: None
 bool  ___prevEnabled;

/// @brief Field lastCheckTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___lastCheckTime;

/// @brief Field pendingGraphUpdates, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  ___pendingGraphUpdates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___coll) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___coll2D) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___tr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___updateError) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___checkTime) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___prevBounds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___prevRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___prevEnabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___lastCheckTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::DynamicGridObstacle, ___pendingGraphUpdates) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::DynamicGridObstacle) == 0x98, "Size mismatch!");

} // namespace end def Pathfinding

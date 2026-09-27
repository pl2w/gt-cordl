#pragma once
// IWYU pragma private; include "Pathfinding/GraphCollision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__ColliderType_def.hpp"
#include "Pathfinding/zzzz__RayDirection_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__ContactFilter2D_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphCollision)
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace UnityEngine {
struct RaycastHit;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GraphCollision;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphCollision*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphCollision*, "Pathfinding", "GraphCollision");
// Dependencies Pathfinding.ColliderType, Pathfinding.RayDirection, System.Object, UnityEngine.Collider2D, UnityEngine.ContactFilter2D, UnityEngine.LayerMask, UnityEngine.RaycastHit, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphCollision
class CORDL_TYPE GraphCollision : public ::System::Object {
public:
// Declarations
/// @brief Field collisionCheck, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_collisionCheck, put=__cordl_internal_set_collisionCheck)) bool  collisionCheck;

/// @brief Field collisionOffset, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionOffset, put=__cordl_internal_set_collisionOffset)) float_t  collisionOffset;

/// @brief Field contactFilter, offset 0x54, size 0x1c 
 __declspec(property(get=__cordl_internal_get_contactFilter, put=__cordl_internal_set_contactFilter)) ::UnityEngine::ContactFilter2D  contactFilter;

/// @brief Field diameter, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_diameter, put=__cordl_internal_set_diameter)) float_t  diameter;

/// @brief Field dummyArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_dummyArray, put=setStaticF_dummyArray)) ::ArrayW<::UnityW<::UnityEngine::Collider2D>>  dummyArray;

/// @brief Field finalRadius, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_finalRadius, put=__cordl_internal_set_finalRadius)) float_t  finalRadius;

/// @brief Field finalRaycastRadius, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_finalRaycastRadius, put=__cordl_internal_set_finalRaycastRadius)) float_t  finalRaycastRadius;

/// @brief Field fromHeight, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fromHeight, put=__cordl_internal_set_fromHeight)) float_t  fromHeight;

/// @brief Field height, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field heightCheck, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get_heightCheck, put=__cordl_internal_set_heightCheck)) bool  heightCheck;

/// @brief Field heightMask, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_heightMask, put=__cordl_internal_set_heightMask)) ::UnityEngine::LayerMask  heightMask;

/// @brief Field hitBuffer, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitBuffer, put=__cordl_internal_set_hitBuffer)) ::ArrayW<::UnityEngine::RaycastHit>  hitBuffer;

/// @brief Field mask, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field rayDirection, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayDirection, put=__cordl_internal_set_rayDirection)) ::Pathfinding::RayDirection  rayDirection;

/// @brief Field thickRaycast, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_thickRaycast, put=__cordl_internal_set_thickRaycast)) bool  thickRaycast;

/// @brief Field thickRaycastDiameter, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_thickRaycastDiameter, put=__cordl_internal_set_thickRaycastDiameter)) float_t  thickRaycastDiameter;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Pathfinding::ColliderType  type;

/// @brief Field unwalkableWhenNoGround, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_unwalkableWhenNoGround, put=__cordl_internal_set_unwalkableWhenNoGround)) bool  unwalkableWhenNoGround;

/// @brief Field up, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_up, put=__cordl_internal_set_up)) ::UnityEngine::Vector3  up;

/// @brief Field upheight, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_upheight, put=__cordl_internal_set_upheight)) ::UnityEngine::Vector3  upheight;

/// @brief Field use2D, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_use2D, put=__cordl_internal_set_use2D)) bool  use2D;

/// @brief Method Check, addr 0x5e6d560, size 0x40c, virtual false, abstract: false, final false
inline bool Check(::UnityEngine::Vector3  position) ;

/// @brief Method CheckHeight, addr 0x5e6d96c, size 0x30, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CheckHeight(::UnityEngine::Vector3  position) ;

/// @brief Method CheckHeight, addr 0x5e6d99c, size 0x30c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 CheckHeight(::UnityEngine::Vector3  position, ::by_ref<::UnityEngine::RaycastHit>  hit, ::by_ref<bool>  walkable) ;

/// @brief Method CheckHeightAll, addr 0x5e6dca8, size 0x224, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::RaycastHit> CheckHeightAll(::UnityEngine::Vector3  position, ::by_ref<int32_t>  numHits) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e6decc, size 0x1d4, virtual false, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method Initialize, addr 0x5e6d37c, size 0x1e4, virtual false, abstract: false, final false
inline void Initialize(::Pathfinding::Util::GraphTransform*  transform, float_t  scale) ;

static inline ::Pathfinding::GraphCollision* New_ctor() ;

constexpr bool const& __cordl_internal_get_collisionCheck() const;

constexpr bool& __cordl_internal_get_collisionCheck() ;

constexpr float_t const& __cordl_internal_get_collisionOffset() const;

constexpr float_t& __cordl_internal_get_collisionOffset() ;

constexpr ::UnityEngine::ContactFilter2D const& __cordl_internal_get_contactFilter() const;

constexpr ::UnityEngine::ContactFilter2D& __cordl_internal_get_contactFilter() ;

constexpr float_t const& __cordl_internal_get_diameter() const;

constexpr float_t& __cordl_internal_get_diameter() ;

constexpr float_t const& __cordl_internal_get_finalRadius() const;

constexpr float_t& __cordl_internal_get_finalRadius() ;

constexpr float_t const& __cordl_internal_get_finalRaycastRadius() const;

constexpr float_t& __cordl_internal_get_finalRaycastRadius() ;

constexpr float_t const& __cordl_internal_get_fromHeight() const;

constexpr float_t& __cordl_internal_get_fromHeight() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr bool const& __cordl_internal_get_heightCheck() const;

constexpr bool& __cordl_internal_get_heightCheck() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_heightMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_heightMask() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hitBuffer() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hitBuffer() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr ::Pathfinding::RayDirection const& __cordl_internal_get_rayDirection() const;

constexpr ::Pathfinding::RayDirection& __cordl_internal_get_rayDirection() ;

constexpr bool const& __cordl_internal_get_thickRaycast() const;

constexpr bool& __cordl_internal_get_thickRaycast() ;

constexpr float_t const& __cordl_internal_get_thickRaycastDiameter() const;

constexpr float_t& __cordl_internal_get_thickRaycastDiameter() ;

constexpr ::Pathfinding::ColliderType const& __cordl_internal_get_type() const;

constexpr ::Pathfinding::ColliderType& __cordl_internal_get_type() ;

constexpr bool const& __cordl_internal_get_unwalkableWhenNoGround() const;

constexpr bool& __cordl_internal_get_unwalkableWhenNoGround() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_up() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_up() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_upheight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_upheight() ;

constexpr bool const& __cordl_internal_get_use2D() const;

constexpr bool& __cordl_internal_get_use2D() ;

constexpr void __cordl_internal_set_collisionCheck(bool  value) ;

constexpr void __cordl_internal_set_collisionOffset(float_t  value) ;

constexpr void __cordl_internal_set_contactFilter(::UnityEngine::ContactFilter2D  value) ;

constexpr void __cordl_internal_set_diameter(float_t  value) ;

constexpr void __cordl_internal_set_finalRadius(float_t  value) ;

constexpr void __cordl_internal_set_finalRaycastRadius(float_t  value) ;

constexpr void __cordl_internal_set_fromHeight(float_t  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_heightCheck(bool  value) ;

constexpr void __cordl_internal_set_heightMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_hitBuffer(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_rayDirection(::Pathfinding::RayDirection  value) ;

constexpr void __cordl_internal_set_thickRaycast(bool  value) ;

constexpr void __cordl_internal_set_thickRaycastDiameter(float_t  value) ;

constexpr void __cordl_internal_set_type(::Pathfinding::ColliderType  value) ;

constexpr void __cordl_internal_set_unwalkableWhenNoGround(bool  value) ;

constexpr void __cordl_internal_set_up(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_upheight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_use2D(bool  value) ;

/// @brief Method .ctor, addr 0x5e6e0a0, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityW<::UnityEngine::Collider2D>> getStaticF_dummyArray() ;

static inline void setStaticF_dummyArray(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphCollision() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphCollision", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphCollision(GraphCollision && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphCollision", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphCollision(GraphCollision const& ) = delete;

/// @brief Field RaycastErrorMargin offset 0xffffffff size 0x4
static constexpr float_t  RaycastErrorMargin{static_cast<float_t>(0.005f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21297};

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::Pathfinding::ColliderType  ___type;

/// @brief Field diameter, offset: 0x14, size: 0x4, def value: None
 float_t  ___diameter;

/// @brief Field height, offset: 0x18, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field collisionOffset, offset: 0x1c, size: 0x4, def value: None
 float_t  ___collisionOffset;

/// @brief Field rayDirection, offset: 0x20, size: 0x4, def value: None
 ::Pathfinding::RayDirection  ___rayDirection;

/// @brief Field mask, offset: 0x24, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// @brief Field heightMask, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___heightMask;

/// @brief Field fromHeight, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fromHeight;

/// @brief Field thickRaycast, offset: 0x30, size: 0x1, def value: None
 bool  ___thickRaycast;

/// @brief Field thickRaycastDiameter, offset: 0x34, size: 0x4, def value: None
 float_t  ___thickRaycastDiameter;

/// @brief Field unwalkableWhenNoGround, offset: 0x38, size: 0x1, def value: None
 bool  ___unwalkableWhenNoGround;

/// @brief Field use2D, offset: 0x39, size: 0x1, def value: None
 bool  ___use2D;

/// @brief Field collisionCheck, offset: 0x3a, size: 0x1, def value: None
 bool  ___collisionCheck;

/// @brief Field heightCheck, offset: 0x3b, size: 0x1, def value: None
 bool  ___heightCheck;

/// @brief Field up, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___up;

/// @brief Field upheight, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___upheight;

/// @brief Field contactFilter, offset: 0x54, size: 0x1c, def value: None
 ::UnityEngine::ContactFilter2D  ___contactFilter;

/// @brief Field finalRadius, offset: 0x70, size: 0x4, def value: None
 float_t  ___finalRadius;

/// @brief Field finalRaycastRadius, offset: 0x74, size: 0x4, def value: None
 float_t  ___finalRaycastRadius;

/// @brief Field hitBuffer, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hitBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphCollision, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___diameter) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___height) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___collisionOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___rayDirection) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___mask) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___heightMask) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___fromHeight) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___thickRaycast) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___thickRaycastDiameter) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___unwalkableWhenNoGround) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___use2D) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___collisionCheck) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___heightCheck) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___up) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___upheight) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___contactFilter) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___finalRadius) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___finalRaycastRadius) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphCollision, ___hitBuffer) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphCollision) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding

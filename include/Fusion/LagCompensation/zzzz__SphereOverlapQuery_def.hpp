#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SphereOverlapQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereOverlapQuery)
namespace Fusion::LagCompensation {
struct AABB;
}
namespace Fusion::LagCompensation {
struct HitboxCollider;
}
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion::LagCompensation {
struct SphereOverlapQueryParams;
}
namespace Fusion {
struct HitOptions;
}
namespace Fusion {
struct LagCompensatedHit;
}
namespace Fusion {
class NetworkRunner;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class SphereOverlapQuery;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::SphereOverlapQuery*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::SphereOverlapQuery*, "Fusion.LagCompensation", "SphereOverlapQuery");
// Dependencies Fusion.LagCompensation.Query, UnityEngine.Collider, UnityEngine.Collider2D, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.SphereOverlapQuery
class CORDL_TYPE SphereOverlapQuery : public ::Fusion::LagCompensation::Query {
public:
// Declarations
/// @brief Field Center, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Radius, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Radius, put=__cordl_internal_set_Radius)) float_t  Radius;

/// @brief Field _box2DOverlapHits, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__box2DOverlapHits, put=__cordl_internal_set__box2DOverlapHits)) ::ArrayW<::UnityW<::UnityEngine::Collider2D>>  _box2DOverlapHits;

/// @brief Field _physXOverlapHits, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__physXOverlapHits, put=__cordl_internal_set__physXOverlapHits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _physXOverlapHits;

/// @brief Method Check, addr 0x601e580, size 0x28, virtual true, abstract: false, final false
inline bool Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

/// @brief Method NarrowPhase, addr 0x601e5a8, size 0x35c, virtual true, abstract: false, final false
inline bool NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

/// @brief Method NarrowPhaseSphere, addr 0x601e904, size 0x310, virtual false, abstract: false, final false
inline bool NarrowPhaseSphere(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, ::UnityEngine::Vector3  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal) ;

static inline ::Fusion::LagCompensation::SphereOverlapQuery* New_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams) ;

static inline ::Fusion::LagCompensation::SphereOverlapQuery* New_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache) ;

/// @brief Method PerformStaticQuery, addr 0x601ec14, size 0x398, virtual true, abstract: false, final false
inline void PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr float_t const& __cordl_internal_get_Radius() const;

constexpr float_t& __cordl_internal_get_Radius() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>> const& __cordl_internal_get__box2DOverlapHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>>& __cordl_internal_get__box2DOverlapHits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__physXOverlapHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__physXOverlapHits() ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Radius(float_t  value) ;

constexpr void __cordl_internal_set__box2DOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value) ;

constexpr void __cordl_internal_set__physXOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

/// @brief Method .ctor, addr 0x601e464, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams) ;

/// @brief Method .ctor, addr 0x601e51c, size 0x64, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereOverlapQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereOverlapQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereOverlapQuery(SphereOverlapQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereOverlapQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereOverlapQuery(SphereOverlapQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19427};

/// @brief Field Center, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Size padding 0x68 - 0x80 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field Radius, offset: 0x6c, size: 0x4, def value: None
 float_t  ___Radius;

/// @brief Field _physXOverlapHits, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____physXOverlapHits;

/// @brief Field _box2DOverlapHits, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider2D>>  ____box2DOverlapHits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQuery, ___Center) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQuery, ___Radius) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQuery, ____physXOverlapHits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::SphereOverlapQuery, ____box2DOverlapHits) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::SphereOverlapQuery) == 0x68, "Size mismatch!");

} // namespace end def Fusion::LagCompensation

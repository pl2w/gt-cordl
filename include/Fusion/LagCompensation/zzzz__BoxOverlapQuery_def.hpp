#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoxOverlapQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_def.hpp"
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BoxOverlapQuery)
namespace Fusion::LagCompensation {
struct AABB;
}
namespace Fusion::LagCompensation {
struct BoxOverlapQueryParams;
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
namespace Fusion {
struct HitOptions;
}
namespace Fusion {
struct LagCompensatedHit;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct LagCompensationUtils_BoxNarrowData;
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
class BoxOverlapQuery;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::BoxOverlapQuery*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::BoxOverlapQuery*, "Fusion.LagCompensation", "BoxOverlapQuery");
// Dependencies Fusion.LagCompensation.LagCompensationUtils::BoxNarrowData, Fusion.LagCompensation.Query, UnityEngine.Collider, UnityEngine.Collider2D, UnityEngine.Quaternion, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.BoxOverlapQuery
class CORDL_TYPE BoxOverlapQuery : public ::Fusion::LagCompensation::Query {
public:
// Declarations
/// @brief Field Center, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_Center, put=__cordl_internal_set_Center)) ::UnityEngine::Vector3  Center;

/// @brief Field Extents, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Extents, put=__cordl_internal_set_Extents)) ::UnityEngine::Vector3  Extents;

/// @brief Field Rotation, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_Rotation, put=__cordl_internal_set_Rotation)) ::UnityEngine::Quaternion  Rotation;

/// @brief Field _box2DOverlapHits, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__box2DOverlapHits, put=__cordl_internal_set__box2DOverlapHits)) ::ArrayW<::UnityW<::UnityEngine::Collider2D>>  _box2DOverlapHits;

/// @brief Field _physXOverlapHits, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__physXOverlapHits, put=__cordl_internal_set__physXOverlapHits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _physXOverlapHits;

/// @brief Field _queryNarrowData, offset 0x98, size 0x12c 
 __declspec(property(get=__cordl_internal_get__queryNarrowData, put=__cordl_internal_set__queryNarrowData)) ::GlobalNamespace::LagCompensationUtils_BoxNarrowData  _queryNarrowData;

/// @brief Method Check, addr 0x601c1fc, size 0xcc, virtual true, abstract: false, final false
inline bool Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

/// @brief Method NarrowPhase, addr 0x601c2c8, size 0x380, virtual true, abstract: false, final false
inline bool NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

/// @brief Method NarrowPhaseBox, addr 0x601c738, size 0x31c, virtual false, abstract: false, final false
inline bool NarrowPhaseBox(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxQueryNarrowData, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, bool  computeDetailedInfo, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal) ;

static inline ::Fusion::LagCompensation::BoxOverlapQuery* New_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams) ;

static inline ::Fusion::LagCompensation::BoxOverlapQuery* New_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache) ;

/// @brief Method PerformStaticQuery, addr 0x601cae0, size 0x40c, virtual true, abstract: false, final false
inline void PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options) ;

/// @brief Method PreComputeNarrowData, addr 0x601c648, size 0xf0, virtual false, abstract: false, final false
inline ::GlobalNamespace::LagCompensationUtils_BoxNarrowData PreComputeNarrowData() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Center() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Extents() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Extents() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_Rotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_Rotation() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>> const& __cordl_internal_get__box2DOverlapHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>>& __cordl_internal_get__box2DOverlapHits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__physXOverlapHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__physXOverlapHits() ;

constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData const& __cordl_internal_get__queryNarrowData() const;

constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData& __cordl_internal_get__queryNarrowData() ;

constexpr void __cordl_internal_set_Center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Extents(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Rotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set__box2DOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value) ;

constexpr void __cordl_internal_set__physXOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__queryNarrowData(::GlobalNamespace::LagCompensationUtils_BoxNarrowData  value) ;

/// @brief Method .ctor, addr 0x601becc, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams) ;

/// @brief Method .ctor, addr 0x601c0f0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxOverlapQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxOverlapQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxOverlapQuery(BoxOverlapQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxOverlapQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxOverlapQuery(BoxOverlapQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19420};

/// @brief Field Center, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Center;

/// @brief Field Extents, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Extents;

/// @brief Field Rotation, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___Rotation;

/// @brief Field _physXOverlapHits, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____physXOverlapHits;

/// @brief Field _box2DOverlapHits, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider2D>>  ____box2DOverlapHits;

/// @brief Field _queryNarrowData, offset: 0x98, size: 0x12c, def value: None
 ::GlobalNamespace::LagCompensationUtils_BoxNarrowData  ____queryNarrowData;

/// @brief Size padding 0x1b0 - 0x1c8 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ___Center) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ___Extents) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ___Rotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ____physXOverlapHits) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ____box2DOverlapHits) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::BoxOverlapQuery, ____queryNarrowData) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::BoxOverlapQuery) == 0x1b0, "Size mismatch!");

} // namespace end def Fusion::LagCompensation

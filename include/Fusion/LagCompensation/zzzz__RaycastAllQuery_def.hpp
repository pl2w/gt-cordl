#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastAllQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__RaycastQuery_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastAllQuery)
namespace Fusion::LagCompensation {
struct HitboxHit;
}
namespace Fusion::LagCompensation {
class IHitboxColliderContainer;
}
namespace Fusion::LagCompensation {
struct RaycastQueryParams;
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
struct RaycastHit2D;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class RaycastAllQuery;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::RaycastAllQuery*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::RaycastAllQuery*, "Fusion.LagCompensation", "RaycastAllQuery");
// Dependencies Fusion.LagCompensation.RaycastQuery, UnityEngine.RaycastHit, UnityEngine.RaycastHit2D
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.RaycastAllQuery
class CORDL_TYPE RaycastAllQuery : public ::Fusion::LagCompensation::RaycastQuery {
public:
// Declarations
/// @brief Field _box2DRaycastHits, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__box2DRaycastHits, put=__cordl_internal_set__box2DRaycastHits)) ::ArrayW<::UnityEngine::RaycastHit2D>  _box2DRaycastHits;

/// @brief Field _physXRaycastHits, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__physXRaycastHits, put=__cordl_internal_set__physXRaycastHits)) ::ArrayW<::UnityEngine::RaycastHit>  _physXRaycastHits;

/// @brief Method NarrowPhase, addr 0x601d114, size 0x37c, virtual true, abstract: false, final false
inline bool NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

static inline ::Fusion::LagCompensation::RaycastAllQuery* New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams) ;

static inline ::Fusion::LagCompensation::RaycastAllQuery* New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams, ::ArrayW<::UnityEngine::RaycastHit>  physXRaycastHitsCache, ::ArrayW<::UnityEngine::RaycastHit2D>  box2DRaycastHitCache) ;

/// @brief Method PerformStaticQuery, addr 0x601d90c, size 0x364, virtual true, abstract: false, final false
inline void PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options) ;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& __cordl_internal_get__box2DRaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& __cordl_internal_get__box2DRaycastHits() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get__physXRaycastHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get__physXRaycastHits() ;

constexpr void __cordl_internal_set__box2DRaycastHits(::ArrayW<::UnityEngine::RaycastHit2D>  value) ;

constexpr void __cordl_internal_set__physXRaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

/// @brief Method .ctor, addr 0x601cf90, size 0xc8, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams) ;

/// @brief Method .ctor, addr 0x601d0a0, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams, ::ArrayW<::UnityEngine::RaycastHit>  physXRaycastHitsCache, ::ArrayW<::UnityEngine::RaycastHit2D>  box2DRaycastHitCache) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastAllQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastAllQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastAllQuery(RaycastAllQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastAllQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastAllQuery(RaycastAllQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19424};

/// @brief Size padding 0xc8 - 0xe0 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

/// @brief Field _physXRaycastHits, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ____physXRaycastHits;

/// @brief Field _box2DRaycastHits, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit2D>  ____box2DRaycastHits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::RaycastAllQuery, ____physXRaycastHits) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastAllQuery, ____box2DRaycastHits) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::RaycastAllQuery) == 0xc8, "Size mismatch!");

} // namespace end def Fusion::LagCompensation

#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RaycastQuery)
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
struct Vector3;
}
// Forward declare root types
namespace Fusion::LagCompensation {
class RaycastQuery;
}
// Write type traits
MARK_REF_T(::Fusion::LagCompensation::RaycastQuery*);
DEFINE_IL2CPP_CLASS(::Fusion::LagCompensation::RaycastQuery*, "Fusion.LagCompensation", "RaycastQuery");
// Dependencies Fusion.LagCompensation.Query, UnityEngine.RaycastHit, UnityEngine.RaycastHit2D, UnityEngine.Vector3
namespace Fusion::LagCompensation {
// Is value type: false
// CS Name: Fusion.LagCompensation.RaycastQuery
class CORDL_TYPE RaycastQuery : public ::Fusion::LagCompensation::Query {
public:
// Declarations
/// @brief Field Direction, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_Direction, put=__cordl_internal_set_Direction)) ::UnityEngine::Vector3  Direction;

/// @brief Field Length, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_Length, put=__cordl_internal_set_Length)) float_t  Length;

/// @brief Field Origin, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_Origin, put=__cordl_internal_set_Origin)) ::UnityEngine::Vector3  Origin;

/// @brief Field _raycastHit, offset 0x7c, size 0x2c 
 __declspec(property(get=__cordl_internal_get__raycastHit, put=__cordl_internal_set__raycastHit)) ::UnityEngine::RaycastHit  _raycastHit;

/// @brief Field _raycastHit2D, offset 0xa8, size 0x24 
 __declspec(property(get=__cordl_internal_get__raycastHit2D, put=__cordl_internal_set__raycastHit2D)) ::UnityEngine::RaycastHit2D  _raycastHit2D;

/// @brief Method Check, addr 0x601dc70, size 0x1c8, virtual true, abstract: false, final false
inline bool Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds) ;

/// @brief Method NarrowPhase, addr 0x601de38, size 0x310, virtual true, abstract: false, final false
inline bool NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits) ;

/// @brief Method NarrowPhaseRay, addr 0x601d490, size 0x47c, virtual false, abstract: false, final false
inline bool NarrowPhaseRay(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance) ;

static inline ::Fusion::LagCompensation::RaycastQuery* New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams) ;

/// @brief Method PerformStaticQuery, addr 0x601e148, size 0x290, virtual true, abstract: false, final false
inline void PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options) ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Direction() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Direction() ;

constexpr float_t const& __cordl_internal_get_Length() const;

constexpr float_t& __cordl_internal_get_Length() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_Origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_Origin() ;

constexpr ::UnityEngine::RaycastHit const& __cordl_internal_get__raycastHit() const;

constexpr ::UnityEngine::RaycastHit& __cordl_internal_get__raycastHit() ;

constexpr ::UnityEngine::RaycastHit2D const& __cordl_internal_get__raycastHit2D() const;

constexpr ::UnityEngine::RaycastHit2D& __cordl_internal_get__raycastHit2D() ;

constexpr void __cordl_internal_set_Direction(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_Length(float_t  value) ;

constexpr void __cordl_internal_set_Origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__raycastHit(::UnityEngine::RaycastHit  value) ;

constexpr void __cordl_internal_set__raycastHit2D(::UnityEngine::RaycastHit2D  value) ;

/// @brief Method .ctor, addr 0x601d058, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RaycastQuery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RaycastQuery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RaycastQuery(RaycastQuery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RaycastQuery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RaycastQuery(RaycastQuery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19425};

/// @brief Field Direction, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Direction;

/// @brief Field Origin, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___Origin;

/// @brief Field Length, offset: 0x78, size: 0x4, def value: None
 float_t  ___Length;

/// @brief Field _raycastHit, offset: 0x7c, size: 0x2c, def value: None
 ::UnityEngine::RaycastHit  ____raycastHit;

/// @brief Field _raycastHit2D, offset: 0xa8, size: 0x24, def value: None
 ::UnityEngine::RaycastHit2D  ____raycastHit2D;

/// @brief Size padding 0xb8 - 0xd0 = 0x18, packed as 0x18
 uint8_t  _cordl_size_padding[0x18];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::LagCompensation::RaycastQuery, ___Direction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQuery, ___Origin) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQuery, ___Length) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQuery, ____raycastHit) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Fusion::LagCompensation::RaycastQuery, ____raycastHit2D) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Fusion::LagCompensation::RaycastQuery) == 0xb8, "Size mismatch!");

} // namespace end def Fusion::LagCompensation

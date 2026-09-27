#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSenseLineOfSight.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_RaycastMode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSenseLineOfSight)
namespace GlobalNamespace {
struct GRSenseLineOfSight_RaycastMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSenseLineOfSight;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSenseLineOfSight*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSenseLineOfSight*, "", "GRSenseLineOfSight");
// Dependencies GRSenseLineOfSight::RaycastMode, System.Object, UnityEngine.LayerMask, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSenseLineOfSight
class CORDL_TYPE GRSenseLineOfSight : public ::System::Object {
public:
// Declarations
using RaycastMode = ::GlobalNamespace::GRSenseLineOfSight_RaycastMode;

/// @brief Field rayCastMode, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayCastMode, put=__cordl_internal_set_rayCastMode)) ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  rayCastMode;

/// @brief Field sightDist, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_sightDist, put=__cordl_internal_set_sightDist)) float_t  sightDist;

/// @brief Field visibilityHits, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_visibilityHits, put=setStaticF_visibilityHits)) ::ArrayW<::UnityEngine::RaycastHit>  visibilityHits;

/// @brief Field visibilityMask, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_visibilityMask, put=__cordl_internal_set_visibilityMask)) ::UnityEngine::LayerMask  visibilityMask;

/// @brief Method HasGeoLineOfSight, addr 0x58b0db4, size 0x1f4, virtual false, abstract: false, final false
static inline bool HasGeoLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist, int32_t  layerMask) ;

/// @brief Method HasLineOfSight, addr 0x58b09ec, size 0xc8, virtual false, abstract: false, final false
inline bool HasLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos) ;

/// @brief Method HasLineOfSight, addr 0x58b0bd8, size 0x1dc, virtual false, abstract: false, final false
static inline bool HasLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist, int32_t  layerMask, ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  rayCastMode) ;

/// @brief Method HasNavmeshLineOfSight, addr 0x58b0fa8, size 0xc0, virtual false, abstract: false, final false
static inline bool HasNavmeshLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist) ;

static inline ::GlobalNamespace::GRSenseLineOfSight* New_ctor() ;

constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode const& __cordl_internal_get_rayCastMode() const;

constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode& __cordl_internal_get_rayCastMode() ;

constexpr float_t const& __cordl_internal_get_sightDist() const;

constexpr float_t& __cordl_internal_get_sightDist() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_visibilityMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_visibilityMask() ;

constexpr void __cordl_internal_set_rayCastMode(::GlobalNamespace::GRSenseLineOfSight_RaycastMode  value) ;

constexpr void __cordl_internal_set_sightDist(float_t  value) ;

constexpr void __cordl_internal_set_visibilityMask(::UnityEngine::LayerMask  value) ;

/// @brief Method .ctor, addr 0x58b1068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::RaycastHit> getStaticF_visibilityHits() ;

static inline void setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSenseLineOfSight() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSenseLineOfSight", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSenseLineOfSight(GRSenseLineOfSight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSenseLineOfSight", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSenseLineOfSight(GRSenseLineOfSight const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2033};

/// @brief Field sightDist, offset: 0x10, size: 0x4, def value: None
 float_t  ___sightDist;

/// @brief Field visibilityMask, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___visibilityMask;

/// @brief Field rayCastMode, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  ___rayCastMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSenseLineOfSight, ___sightDist) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseLineOfSight, ___visibilityMask) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSenseLineOfSight, ___rayCastMode) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSenseLineOfSight) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

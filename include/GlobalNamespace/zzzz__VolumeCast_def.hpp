#pragma once
// IWYU pragma private; include "GlobalNamespace/VolumeCast.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Drawing/zzzz__MonoBehaviourGizmos_def.hpp"
#include "GlobalNamespace/zzzz__UnityLayerMask_def.hpp"
#include "GlobalNamespace/zzzz__VolumeCast_VolumeShape_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VolumeCast)
namespace GlobalNamespace {
struct VolumeCast_VolumeShape;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VolumeCast;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VolumeCast*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VolumeCast*, "", "VolumeCast");
// Dependencies Drawing.MonoBehaviourGizmos, UnityEngine.Collider, UnityEngine.Vector3, UnityLayerMask, VolumeCast::VolumeShape
namespace GlobalNamespace {
// Is value type: false
// CS Name: VolumeCast
class CORDL_TYPE VolumeCast : public ::Drawing::MonoBehaviourGizmos {
public:
// Declarations
using VolumeShape = ::GlobalNamespace::VolumeCast_VolumeShape;

/// @brief Field _boxHits, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__boxHits, put=__cordl_internal_set__boxHits)) int32_t  _boxHits;

/// @brief Field _boxOverlaps, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__boxOverlaps, put=__cordl_internal_set__boxOverlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _boxOverlaps;

/// @brief Field _capHits, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__capHits, put=__cordl_internal_set__capHits)) int32_t  _capHits;

/// @brief Field _capOverlaps, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__capOverlaps, put=__cordl_internal_set__capOverlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _capOverlaps;

/// @brief Field _colliding, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__colliding, put=__cordl_internal_set__colliding)) bool  _colliding;

/// @brief Field _hits, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__hits, put=__cordl_internal_set__hits)) int32_t  _hits;

/// @brief Field _overlaps, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__overlaps, put=__cordl_internal_set__overlaps)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _overlaps;

/// @brief Field _set, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__set, put=__cordl_internal_set__set)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  _set;

/// @brief Field _simulateInEditMode, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get__simulateInEditMode, put=__cordl_internal_set__simulateInEditMode)) bool  _simulateInEditMode;

/// @brief Field center, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field height, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field includeTriggers, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_includeTriggers, put=__cordl_internal_set_includeTriggers)) bool  includeTriggers;

/// @brief Field physicsMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_physicsMask, put=__cordl_internal_set_physicsMask)) ::GlobalNamespace::UnityLayerMask  physicsMask;

/// @brief Field radius, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field shape, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_shape, put=__cordl_internal_set_shape)) ::GlobalNamespace::VolumeCast_VolumeShape  shape;

/// @brief Field size, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector3  size;

/// @brief Method CheckOverlaps, addr 0x5a227f0, size 0x5a8, virtual false, abstract: false, final false
inline bool CheckOverlaps() ;

/// @brief Method GetEndsAndRadius, addr 0x5a22d98, size 0x19c, virtual false, abstract: false, final false
static inline void GetEndsAndRadius(::UnityEngine::Transform*  t, ::UnityEngine::Vector3  center, float_t  height, float_t  radius, ::by_ref<::UnityEngine::Vector3>  a, ::by_ref<::UnityEngine::Vector3>  b, ::by_ref<float_t>  r) ;

static inline ::GlobalNamespace::VolumeCast* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__boxHits() const;

constexpr int32_t& __cordl_internal_get__boxHits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__boxOverlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__boxOverlaps() ;

constexpr int32_t const& __cordl_internal_get__capHits() const;

constexpr int32_t& __cordl_internal_get__capHits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__capOverlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__capOverlaps() ;

constexpr bool const& __cordl_internal_get__colliding() const;

constexpr bool& __cordl_internal_get__colliding() ;

constexpr int32_t const& __cordl_internal_get__hits() const;

constexpr int32_t& __cordl_internal_get__hits() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__overlaps() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__overlaps() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get__set() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get__set() ;

constexpr bool const& __cordl_internal_get__simulateInEditMode() const;

constexpr bool& __cordl_internal_get__simulateInEditMode() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr bool const& __cordl_internal_get_includeTriggers() const;

constexpr bool& __cordl_internal_get_includeTriggers() ;

constexpr ::GlobalNamespace::UnityLayerMask const& __cordl_internal_get_physicsMask() const;

constexpr ::GlobalNamespace::UnityLayerMask& __cordl_internal_get_physicsMask() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::GlobalNamespace::VolumeCast_VolumeShape const& __cordl_internal_get_shape() const;

constexpr ::GlobalNamespace::VolumeCast_VolumeShape& __cordl_internal_get_shape() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set__boxHits(int32_t  value) ;

constexpr void __cordl_internal_set__boxOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__capHits(int32_t  value) ;

constexpr void __cordl_internal_set__capOverlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__colliding(bool  value) ;

constexpr void __cordl_internal_set__hits(int32_t  value) ;

constexpr void __cordl_internal_set__overlaps(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__set(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set__simulateInEditMode(bool  value) ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_includeTriggers(bool  value) ;

constexpr void __cordl_internal_set_physicsMask(::GlobalNamespace::UnityLayerMask  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_shape(::GlobalNamespace::VolumeCast_VolumeShape  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5a22f34, size 0x144, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VolumeCast() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VolumeCast", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VolumeCast(VolumeCast && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VolumeCast", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VolumeCast(VolumeCast const& ) = delete;

/// @brief Field MAX_HITS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_HITS{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2849};

/// @brief Field shape, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::VolumeCast_VolumeShape  ___shape;

/// [Space]
/// @brief Field center, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// @brief Field size, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___size;

/// @brief Field height, offset: 0x3c, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field radius, offset: 0x40, size: 0x4, def value: None
 float_t  ___radius;

/// [Space]
/// @brief Field physicsMask, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::UnityLayerMask  ___physicsMask;

/// @brief Field includeTriggers, offset: 0x48, size: 0x1, def value: None
 bool  ___includeTriggers;

/// [Space]
/// [SerializeField]
/// @brief Field _simulateInEditMode, offset: 0x49, size: 0x1, def value: None
 bool  ____simulateInEditMode;

/// [DebugReadout]
/// @brief Field _capHits, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____capHits;

/// [DebugReadout]
/// @brief Field _capOverlaps, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____capOverlaps;

/// [DebugReadout]
/// @brief Field _boxHits, offset: 0x58, size: 0x4, def value: None
 int32_t  ____boxHits;

/// [DebugReadout]
/// @brief Field _boxOverlaps, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____boxOverlaps;

/// [DebugReadout]
/// @brief Field _hits, offset: 0x68, size: 0x4, def value: None
 int32_t  ____hits;

/// [DebugReadout]
/// @brief Field _overlaps, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____overlaps;

/// [DebugReadout]
/// @brief Field _colliding, offset: 0x78, size: 0x1, def value: None
 bool  ____colliding;

/// @brief Field _set, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Collider>>*  ____set;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VolumeCast, ___shape) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___center) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___height) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___radius) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___physicsMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ___includeTriggers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____simulateInEditMode) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____capHits) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____capOverlaps) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____boxHits) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____boxOverlaps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____hits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____overlaps) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____colliding) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VolumeCast, ____set) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VolumeCast) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedSizeTrail.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedSizeTrail)
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedSizeTrail;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FixedSizeTrail*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedSizeTrail*, "", "FixedSizeTrail");
// [RequireComponent(typeof(UnityEngine.LineRenderer))]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedSizeTrail
class CORDL_TYPE FixedSizeTrail : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _length, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__length, put=__cordl_internal_set__length)) float_t  _length;

/// @brief Field _lineRenderer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lineRenderer, put=__cordl_internal_set__lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  _lineRenderer;

/// @brief Field _points, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::ArrayW<::UnityEngine::Vector3>  _points;

/// @brief Field _segments, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__segments, put=__cordl_internal_set__segments)) int32_t  _segments;

/// @brief Field _transform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform, put=__cordl_internal_set__transform)) ::UnityW<::UnityEngine::Transform>  _transform;

/// @brief Field applyPhysics, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyPhysics, put=__cordl_internal_set_applyPhysics)) bool  applyPhysics;

/// @brief Field gravity, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_gravity, put=__cordl_internal_set_gravity)) ::UnityEngine::Vector3  gravity;

/// @brief Field gravityCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gravityCurve, put=__cordl_internal_set_gravityCurve)) ::UnityEngine::AnimationCurve*  gravityCurve;

 __declspec(property(get=get_length, put=set_length)) float_t  length;

/// @brief Field manualUpdate, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_manualUpdate, put=__cordl_internal_set_manualUpdate)) bool  manualUpdate;

 __declspec(property(get=get_points)) ::ArrayW<::UnityEngine::Vector3>  points;

 __declspec(property(get=get_renderer)) ::UnityW<::UnityEngine::LineRenderer>  renderer;

/// @brief Method Awake, addr 0x58050ec, size 0x4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalcLength, addr 0x5805760, size 0xfc, virtual false, abstract: false, final false
static inline float_t CalcLength(/* [IsReadOnly] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions) ;

/// @brief Method FixedUpdate, addr 0x5805658, size 0x108, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::FixedSizeTrail* New_ctor() ;

/// @brief Method OnEnable, addr 0x58050f0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Reset, addr 0x5804e98, size 0x4, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Setup, addr 0x5804e9c, size 0x250, virtual false, abstract: false, final false
inline void Setup() ;

/// @brief Method Update, addr 0x58050f4, size 0x28, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method Update, addr 0x580511c, size 0x53c, virtual false, abstract: false, final false
inline void Update(float_t  dt) ;

constexpr float_t const& __cordl_internal_get__length() const;

constexpr float_t& __cordl_internal_get__length() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get__lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get__lineRenderer() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__points() ;

constexpr int32_t const& __cordl_internal_get__segments() const;

constexpr int32_t& __cordl_internal_get__segments() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__transform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__transform() ;

constexpr bool const& __cordl_internal_get_applyPhysics() const;

constexpr bool& __cordl_internal_get_applyPhysics() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_gravity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_gravity() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_gravityCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_gravityCurve() ;

constexpr bool const& __cordl_internal_get_manualUpdate() const;

constexpr bool& __cordl_internal_get_manualUpdate() ;

constexpr void __cordl_internal_set__length(float_t  value) ;

constexpr void __cordl_internal_set__lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set__points(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__segments(int32_t  value) ;

constexpr void __cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_applyPhysics(bool  value) ;

constexpr void __cordl_internal_set_gravity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_gravityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_manualUpdate(bool  value) ;

/// @brief Method .ctor, addr 0x580585c, size 0xbc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_length, addr 0x5804de0, size 0x8, virtual false, abstract: false, final false
inline float_t get_length() ;

/// @brief Method get_points, addr 0x5804e90, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_points() ;

/// @brief Method get_renderer, addr 0x5804dd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::LineRenderer> get_renderer() ;

/// @brief Method set_length, addr 0x5804de8, size 0xa8, virtual false, abstract: false, final false
inline void set_length(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedSizeTrail() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeTrail", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedSizeTrail(FixedSizeTrail && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedSizeTrail", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedSizeTrail(FixedSizeTrail const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1692};

/// [SerializeField]
/// @brief Field _transform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____transform;

/// [SerializeField]
/// @brief Field _lineRenderer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ____lineRenderer;

/// [SerializeField]
/// [Range(1, 128)]
/// @brief Field _segments, offset: 0x30, size: 0x4, def value: None
 int32_t  ____segments;

/// [SerializeField]
/// @brief Field _length, offset: 0x34, size: 0x4, def value: None
 float_t  ____length;

/// @brief Field manualUpdate, offset: 0x38, size: 0x1, def value: None
 bool  ___manualUpdate;

/// [Space]
/// @brief Field applyPhysics, offset: 0x39, size: 0x1, def value: None
 bool  ___applyPhysics;

/// @brief Field gravity, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___gravity;

/// @brief Field gravityCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___gravityCurve;

/// [Space]
/// @brief Field _points, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____points;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ____transform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ____lineRenderer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ____segments) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ____length) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ___manualUpdate) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ___applyPhysics) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ___gravity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ___gravityCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedSizeTrail, ____points) == 0x50, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedSizeTrail) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

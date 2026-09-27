#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/PlaneSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_NormalFacing_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PlaneSurface)
namespace GlobalNamespace {
struct PlaneSurface_NormalFacing;
}
namespace GlobalNamespace {
struct PlaneSurface___c__DisplayClass16_0;
}
namespace Oculus::Interaction::Surfaces {
class IBounds;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class PlaneSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::PlaneSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::PlaneSurface*, "Oculus.Interaction.Surfaces", "PlaneSurface");
// Dependencies Oculus.Interaction.Surfaces.PlaneSurface::NormalFacing, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.PlaneSurface
class CORDL_TYPE PlaneSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NormalFacing = ::GlobalNamespace::PlaneSurface_NormalFacing;

using __c__DisplayClass16_0 = ::GlobalNamespace::PlaneSurface___c__DisplayClass16_0;

 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_DoubleSided, put=set_DoubleSided)) bool  DoubleSided;

 __declspec(property(get=get_Facing, put=set_Facing)) ::GlobalNamespace::PlaneSurface_NormalFacing  Facing;

 __declspec(property(get=get_Normal)) ::UnityEngine::Vector3  Normal;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _back, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__back, put=setStaticF__back)) ::UnityEngine::Vector3  _back;

/// @brief Field _doubleSided, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get__doubleSided, put=__cordl_internal_set__doubleSided)) bool  _doubleSided;

/// @brief Field _facing, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__facing, put=__cordl_internal_set__facing)) ::GlobalNamespace::PlaneSurface_NormalFacing  _facing;

/// @brief Field _forward, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF__forward, put=setStaticF__forward)) ::UnityEngine::Vector3  _forward;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBounds"
constexpr operator  ::Oculus::Interaction::Surfaces::IBounds*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method ClosestSurfacePoint, addr 0xa4b37dc, size 0x16c, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method GetPlane, addr 0xa4b8558, size 0x120, virtual false, abstract: false, final false
inline ::UnityEngine::Plane GetPlane() ;

/// @brief Method GetPlaneParameters, addr 0xa4b828c, size 0x13c, virtual false, abstract: false, final false
inline void GetPlaneParameters(::by_ref<::UnityEngine::Vector3>  planeNormal, ::by_ref<float_t>  planeDistance) ;

/// @brief Method InjectAllPlaneSurface, addr 0xa4b8678, size 0xc, virtual false, abstract: false, final false
inline void InjectAllPlaneSurface(::GlobalNamespace::PlaneSurface_NormalFacing  facing, bool  doubleSided) ;

/// @brief Method InjectDoubleSided, addr 0xa4b868c, size 0x8, virtual false, abstract: false, final false
inline void InjectDoubleSided(bool  doubleSided) ;

/// @brief Method InjectNormalFacing, addr 0xa4b8684, size 0x8, virtual false, abstract: false, final false
inline void InjectNormalFacing(::GlobalNamespace::PlaneSurface_NormalFacing  facing) ;

static inline ::Oculus::Interaction::Surfaces::PlaneSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b8764, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b8760, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b3414, size 0x204, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// [CompilerGenerated]
/// @brief Method <Raycast>g__Raycast|16_0, addr 0xa4b8488, size 0xd0, virtual false, abstract: false, final false
static inline bool _Raycast_g__Raycast_16_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<float_t>  enter, ::by_ref<::GlobalNamespace::PlaneSurface___c__DisplayClass16_0>  _cordl_fixed_empty_name_whitespace) ;

constexpr bool const& __cordl_internal_get__doubleSided() const;

constexpr bool& __cordl_internal_get__doubleSided() ;

constexpr ::GlobalNamespace::PlaneSurface_NormalFacing const& __cordl_internal_get__facing() const;

constexpr ::GlobalNamespace::PlaneSurface_NormalFacing& __cordl_internal_get__facing() ;

constexpr void __cordl_internal_set__doubleSided(bool  value) ;

constexpr void __cordl_internal_set__facing(::GlobalNamespace::PlaneSurface_NormalFacing  value) ;

/// @brief Method .ctor, addr 0xa4b8694, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Vector3 getStaticF__back() ;

static inline ::UnityEngine::Vector3 getStaticF__forward() ;

/// @brief Method get_Bounds, addr 0xa4b83c8, size 0xc0, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_DoubleSided, addr 0xa4b8230, size 0x8, virtual false, abstract: false, final false
inline bool get_DoubleSided() ;

/// @brief Method get_Facing, addr 0xa4b8220, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::PlaneSurface_NormalFacing get_Facing() ;

/// @brief Method get_Normal, addr 0xa4b8240, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_Normal() ;

/// @brief Method get_Transform, addr 0xa4b3380, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IBounds"
constexpr ::Oculus::Interaction::Surfaces::IBounds* i___Oculus__Interaction__Surfaces__IBounds() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

static inline void setStaticF__back(::UnityEngine::Vector3  value) ;

static inline void setStaticF__forward(::UnityEngine::Vector3  value) ;

/// @brief Method set_DoubleSided, addr 0xa4b8238, size 0x8, virtual false, abstract: false, final false
inline void set_DoubleSided(bool  value) ;

/// @brief Method set_Facing, addr 0xa4b8228, size 0x8, virtual false, abstract: false, final false
inline void set_Facing(::GlobalNamespace::PlaneSurface_NormalFacing  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlaneSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlaneSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlaneSurface(PlaneSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlaneSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlaneSurface(PlaneSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16236};

/// [Tooltip("The normal facing of the surface. Hits will be registered either on the front or back of the plane depending on this value.")]
/// [SerializeField]
/// @brief Field _facing, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::PlaneSurface_NormalFacing  ____facing;

/// [SerializeField]
/// [Tooltip("Raycasts hit either side of plane, but hit normal will still respect plane facing.")]
/// @brief Field _doubleSided, offset: 0x24, size: 0x1, def value: None
 bool  ____doubleSided;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::PlaneSurface, ____facing) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::PlaneSurface, ____doubleSided) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::PlaneSurface) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

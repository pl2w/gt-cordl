#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CylinderSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSurface_NormalFacing_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CylinderSurface)
namespace GlobalNamespace {
struct CylinderSurface_NormalFacing;
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
namespace Oculus::Interaction {
class Cylinder;
}
namespace UnityEngine {
struct Bounds;
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
class CylinderSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::CylinderSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::CylinderSurface*, "Oculus.Interaction.Surfaces", "CylinderSurface");
// Dependencies Oculus.Interaction.Surfaces.CylinderSurface::NormalFacing, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.CylinderSurface
class CORDL_TYPE CylinderSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using NormalFacing = ::GlobalNamespace::CylinderSurface_NormalFacing;

 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_Cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  Cylinder;

 __declspec(property(get=get_Facing, put=set_Facing)) ::GlobalNamespace::CylinderSurface_NormalFacing  Facing;

 __declspec(property(get=get_Height, put=set_Height)) float_t  Height;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Radius)) float_t  Radius;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _cylinder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__cylinder, put=__cordl_internal_set__cylinder)) ::UnityW<::Oculus::Interaction::Cylinder>  _cylinder;

/// @brief Field _facing, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__facing, put=__cordl_internal_set__facing)) ::GlobalNamespace::CylinderSurface_NormalFacing  _facing;

/// @brief Field _height, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__height, put=__cordl_internal_set__height)) float_t  _height;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBounds"
constexpr operator  ::Oculus::Interaction::Surfaces::IBounds*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method CancelY, addr 0xa4b6d30, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 CancelY(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vector) ;

/// @brief Method ClosestSurfacePoint, addr 0xa4b5e60, size 0x4b0, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method InjectAllCylinderSurface, addr 0xa4b6d40, size 0x34, virtual false, abstract: false, final false
inline void InjectAllCylinderSurface(::GlobalNamespace::CylinderSurface_NormalFacing  facing, ::Oculus::Interaction::Cylinder*  cylinder, float_t  height) ;

/// @brief Method InjectCylinder, addr 0xa4b6d7c, size 0x8, virtual false, abstract: false, final false
inline void InjectCylinder(::Oculus::Interaction::Cylinder*  cylinder) ;

/// @brief Method InjectHeight, addr 0xa4b6d84, size 0x8, virtual false, abstract: false, final false
inline void InjectHeight(float_t  height) ;

/// @brief Method InjectNormalFacing, addr 0xa4b6d74, size 0x8, virtual false, abstract: false, final false
inline void InjectNormalFacing(::GlobalNamespace::CylinderSurface_NormalFacing  facing) ;

static inline ::Oculus::Interaction::Surfaces::CylinderSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b6da4, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b6da0, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b634c, size 0x9e4, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa4b5e34, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TransformScale, addr 0xa4b6310, size 0x3c, virtual false, abstract: false, final false
inline float_t TransformScale(float_t  val) ;

constexpr ::UnityW<::Oculus::Interaction::Cylinder> const& __cordl_internal_get__cylinder() const;

constexpr ::UnityW<::Oculus::Interaction::Cylinder>& __cordl_internal_get__cylinder() ;

constexpr ::GlobalNamespace::CylinderSurface_NormalFacing const& __cordl_internal_get__facing() const;

constexpr ::GlobalNamespace::CylinderSurface_NormalFacing& __cordl_internal_get__facing() ;

constexpr float_t const& __cordl_internal_get__height() const;

constexpr float_t& __cordl_internal_get__height() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__cylinder(::UnityW<::Oculus::Interaction::Cylinder>  value) ;

constexpr void __cordl_internal_set__facing(::GlobalNamespace::CylinderSurface_NormalFacing  value) ;

constexpr void __cordl_internal_set__height(float_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa4b6d8c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0xa4b5d24, size 0xf0, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_Cylinder, addr 0xa4b5d1c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::Cylinder> get_Cylinder() ;

/// @brief Method get_Facing, addr 0xa4b5e14, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CylinderSurface_NormalFacing get_Facing() ;

/// @brief Method get_Height, addr 0xa4b5e24, size 0x8, virtual false, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_IsValid, addr 0xa4b5c7c, size 0x88, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Radius, addr 0xa4b5d04, size 0x18, virtual false, abstract: false, final false
inline float_t get_Radius() ;

/// @brief Method get_Transform, addr 0xa4b39b8, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IBounds"
constexpr ::Oculus::Interaction::Surfaces::IBounds* i___Oculus__Interaction__Surfaces__IBounds() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Method set_Facing, addr 0xa4b5e1c, size 0x8, virtual false, abstract: false, final false
inline void set_Facing(::GlobalNamespace::CylinderSurface_NormalFacing  value) ;

/// @brief Method set_Height, addr 0xa4b5e2c, size 0x8, virtual false, abstract: false, final false
inline void set_Height(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CylinderSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CylinderSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CylinderSurface(CylinderSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CylinderSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CylinderSurface(CylinderSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16224};

/// [Tooltip("The cylinder that will drive this surface.")]
/// [SerializeField]
/// @brief Field _cylinder, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Cylinder>  ____cylinder;

/// [Tooltip("The normal facing of the surface. Hits will be registered either on the outer or inner face of the cylinder depending on this value.")]
/// [SerializeField]
/// @brief Field _facing, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CylinderSurface_NormalFacing  ____facing;

/// [Tooltip("The height of the cylinder. If zero or negative, height will be infinite.")]
/// [SerializeField]
/// @brief Field _height, offset: 0x2c, size: 0x4, def value: None
 float_t  ____height;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSurface, ____cylinder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSurface, ____facing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSurface, ____height) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CylinderSurface, ____started) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::CylinderSurface) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

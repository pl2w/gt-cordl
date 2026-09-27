#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CircleSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CircleSurface)
namespace Oculus::Interaction::Surfaces {
class ISurfacePatch;
}
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
class PlaneSurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
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
class CircleSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::CircleSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::CircleSurface*, "Oculus.Interaction.Surfaces", "CircleSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.CircleSurface
class CORDL_TYPE CircleSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_BackingSurface)) ::Oculus::Interaction::Surfaces::ISurface*  BackingSurface;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _planeSurface, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__planeSurface, put=__cordl_internal_set__planeSurface)) ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  _planeSurface;

/// @brief Field _radius, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__radius, put=__cordl_internal_set__radius)) float_t  _radius;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept;

/// @brief Method ClosestSurfacePoint, addr 0xa4b3618, size 0x1c4, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// [Obsolete("Use InjectAllCircleSurface instead.")]
/// @brief Method InjectAllCircleProximityField, addr 0xa4b3948, size 0x8, virtual false, abstract: false, final false
inline void InjectAllCircleProximityField(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface) ;

/// @brief Method InjectAllCircleSurface, addr 0xa4b3950, size 0x8, virtual false, abstract: false, final false
inline void InjectAllCircleSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface) ;

/// @brief Method InjectOptionalRadius, addr 0xa4b3960, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalRadius(float_t  radius) ;

/// @brief Method InjectPlaneSurface, addr 0xa4b3958, size 0x8, virtual false, abstract: false, final false
inline void InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface) ;

static inline ::Oculus::Interaction::Surfaces::CircleSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b3980, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b397c, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b3394, size 0x80, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa4b3390, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface> const& __cordl_internal_get__planeSurface() const;

constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>& __cordl_internal_get__planeSurface() ;

constexpr float_t const& __cordl_internal_get__radius() const;

constexpr float_t& __cordl_internal_get__radius() ;

constexpr void __cordl_internal_set__planeSurface(::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  value) ;

constexpr void __cordl_internal_set__radius(float_t  value) ;

/// @brief Method .ctor, addr 0xa4b3968, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_BackingSurface, addr 0xa4b3388, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Surfaces::ISurface* get_BackingSurface() ;

/// @brief Method get_Transform, addr 0xa4b3368, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CircleSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CircleSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CircleSurface(CircleSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CircleSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CircleSurface(CircleSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16216};

/// [Tooltip("The circle will lay upon this plane, with the circle\'s center at the plane surface\'s origin.")]
/// [SerializeField]
/// @brief Field _planeSurface, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  ____planeSurface;

/// [Tooltip("The radius of the circle.")]
/// [SerializeField]
/// @brief Field _radius, offset: 0x28, size: 0x4, def value: None
 float_t  ____radius;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::CircleSurface, ____planeSurface) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::CircleSurface, ____radius) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::CircleSurface) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

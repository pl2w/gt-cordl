#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/ColliderSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ColliderSurface)
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
class Collider;
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
class ColliderSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::ColliderSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::ColliderSurface*, "Oculus.Interaction.Surfaces", "ColliderSurface");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.ColliderSurface
class CORDL_TYPE ColliderSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Bounds)) ::UnityEngine::Bounds  Bounds;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _collider, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__collider, put=__cordl_internal_set__collider)) ::UnityW<::UnityEngine::Collider>  _collider;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBounds"
constexpr operator  ::Oculus::Interaction::Surfaces::IBounds*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method ClosestSurfacePoint, addr 0xa4b598c, size 0x260, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method InjectAllColliderSurface, addr 0xa4b5bec, size 0x8, virtual false, abstract: false, final false
inline void InjectAllColliderSurface(::UnityEngine::Collider*  collider) ;

/// @brief Method InjectCollider, addr 0xa4b5bf4, size 0x8, virtual false, abstract: false, final false
inline void InjectCollider(::UnityEngine::Collider*  collider) ;

static inline ::Oculus::Interaction::Surfaces::ColliderSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b5c08, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b5c04, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Raycast, addr 0xa4b58c0, size 0xcc, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Start, addr 0xa4b5874, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get__collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get__collider() ;

constexpr void __cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value) ;

/// @brief Method .ctor, addr 0xa4b5bfc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Bounds, addr 0xa4b5880, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Bounds get_Bounds() ;

/// @brief Method get_Transform, addr 0xa4b5878, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::IBounds"
constexpr ::Oculus::Interaction::Surfaces::IBounds* i___Oculus__Interaction__Surfaces__IBounds() noexcept;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColliderSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColliderSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ColliderSurface(ColliderSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColliderSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColliderSurface(ColliderSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16221};

/// [Tooltip("The Surface will be represented by this collider.")]
/// [SerializeField]
/// @brief Field _collider, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ____collider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::ColliderSurface, ____collider) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::ColliderSurface) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

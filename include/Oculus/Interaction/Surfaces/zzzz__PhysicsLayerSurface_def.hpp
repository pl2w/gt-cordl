#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/PhysicsLayerSurface.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsLayerSurface)
namespace Oculus::Interaction::Surfaces {
class ISurface;
}
namespace Oculus::Interaction::Surfaces {
struct SurfaceHit;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction::Surfaces {
class PhysicsLayerSurface;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Surfaces::PhysicsLayerSurface*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Surfaces::PhysicsLayerSurface*, "Oculus.Interaction.Surfaces", "PhysicsLayerSurface");
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Surfaces {
// Is value type: false
// CS Name: Oculus.Interaction.Surfaces.PhysicsLayerSurface
class CORDL_TYPE PhysicsLayerSurface : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CloseCollidersCacheSize, put=set_CloseCollidersCacheSize)) int32_t  CloseCollidersCacheSize;

 __declspec(property(get=get_LayerMask, put=set_LayerMask)) ::UnityEngine::LayerMask  LayerMask;

 __declspec(property(get=get_Transform)) ::UnityW<::UnityEngine::Transform>  Transform;

/// @brief Field _cachedCloseColliders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedCloseColliders, put=__cordl_internal_set__cachedCloseColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  _cachedCloseColliders;

/// @brief Field _closeCollidersCacheSize, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__closeCollidersCacheSize, put=__cordl_internal_set__closeCollidersCacheSize)) int32_t  _closeCollidersCacheSize;

/// @brief Field _layerMask, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__layerMask, put=__cordl_internal_set__layerMask)) ::UnityEngine::LayerMask  _layerMask;

/// @brief Field _sphereCollider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__sphereCollider, put=__cordl_internal_set__sphereCollider)) ::UnityW<::UnityEngine::SphereCollider>  _sphereCollider;

/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr operator  ::Oculus::Interaction::Surfaces::ISurface*() noexcept;

/// @brief Method Awake, addr 0xa4b7b0c, size 0x90, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClosestSurfacePoint, addr 0xa4b7c2c, size 0x46c, virtual false, abstract: false, final false
inline bool ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance) ;

static inline ::Oculus::Interaction::Surfaces::PhysicsLayerSurface* New_ctor() ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint, addr 0xa4b821c, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method Oculus.Interaction.Surfaces.ISurface.Raycast, addr 0xa4b8218, size 0x4, virtual true, abstract: false, final true
inline bool Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance) ;

/// @brief Method OnDestroy, addr 0xa4b7b9c, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method Raycast, addr 0xa4b8098, size 0x154, virtual false, abstract: false, final false
inline bool Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  surfaceHit, float_t  maxDistance) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get__cachedCloseColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get__cachedCloseColliders() ;

constexpr int32_t const& __cordl_internal_get__closeCollidersCacheSize() const;

constexpr int32_t& __cordl_internal_get__closeCollidersCacheSize() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get__layerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get__layerMask() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get__sphereCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get__sphereCollider() ;

constexpr void __cordl_internal_set__cachedCloseColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set__closeCollidersCacheSize(int32_t  value) ;

constexpr void __cordl_internal_set__layerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set__sphereCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

/// @brief Method .ctor, addr 0xa4b81ec, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CloseCollidersCacheSize, addr 0xa4b7af4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CloseCollidersCacheSize() ;

/// @brief Method get_LayerMask, addr 0xa4b7ae4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_LayerMask() ;

/// @brief Method get_Transform, addr 0xa4b7b04, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> get_Transform() ;

/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* i___Oculus__Interaction__Surfaces__ISurface() noexcept;

/// @brief Method set_CloseCollidersCacheSize, addr 0xa4b7afc, size 0x8, virtual false, abstract: false, final false
inline void set_CloseCollidersCacheSize(int32_t  value) ;

/// @brief Method set_LayerMask, addr 0xa4b7aec, size 0x8, virtual false, abstract: false, final false
inline void set_LayerMask(::UnityEngine::LayerMask  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PhysicsLayerSurface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PhysicsLayerSurface", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PhysicsLayerSurface(PhysicsLayerSurface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PhysicsLayerSurface", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PhysicsLayerSurface(PhysicsLayerSurface const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16233};

/// [SerializeField]
/// [Tooltip("Collision layers to detect hits against. -1 includes all layers.")]
/// @brief Field _layerMask, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ____layerMask;

/// [SerializeField]
/// [Optional]
/// [Tooltip("When using ClosestSurfacePoint, the maximum number of Colliders to check")]
/// @brief Field _closeCollidersCacheSize, offset: 0x24, size: 0x4, def value: None
 int32_t  ____closeCollidersCacheSize;

/// @brief Field _cachedCloseColliders, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ____cachedCloseColliders;

/// @brief Field _sphereCollider, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ____sphereCollider;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Surfaces::PhysicsLayerSurface, ____layerMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::PhysicsLayerSurface, ____closeCollidersCacheSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::PhysicsLayerSurface, ____cachedCloseColliders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Surfaces::PhysicsLayerSurface, ____sphereCollider) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Surfaces::PhysicsLayerSurface) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Surfaces

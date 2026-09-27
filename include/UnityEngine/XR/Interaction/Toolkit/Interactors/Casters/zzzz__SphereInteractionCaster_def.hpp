#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/SphereInteractionCaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__InteractionCasterBase_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__PhysicsScene_def.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SphereInteractionCaster)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
struct QueryTriggerInteraction;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
class SphereInteractionCaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster*, "UnityEngine.XR.Interaction.Toolkit.Interactors.Casters", "SphereInteractionCaster");
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/Interactors/Sphere Interaction Caster", 22)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.SphereInteractionCaster.html")]
// Dependencies UnityEngine.Collider, UnityEngine.LayerMask, UnityEngine.PhysicsScene, UnityEngine.QueryTriggerInteraction, UnityEngine.RaycastHit, UnityEngine.Vector3, UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.InteractionCasterBase
namespace UnityEngine::XR::Interaction::Toolkit::Interactors::Casters {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.SphereInteractionCaster
class CORDL_TYPE SphereInteractionCaster : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::InteractionCasterBase {
public:
// Declarations
 __declspec(property(get=get_castRadius, put=set_castRadius)) float_t  castRadius;

/// @brief Field m_CastRadius, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CastRadius, put=__cordl_internal_set_m_CastRadius)) float_t  m_CastRadius;

/// @brief Field m_FirstFrame, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FirstFrame, put=__cordl_internal_set_m_FirstFrame)) bool  m_FirstFrame;

/// @brief Field m_LastSphereCastOrigin, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LastSphereCastOrigin, put=__cordl_internal_set_m_LastSphereCastOrigin)) ::UnityEngine::Vector3  m_LastSphereCastOrigin;

/// @brief Field m_LocalPhysicsScene, offset 0x94, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalPhysicsScene, put=__cordl_internal_set_m_LocalPhysicsScene)) ::UnityEngine::PhysicsScene  m_LocalPhysicsScene;

/// @brief Field m_OverlapSphereColliderHits, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverlapSphereColliderHits, put=__cordl_internal_set_m_OverlapSphereColliderHits)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  m_OverlapSphereColliderHits;

/// @brief Field m_OverlapSphereHits, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OverlapSphereHits, put=__cordl_internal_set_m_OverlapSphereHits)) ::ArrayW<::UnityEngine::RaycastHit>  m_OverlapSphereHits;

/// @brief Field m_PhysicsLayerMask, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsLayerMask, put=__cordl_internal_set_m_PhysicsLayerMask)) ::UnityEngine::LayerMask  m_PhysicsLayerMask;

/// @brief Field m_PhysicsTriggerInteraction, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PhysicsTriggerInteraction, put=__cordl_internal_set_m_PhysicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  m_PhysicsTriggerInteraction;

 __declspec(property(get=get_physicsLayerMask, put=set_physicsLayerMask)) ::UnityEngine::LayerMask  physicsLayerMask;

 __declspec(property(get=get_physicsTriggerInteraction, put=set_physicsTriggerInteraction)) ::UnityEngine::QueryTriggerInteraction  physicsTriggerInteraction;

/// @brief Method InitializeCaster, addr 0xb490d28, size 0x4c, virtual true, abstract: false, final false
inline bool InitializeCaster() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster* New_ctor() ;

/// @brief Method OnDisable, addr 0xb4909b4, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb490958, size 0x5c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TryGetColliderTargets, addr 0xb4909b8, size 0x370, virtual true, abstract: false, final false
inline bool TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  targets) ;

constexpr float_t const& __cordl_internal_get_m_CastRadius() const;

constexpr float_t& __cordl_internal_get_m_CastRadius() ;

constexpr bool const& __cordl_internal_get_m_FirstFrame() const;

constexpr bool& __cordl_internal_get_m_FirstFrame() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LastSphereCastOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LastSphereCastOrigin() ;

constexpr ::UnityEngine::PhysicsScene const& __cordl_internal_get_m_LocalPhysicsScene() const;

constexpr ::UnityEngine::PhysicsScene& __cordl_internal_get_m_LocalPhysicsScene() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_m_OverlapSphereColliderHits() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_m_OverlapSphereColliderHits() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_m_OverlapSphereHits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_m_OverlapSphereHits() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_PhysicsLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_PhysicsLayerMask() ;

constexpr ::UnityEngine::QueryTriggerInteraction const& __cordl_internal_get_m_PhysicsTriggerInteraction() const;

constexpr ::UnityEngine::QueryTriggerInteraction& __cordl_internal_get_m_PhysicsTriggerInteraction() ;

constexpr void __cordl_internal_set_m_CastRadius(float_t  value) ;

constexpr void __cordl_internal_set_m_FirstFrame(bool  value) ;

constexpr void __cordl_internal_set_m_LastSphereCastOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LocalPhysicsScene(::UnityEngine::PhysicsScene  value) ;

constexpr void __cordl_internal_set_m_OverlapSphereColliderHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_m_OverlapSphereHits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_m_PhysicsLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_m_PhysicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

/// @brief Method .ctor, addr 0xb490d74, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_castRadius, addr 0xb490948, size 0x8, virtual false, abstract: false, final false
inline float_t get_castRadius() ;

/// @brief Method get_physicsLayerMask, addr 0xb490928, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_physicsLayerMask() ;

/// @brief Method get_physicsTriggerInteraction, addr 0xb490938, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::QueryTriggerInteraction get_physicsTriggerInteraction() ;

/// @brief Method set_castRadius, addr 0xb490950, size 0x8, virtual false, abstract: false, final false
inline void set_castRadius(float_t  value) ;

/// @brief Method set_physicsLayerMask, addr 0xb490930, size 0x8, virtual false, abstract: false, final false
inline void set_physicsLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_physicsTriggerInteraction, addr 0xb490940, size 0x8, virtual false, abstract: false, final false
inline void set_physicsTriggerInteraction(::UnityEngine::QueryTriggerInteraction  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SphereInteractionCaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SphereInteractionCaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SphereInteractionCaster(SphereInteractionCaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SphereInteractionCaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SphereInteractionCaster(SphereInteractionCaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11505};

/// @brief Field k_MaxRaycastHits offset 0xffffffff size 0x4
static constexpr int32_t  k_MaxRaycastHits{static_cast<int32_t>(0xa)};

/// @brief Field m_OverlapSphereHits, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___m_OverlapSphereHits;

/// @brief Field m_OverlapSphereColliderHits, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___m_OverlapSphereColliderHits;

/// [Header("Filtering Settings")]
/// [SerializeField]
/// [Tooltip("Layer mask used for limiting sphere cast and sphere overlap targets.")]
/// @brief Field m_PhysicsLayerMask, offset: 0x78, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___m_PhysicsLayerMask;

/// [SerializeField]
/// [Tooltip("Determines whether the cast sphere overlap will hit triggers. Use Global refers to the Queries Hit Triggers setting in Physics Project Settings.")]
/// @brief Field m_PhysicsTriggerInteraction, offset: 0x7c, size: 0x4, def value: None
 ::UnityEngine::QueryTriggerInteraction  ___m_PhysicsTriggerInteraction;

/// [Header("Sphere Casting Settings")]
/// [SerializeField]
/// [Tooltip("Radius of the sphere cast.")]
/// @brief Field m_CastRadius, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_CastRadius;

/// @brief Field m_FirstFrame, offset: 0x84, size: 0x1, def value: None
 bool  ___m_FirstFrame;

/// @brief Field m_LastSphereCastOrigin, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LastSphereCastOrigin;

/// @brief Field m_LocalPhysicsScene, offset: 0x94, size: 0x8, def value: None
 ::UnityEngine::PhysicsScene  ___m_LocalPhysicsScene;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_OverlapSphereHits) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_OverlapSphereColliderHits) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_PhysicsLayerMask) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_PhysicsTriggerInteraction) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_CastRadius) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_FirstFrame) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_LastSphereCastOrigin) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster, ___m_LocalPhysicsScene) == 0x94, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::SphereInteractionCaster) == 0xa0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors::Casters

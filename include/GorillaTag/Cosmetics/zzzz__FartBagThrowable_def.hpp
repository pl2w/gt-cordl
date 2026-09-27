#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/FartBagThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FartBagThrowable)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
}
namespace GorillaTag::Cosmetics {
class UpdateBlendShapeCosmetic;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class FartBagThrowable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::FartBagThrowable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::FartBagThrowable*, "GorillaTag.Cosmetics", "FartBagThrowable");
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.FartBagThrowable
class CORDL_TYPE FartBagThrowable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field OnDeflated, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnDeflated, put=__cordl_internal_set_OnDeflated)) ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  OnDeflated;

 __declspec(property(get=get_ParentTransferable, put=set_ParentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  ParentTransferable;

/// @brief Field <ParentTransferable>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ParentTransferable_k__BackingField, put=__cordl_internal_set__ParentTransferable_k__BackingField)) ::UnityW<::GlobalNamespace::TransferrableObject>  _ParentTransferable_k__BackingField;

/// @brief Field _events, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field deflated, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_deflated, put=__cordl_internal_set_deflated)) bool  deflated;

/// @brief Field deflationEffect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_deflationEffect, put=__cordl_internal_set_deflationEffect)) ::UnityW<::UnityEngine::GameObject>  deflationEffect;

/// @brief Field destroyWhenDeflateDelay, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_destroyWhenDeflateDelay, put=__cordl_internal_set_destroyWhenDeflateDelay)) float_t  destroyWhenDeflateDelay;

/// @brief Field floorLayerMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_floorLayerMask, put=__cordl_internal_set_floorLayerMask)) ::UnityEngine::LayerMask  floorLayerMask;

/// @brief Field forceDestroyAfterSec, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_forceDestroyAfterSec, put=__cordl_internal_set_forceDestroyAfterSec)) float_t  forceDestroyAfterSec;

/// @brief Field handContactPoint, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_handContactPoint, put=__cordl_internal_set_handContactPoint)) ::UnityEngine::Vector3  handContactPoint;

/// @brief Field handLayerMask, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_handLayerMask, put=__cordl_internal_set_handLayerMask)) ::UnityEngine::LayerMask  handLayerMask;

/// @brief Field handNormalVector, offset 0x6c, size 0xc 
 __declspec(property(get=__cordl_internal_get_handNormalVector, put=__cordl_internal_set_handNormalVector)) ::UnityEngine::Vector3  handNormalVector;

/// @brief Field placedOnFloor, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_placedOnFloor, put=__cordl_internal_set_placedOnFloor)) bool  placedOnFloor;

/// @brief Field placedOnFloorTime, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_placedOnFloorTime, put=__cordl_internal_set_placedOnFloorTime)) float_t  placedOnFloorTime;

/// @brief Field placementOffset, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_placementOffset, put=__cordl_internal_set_placementOffset)) float_t  placementOffset;

/// @brief Field rigidbody, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody, put=__cordl_internal_set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field timeCreated, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeCreated, put=__cordl_internal_set_timeCreated)) float_t  timeCreated;

/// @brief Field updateBlendShapeCosmetic, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateBlendShapeCosmetic, put=__cordl_internal_set_updateBlendShapeCosmetic)) ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  updateBlendShapeCosmetic;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr operator  ::GorillaTag::Cosmetics::IProjectile*() noexcept;

/// @brief Method Deflate, addr 0x5d95f38, size 0x208, virtual false, abstract: false, final false
inline void Deflate() ;

/// @brief Method DeflateEvent, addr 0x5d96408, size 0x260, virtual false, abstract: false, final false
inline void DeflateEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method DeflateLocal, addr 0x5d95798, size 0x1d0, virtual false, abstract: false, final false
inline void DeflateLocal() ;

/// @brief Method DisableObject, addr 0x5d96668, size 0x30, virtual false, abstract: false, final false
inline void DisableObject() ;

/// @brief Method InitialPhotonEvent, addr 0x5d95abc, size 0x2b4, virtual false, abstract: false, final false
inline void InitialPhotonEvent() ;

/// @brief Method Launch, addr 0x5d95968, size 0x154, virtual true, abstract: false, final true
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress) ;

static inline ::GorillaTag::Cosmetics::FartBagThrowable* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5d96140, size 0x2c8, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  other) ;

/// @brief Method OnDestroy, addr 0x5d96698, size 0x138, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x5d9564c, size 0x114, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5d95d70, size 0x1c8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method Update, addr 0x5d95760, size 0x38, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>* const& __cordl_internal_get_OnDeflated() const;

constexpr ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*& __cordl_internal_get_OnDeflated() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get__ParentTransferable_k__BackingField() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get__ParentTransferable_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr bool const& __cordl_internal_get_deflated() const;

constexpr bool& __cordl_internal_get_deflated() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_deflationEffect() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_deflationEffect() ;

constexpr float_t const& __cordl_internal_get_destroyWhenDeflateDelay() const;

constexpr float_t& __cordl_internal_get_destroyWhenDeflateDelay() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_floorLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_floorLayerMask() ;

constexpr float_t const& __cordl_internal_get_forceDestroyAfterSec() const;

constexpr float_t& __cordl_internal_get_forceDestroyAfterSec() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handContactPoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handContactPoint() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_handLayerMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_handLayerMask() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handNormalVector() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handNormalVector() ;

constexpr bool const& __cordl_internal_get_placedOnFloor() const;

constexpr bool& __cordl_internal_get_placedOnFloor() ;

constexpr float_t const& __cordl_internal_get_placedOnFloorTime() const;

constexpr float_t& __cordl_internal_get_placedOnFloorTime() ;

constexpr float_t const& __cordl_internal_get_placementOffset() const;

constexpr float_t& __cordl_internal_get_placementOffset() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody() ;

constexpr float_t const& __cordl_internal_get_timeCreated() const;

constexpr float_t& __cordl_internal_get_timeCreated() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic> const& __cordl_internal_get_updateBlendShapeCosmetic() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>& __cordl_internal_get_updateBlendShapeCosmetic() ;

constexpr void __cordl_internal_set_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value) ;

constexpr void __cordl_internal_set__ParentTransferable_k__BackingField(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_deflated(bool  value) ;

constexpr void __cordl_internal_set_deflationEffect(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_destroyWhenDeflateDelay(float_t  value) ;

constexpr void __cordl_internal_set_floorLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_forceDestroyAfterSec(float_t  value) ;

constexpr void __cordl_internal_set_handContactPoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_handLayerMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_handNormalVector(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_placedOnFloor(bool  value) ;

constexpr void __cordl_internal_set_placedOnFloorTime(float_t  value) ;

constexpr void __cordl_internal_set_placementOffset(float_t  value) ;

constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_timeCreated(float_t  value) ;

constexpr void __cordl_internal_set_updateBlendShapeCosmetic(::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  value) ;

/// @brief Method .ctor, addr 0x5d967d0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnDeflated, addr 0x5d954ec, size 0xb0, virtual false, abstract: false, final false
inline void add_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_ParentTransferable, addr 0x5d954dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::TransferrableObject> get_ParentTransferable() ;

/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* i___GorillaTag__Cosmetics__IProjectile() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnDeflated, addr 0x5d9559c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnDeflated(::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ParentTransferable, addr 0x5d954e4, size 0x8, virtual false, abstract: false, final false
inline void set_ParentTransferable(::GlobalNamespace::TransferrableObject*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FartBagThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FartBagThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FartBagThrowable(FartBagThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FartBagThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FartBagThrowable(FartBagThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4930};

/// [SerializeField]
/// @brief Field deflationEffect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___deflationEffect;

/// [SerializeField]
/// @brief Field destroyWhenDeflateDelay, offset: 0x28, size: 0x4, def value: None
 float_t  ___destroyWhenDeflateDelay;

/// [SerializeField]
/// @brief Field forceDestroyAfterSec, offset: 0x2c, size: 0x4, def value: None
 float_t  ___forceDestroyAfterSec;

/// [SerializeField]
/// @brief Field placementOffset, offset: 0x30, size: 0x4, def value: None
 float_t  ___placementOffset;

/// [SerializeField]
/// @brief Field updateBlendShapeCosmetic, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  ___updateBlendShapeCosmetic;

/// [SerializeField]
/// @brief Field floorLayerMask, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___floorLayerMask;

/// [SerializeField]
/// @brief Field handLayerMask, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___handLayerMask;

/// [SerializeField]
/// @brief Field rigidbody, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody;

/// @brief Field placedOnFloor, offset: 0x50, size: 0x1, def value: None
 bool  ___placedOnFloor;

/// @brief Field placedOnFloorTime, offset: 0x54, size: 0x4, def value: None
 float_t  ___placedOnFloorTime;

/// @brief Field timeCreated, offset: 0x58, size: 0x4, def value: None
 float_t  ___timeCreated;

/// @brief Field deflated, offset: 0x5c, size: 0x1, def value: None
 bool  ___deflated;

/// @brief Field handContactPoint, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handContactPoint;

/// @brief Field handNormalVector, offset: 0x6c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handNormalVector;

/// @brief Field callLimiter, offset: 0x78, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// [CompilerGenerated]
/// @brief Field <ParentTransferable>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ____ParentTransferable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnDeflated, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::GorillaTag::Cosmetics::IProjectile*>*  ___OnDeflated;

/// @brief Field _events, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___deflationEffect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___destroyWhenDeflateDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___forceDestroyAfterSec) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___placementOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___updateBlendShapeCosmetic) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___floorLayerMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___handLayerMask) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___rigidbody) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___placedOnFloor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___placedOnFloorTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___timeCreated) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___deflated) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___handContactPoint) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___handNormalVector) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___callLimiter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ____ParentTransferable_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ___OnDeflated) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::FartBagThrowable, ____events) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::FartBagThrowable) == 0x98, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

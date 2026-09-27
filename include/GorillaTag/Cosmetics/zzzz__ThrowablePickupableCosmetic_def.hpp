#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ThrowablePickupableCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ThrowablePickupableCosmetic)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class NetPlayer;
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
namespace GorillaTag::Cosmetics {
class PickupableVariant;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ThrowablePickupableCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic*, "GorillaTag.Cosmetics", "ThrowablePickupableCosmetic");
// Dependencies TransferrableObject
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ThrowablePickupableCosmetic
class CORDL_TYPE ThrowablePickupableCosmetic : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field OnGrabLocal, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGrabLocal, put=__cordl_internal_set_OnGrabLocal)) ::UnityEngine::Events::UnityEvent*  OnGrabLocal;

/// @brief Field OnReturnToDockPositionLocal, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReturnToDockPositionLocal, put=__cordl_internal_set_OnReturnToDockPositionLocal)) ::UnityEngine::Events::UnityEvent*  OnReturnToDockPositionLocal;

/// @brief Field OnReturnToDockPositionShared, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReturnToDockPositionShared, put=__cordl_internal_set_OnReturnToDockPositionShared)) ::UnityEngine::Events::UnityEvent*  OnReturnToDockPositionShared;

/// @brief Field _events, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiterRelease, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiterRelease, put=__cordl_internal_set_callLimiterRelease)) ::GlobalNamespace::CallLimiter*  callLimiterRelease;

/// @brief Field callLimiterReturn, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiterReturn, put=__cordl_internal_set_callLimiterReturn)) ::GlobalNamespace::CallLimiter*  callLimiterReturn;

/// @brief Field isLocal, offset 0x370, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field owner, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_owner, put=__cordl_internal_set_owner)) ::GlobalNamespace::NetPlayer*  owner;

/// @brief Field pickupableVariant, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_pickupableVariant, put=__cordl_internal_set_pickupableVariant)) ::UnityW<::GorillaTag::Cosmetics::PickupableVariant>  pickupableVariant;

/// @brief Field returnToDockDistanceThreshold, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnToDockDistanceThreshold, put=__cordl_internal_set_returnToDockDistanceThreshold)) float_t  returnToDockDistanceThreshold;

/// @brief Field transferrableObject, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_transferrableObject, put=__cordl_internal_set_transferrableObject)) ::UnityW<::GlobalNamespace::TransferrableObject>  transferrableObject;

/// @brief Method Awake, addr 0x5d79e20, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DistanceToDock, addr 0x5d7ad10, size 0x184, virtual false, abstract: false, final false
inline float_t DistanceToDock() ;

static inline ::GorillaTag::Cosmetics::ThrowablePickupableCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d7a1c4, size 0x1fc, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d79e78, size 0x34c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d7a3c0, size 0x3cc, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5d7a78c, size 0x584, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnReleaseEvent, addr 0x5d7aeb4, size 0x374, virtual false, abstract: false, final false
inline void OnReleaseEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnReleaseEventLocal, addr 0x5d7ae94, size 0x20, virtual false, abstract: false, final false
inline void OnReleaseEventLocal(::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  releaseVelocity, float_t  playerScale) ;

/// @brief Method OnReturnToDockEvent, addr 0x5d7b228, size 0x118, virtual false, abstract: false, final false
inline void OnReturnToDockEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnGrabLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnGrabLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnReturnToDockPositionLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnReturnToDockPositionLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnReturnToDockPositionShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnReturnToDockPositionShared() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiterRelease() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiterRelease() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiterReturn() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiterReturn() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_owner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_owner() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::PickupableVariant> const& __cordl_internal_get_pickupableVariant() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::PickupableVariant>& __cordl_internal_get_pickupableVariant() ;

constexpr float_t const& __cordl_internal_get_returnToDockDistanceThreshold() const;

constexpr float_t& __cordl_internal_get_returnToDockDistanceThreshold() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_transferrableObject() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_transferrableObject() ;

constexpr void __cordl_internal_set_OnGrabLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReturnToDockPositionLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReturnToDockPositionShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiterRelease(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_callLimiterReturn(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_owner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_pickupableVariant(::UnityW<::GorillaTag::Cosmetics::PickupableVariant>  value) ;

constexpr void __cordl_internal_set_returnToDockDistanceThreshold(float_t  value) ;

constexpr void __cordl_internal_set_transferrableObject(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

/// @brief Method .ctor, addr 0x5d7b340, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ThrowablePickupableCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ThrowablePickupableCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ThrowablePickupableCosmetic(ThrowablePickupableCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ThrowablePickupableCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ThrowablePickupableCosmetic(ThrowablePickupableCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4867};

/// [Tooltip("Child object with the PickupableCosmetic script")]
/// [SerializeField]
/// @brief Field pickupableVariant, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::PickupableVariant>  ___pickupableVariant;

/// [Tooltip("cosmetics released at a greater distance from the dock than the threshold will be placed in world instead of returning to the dock")]
/// [SerializeField]
/// @brief Field returnToDockDistanceThreshold, offset: 0x340, size: 0x4, def value: None
 float_t  ___returnToDockDistanceThreshold;

/// [FormerlySerializedAs("OnReturnToDockPosition")]
/// [Space]
/// @brief Field OnReturnToDockPositionLocal, offset: 0x348, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnReturnToDockPositionLocal;

/// @brief Field OnReturnToDockPositionShared, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnReturnToDockPositionShared;

/// [FormerlySerializedAs("OnGrabFromDockPosition")]
/// @brief Field OnGrabLocal, offset: 0x358, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnGrabLocal;

/// @brief Field _events, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field transferrableObject, offset: 0x368, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___transferrableObject;

/// @brief Field isLocal, offset: 0x370, size: 0x1, def value: None
 bool  ___isLocal;

/// @brief Field owner, offset: 0x378, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___owner;

/// @brief Field callLimiterRelease, offset: 0x380, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiterRelease;

/// @brief Field callLimiterReturn, offset: 0x388, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiterReturn;

/// @brief Size padding 0x3c0 - 0x390 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___pickupableVariant) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___returnToDockDistanceThreshold) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___OnReturnToDockPositionLocal) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___OnReturnToDockPositionShared) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___OnGrabLocal) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ____events) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___transferrableObject) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___isLocal) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___owner) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___callLimiterRelease) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic, ___callLimiterReturn) == 0x388, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ThrowablePickupableCosmetic) == 0x3c0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

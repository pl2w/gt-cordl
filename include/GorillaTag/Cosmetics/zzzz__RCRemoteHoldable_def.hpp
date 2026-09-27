#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/RCRemoteHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__RCRemoteHoldable_RCInput_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RCRemoteHoldable)
namespace GlobalNamespace {
class DropZone;
}
namespace GlobalNamespace {
class ISnapTurnOverride;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct RCRemoteHoldable_RCInput;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GorillaTag::Cosmetics {
class RCCosmeticNetworkSync;
}
namespace GorillaTag::Cosmetics {
class RCVehicle;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class RCRemoteHoldable;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::RCRemoteHoldable*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::RCRemoteHoldable*, "GorillaTag.Cosmetics", "RCRemoteHoldable");
// Dependencies GorillaTag.Cosmetics.RCRemoteHoldable::RCInput, System.Object, TransferrableObject, UnityEngine.Quaternion, UnityEngine.Vector3, UnityEngine.XR.XRNode
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.RCRemoteHoldable
class CORDL_TYPE RCRemoteHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using RCInput = ::GlobalNamespace::RCRemoteHoldable_RCInput;

 __declspec(property(get=get_Vehicle)) ::UnityW<::GorillaTag::Cosmetics::RCVehicle>  Vehicle;

 __declspec(property(get=get_XRNode)) ::UnityEngine::XR::XRNode  XRNode;

/// @brief Field _events, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field buttonPressDepth, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_buttonPressDepth, put=__cordl_internal_set_buttonPressDepth)) float_t  buttonPressDepth;

/// @brief Field buttonTransform, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonTransform, put=__cordl_internal_set_buttonTransform)) ::UnityW<::UnityEngine::Transform>  buttonTransform;

/// @brief Field currentInput, offset 0x3a8, size 0x10 
 __declspec(property(get=__cordl_internal_get_currentInput, put=__cordl_internal_set_currentInput)) ::GlobalNamespace::RCRemoteHoldable_RCInput  currentInput;

/// @brief Field currentlyHeld, offset 0x3a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_currentlyHeld, put=__cordl_internal_set_currentlyHeld)) bool  currentlyHeld;

/// @brief Field emptyArgs, offset 0x3d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_emptyArgs, put=__cordl_internal_set_emptyArgs)) ::ArrayW<::System::Object*>  emptyArgs;

/// @brief Field initialButtonPosition, offset 0x394, size 0xc 
 __declspec(property(get=__cordl_internal_get_initialButtonPosition, put=__cordl_internal_set_initialButtonPosition)) ::UnityEngine::Vector3  initialButtonPosition;

/// @brief Field initialButtonRotation, offset 0x384, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialButtonRotation, put=__cordl_internal_set_initialButtonRotation)) ::UnityEngine::Quaternion  initialButtonRotation;

/// @brief Field initialJoystickRotation, offset 0x364, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialJoystickRotation, put=__cordl_internal_set_initialJoystickRotation)) ::UnityEngine::Quaternion  initialJoystickRotation;

/// @brief Field initialTriggerRotation, offset 0x374, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialTriggerRotation, put=__cordl_internal_set_initialTriggerRotation)) ::UnityEngine::Quaternion  initialTriggerRotation;

/// @brief Field joystickLeanDegrees, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_joystickLeanDegrees, put=__cordl_internal_set_joystickLeanDegrees)) float_t  joystickLeanDegrees;

/// @brief Field joystickTransform, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_joystickTransform, put=__cordl_internal_set_joystickTransform)) ::UnityW<::UnityEngine::Transform>  joystickTransform;

/// @brief Field networkSync, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkSync, put=__cordl_internal_set_networkSync)) ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  networkSync;

/// @brief Field networkSyncPrefabName, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkSyncPrefabName, put=__cordl_internal_set_networkSyncPrefabName)) ::StringW  networkSyncPrefabName;

/// @brief Field targetVehicle, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetVehicle, put=__cordl_internal_set_targetVehicle)) ::UnityW<::GorillaTag::Cosmetics::RCVehicle>  targetVehicle;

/// @brief Field triggerPullDegrees, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerPullDegrees, put=__cordl_internal_set_triggerPullDegrees)) float_t  triggerPullDegrees;

/// @brief Field triggerTransform, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggerTransform, put=__cordl_internal_set_triggerTransform)) ::UnityW<::UnityEngine::Transform>  triggerTransform;

/// @brief Field xrNode, offset 0x3a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_xrNode, put=__cordl_internal_set_xrNode)) ::UnityEngine::XR::XRNode  xrNode;

/// @brief Convert operator to "::GlobalNamespace::ISnapTurnOverride"
constexpr operator  ::GlobalNamespace::ISnapTurnOverride*() noexcept;

/// @brief Method Awake, addr 0x5d6b3dc, size 0xf4, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::RCRemoteHoldable* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d6bc98, size 0x194, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d6b974, size 0x324, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d6b4d0, size 0x2f8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGrab, addr 0x5d6be2c, size 0x528, virtual true, abstract: false, final false
inline void OnGrab(::GlobalNamespace::InteractionPoint*  pointGrabbed, ::UnityEngine::GameObject*  grabbingHand) ;

/// @brief Method OnRelease, addr 0x5d6c354, size 0x190, virtual true, abstract: false, final false
inline bool OnRelease(::GlobalNamespace::DropZone*  zoneReleased, ::UnityEngine::GameObject*  releasingHand) ;

/// @brief Method OnStartConnectionEvent, addr 0x5d6c8e4, size 0x5c, virtual false, abstract: false, final false
inline void OnStartConnectionEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method TurnOverrideActive, addr 0x5d6b394, size 0x48, virtual true, abstract: false, final true
inline bool TurnOverrideActive() ;

/// @brief Method Update, addr 0x5d6c4e4, size 0x320, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WakeUpRemoteVehicle, addr 0x5d672c8, size 0xd4, virtual false, abstract: false, final false
inline void WakeUpRemoteVehicle() ;

/// @brief Method _TryFindRemoteVehicle, addr 0x5d6b7c8, size 0x1ac, virtual false, abstract: false, final false
inline bool _TryFindRemoteVehicle() ;

/// @brief Method _TryFindRemoteVehicle_InCosmeticInstanceArray, addr 0x5d6c940, size 0x1a4, virtual false, abstract: false, final false
inline bool _TryFindRemoteVehicle_InCosmeticInstanceArray(int32_t  thisGobjInstId, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gameObjects) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr float_t const& __cordl_internal_get_buttonPressDepth() const;

constexpr float_t& __cordl_internal_get_buttonPressDepth() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_buttonTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_buttonTransform() ;

constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput const& __cordl_internal_get_currentInput() const;

constexpr ::GlobalNamespace::RCRemoteHoldable_RCInput& __cordl_internal_get_currentInput() ;

constexpr bool const& __cordl_internal_get_currentlyHeld() const;

constexpr bool& __cordl_internal_get_currentlyHeld() ;

constexpr ::ArrayW<::System::Object*> const& __cordl_internal_get_emptyArgs() const;

constexpr ::ArrayW<::System::Object*>& __cordl_internal_get_emptyArgs() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_initialButtonPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_initialButtonPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialButtonRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialButtonRotation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialJoystickRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialJoystickRotation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialTriggerRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialTriggerRotation() ;

constexpr float_t const& __cordl_internal_get_joystickLeanDegrees() const;

constexpr float_t& __cordl_internal_get_joystickLeanDegrees() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_joystickTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_joystickTransform() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync> const& __cordl_internal_get_networkSync() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>& __cordl_internal_get_networkSync() ;

constexpr ::StringW const& __cordl_internal_get_networkSyncPrefabName() const;

constexpr ::StringW& __cordl_internal_get_networkSyncPrefabName() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCVehicle> const& __cordl_internal_get_targetVehicle() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::RCVehicle>& __cordl_internal_get_targetVehicle() ;

constexpr float_t const& __cordl_internal_get_triggerPullDegrees() const;

constexpr float_t& __cordl_internal_get_triggerPullDegrees() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_triggerTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_triggerTransform() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_xrNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_xrNode() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_buttonPressDepth(float_t  value) ;

constexpr void __cordl_internal_set_buttonTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_currentInput(::GlobalNamespace::RCRemoteHoldable_RCInput  value) ;

constexpr void __cordl_internal_set_currentlyHeld(bool  value) ;

constexpr void __cordl_internal_set_emptyArgs(::ArrayW<::System::Object*>  value) ;

constexpr void __cordl_internal_set_initialButtonPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_initialButtonRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialJoystickRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_initialTriggerRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_joystickLeanDegrees(float_t  value) ;

constexpr void __cordl_internal_set_joystickTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_networkSync(::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  value) ;

constexpr void __cordl_internal_set_networkSyncPrefabName(::StringW  value) ;

constexpr void __cordl_internal_set_targetVehicle(::UnityW<::GorillaTag::Cosmetics::RCVehicle>  value) ;

constexpr void __cordl_internal_set_triggerPullDegrees(float_t  value) ;

constexpr void __cordl_internal_set_triggerTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method .ctor, addr 0x5d6cae4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Vehicle, addr 0x5d6b38c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaTag::Cosmetics::RCVehicle> get_Vehicle() ;

/// @brief Method get_XRNode, addr 0x5d6b384, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode get_XRNode() ;

/// @brief Convert to "::GlobalNamespace::ISnapTurnOverride"
constexpr ::GlobalNamespace::ISnapTurnOverride* i___GlobalNamespace__ISnapTurnOverride() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RCRemoteHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RCRemoteHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RCRemoteHoldable(RCRemoteHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RCRemoteHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RCRemoteHoldable(RCRemoteHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4839};

/// [SerializeField]
/// @brief Field joystickTransform, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___joystickTransform;

/// [SerializeField]
/// @brief Field triggerTransform, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___triggerTransform;

/// [SerializeField]
/// @brief Field buttonTransform, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___buttonTransform;

/// @brief Field targetVehicle, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::RCVehicle>  ___targetVehicle;

/// @brief Field joystickLeanDegrees, offset: 0x358, size: 0x4, def value: None
 float_t  ___joystickLeanDegrees;

/// @brief Field triggerPullDegrees, offset: 0x35c, size: 0x4, def value: None
 float_t  ___triggerPullDegrees;

/// @brief Field buttonPressDepth, offset: 0x360, size: 0x4, def value: None
 float_t  ___buttonPressDepth;

/// @brief Field initialJoystickRotation, offset: 0x364, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialJoystickRotation;

/// @brief Field initialTriggerRotation, offset: 0x374, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialTriggerRotation;

/// @brief Field initialButtonRotation, offset: 0x384, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialButtonRotation;

/// @brief Field initialButtonPosition, offset: 0x394, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___initialButtonPosition;

/// @brief Field currentlyHeld, offset: 0x3a0, size: 0x1, def value: None
 bool  ___currentlyHeld;

/// @brief Field xrNode, offset: 0x3a4, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___xrNode;

/// @brief Field currentInput, offset: 0x3a8, size: 0x10, def value: None
 ::GlobalNamespace::RCRemoteHoldable_RCInput  ___currentInput;

/// [HideInInspector]
/// @brief Field networkSync, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::RCCosmeticNetworkSync>  ___networkSync;

/// @brief Field networkSyncPrefabName, offset: 0x3c0, size: 0x8, def value: None
 ::StringW  ___networkSyncPrefabName;

/// @brief Field _events, offset: 0x3c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field emptyArgs, offset: 0x3d0, size: 0x8, def value: None
 ::ArrayW<::System::Object*>  ___emptyArgs;

/// @brief Size padding 0x408 - 0x3d8 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___joystickTransform) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___triggerTransform) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___buttonTransform) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___targetVehicle) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___joystickLeanDegrees) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___triggerPullDegrees) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___buttonPressDepth) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___initialJoystickRotation) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___initialTriggerRotation) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___initialButtonRotation) == 0x384, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___initialButtonPosition) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___currentlyHeld) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___xrNode) == 0x3a4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___currentInput) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___networkSync) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___networkSyncPrefabName) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ____events) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::RCRemoteHoldable, ___emptyArgs) == 0x3d0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::RCRemoteHoldable) == 0x408, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

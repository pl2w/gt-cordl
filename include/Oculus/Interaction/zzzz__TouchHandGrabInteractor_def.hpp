#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchHandGrabInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchHandGrabInteractor)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class ShadowHand;
}
namespace Oculus::Interaction {
class ColliderGroup;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class IHandSphereMap;
}
namespace Oculus::Interaction {
class ITimeConsumer;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractable;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor_FingerStatus;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor___c;
}
namespace Oculus::Interaction {
class TouchShadowHand;
}
namespace System {
class Action;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class TouchHandGrabInteractor;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor_FingerStatus;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TouchHandGrabInteractor*);
MARK_REF_T(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*);
MARK_REF_T(::Oculus::Interaction::TouchHandGrabInteractor___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchHandGrabInteractor*, "Oculus.Interaction", "TouchHandGrabInteractor");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*, "Oculus.Interaction", "TouchHandGrabInteractor/FingerStatus");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchHandGrabInteractor___c*, "Oculus.Interaction", "TouchHandGrabInteractor/<>c");
// Dependencies Oculus.Interaction.PointerInteractor`2<TInteractor, TInteractable>, Oculus.Interaction.TouchHandGrabInteractor::FingerStatus, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchHandGrabInteractor
class CORDL_TYPE TouchHandGrabInteractor : public ::Oculus::Interaction::PointerInteractor_2<::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>,::UnityW<::Oculus::Interaction::TouchHandGrabInteractable>> {
public:
// Declarations
using FingerStatus = ::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus;

using __c = ::Oculus::Interaction::TouchHandGrabInteractor___c;

/// @brief Field GrabOffset, offset 0x18c, size 0xc 
 __declspec(property(get=__cordl_internal_get_GrabOffset, put=__cordl_internal_set_GrabOffset)) ::UnityEngine::Vector3  GrabOffset;

 __declspec(property(get=get_GrabPosition)) ::UnityEngine::Vector3  GrabPosition;

/// @brief Field GrabPrerequisite, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_GrabPrerequisite, put=__cordl_internal_set_GrabPrerequisite)) ::Oculus::Interaction::IActiveState*  GrabPrerequisite;

 __declspec(property(get=get_GrabRotation)) ::UnityEngine::Quaternion  GrabRotation;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field HandSphereMap, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandSphereMap, put=__cordl_internal_set_HandSphereMap)) ::Oculus::Interaction::IHandSphereMap*  HandSphereMap;

 __declspec(property(get=get_OpenHand, put=set_OpenHand)) ::Oculus::Interaction::Input::IHand*  OpenHand;

/// @brief Field WhenFingerLocked, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenFingerLocked, put=__cordl_internal_set_WhenFingerLocked)) ::System::Action*  WhenFingerLocked;

/// @brief Field <Hand>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field <OpenHand>k__BackingField, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__OpenHand_k__BackingField, put=__cordl_internal_set__OpenHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _OpenHand_k__BackingField;

/// @brief Field _curlDeltaThreshold, offset 0x15c, size 0x4 
 __declspec(property(get=__cordl_internal_get__curlDeltaThreshold, put=__cordl_internal_set__curlDeltaThreshold)) float_t  _curlDeltaThreshold;

/// @brief Field _curlTimeThreshold, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get__curlTimeThreshold, put=__cordl_internal_set__curlTimeThreshold)) float_t  _curlTimeThreshold;

/// @brief Field _deltaTime, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get__deltaTime, put=__cordl_internal_set__deltaTime)) float_t  _deltaTime;

/// @brief Field _fingerStatuses, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__fingerStatuses, put=__cordl_internal_set__fingerStatuses)) ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>  _fingerStatuses;

/// @brief Field _firstSelect, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get__firstSelect, put=__cordl_internal_set__firstSelect)) bool  _firstSelect;

/// @brief Field _fromShadow, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get__fromShadow, put=__cordl_internal_set__fromShadow)) ::Oculus::Interaction::Input::ShadowHand*  _fromShadow;

/// @brief Field _grabLocation, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabLocation, put=__cordl_internal_set__grabLocation)) ::UnityW<::UnityEngine::Transform>  _grabLocation;

/// @brief Field _grabPrerequisite, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__grabPrerequisite, put=__cordl_internal_set__grabPrerequisite)) ::UnityW<::UnityEngine::Object>  _grabPrerequisite;

/// @brief Field _hand, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _handSphereMap, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__handSphereMap, put=__cordl_internal_set__handSphereMap)) ::UnityW<::UnityEngine::Object>  _handSphereMap;

/// @brief Field _hoverLocation, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoverLocation, put=__cordl_internal_set__hoverLocation)) ::UnityW<::UnityEngine::Transform>  _hoverLocation;

/// @brief Field _iterations, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterations, put=__cordl_internal_set__iterations)) int32_t  _iterations;

/// @brief Field _minHoverDistance, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get__minHoverDistance, put=__cordl_internal_set__minHoverDistance)) float_t  _minHoverDistance;

/// @brief Field _openHand, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get__openHand, put=__cordl_internal_set__openHand)) ::UnityW<::UnityEngine::Object>  _openHand;

/// @brief Field _openShadow, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get__openShadow, put=__cordl_internal_set__openShadow)) ::Oculus::Interaction::Input::ShadowHand*  _openShadow;

/// @brief Field _previousTime, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get__previousTime, put=__cordl_internal_set__previousTime)) float_t  _previousTime;

/// @brief Field _saveOffset, offset 0x180, size 0xc 
 __declspec(property(get=__cordl_internal_get__saveOffset, put=__cordl_internal_set__saveOffset)) ::UnityEngine::Vector3  _saveOffset;

/// @brief Field _timeProvider, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeProvider, put=__cordl_internal_set__timeProvider)) ::System::Func_1<float_t>*  _timeProvider;

/// @brief Field _toShadow, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__toShadow, put=__cordl_internal_set__toShadow)) ::Oculus::Interaction::Input::ShadowHand*  _toShadow;

/// @brief Field _touchShadowHand, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__touchShadowHand, put=__cordl_internal_set__touchShadowHand)) ::Oculus::Interaction::TouchShadowHand*  _touchShadowHand;

/// @brief Convert operator to "::Oculus::Interaction::ITimeConsumer"
constexpr operator  ::Oculus::Interaction::ITimeConsumer*() noexcept;

/// @brief Method Awake, addr 0xa465af0, size 0x334, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearFingerLockStatuses, addr 0xa466f1c, size 0x54, virtual false, abstract: false, final false
inline void ClearFingerLockStatuses() ;

/// @brief Method ComputeCandidate, addr 0xa467e5c, size 0x428, virtual true, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::TouchHandGrabInteractable> ComputeCandidate() ;

/// @brief Method ComputeNewRelease, addr 0xa4675dc, size 0x1dc, virtual false, abstract: false, final false
inline void ComputeNewRelease(int32_t  idx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method ComputeNewTouching, addr 0xa466b94, size 0x290, virtual false, abstract: false, final false
inline void ComputeNewTouching(int32_t  idx, ::Oculus::Interaction::ColliderGroup*  colliderGroup, ::UnityEngine::Vector3  offset) ;

/// @brief Method ComputePointerPose, addr 0xa468284, size 0xbc, virtual true, abstract: false, final false
inline ::UnityEngine::Pose ComputePointerPose() ;

/// @brief Method ComputeShouldSelect, addr 0xa4664ac, size 0x4, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0xa466564, size 0x18, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method DoHoverUpdate, addr 0xa46657c, size 0x430, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoPostprocess, addr 0xa4662a0, size 0x20c, virtual true, abstract: false, final false
inline void DoPostprocess() ;

/// @brief Method DoPreprocess, addr 0xa4661f0, size 0xb0, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0xa4678b0, size 0x474, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method GetFingerJoints, addr 0xa4661b8, size 0x38, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Pose> GetFingerJoints(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method HandStatusSelecting, addr 0xa4664b0, size 0xb4, virtual false, abstract: false, final false
inline bool HandStatusSelecting() ;

/// @brief Method InjectAllTouchHandGrabInteractor, addr 0xa468340, size 0x68, virtual false, abstract: false, final false
inline void InjectAllTouchHandGrabInteractor(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IHand*  openHand, ::Oculus::Interaction::IHandSphereMap*  handSphereMap, ::UnityEngine::Transform*  hoverLocation, ::UnityEngine::Transform*  grabLocation) ;

/// @brief Method InjectGrabLocation, addr 0xa468628, size 0x10, virtual false, abstract: false, final false
inline void InjectGrabLocation(::UnityEngine::Transform*  grabLocation) ;

/// @brief Method InjectHand, addr 0xa4683a8, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHandSphereMap, addr 0xa468548, size 0xd0, virtual false, abstract: false, final false
inline void InjectHandSphereMap(::Oculus::Interaction::IHandSphereMap*  handSphereMap) ;

/// @brief Method InjectHoverLocation, addr 0xa468618, size 0x10, virtual false, abstract: false, final false
inline void InjectHoverLocation(::UnityEngine::Transform*  hoverLocation) ;

/// @brief Method InjectOpenHand, addr 0xa468478, size 0xd0, virtual false, abstract: false, final false
inline void InjectOpenHand(::Oculus::Interaction::Input::IHand*  openHand) ;

/// @brief Method InjectOptionalCurlDeltaThreshold, addr 0xa468710, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCurlDeltaThreshold(float_t  threshold) ;

/// @brief Method InjectOptionalCurlTimeThreshold, addr 0xa468718, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalCurlTimeThreshold(float_t  seconds) ;

/// @brief Method InjectOptionalGrabPrerequisite, addr 0xa468638, size 0xd0, virtual false, abstract: false, final false
inline void InjectOptionalGrabPrerequisite(::Oculus::Interaction::IActiveState*  grabPrerequisite) ;

/// @brief Method InjectOptionalIterations, addr 0xa468720, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalIterations(int32_t  iterations) ;

/// @brief Method InjectOptionalMinHoverDistance, addr 0xa468708, size 0x8, virtual false, abstract: false, final false
inline void InjectOptionalMinHoverDistance(float_t  minHoverDistance) ;

/// [Obsolete("Use SetTimeProvide()")]
/// @brief Method InjectOptionalTimeProvider, addr 0xa468728, size 0x10, virtual false, abstract: false, final false
inline void InjectOptionalTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method IsFingerLocked, addr 0xa4660f8, size 0xc0, virtual false, abstract: false, final false
inline bool IsFingerLocked(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method MeetsGrabPrerequisite, addr 0xa466f70, size 0xac, virtual false, abstract: false, final false
inline bool MeetsGrabPrerequisite() ;

static inline ::Oculus::Interaction::TouchHandGrabInteractor* New_ctor() ;

/// @brief Method SetTimeProvider, addr 0xa465ab0, size 0x10, virtual true, abstract: false, final true
inline void SetTimeProvider(::System::Func_1<float_t>*  timeProvider) ;

/// @brief Method Start, addr 0xa465e2c, size 0x164, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unselect, addr 0xa467d88, size 0xd4, virtual true, abstract: false, final false
inline void Unselect() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_GrabOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_GrabOffset() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_GrabPrerequisite() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_GrabPrerequisite() ;

constexpr ::Oculus::Interaction::IHandSphereMap* const& __cordl_internal_get_HandSphereMap() const;

constexpr ::Oculus::Interaction::IHandSphereMap*& __cordl_internal_get_HandSphereMap() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenFingerLocked() const;

constexpr ::System::Action*& __cordl_internal_get_WhenFingerLocked() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__OpenHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__OpenHand_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__curlDeltaThreshold() const;

constexpr float_t& __cordl_internal_get__curlDeltaThreshold() ;

constexpr float_t const& __cordl_internal_get__curlTimeThreshold() const;

constexpr float_t& __cordl_internal_get__curlTimeThreshold() ;

constexpr float_t const& __cordl_internal_get__deltaTime() const;

constexpr float_t& __cordl_internal_get__deltaTime() ;

constexpr ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*> const& __cordl_internal_get__fingerStatuses() const;

constexpr ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>& __cordl_internal_get__fingerStatuses() ;

constexpr bool const& __cordl_internal_get__firstSelect() const;

constexpr bool& __cordl_internal_get__firstSelect() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__fromShadow() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__fromShadow() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__grabLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__grabLocation() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__grabPrerequisite() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__grabPrerequisite() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handSphereMap() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handSphereMap() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hoverLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hoverLocation() ;

constexpr int32_t const& __cordl_internal_get__iterations() const;

constexpr int32_t& __cordl_internal_get__iterations() ;

constexpr float_t const& __cordl_internal_get__minHoverDistance() const;

constexpr float_t& __cordl_internal_get__minHoverDistance() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__openHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__openHand() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__openShadow() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__openShadow() ;

constexpr float_t const& __cordl_internal_get__previousTime() const;

constexpr float_t& __cordl_internal_get__previousTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__saveOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__saveOffset() ;

constexpr ::System::Func_1<float_t>* const& __cordl_internal_get__timeProvider() const;

constexpr ::System::Func_1<float_t>*& __cordl_internal_get__timeProvider() ;

constexpr ::Oculus::Interaction::Input::ShadowHand* const& __cordl_internal_get__toShadow() const;

constexpr ::Oculus::Interaction::Input::ShadowHand*& __cordl_internal_get__toShadow() ;

constexpr ::Oculus::Interaction::TouchShadowHand* const& __cordl_internal_get__touchShadowHand() const;

constexpr ::Oculus::Interaction::TouchShadowHand*& __cordl_internal_get__touchShadowHand() ;

constexpr void __cordl_internal_set_GrabOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_GrabPrerequisite(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_HandSphereMap(::Oculus::Interaction::IHandSphereMap*  value) ;

constexpr void __cordl_internal_set_WhenFingerLocked(::System::Action*  value) ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__OpenHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__curlDeltaThreshold(float_t  value) ;

constexpr void __cordl_internal_set__curlTimeThreshold(float_t  value) ;

constexpr void __cordl_internal_set__deltaTime(float_t  value) ;

constexpr void __cordl_internal_set__fingerStatuses(::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>  value) ;

constexpr void __cordl_internal_set__firstSelect(bool  value) ;

constexpr void __cordl_internal_set__fromShadow(::Oculus::Interaction::Input::ShadowHand*  value) ;

constexpr void __cordl_internal_set__grabLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__grabPrerequisite(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__handSphereMap(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hoverLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__iterations(int32_t  value) ;

constexpr void __cordl_internal_set__minHoverDistance(float_t  value) ;

constexpr void __cordl_internal_set__openHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__openShadow(::Oculus::Interaction::Input::ShadowHand*  value) ;

constexpr void __cordl_internal_set__previousTime(float_t  value) ;

constexpr void __cordl_internal_set__saveOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__timeProvider(::System::Func_1<float_t>*  value) ;

constexpr void __cordl_internal_set__toShadow(::Oculus::Interaction::Input::ShadowHand*  value) ;

constexpr void __cordl_internal_set__touchShadowHand(::Oculus::Interaction::TouchShadowHand*  value) ;

/// @brief Method .ctor, addr 0xa468738, size 0x298, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenFingerLocked, addr 0xa465978, size 0x9c, virtual false, abstract: false, final false
inline void add_WhenFingerLocked(::System::Action*  value) ;

/// @brief Method get_GrabPosition, addr 0xa465ac0, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_GrabPosition() ;

/// @brief Method get_GrabRotation, addr 0xa465ad8, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion get_GrabRotation() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa465948, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// [CompilerGenerated]
/// @brief Method get_OpenHand, addr 0xa465960, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_OpenHand() ;

/// @brief Convert to "::Oculus::Interaction::ITimeConsumer"
constexpr ::Oculus::Interaction::ITimeConsumer* i___Oculus__Interaction__ITimeConsumer() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenFingerLocked, addr 0xa465a14, size 0x9c, virtual false, abstract: false, final false
inline void remove_WhenFingerLocked(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa465950, size 0x10, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_OpenHand, addr 0xa465968, size 0x10, virtual false, abstract: false, final false
inline void set_OpenHand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchHandGrabInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchHandGrabInteractor(TouchHandGrabInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchHandGrabInteractor(TouchHandGrabInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15891};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _openHand, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____openHand;

/// [CompilerGenerated]
/// @brief Field <OpenHand>k__BackingField, offset: 0x130, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____OpenHand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IHandSphereMap), new[] {  })]
/// @brief Field _handSphereMap, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handSphereMap;

/// @brief Field HandSphereMap, offset: 0x140, size: 0x8, def value: None
 ::Oculus::Interaction::IHandSphereMap*  ___HandSphereMap;

/// [SerializeField]
/// @brief Field _hoverLocation, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____hoverLocation;

/// [SerializeField]
/// @brief Field _grabLocation, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____grabLocation;

/// [SerializeField]
/// @brief Field _minHoverDistance, offset: 0x158, size: 0x4, def value: None
 float_t  ____minHoverDistance;

/// [SerializeField]
/// @brief Field _curlDeltaThreshold, offset: 0x15c, size: 0x4, def value: None
 float_t  ____curlDeltaThreshold;

/// [SerializeField]
/// @brief Field _curlTimeThreshold, offset: 0x160, size: 0x4, def value: None
 float_t  ____curlTimeThreshold;

/// [SerializeField]
/// [Min(1)]
/// @brief Field _iterations, offset: 0x164, size: 0x4, def value: None
 int32_t  ____iterations;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// [Optional]
/// @brief Field _grabPrerequisite, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____grabPrerequisite;

/// [CompilerGenerated]
/// @brief Field WhenFingerLocked, offset: 0x170, size: 0x8, def value: None
 ::System::Action*  ___WhenFingerLocked;

/// @brief Field _timeProvider, offset: 0x178, size: 0x8, def value: None
 ::System::Func_1<float_t>*  ____timeProvider;

/// @brief Field _saveOffset, offset: 0x180, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____saveOffset;

/// @brief Field GrabOffset, offset: 0x18c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___GrabOffset;

/// @brief Field GrabPrerequisite, offset: 0x198, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___GrabPrerequisite;

/// @brief Field _fingerStatuses, offset: 0x1a0, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus*>  ____fingerStatuses;

/// @brief Field _touchShadowHand, offset: 0x1a8, size: 0x8, def value: None
 ::Oculus::Interaction::TouchShadowHand*  ____touchShadowHand;

/// @brief Field _fromShadow, offset: 0x1b0, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____fromShadow;

/// @brief Field _toShadow, offset: 0x1b8, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____toShadow;

/// @brief Field _openShadow, offset: 0x1c0, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ShadowHand*  ____openShadow;

/// @brief Field _firstSelect, offset: 0x1c8, size: 0x1, def value: None
 bool  ____firstSelect;

/// @brief Field _previousTime, offset: 0x1cc, size: 0x4, def value: None
 float_t  ____previousTime;

/// @brief Field _deltaTime, offset: 0x1d0, size: 0x4, def value: None
 float_t  ____deltaTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____hand) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____Hand_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____openHand) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____OpenHand_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____handSphereMap) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ___HandSphereMap) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____hoverLocation) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____grabLocation) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____minHoverDistance) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____curlDeltaThreshold) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____curlTimeThreshold) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____iterations) == 0x164, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____grabPrerequisite) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ___WhenFingerLocked) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____timeProvider) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____saveOffset) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ___GrabOffset) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ___GrabPrerequisite) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____fingerStatuses) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____touchShadowHand) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____fromShadow) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____toShadow) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____openShadow) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____firstSelect) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____previousTime) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor, ____deltaTime) == 0x1d0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractor) == 0x1d8, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchHandGrabInteractor/<>c
class CORDL_TYPE TouchHandGrabInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::TouchHandGrabInteractor___c*  __9;

/// @brief Field <>9__70_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_0, put=setStaticF___9__70_0)) ::System::Action*  __9__70_0;

/// @brief Field <>9__70_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__70_1, put=setStaticF___9__70_1)) ::System::Func_1<float_t>*  __9__70_1;

static inline ::Oculus::Interaction::TouchHandGrabInteractor___c* New_ctor() ;

/// @brief Method <.ctor>b__70_0, addr 0xa468a40, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__70_0() ;

/// @brief Method <.ctor>b__70_1, addr 0xa468a44, size 0x8, virtual false, abstract: false, final false
inline float_t __ctor_b__70_1() ;

/// @brief Method .ctor, addr 0xa468a38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::TouchHandGrabInteractor___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__70_0() ;

static inline ::System::Func_1<float_t>* getStaticF___9__70_1() ;

static inline void setStaticF___9(::Oculus::Interaction::TouchHandGrabInteractor___c*  value) ;

static inline void setStaticF___9__70_0(::System::Action*  value) ;

static inline void setStaticF___9__70_1(::System::Func_1<float_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchHandGrabInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchHandGrabInteractor___c(TouchHandGrabInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchHandGrabInteractor___c(TouchHandGrabInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15890};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies Oculus.Interaction.Input.HandJointId, System.Object, UnityEngine.Pose
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchHandGrabInteractor/FingerStatus
class CORDL_TYPE TouchHandGrabInteractor_FingerStatus : public ::System::Object {
public:
// Declarations
/// @brief Field CurlValueAtLock, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_CurlValueAtLock, put=__cordl_internal_set_CurlValueAtLock)) float_t  CurlValueAtLock;

/// @brief Field Joints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Joints, put=__cordl_internal_set_Joints)) ::ArrayW<::Oculus::Interaction::Input::HandJointId>  Joints;

/// @brief Field LocalJoints, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalJoints, put=__cordl_internal_set_LocalJoints)) ::ArrayW<::UnityEngine::Pose>  LocalJoints;

/// @brief Field Locked, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Locked, put=__cordl_internal_set_Locked)) bool  Locked;

/// @brief Field Selecting, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_Selecting, put=__cordl_internal_set_Selecting)) bool  Selecting;

/// @brief Field Timer, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_Timer, put=__cordl_internal_set_Timer)) float_t  Timer;

static inline ::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus* New_ctor() ;

constexpr float_t const& __cordl_internal_get_CurlValueAtLock() const;

constexpr float_t& __cordl_internal_get_CurlValueAtLock() ;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId> const& __cordl_internal_get_Joints() const;

constexpr ::ArrayW<::Oculus::Interaction::Input::HandJointId>& __cordl_internal_get_Joints() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get_LocalJoints() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get_LocalJoints() ;

constexpr bool const& __cordl_internal_get_Locked() const;

constexpr bool& __cordl_internal_get_Locked() ;

constexpr bool const& __cordl_internal_get_Selecting() const;

constexpr bool& __cordl_internal_get_Selecting() ;

constexpr float_t const& __cordl_internal_get_Timer() const;

constexpr float_t& __cordl_internal_get_Timer() ;

constexpr void __cordl_internal_set_CurlValueAtLock(float_t  value) ;

constexpr void __cordl_internal_set_Joints(::ArrayW<::Oculus::Interaction::Input::HandJointId>  value) ;

constexpr void __cordl_internal_set_LocalJoints(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set_Locked(bool  value) ;

constexpr void __cordl_internal_set_Selecting(bool  value) ;

constexpr void __cordl_internal_set_Timer(float_t  value) ;

/// @brief Method .ctor, addr 0xa465e24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchHandGrabInteractor_FingerStatus() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor_FingerStatus", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchHandGrabInteractor_FingerStatus(TouchHandGrabInteractor_FingerStatus && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractor_FingerStatus", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchHandGrabInteractor_FingerStatus(TouchHandGrabInteractor_FingerStatus const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15889};

/// @brief Field Locked, offset: 0x10, size: 0x1, def value: None
 bool  ___Locked;

/// @brief Field Selecting, offset: 0x11, size: 0x1, def value: None
 bool  ___Selecting;

/// @brief Field Joints, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Input::HandJointId>  ___Joints;

/// @brief Field LocalJoints, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ___LocalJoints;

/// @brief Field CurlValueAtLock, offset: 0x28, size: 0x4, def value: None
 float_t  ___CurlValueAtLock;

/// @brief Field Timer, offset: 0x2c, size: 0x4, def value: None
 float_t  ___Timer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___Locked) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___Selecting) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___Joints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___LocalJoints) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___CurlValueAtLock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus, ___Timer) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractor_FingerStatus) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

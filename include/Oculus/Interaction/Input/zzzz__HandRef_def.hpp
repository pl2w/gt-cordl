#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HandRef)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction::Input {
class ReadOnlyHandJointPoses;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace System {
class Action;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandRef;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandRef*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandRef*, "Oculus.Interaction.Input", "HandRef");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandRef
class CORDL_TYPE HandRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_Hand, put=set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsDominantHand)) bool  IsDominantHand;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

 __declspec(property(get=get_Scale)) float_t  Scale;

/// @brief Field <Hand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Hand_k__BackingField, put=__cordl_internal_set__Hand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _Hand_k__BackingField;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr operator  ::Oculus::Interaction::Input::IHand*() noexcept;

/// @brief Method Awake, addr 0xa511a4c, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerIsHighConfidence, addr 0xa5120dc, size 0xac, virtual true, abstract: false, final true
inline bool GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsPinching, addr 0xa511aa8, size 0xac, virtual true, abstract: false, final true
inline bool GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0xa512188, size 0xac, virtual true, abstract: false, final true
inline float_t GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetIndexFingerIsPinching, addr 0xa511b54, size 0xa4, virtual true, abstract: false, final true
inline bool GetIndexFingerIsPinching() ;

/// @brief Method GetJointPose, addr 0xa511ca4, size 0xbc, virtual true, abstract: false, final true
inline bool GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromWrist, addr 0xa511ec8, size 0xbc, virtual true, abstract: false, final true
inline bool GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa511d60, size 0xbc, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPosesFromWrist, addr 0xa511f84, size 0xac, virtual true, abstract: false, final true
inline bool GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist) ;

/// @brief Method GetJointPosesLocal, addr 0xa511e1c, size 0xac, virtual true, abstract: false, final true
inline bool GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesLocal) ;

/// @brief Method GetPalmPoseLocal, addr 0xa512030, size 0xac, virtual true, abstract: false, final true
inline bool GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetPointerPose, addr 0xa511bf8, size 0xac, virtual true, abstract: false, final true
inline bool GetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0xa512234, size 0xac, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method InjectAllHandRef, addr 0xa5122e0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllHandRef(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectHand, addr 0xa5122e4, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::Input::HandRef* New_ctor() ;

/// @brief Method Start, addr 0xa511aa4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__Hand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__Hand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr void __cordl_internal_set__Hand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa5123b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenHandUpdated, addr 0xa5118f0, size 0xac, virtual true, abstract: false, final true
inline void add_WhenHandUpdated(::System::Action*  value) ;

/// @brief Method get_Active, addr 0xa511a48, size 0x4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_CurrentDataVersion, addr 0xa51184c, size 0xa4, virtual true, abstract: false, final true
inline int32_t get_CurrentDataVersion() ;

/// [CompilerGenerated]
/// @brief Method get_Hand, addr 0xa5113c4, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_Handedness, addr 0xa5113d4, size 0xa0, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0xa511474, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_IsDominantHand, addr 0xa5115bc, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsDominantHand() ;

/// @brief Method get_IsHighConfidence, addr 0xa511518, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsPointerPoseValid, addr 0xa511704, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsPointerPoseValid() ;

/// @brief Method get_IsTrackedDataValid, addr 0xa5117a8, size 0xa4, virtual true, abstract: false, final true
inline bool get_IsTrackedDataValid() ;

/// @brief Method get_Scale, addr 0xa511660, size 0xa4, virtual true, abstract: false, final true
inline float_t get_Scale() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* i___Oculus__Interaction__Input__IHand() noexcept;

/// @brief Method remove_WhenHandUpdated, addr 0xa51199c, size 0xac, virtual true, abstract: false, final true
inline void remove_WhenHandUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Hand, addr 0xa5113cc, size 0x8, virtual false, abstract: false, final false
inline void set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandRef(HandRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandRef(HandRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16497};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [CompilerGenerated]
/// @brief Field <Hand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____Hand_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandRef, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandRef, ____Hand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandRef) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

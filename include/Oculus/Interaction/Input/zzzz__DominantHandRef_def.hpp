#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/DominantHandRef.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DominantHandRef)
namespace Oculus::Interaction::Input {
class DominantHandRef___c;
}
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
class DominantHandRef;
}
namespace Oculus::Interaction::Input {
class DominantHandRef___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::DominantHandRef*);
MARK_REF_T(::Oculus::Interaction::Input::DominantHandRef___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::DominantHandRef*, "Oculus.Interaction.Input", "DominantHandRef");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::DominantHandRef___c*, "Oculus.Interaction.Input", "DominantHandRef/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.DominantHandRef
class CORDL_TYPE DominantHandRef : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Input::DominantHandRef___c;

 __declspec(property(get=get_Active)) bool  Active;

 __declspec(property(get=get_CurrentDataVersion)) int32_t  CurrentDataVersion;

 __declspec(property(get=get_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsDominantHand)) bool  IsDominantHand;

 __declspec(property(get=get_IsHighConfidence)) bool  IsHighConfidence;

 __declspec(property(get=get_IsPointerPoseValid)) bool  IsPointerPoseValid;

 __declspec(property(get=get_IsTrackedDataValid)) bool  IsTrackedDataValid;

 __declspec(property(get=get_LeftHand, put=set_LeftHand)) ::Oculus::Interaction::Input::IHand*  LeftHand;

 __declspec(property(get=get_RightHand, put=set_RightHand)) ::Oculus::Interaction::Input::IHand*  RightHand;

 __declspec(property(get=get_Scale)) float_t  Scale;

 __declspec(property(get=get_SelectDominant, put=set_SelectDominant)) bool  SelectDominant;

/// @brief Field <LeftHand>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__LeftHand_k__BackingField, put=__cordl_internal_set__LeftHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _LeftHand_k__BackingField;

/// @brief Field <RightHand>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__RightHand_k__BackingField, put=__cordl_internal_set__RightHand_k__BackingField)) ::Oculus::Interaction::Input::IHand*  _RightHand_k__BackingField;

/// @brief Field _leftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__leftHand, put=__cordl_internal_set__leftHand)) ::UnityW<::UnityEngine::Object>  _leftHand;

/// @brief Field _rightHand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rightHand, put=__cordl_internal_set__rightHand)) ::UnityW<::UnityEngine::Object>  _rightHand;

/// @brief Field _selectDominant, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__selectDominant, put=__cordl_internal_set__selectDominant)) bool  _selectDominant;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _whenHandUpdated, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenHandUpdated, put=__cordl_internal_set__whenHandUpdated)) ::System::Action*  _whenHandUpdated;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::Input::IHand"
constexpr operator  ::Oculus::Interaction::Input::IHand*() noexcept;

/// @brief Method Awake, addr 0xa50b17c, size 0x74, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerIsHighConfidence, addr 0xa50bda8, size 0xb4, virtual true, abstract: false, final true
inline bool GetFingerIsHighConfidence(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerIsPinching, addr 0xa50b72c, size 0xb4, virtual true, abstract: false, final true
inline bool GetFingerIsPinching(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetFingerPinchStrength, addr 0xa50be5c, size 0xb4, virtual true, abstract: false, final true
inline float_t GetFingerPinchStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method GetIndexFingerIsPinching, addr 0xa50b7e0, size 0xac, virtual true, abstract: false, final true
inline bool GetIndexFingerIsPinching() ;

/// @brief Method GetJointPose, addr 0xa50b940, size 0xc4, virtual true, abstract: false, final true
inline bool GetJointPose(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseFromWrist, addr 0xa50bb7c, size 0xc4, virtual true, abstract: false, final true
inline bool GetJointPoseFromWrist(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPoseLocal, addr 0xa50ba04, size 0xc4, virtual true, abstract: false, final true
inline bool GetJointPoseLocal(::Oculus::Interaction::Input::HandJointId  handJointId, ::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetJointPosesFromWrist, addr 0xa50bc40, size 0xb4, virtual true, abstract: false, final true
inline bool GetJointPosesFromWrist(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesFromWrist) ;

/// @brief Method GetJointPosesLocal, addr 0xa50bac8, size 0xb4, virtual true, abstract: false, final true
inline bool GetJointPosesLocal(::by_ref<::Oculus::Interaction::Input::ReadOnlyHandJointPoses*>  jointPosesLocal) ;

/// @brief Method GetPalmPoseLocal, addr 0xa50bcf4, size 0xb4, virtual true, abstract: false, final true
inline bool GetPalmPoseLocal(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetPointerPose, addr 0xa50b88c, size 0xb4, virtual true, abstract: false, final true
inline bool GetPointerPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method GetRootPose, addr 0xa50bf10, size 0xb4, virtual true, abstract: false, final true
inline bool GetRootPose(::by_ref<::UnityEngine::Pose>  pose) ;

/// @brief Method HandleLeftHandUpdated, addr 0xa50b57c, size 0xd8, virtual false, abstract: false, final false
inline void HandleLeftHandUpdated() ;

/// @brief Method HandleRightHandUpdated, addr 0xa50b654, size 0xd8, virtual false, abstract: false, final false
inline void HandleRightHandUpdated() ;

/// @brief Method InjectAllDominantHandRef, addr 0xa50bfc4, size 0x28, virtual false, abstract: false, final false
inline void InjectAllDominantHandRef(::Oculus::Interaction::Input::IHand*  leftHand, ::Oculus::Interaction::Input::IHand*  rightHand) ;

/// @brief Method InjectLeftHand, addr 0xa50bfec, size 0xd0, virtual false, abstract: false, final false
inline void InjectLeftHand(::Oculus::Interaction::Input::IHand*  leftHand) ;

/// @brief Method InjectRightHand, addr 0xa50c0bc, size 0xd0, virtual false, abstract: false, final false
inline void InjectRightHand(::Oculus::Interaction::Input::IHand*  rightHand) ;

static inline ::Oculus::Interaction::Input::DominantHandRef* New_ctor() ;

/// @brief Method OnDisable, addr 0xa50b3cc, size 0x1b0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa50b21c, size 0x1b0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa50b1f0, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__LeftHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__LeftHand_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get__RightHand_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get__RightHand_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__leftHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__leftHand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__rightHand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__rightHand() ;

constexpr bool const& __cordl_internal_get__selectDominant() const;

constexpr bool& __cordl_internal_get__selectDominant() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::System::Action* const& __cordl_internal_get__whenHandUpdated() const;

constexpr ::System::Action*& __cordl_internal_get__whenHandUpdated() ;

constexpr void __cordl_internal_set__LeftHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__RightHand_k__BackingField(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__leftHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rightHand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__selectDominant(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__whenHandUpdated(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xa50c18c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_WhenHandUpdated, addr 0xa50b058, size 0x90, virtual true, abstract: false, final true
inline void add_WhenHandUpdated(::System::Action*  value) ;

/// @brief Method get_Active, addr 0xa50b178, size 0x4, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_CurrentDataVersion, addr 0xa50afac, size 0xac, virtual true, abstract: false, final true
inline int32_t get_CurrentDataVersion() ;

/// @brief Method get_Hand, addr 0xa50aa38, size 0xc4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_Hand() ;

/// @brief Method get_Handedness, addr 0xa50aafc, size 0xa8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// @brief Method get_IsConnected, addr 0xa50aba4, size 0xac, virtual true, abstract: false, final true
inline bool get_IsConnected() ;

/// @brief Method get_IsDominantHand, addr 0xa50acfc, size 0xac, virtual true, abstract: false, final true
inline bool get_IsDominantHand() ;

/// @brief Method get_IsHighConfidence, addr 0xa50ac50, size 0xac, virtual true, abstract: false, final true
inline bool get_IsHighConfidence() ;

/// @brief Method get_IsPointerPoseValid, addr 0xa50ae54, size 0xac, virtual true, abstract: false, final true
inline bool get_IsPointerPoseValid() ;

/// @brief Method get_IsTrackedDataValid, addr 0xa50af00, size 0xac, virtual true, abstract: false, final true
inline bool get_IsTrackedDataValid() ;

/// [CompilerGenerated]
/// @brief Method get_LeftHand, addr 0xa50aa08, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_LeftHand() ;

/// [CompilerGenerated]
/// @brief Method get_RightHand, addr 0xa50aa18, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IHand* get_RightHand() ;

/// @brief Method get_Scale, addr 0xa50ada8, size 0xac, virtual true, abstract: false, final true
inline float_t get_Scale() ;

/// @brief Method get_SelectDominant, addr 0xa50aa28, size 0x8, virtual false, abstract: false, final false
inline bool get_SelectDominant() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Convert to "::Oculus::Interaction::Input::IHand"
constexpr ::Oculus::Interaction::Input::IHand* i___Oculus__Interaction__Input__IHand() noexcept;

/// @brief Method remove_WhenHandUpdated, addr 0xa50b0e8, size 0x90, virtual true, abstract: false, final true
inline void remove_WhenHandUpdated(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LeftHand, addr 0xa50aa10, size 0x8, virtual false, abstract: false, final false
inline void set_LeftHand(::Oculus::Interaction::Input::IHand*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RightHand, addr 0xa50aa20, size 0x8, virtual false, abstract: false, final false
inline void set_RightHand(::Oculus::Interaction::Input::IHand*  value) ;

/// @brief Method set_SelectDominant, addr 0xa50aa30, size 0x8, virtual false, abstract: false, final false
inline void set_SelectDominant(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DominantHandRef() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DominantHandRef", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DominantHandRef(DominantHandRef && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DominantHandRef", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DominantHandRef(DominantHandRef const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16481};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _leftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____leftHand;

/// [CompilerGenerated]
/// @brief Field <LeftHand>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____LeftHand_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _rightHand, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____rightHand;

/// [CompilerGenerated]
/// @brief Field <RightHand>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ____RightHand_k__BackingField;

/// [SerializeField]
/// [Tooltip("If true, the HandRef will point to the Dominant hand. If false it will point to the Non Dominant Hand")]
/// @brief Field _selectDominant, offset: 0x40, size: 0x1, def value: None
 bool  ____selectDominant;

/// @brief Field _whenHandUpdated, offset: 0x48, size: 0x8, def value: None
 ::System::Action*  ____whenHandUpdated;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____leftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____LeftHand_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____rightHand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____RightHand_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____selectDominant) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____whenHandUpdated) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::DominantHandRef, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::DominantHandRef) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.DominantHandRef/<>c
class CORDL_TYPE DominantHandRef___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Input::DominantHandRef___c*  __9;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Action*  __9__60_0;

static inline ::Oculus::Interaction::Input::DominantHandRef___c* New_ctor() ;

/// @brief Method <.ctor>b__60_0, addr 0xa50c2f4, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__60_0() ;

/// @brief Method .ctor, addr 0xa50c2ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Input::DominantHandRef___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__60_0() ;

static inline void setStaticF___9(::Oculus::Interaction::Input::DominantHandRef___c*  value) ;

static inline void setStaticF___9__60_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DominantHandRef___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DominantHandRef___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DominantHandRef___c(DominantHandRef___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DominantHandRef___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DominantHandRef___c(DominantHandRef___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16480};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::Input::DominantHandRef___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

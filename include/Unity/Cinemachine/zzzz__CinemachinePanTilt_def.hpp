#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePanTilt.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_RecenterTargetModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePanTilt_ReferenceFrames_def.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachinePanTilt)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachinePanTilt_RecenterTargetModes;
}
namespace GlobalNamespace {
struct CinemachinePanTilt_ReferenceFrames;
}
namespace GlobalNamespace {
struct IInputAxisOwner_AxisDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
}
namespace Unity::Cinemachine {
class IInputAxisOwner;
}
namespace Unity::Cinemachine {
class IInputAxisResetSource;
}
namespace Unity::Cinemachine {
struct InputAxis;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachinePanTilt;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePanTilt*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePanTilt*, "Unity.Cinemachine", "CinemachinePanTilt");
// [AddComponentMenu("Cinemachine/Procedural/Rotation Control/Cinemachine Pan Tilt")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachinePanTilt.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachinePanTilt::RecenterTargetModes, Unity.Cinemachine.CinemachinePanTilt::ReferenceFrames, Unity.Cinemachine.InputAxis, UnityEngine.Quaternion
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePanTilt
class CORDL_TYPE CinemachinePanTilt : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using RecenterTargetModes = ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes;

using ReferenceFrames = ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field PanAxis, offset 0x30, size 0x34 
 __declspec(property(get=__cordl_internal_get_PanAxis, put=__cordl_internal_set_PanAxis)) ::Unity::Cinemachine::InputAxis  PanAxis;

/// @brief Field RecenterTarget, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RecenterTarget, put=__cordl_internal_set_RecenterTarget)) ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes  RecenterTarget;

/// @brief Field ReferenceFrame, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ReferenceFrame, put=__cordl_internal_set_ReferenceFrame)) ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames  ReferenceFrame;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field TiltAxis, offset 0x64, size 0x34 
 __declspec(property(get=__cordl_internal_get_TiltAxis, put=__cordl_internal_set_TiltAxis)) ::Unity::Cinemachine::InputAxis  TiltAxis;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_NormalizedModifierValue;

 __declspec(property(get=Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler)) bool  Unity_Cinemachine_IInputAxisResetSource_HasResetHandler;

/// @brief Field m_PreviousCameraRotation, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousCameraRotation, put=__cordl_internal_set_m_PreviousCameraRotation)) ::UnityEngine::Quaternion  m_PreviousCameraRotation;

/// @brief Field m_ResetHandler, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResetHandler, put=__cordl_internal_set_m_ResetHandler)) ::System::Action*  m_ResetHandler;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisOwner"
constexpr operator  ::Unity::Cinemachine::IInputAxisOwner*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr operator  ::Unity::Cinemachine::IInputAxisResetSource*() noexcept;

/// @brief Method ForceCameraPosition, addr 0xaea2fb4, size 0x14, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetRecenterTarget, addr 0xaea2d78, size 0x23c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetRecenterTarget() ;

/// @brief Method GetReferenceFrame, addr 0xaea2c24, size 0x154, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetReferenceFrame(::UnityEngine::Vector3  up) ;

/// @brief Method MutateCameraState, addr 0xaea27ec, size 0x438, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachinePanTilt* New_ctor() ;

/// @brief Method OnTransitionFromCamera, addr 0xaea3294, size 0x164, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaea22b8, size 0x4c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrePipelineMutateCameraState, addr 0xaea27e8, size 0x4, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method Reset, addr 0xaea2304, size 0x84, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetAxesForRotation, addr 0xaea2fc8, size 0x2cc, virtual false, abstract: false, final false
inline void SetAxesForRotation(::UnityEngine::Quaternion  targetRot) ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue, addr 0xaea2790, size 0x38, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue() ;

/// @brief Method Unity.Cinemachine.IInputAxisOwner.GetInputAxes, addr 0xaea240c, size 0x264, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisOwner_GetInputAxes(::System::Collections::Generic::List_1<::GlobalNamespace::IInputAxisOwner_AxisDescriptor>*  axes) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.RegisterResetHandler, addr 0xaea2670, size 0x90, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisResetSource_RegisterResetHandler(::System::Action*  handler) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.UnregisterResetHandler, addr 0xaea2700, size 0x90, virtual true, abstract: false, final true
inline void Unity_Cinemachine_IInputAxisResetSource_UnregisterResetHandler(::System::Action*  handler) ;

/// @brief Method Unity.Cinemachine.IInputAxisResetSource.get_HasResetHandler, addr 0xaea27c8, size 0x10, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_IInputAxisResetSource_get_HasResetHandler() ;

/// [CompilerGenerated]
/// @brief Method <GetRecenterTarget>g__NormalizeAngle|31_0, addr 0xaea33f8, size 0x30, virtual false, abstract: false, final false
static inline float_t _GetRecenterTarget_g__NormalizeAngle_31_0(float_t  angle) ;

/// [CompilerGenerated]
/// @brief Method <Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_0, addr 0xaea34b4, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> _Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_0() ;

/// [CompilerGenerated]
/// @brief Method <Unity.Cinemachine.IInputAxisOwner.GetInputAxes>b__14_1, addr 0xaea34bc, size 0x8, virtual false, abstract: false, final false
inline ::by_ref<::Unity::Cinemachine::InputAxis> _Unity_Cinemachine_IInputAxisOwner_GetInputAxes_b__14_1() ;

constexpr ::Unity::Cinemachine::InputAxis const& __cordl_internal_get_PanAxis() const;

constexpr ::Unity::Cinemachine::InputAxis& __cordl_internal_get_PanAxis() ;

constexpr ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes const& __cordl_internal_get_RecenterTarget() const;

constexpr ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes& __cordl_internal_get_RecenterTarget() ;

constexpr ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames const& __cordl_internal_get_ReferenceFrame() const;

constexpr ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames& __cordl_internal_get_ReferenceFrame() ;

constexpr ::Unity::Cinemachine::InputAxis const& __cordl_internal_get_TiltAxis() const;

constexpr ::Unity::Cinemachine::InputAxis& __cordl_internal_get_TiltAxis() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousCameraRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousCameraRotation() ;

constexpr ::System::Action* const& __cordl_internal_get_m_ResetHandler() const;

constexpr ::System::Action*& __cordl_internal_get_m_ResetHandler() ;

constexpr void __cordl_internal_set_PanAxis(::Unity::Cinemachine::InputAxis  value) ;

constexpr void __cordl_internal_set_RecenterTarget(::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes  value) ;

constexpr void __cordl_internal_set_ReferenceFrame(::GlobalNamespace::CinemachinePanTilt_ReferenceFrames  value) ;

constexpr void __cordl_internal_set_TiltAxis(::Unity::Cinemachine::InputAxis  value) ;

constexpr void __cordl_internal_set_m_PreviousCameraRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_ResetHandler(::System::Action*  value) ;

/// @brief Method .ctor, addr 0xaea3428, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DefaultPan, addr 0xaea2388, size 0x48, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultPan() ;

/// @brief Method get_DefaultTilt, addr 0xaea23d0, size 0x3c, virtual false, abstract: false, final false
static inline ::Unity::Cinemachine::InputAxis get_DefaultTilt() ;

/// @brief Method get_IsValid, addr 0xaea27d8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaea27e0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisOwner"
constexpr ::Unity::Cinemachine::IInputAxisOwner* i___Unity__Cinemachine__IInputAxisOwner() noexcept;

/// @brief Convert to "::Unity::Cinemachine::IInputAxisResetSource"
constexpr ::Unity::Cinemachine::IInputAxisResetSource* i___Unity__Cinemachine__IInputAxisResetSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePanTilt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePanTilt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePanTilt(CinemachinePanTilt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePanTilt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePanTilt(CinemachinePanTilt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22237};

/// @brief Field ReferenceFrame, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CinemachinePanTilt_ReferenceFrames  ___ReferenceFrame;

/// @brief Field RecenterTarget, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::CinemachinePanTilt_RecenterTargetModes  ___RecenterTarget;

/// [Tooltip("Axis representing the current horizontal rotation.  Value is in degrees and represents a rotation about the Y axis.")]
/// @brief Field PanAxis, offset: 0x30, size: 0x34, def value: None
 ::Unity::Cinemachine::InputAxis  ___PanAxis;

/// [Tooltip("Axis representing the current vertical rotation.  Value is in degrees and represents a rotation about the X axis.")]
/// @brief Field TiltAxis, offset: 0x64, size: 0x34, def value: None
 ::Unity::Cinemachine::InputAxis  ___TiltAxis;

/// @brief Field m_PreviousCameraRotation, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousCameraRotation;

/// @brief Field m_ResetHandler, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___m_ResetHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___ReferenceFrame) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___RecenterTarget) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___PanAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___TiltAxis) == 0x64, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___m_PreviousCameraRotation) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePanTilt, ___m_ResetHandler) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePanTilt) == 0xb0, "Size mismatch!");

} // namespace end def Unity::Cinemachine

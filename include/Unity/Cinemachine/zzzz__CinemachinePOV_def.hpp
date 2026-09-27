#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachinePOV.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__AxisState_Recentering_def.hpp"
#include "Unity/Cinemachine/zzzz__AxisState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachinePOV_RecenterTargetMode_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachinePOV)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachinePOV_RecenterTargetMode;
}
namespace Unity::Cinemachine {
class AxisState_IRequiresInput;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class CinemachineFreeLookModifier_IModifierValueSource;
}
namespace Unity::Cinemachine {
class CinemachinePanTilt;
}
namespace Unity::Cinemachine {
class ICinemachineCamera;
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
class CinemachinePOV;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachinePOV*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachinePOV*, "Unity.Cinemachine", "CinemachinePOV");
// [Obsolete("CinemachinePOV has been deprecated. Use CinemachinePanTilt instead")]
// [AddComponentMenu("")]
// [SaveDuringPlay]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)1)]
// Dependencies Unity.Cinemachine.AxisState, Unity.Cinemachine.AxisState::Recentering, Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachinePOV::RecenterTargetMode, UnityEngine.Quaternion
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachinePOV
class CORDL_TYPE CinemachinePOV : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using RecenterTargetMode = ::GlobalNamespace::CinemachinePOV_RecenterTargetMode;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

 __declspec(property(get=Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue)) float_t  Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_NormalizedModifierValue;

/// @brief Field m_ApplyBeforeBody, offset 0x150, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ApplyBeforeBody, put=__cordl_internal_set_m_ApplyBeforeBody)) bool  m_ApplyBeforeBody;

/// @brief Field m_HorizontalAxis, offset 0xc0, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_HorizontalAxis, put=__cordl_internal_set_m_HorizontalAxis)) ::Unity::Cinemachine::AxisState  m_HorizontalAxis;

/// @brief Field m_HorizontalRecentering, offset 0x130, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_HorizontalRecentering, put=__cordl_internal_set_m_HorizontalRecentering)) ::GlobalNamespace::AxisState_Recentering  m_HorizontalRecentering;

/// @brief Field m_PreviousCameraRotation, offset 0x154, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousCameraRotation, put=__cordl_internal_set_m_PreviousCameraRotation)) ::UnityEngine::Quaternion  m_PreviousCameraRotation;

/// @brief Field m_RecenterTarget, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RecenterTarget, put=__cordl_internal_set_m_RecenterTarget)) ::GlobalNamespace::CinemachinePOV_RecenterTargetMode  m_RecenterTarget;

/// @brief Field m_VerticalAxis, offset 0x30, size 0x70 
 __declspec(property(get=__cordl_internal_get_m_VerticalAxis, put=__cordl_internal_set_m_VerticalAxis)) ::Unity::Cinemachine::AxisState  m_VerticalAxis;

/// @brief Field m_VerticalRecentering, offset 0xa0, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_VerticalRecentering, put=__cordl_internal_set_m_VerticalRecentering)) ::GlobalNamespace::AxisState_Recentering  m_VerticalRecentering;

/// @brief Convert operator to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr operator  ::Unity::Cinemachine::AxisState_IRequiresInput*() noexcept;

/// @brief Convert operator to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr operator  ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource*() noexcept;

/// @brief Method ForceCameraPosition, addr 0xaed8ca8, size 0x14, virtual true, abstract: false, final false
inline void ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot) ;

/// @brief Method GetRecenterTarget, addr 0xaed8a10, size 0x268, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetRecenterTarget() ;

/// @brief Method MutateCameraState, addr 0xaed8554, size 0x4bc, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachinePOV* New_ctor() ;

/// @brief Method NormalizeAngle, addr 0xaed8c78, size 0x30, virtual false, abstract: false, final false
static inline float_t NormalizeAngle(float_t  angle) ;

/// @brief Method OnEnable, addr 0xaed8424, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTransitionFromCamera, addr 0xaed8ffc, size 0x194, virtual true, abstract: false, final false
inline bool OnTransitionFromCamera(::Unity::Cinemachine::ICinemachineCamera*  fromCam, ::UnityEngine::Vector3  worldUp, float_t  deltaTime) ;

/// @brief Method OnValidate, addr 0xaed83e8, size 0x3c, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PrePipelineMutateCameraState, addr 0xaed8550, size 0x4, virtual true, abstract: false, final false
inline void PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime) ;

/// @brief Method SetAxesForRotation, addr 0xaed8cbc, size 0x340, virtual false, abstract: false, final false
inline void SetAxesForRotation(::UnityEngine::Quaternion  targetRot) ;

/// @brief Method Unity.Cinemachine.AxisState.IRequiresInput.RequiresInput, addr 0xaed8548, size 0x8, virtual true, abstract: false, final true
inline bool Unity_Cinemachine_AxisState_IRequiresInput_RequiresInput() ;

/// @brief Method Unity.Cinemachine.CinemachineFreeLookModifier.IModifierValueSource.get_NormalizedModifierValue, addr 0xaed83a0, size 0x38, virtual true, abstract: false, final true
inline float_t Unity_Cinemachine_CinemachineFreeLookModifier_IModifierValueSource_get_NormalizedModifierValue() ;

/// @brief Method UpdateInputAxisProvider, addr 0xaed8440, size 0x108, virtual false, abstract: false, final false
inline void UpdateInputAxisProvider() ;

/// @brief Method UpgradeToCm3, addr 0xaed9190, size 0x64, virtual false, abstract: false, final false
inline void UpgradeToCm3(::Unity::Cinemachine::CinemachinePanTilt*  c) ;

constexpr bool const& __cordl_internal_get_m_ApplyBeforeBody() const;

constexpr bool& __cordl_internal_get_m_ApplyBeforeBody() ;

constexpr ::Unity::Cinemachine::AxisState const& __cordl_internal_get_m_HorizontalAxis() const;

constexpr ::Unity::Cinemachine::AxisState& __cordl_internal_get_m_HorizontalAxis() ;

constexpr ::GlobalNamespace::AxisState_Recentering const& __cordl_internal_get_m_HorizontalRecentering() const;

constexpr ::GlobalNamespace::AxisState_Recentering& __cordl_internal_get_m_HorizontalRecentering() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousCameraRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousCameraRotation() ;

constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode const& __cordl_internal_get_m_RecenterTarget() const;

constexpr ::GlobalNamespace::CinemachinePOV_RecenterTargetMode& __cordl_internal_get_m_RecenterTarget() ;

constexpr ::Unity::Cinemachine::AxisState const& __cordl_internal_get_m_VerticalAxis() const;

constexpr ::Unity::Cinemachine::AxisState& __cordl_internal_get_m_VerticalAxis() ;

constexpr ::GlobalNamespace::AxisState_Recentering const& __cordl_internal_get_m_VerticalRecentering() const;

constexpr ::GlobalNamespace::AxisState_Recentering& __cordl_internal_get_m_VerticalRecentering() ;

constexpr void __cordl_internal_set_m_ApplyBeforeBody(bool  value) ;

constexpr void __cordl_internal_set_m_HorizontalAxis(::Unity::Cinemachine::AxisState  value) ;

constexpr void __cordl_internal_set_m_HorizontalRecentering(::GlobalNamespace::AxisState_Recentering  value) ;

constexpr void __cordl_internal_set_m_PreviousCameraRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_RecenterTarget(::GlobalNamespace::CinemachinePOV_RecenterTargetMode  value) ;

constexpr void __cordl_internal_set_m_VerticalAxis(::Unity::Cinemachine::AxisState  value) ;

constexpr void __cordl_internal_set_m_VerticalRecentering(::GlobalNamespace::AxisState_Recentering  value) ;

/// @brief Method .ctor, addr 0xaed91f4, size 0x1a8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsValid, addr 0xaed83d8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_Stage, addr 0xaed83e0, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::AxisState_IRequiresInput"
constexpr ::Unity::Cinemachine::AxisState_IRequiresInput* i___Unity__Cinemachine__AxisState_IRequiresInput() noexcept;

/// @brief Convert to "::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource"
constexpr ::Unity::Cinemachine::CinemachineFreeLookModifier_IModifierValueSource* i___Unity__Cinemachine__CinemachineFreeLookModifier_IModifierValueSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachinePOV() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePOV", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachinePOV(CinemachinePOV && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachinePOV", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachinePOV(CinemachinePOV const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22436};

/// @brief Field m_RecenterTarget, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CinemachinePOV_RecenterTargetMode  ___m_RecenterTarget;

/// [Tooltip("The Vertical axis.  Value is -90..90. Controls the vertical orientation")]
/// @brief Field m_VerticalAxis, offset: 0x30, size: 0x70, def value: None
 ::Unity::Cinemachine::AxisState  ___m_VerticalAxis;

/// [Tooltip("Controls how automatic recentering of the Vertical axis is accomplished")]
/// @brief Field m_VerticalRecentering, offset: 0xa0, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  ___m_VerticalRecentering;

/// [Tooltip("The Horizontal axis.  Value is -180..180.  Controls the horizontal orientation")]
/// @brief Field m_HorizontalAxis, offset: 0xc0, size: 0x70, def value: None
 ::Unity::Cinemachine::AxisState  ___m_HorizontalAxis;

/// [Tooltip("Controls how automatic recentering of the Horizontal axis is accomplished")]
/// @brief Field m_HorizontalRecentering, offset: 0x130, size: 0x20, def value: None
 ::GlobalNamespace::AxisState_Recentering  ___m_HorizontalRecentering;

/// [HideInInspector]
/// [Tooltip("Obsolete - no longer used")]
/// @brief Field m_ApplyBeforeBody, offset: 0x150, size: 0x1, def value: None
 bool  ___m_ApplyBeforeBody;

/// @brief Field m_PreviousCameraRotation, offset: 0x154, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousCameraRotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_RecenterTarget) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_VerticalAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_VerticalRecentering) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_HorizontalAxis) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_HorizontalRecentering) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_ApplyBeforeBody) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachinePOV, ___m_PreviousCameraRotation) == 0x154, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachinePOV) == 0x168, "Size mismatch!");

} // namespace end def Unity::Cinemachine

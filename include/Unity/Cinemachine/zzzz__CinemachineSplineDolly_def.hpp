#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineSplineDolly.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_DampingSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineDolly_RotationMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineSplineRoll_RollCache_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineAutoDolly_def.hpp"
#include "Unity/Cinemachine/zzzz__SplineSettings_def.hpp"
#include "UnityEngine/Splines/zzzz__PathIndexUnit_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CinemachineSplineDolly)
namespace GlobalNamespace {
struct CinemachineCore_Stage;
}
namespace GlobalNamespace {
struct CinemachineSplineDolly_DampingSettings;
}
namespace GlobalNamespace {
struct CinemachineSplineDolly_RotationMode;
}
namespace Unity::Cinemachine {
struct CameraState;
}
namespace Unity::Cinemachine {
class ISplineReferencer;
}
namespace Unity::Cinemachine {
struct SplineSettings;
}
namespace UnityEngine::Splines {
struct PathIndexUnit;
}
namespace UnityEngine::Splines {
class SplineContainer;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::Cinemachine {
class CinemachineSplineDolly;
}
// Write type traits
MARK_REF_T(::Unity::Cinemachine::CinemachineSplineDolly*);
DEFINE_IL2CPP_CLASS(::Unity::Cinemachine::CinemachineSplineDolly*, "Unity.Cinemachine", "CinemachineSplineDolly");
// [AddComponentMenu("Cinemachine/Procedural/Position Control/Cinemachine Spline Dolly")]
// [SaveDuringPlay]
// [DisallowMultipleComponent]
// [CameraPipeline((Unity.Cinemachine.CinemachineCore::Stage)0)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.cinemachine@3.1/manual/CinemachineSplineDolly.html")]
// Dependencies Unity.Cinemachine.CinemachineComponentBase, Unity.Cinemachine.CinemachineSplineDolly::DampingSettings, Unity.Cinemachine.CinemachineSplineDolly::RotationMode, Unity.Cinemachine.CinemachineSplineRoll::RollCache, Unity.Cinemachine.SplineAutoDolly, Unity.Cinemachine.SplineSettings, UnityEngine.Quaternion, UnityEngine.Splines.PathIndexUnit, UnityEngine.Vector3
namespace Unity::Cinemachine {
// Is value type: false
// CS Name: Unity.Cinemachine.CinemachineSplineDolly
class CORDL_TYPE CinemachineSplineDolly : public ::Unity::Cinemachine::CinemachineComponentBase {
public:
// Declarations
using DampingSettings = ::GlobalNamespace::CinemachineSplineDolly_DampingSettings;

using RotationMode = ::GlobalNamespace::CinemachineSplineDolly_RotationMode;

/// @brief Field AutomaticDolly, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_AutomaticDolly, put=__cordl_internal_set_AutomaticDolly)) ::Unity::Cinemachine::SplineAutoDolly  AutomaticDolly;

 __declspec(property(get=get_CameraPosition, put=set_CameraPosition)) float_t  CameraPosition;

/// @brief Field CameraRotation, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_CameraRotation, put=__cordl_internal_set_CameraRotation)) ::GlobalNamespace::CinemachineSplineDolly_RotationMode  CameraRotation;

/// @brief Field Damping, offset 0x58, size 0x14 
 __declspec(property(get=__cordl_internal_get_Damping, put=__cordl_internal_set_Damping)) ::GlobalNamespace::CinemachineSplineDolly_DampingSettings  Damping;

 __declspec(property(get=get_IsValid)) bool  IsValid;

 __declspec(property(get=get_PositionUnits, put=set_PositionUnits)) ::UnityEngine::Splines::PathIndexUnit  PositionUnits;

 __declspec(property(get=get_Spline, put=set_Spline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  Spline;

/// @brief Field SplineOffset, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_SplineOffset, put=__cordl_internal_set_SplineOffset)) ::UnityEngine::Vector3  SplineOffset;

 __declspec(property(get=get_SplineSettings)) ::Unity::Cinemachine::SplineSettings  SplineSettings;

 __declspec(property(get=get_Stage)) ::GlobalNamespace::CinemachineCore_Stage  Stage;

/// @brief Field m_LegacyPosition, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyPosition, put=__cordl_internal_set_m_LegacyPosition)) float_t  m_LegacyPosition;

/// @brief Field m_LegacySpline, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LegacySpline, put=__cordl_internal_set_m_LegacySpline)) ::UnityW<::UnityEngine::Splines::SplineContainer>  m_LegacySpline;

/// @brief Field m_LegacyUnits, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LegacyUnits, put=__cordl_internal_set_m_LegacyUnits)) ::UnityEngine::Splines::PathIndexUnit  m_LegacyUnits;

/// @brief Field m_PreviousPosition, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_PreviousPosition, put=__cordl_internal_set_m_PreviousPosition)) ::UnityEngine::Vector3  m_PreviousPosition;

/// @brief Field m_PreviousRotation, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_PreviousRotation, put=__cordl_internal_set_m_PreviousRotation)) ::UnityEngine::Quaternion  m_PreviousRotation;

/// @brief Field m_PreviousSplinePosition, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousSplinePosition, put=__cordl_internal_set_m_PreviousSplinePosition)) float_t  m_PreviousSplinePosition;

/// @brief Field m_RollCache, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RollCache, put=__cordl_internal_set_m_RollCache)) ::GlobalNamespace::CinemachineSplineRoll_RollCache  m_RollCache;

/// @brief Field m_SplineSettings, offset 0x28, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_SplineSettings, put=__cordl_internal_set_m_SplineSettings)) ::Unity::Cinemachine::SplineSettings  m_SplineSettings;

/// @brief Convert operator to "::Unity::Cinemachine::ISplineReferencer"
constexpr operator  ::Unity::Cinemachine::ISplineReferencer*() noexcept;

/// @brief Method GetCameraRotationAtSplinePoint, addr 0xaea6a4c, size 0x214, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion GetCameraRotationAtSplinePoint(::UnityEngine::Quaternion  splineOrientation, ::UnityEngine::Vector3  up, ::by_ref<bool>  isDefault) ;

/// @brief Method GetMaxDampTime, addr 0xaea63d0, size 0x38, virtual true, abstract: false, final false
inline float_t GetMaxDampTime() ;

/// @brief Method MutateCameraState, addr 0xaea6408, size 0x644, virtual true, abstract: false, final false
inline void MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime) ;

static inline ::Unity::Cinemachine::CinemachineSplineDolly* New_ctor() ;

/// @brief Method OnDisable, addr 0xaea6324, size 0x24, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xaea6260, size 0xc4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0xaea610c, size 0xcc, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method PerformLegacyUpgrade, addr 0xaea6018, size 0xb8, virtual false, abstract: false, final false
inline void PerformLegacyUpgrade() ;

/// @brief Method Reset, addr 0xaea61d8, size 0x88, virtual false, abstract: false, final false
inline void Reset() ;

constexpr ::Unity::Cinemachine::SplineAutoDolly const& __cordl_internal_get_AutomaticDolly() const;

constexpr ::Unity::Cinemachine::SplineAutoDolly& __cordl_internal_get_AutomaticDolly() ;

constexpr ::GlobalNamespace::CinemachineSplineDolly_RotationMode const& __cordl_internal_get_CameraRotation() const;

constexpr ::GlobalNamespace::CinemachineSplineDolly_RotationMode& __cordl_internal_get_CameraRotation() ;

constexpr ::GlobalNamespace::CinemachineSplineDolly_DampingSettings const& __cordl_internal_get_Damping() const;

constexpr ::GlobalNamespace::CinemachineSplineDolly_DampingSettings& __cordl_internal_get_Damping() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_SplineOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_SplineOffset() ;

constexpr float_t const& __cordl_internal_get_m_LegacyPosition() const;

constexpr float_t& __cordl_internal_get_m_LegacyPosition() ;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer> const& __cordl_internal_get_m_LegacySpline() const;

constexpr ::UnityW<::UnityEngine::Splines::SplineContainer>& __cordl_internal_get_m_LegacySpline() ;

constexpr ::UnityEngine::Splines::PathIndexUnit const& __cordl_internal_get_m_LegacyUnits() const;

constexpr ::UnityEngine::Splines::PathIndexUnit& __cordl_internal_get_m_LegacyUnits() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_PreviousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_PreviousPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_PreviousRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_PreviousRotation() ;

constexpr float_t const& __cordl_internal_get_m_PreviousSplinePosition() const;

constexpr float_t& __cordl_internal_get_m_PreviousSplinePosition() ;

constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache const& __cordl_internal_get_m_RollCache() const;

constexpr ::GlobalNamespace::CinemachineSplineRoll_RollCache& __cordl_internal_get_m_RollCache() ;

constexpr ::Unity::Cinemachine::SplineSettings const& __cordl_internal_get_m_SplineSettings() const;

constexpr ::Unity::Cinemachine::SplineSettings& __cordl_internal_get_m_SplineSettings() ;

constexpr void __cordl_internal_set_AutomaticDolly(::Unity::Cinemachine::SplineAutoDolly  value) ;

constexpr void __cordl_internal_set_CameraRotation(::GlobalNamespace::CinemachineSplineDolly_RotationMode  value) ;

constexpr void __cordl_internal_set_Damping(::GlobalNamespace::CinemachineSplineDolly_DampingSettings  value) ;

constexpr void __cordl_internal_set_SplineOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LegacyPosition(float_t  value) ;

constexpr void __cordl_internal_set_m_LegacySpline(::UnityW<::UnityEngine::Splines::SplineContainer>  value) ;

constexpr void __cordl_internal_set_m_LegacyUnits(::UnityEngine::Splines::PathIndexUnit  value) ;

constexpr void __cordl_internal_set_m_PreviousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_PreviousRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_PreviousSplinePosition(float_t  value) ;

constexpr void __cordl_internal_set_m_RollCache(::GlobalNamespace::CinemachineSplineRoll_RollCache  value) ;

constexpr void __cordl_internal_set_m_SplineSettings(::Unity::Cinemachine::SplineSettings  value) ;

/// @brief Method .ctor, addr 0xaea6c60, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CameraPosition, addr 0xaea60e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_CameraPosition() ;

/// @brief Method get_IsValid, addr 0xaea6348, size 0x80, virtual true, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_PositionUnits, addr 0xaea60f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::PathIndexUnit get_PositionUnits() ;

/// @brief Method get_Spline, addr 0xaea60d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Splines::SplineContainer> get_Spline() ;

/// @brief Method get_SplineSettings, addr 0xaea60d0, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Unity::Cinemachine::SplineSettings> get_SplineSettings() ;

/// @brief Method get_Stage, addr 0xaea63c8, size 0x8, virtual true, abstract: false, final false
inline ::GlobalNamespace::CinemachineCore_Stage get_Stage() ;

/// @brief Convert to "::Unity::Cinemachine::ISplineReferencer"
constexpr ::Unity::Cinemachine::ISplineReferencer* i___Unity__Cinemachine__ISplineReferencer() noexcept;

/// @brief Method set_CameraPosition, addr 0xaea60f0, size 0x8, virtual false, abstract: false, final false
inline void set_CameraPosition(float_t  value) ;

/// @brief Method set_PositionUnits, addr 0xaea6100, size 0xc, virtual false, abstract: false, final false
inline void set_PositionUnits(::UnityEngine::Splines::PathIndexUnit  value) ;

/// @brief Method set_Spline, addr 0xaea60e0, size 0x8, virtual false, abstract: false, final false
inline void set_Spline(::UnityEngine::Splines::SplineContainer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CinemachineSplineDolly() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineDolly", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CinemachineSplineDolly(CinemachineSplineDolly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CinemachineSplineDolly", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CinemachineSplineDolly(CinemachineSplineDolly const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22244};

/// [SerializeField]
/// [FormerlySerializedAs("SplineSettings")]
/// @brief Field m_SplineSettings, offset: 0x28, size: 0x20, def value: None
 ::Unity::Cinemachine::SplineSettings  ___m_SplineSettings;

/// [Tooltip("Where to put the camera relative to the spline position.  X is perpendicular to the spline, Y is up, and Z is parallel to the spline.")]
/// @brief Field SplineOffset, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___SplineOffset;

/// [Tooltip("How to set the camera\'s rotation and Up.  This will affect the screen composition, because the camera Aim behaviours will always try to respect the Up direction.")]
/// [FormerlySerializedAs("CameraUp")]
/// @brief Field CameraRotation, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::CinemachineSplineDolly_RotationMode  ___CameraRotation;

/// [FoldoutWithEnabledButton("Enabled")]
/// [Tooltip("Settings for controlling damping, which causes the camera to move gradually towards the desired spline position")]
/// @brief Field Damping, offset: 0x58, size: 0x14, def value: None
 ::GlobalNamespace::CinemachineSplineDolly_DampingSettings  ___Damping;

/// [NoSaveDuringPlay]
/// [FoldoutWithEnabledButton("Enabled")]
/// [Tooltip("Controls how automatic dolly occurs.  A tracking target may be necessary to use this feature.")]
/// @brief Field AutomaticDolly, offset: 0x70, size: 0x10, def value: None
 ::Unity::Cinemachine::SplineAutoDolly  ___AutomaticDolly;

/// @brief Field m_PreviousSplinePosition, offset: 0x80, size: 0x4, def value: None
 float_t  ___m_PreviousSplinePosition;

/// @brief Field m_PreviousRotation, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_PreviousRotation;

/// @brief Field m_PreviousPosition, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_PreviousPosition;

/// @brief Field m_RollCache, offset: 0xa0, size: 0x8, def value: None
 ::GlobalNamespace::CinemachineSplineRoll_RollCache  ___m_RollCache;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("CameraPosition")]
/// @brief Field m_LegacyPosition, offset: 0xa8, size: 0x4, def value: None
 float_t  ___m_LegacyPosition;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("PositionUnits")]
/// @brief Field m_LegacyUnits, offset: 0xac, size: 0x4, def value: None
 ::UnityEngine::Splines::PathIndexUnit  ___m_LegacyUnits;

/// [SerializeField]
/// [HideInInspector]
/// [NoSaveDuringPlay]
/// [FormerlySerializedAs("Spline")]
/// @brief Field m_LegacySpline, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Splines::SplineContainer>  ___m_LegacySpline;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_SplineSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___SplineOffset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___CameraRotation) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___Damping) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___AutomaticDolly) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_PreviousSplinePosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_PreviousRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_PreviousPosition) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_RollCache) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_LegacyPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_LegacyUnits) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Unity::Cinemachine::CinemachineSplineDolly, ___m_LegacySpline) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::Unity::Cinemachine::CinemachineSplineDolly) == 0xb8, "Size mismatch!");

} // namespace end def Unity::Cinemachine

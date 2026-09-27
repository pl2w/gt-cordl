#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/HandControlledCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandControlledCosmetic)
namespace GlobalNamespace {
class BezierCurve;
}
namespace GlobalNamespace {
struct HandControlledCosmetic_RotationControl;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class HandControlledSettingsSO;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class HandControlledCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::HandControlledCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::HandControlledCosmetic*, "GorillaTag.Cosmetics", "HandControlledCosmetic");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.HandControlledCosmetic
class CORDL_TYPE HandControlledCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationControl = ::GlobalNamespace::HandControlledCosmetic_RotationControl;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xe9, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activeSettings, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeSettings, put=__cordl_internal_set_activeSettings)) ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  activeSettings;

/// @brief Field controlIndicatorCurve, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_controlIndicatorCurve, put=__cordl_internal_set_controlIndicatorCurve)) ::UnityW<::GlobalNamespace::BezierCurve>  controlIndicatorCurve;

/// @brief Field controllingHand, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_controllingHand, put=__cordl_internal_set_controllingHand)) ::UnityW<::UnityEngine::Transform>  controllingHand;

/// @brief Field debugRelativePositionTransform1, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugRelativePositionTransform1, put=__cordl_internal_set_debugRelativePositionTransform1)) ::UnityW<::UnityEngine::Transform>  debugRelativePositionTransform1;

/// @brief Field debugRelativePositionTransform2, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugRelativePositionTransform2, put=__cordl_internal_set_debugRelativePositionTransform2)) ::UnityW<::UnityEngine::Transform>  debugRelativePositionTransform2;

/// @brief Field handPositionOffset, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_handPositionOffset, put=__cordl_internal_set_handPositionOffset)) ::UnityEngine::Vector3  handPositionOffset;

/// @brief Field handRotationOffset, offset 0x5c, size 0x10 
 __declspec(property(get=__cordl_internal_get_handRotationOffset, put=__cordl_internal_set_handRotationOffset)) ::UnityEngine::Quaternion  handRotationOffset;

/// @brief Field highAngleLimits, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_highAngleLimits, put=__cordl_internal_set_highAngleLimits)) ::UnityEngine::Vector3  highAngleLimits;

/// @brief Field inactiveSettings, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_inactiveSettings, put=__cordl_internal_set_inactiveSettings)) ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  inactiveSettings;

/// @brief Field initialRotation, offset 0xd8, size 0x10 
 __declspec(property(get=__cordl_internal_get_initialRotation, put=__cordl_internal_set_initialRotation)) ::UnityEngine::Quaternion  initialRotation;

/// @brief Field isActive, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isActive, put=__cordl_internal_set_isActive)) bool  isActive;

/// @brief Field leftHandRotation, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_leftHandRotation, put=__cordl_internal_set_leftHandRotation)) ::UnityEngine::Quaternion  leftHandRotation;

/// @brief Field localEuler, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_localEuler, put=__cordl_internal_set_localEuler)) ::UnityEngine::Vector3  localEuler;

/// @brief Field lowAngleLimits, offset 0xa4, size 0xc 
 __declspec(property(get=__cordl_internal_get_lowAngleLimits, put=__cordl_internal_set_lowAngleLimits)) ::UnityEngine::Vector3  lowAngleLimits;

/// @brief Field myRig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field rightHandRotation, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_rightHandRotation, put=__cordl_internal_set_rightHandRotation)) ::UnityEngine::Quaternion  rightHandRotation;

/// @brief Field startHandInverseRotation, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_startHandInverseRotation, put=__cordl_internal_set_startHandInverseRotation)) ::UnityEngine::Quaternion  startHandInverseRotation;

/// @brief Field startHandRelativePosition, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_startHandRelativePosition, put=__cordl_internal_set_startHandRelativePosition)) ::UnityEngine::Vector3  startHandRelativePosition;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5d98830, size 0x164, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetRelativeHandPosition, addr 0x5d98b28, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetRelativeHandPosition() ;

static inline ::GorillaTag::Cosmetics::HandControlledCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d98e3c, size 0x98, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d98e38, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReverseClampDegrees, addr 0x5d98ed4, size 0x5c, virtual false, abstract: false, final false
inline float_t ReverseClampDegrees(float_t  value, float_t  low, float_t  high) ;

/// @brief Method SetControlIndicatorPoints, addr 0x5d98994, size 0x194, virtual false, abstract: false, final false
inline void SetControlIndicatorPoints() ;

/// @brief Method StartControl, addr 0x5d98b94, size 0x248, virtual false, abstract: false, final false
inline void StartControl(bool  leftHand, float_t  flexValue) ;

/// @brief Method StopControl, addr 0x5d98ddc, size 0x5c, virtual false, abstract: false, final false
inline void StopControl() ;

/// @brief Method Tick, addr 0x5d98f40, size 0x838, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO> const& __cordl_internal_get_activeSettings() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>& __cordl_internal_get_activeSettings() ;

constexpr ::UnityW<::GlobalNamespace::BezierCurve> const& __cordl_internal_get_controlIndicatorCurve() const;

constexpr ::UnityW<::GlobalNamespace::BezierCurve>& __cordl_internal_get_controlIndicatorCurve() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_controllingHand() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_controllingHand() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_debugRelativePositionTransform1() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_debugRelativePositionTransform1() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_debugRelativePositionTransform2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_debugRelativePositionTransform2() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_handPositionOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_handPositionOffset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_handRotationOffset() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_handRotationOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_highAngleLimits() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_highAngleLimits() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO> const& __cordl_internal_get_inactiveSettings() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>& __cordl_internal_get_inactiveSettings() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_initialRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_initialRotation() ;

constexpr bool const& __cordl_internal_get_isActive() const;

constexpr bool& __cordl_internal_get_isActive() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_leftHandRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_leftHandRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localEuler() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lowAngleLimits() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lowAngleLimits() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_rightHandRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_rightHandRotation() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_startHandInverseRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_startHandInverseRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_startHandRelativePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_startHandRelativePosition() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeSettings(::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  value) ;

constexpr void __cordl_internal_set_controlIndicatorCurve(::UnityW<::GlobalNamespace::BezierCurve>  value) ;

constexpr void __cordl_internal_set_controllingHand(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_debugRelativePositionTransform1(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_debugRelativePositionTransform2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_handPositionOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_handRotationOffset(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_highAngleLimits(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_inactiveSettings(::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  value) ;

constexpr void __cordl_internal_set_initialRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_isActive(bool  value) ;

constexpr void __cordl_internal_set_leftHandRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_localEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lowAngleLimits(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightHandRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startHandInverseRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_startHandRelativePosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d99778, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d98f30, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d98f38, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandControlledCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandControlledCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandControlledCosmetic(HandControlledCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandControlledCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandControlledCosmetic(HandControlledCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4943};

/// [SerializeField]
/// @brief Field activeSettings, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  ___activeSettings;

/// [SerializeField]
/// @brief Field inactiveSettings, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::HandControlledSettingsSO>  ___inactiveSettings;

/// [SerializeField]
/// @brief Field handPositionOffset, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___handPositionOffset;

/// [SerializeField]
/// @brief Field rightHandRotation, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___rightHandRotation;

/// [SerializeField]
/// @brief Field leftHandRotation, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___leftHandRotation;

/// @brief Field handRotationOffset, offset: 0x5c, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___handRotationOffset;

/// [SerializeField]
/// @brief Field controlIndicatorCurve, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BezierCurve>  ___controlIndicatorCurve;

/// [SerializeField]
/// @brief Field debugRelativePositionTransform1, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___debugRelativePositionTransform1;

/// [SerializeField]
/// @brief Field debugRelativePositionTransform2, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___debugRelativePositionTransform2;

/// @brief Field myRig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field controllingHand, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___controllingHand;

/// @brief Field startHandRelativePosition, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___startHandRelativePosition;

/// @brief Field lowAngleLimits, offset: 0xa4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lowAngleLimits;

/// @brief Field highAngleLimits, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___highAngleLimits;

/// @brief Field localEuler, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localEuler;

/// @brief Field startHandInverseRotation, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___startHandInverseRotation;

/// @brief Field initialRotation, offset: 0xd8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___initialRotation;

/// @brief Field isActive, offset: 0xe8, size: 0x1, def value: None
 bool  ___isActive;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xe9, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___activeSettings) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___inactiveSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___handPositionOffset) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___rightHandRotation) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___leftHandRotation) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___handRotationOffset) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___controlIndicatorCurve) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___debugRelativePositionTransform1) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___debugRelativePositionTransform2) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___myRig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___controllingHand) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___startHandRelativePosition) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___lowAngleLimits) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___highAngleLimits) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___localEuler) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___startHandInverseRotation) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___initialRotation) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ___isActive) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::HandControlledCosmetic, ____TickRunning_k__BackingField) == 0xe9, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::HandControlledCosmetic) == 0xf0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

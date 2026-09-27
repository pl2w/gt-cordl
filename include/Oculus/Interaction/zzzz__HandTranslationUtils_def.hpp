#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandTranslationUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandSpace_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandMirroring_HandsSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HandTranslationUtils)
namespace Oculus::Interaction::Input {
struct HandJointId;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace UnityEngine {
class GUIStyle;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class HandTranslationUtils;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::HandTranslationUtils*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::HandTranslationUtils*, "Oculus.Interaction", "HandTranslationUtils");
// Dependencies Oculus.Interaction.Input.HandMirroring::HandSpace, Oculus.Interaction.Input.HandMirroring::HandsSpace, System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.HandTranslationUtils
class CORDL_TYPE HandTranslationUtils : public ::System::Object {
public:
// Declarations
/// @brief Field HAND_JOINT_IDS_OpenXRtoOVR, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HAND_JOINT_IDS_OpenXRtoOVR, put=setStaticF_HAND_JOINT_IDS_OpenXRtoOVR)) ::ArrayW<int32_t>  HAND_JOINT_IDS_OpenXRtoOVR;

/// @brief Field _openXRLeft, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF__openXRLeft, put=setStaticF__openXRLeft)) ::GlobalNamespace::HandMirroring_HandSpace  _openXRLeft;

/// @brief Field _openXRRight, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF__openXRRight, put=setStaticF__openXRRight)) ::GlobalNamespace::HandMirroring_HandSpace  _openXRRight;

/// @brief Field _ovrLeft, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF__ovrLeft, put=setStaticF__ovrLeft)) ::GlobalNamespace::HandMirroring_HandSpace  _ovrLeft;

/// @brief Field _ovrRight, offset 0xffffffff, size 0x34 
 __declspec(property(get=getStaticF__ovrRight, put=setStaticF__ovrRight)) ::GlobalNamespace::HandMirroring_HandSpace  _ovrRight;

/// @brief Field openXRHands, offset 0xffffffff, size 0x68 
 __declspec(property(get=getStaticF_openXRHands, put=setStaticF_openXRHands)) ::GlobalNamespace::HandMirroring_HandsSpace  openXRHands;

/// @brief Field ovrHands, offset 0xffffffff, size 0x68 
 __declspec(property(get=getStaticF_ovrHands, put=setStaticF_ovrHands)) ::GlobalNamespace::HandMirroring_HandsSpace  ovrHands;

/// @brief Method OVRHandJointToOpenXR, addr 0xa3ff34c, size 0x20, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Input::HandJointId OVRHandJointToOpenXR(int32_t  ovrJointId) ;

/// @brief Method OVRHandRotationsToOpenXRPoses, addr 0xa3feba0, size 0x7ac, virtual false, abstract: false, final false
static inline bool OVRHandRotationsToOpenXRPoses(::ArrayW<::UnityEngine::Quaternion>  ovrJointRotations, ::Oculus::Interaction::Input::Handedness  handedness, ::by_ref<::ArrayW<::UnityEngine::Pose>>  targetPoses) ;

/// @brief Method OpenXRHandJointToOVR, addr 0xa3feb7c, size 0x24, virtual false, abstract: false, final false
static inline int32_t OpenXRHandJointToOVR(int32_t  openXRJointId) ;

/// @brief Method TransformOVRToOpenXRPosition, addr 0xa3ff36c, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 TransformOVRToOpenXRPosition(::UnityEngine::Vector3  position, ::Oculus::Interaction::Input::Handedness  handedness) ;

/// @brief Method TransformOVRToOpenXRRotation, addr 0xa3ff49c, size 0x130, virtual false, abstract: false, final false
static inline ::UnityEngine::Quaternion TransformOVRToOpenXRRotation(::UnityEngine::Quaternion  rotation, ::Oculus::Interaction::Input::Handedness  handedness) ;

static inline ::ArrayW<int32_t> getStaticF_HAND_JOINT_IDS_OpenXRtoOVR() ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF__openXRLeft() ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF__openXRRight() ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF__ovrLeft() ;

static inline ::GlobalNamespace::HandMirroring_HandSpace getStaticF__ovrRight() ;

static inline ::GlobalNamespace::HandMirroring_HandsSpace getStaticF_openXRHands() ;

static inline ::GlobalNamespace::HandMirroring_HandsSpace getStaticF_ovrHands() ;

/// @brief Method get_FixButtonStyle, addr 0xa3feaa8, size 0xd4, virtual false, abstract: false, final false
static inline ::UnityEngine::GUIStyle* get_FixButtonStyle() ;

static inline void setStaticF_HAND_JOINT_IDS_OpenXRtoOVR(::ArrayW<int32_t>  value) ;

static inline void setStaticF__openXRLeft(::GlobalNamespace::HandMirroring_HandSpace  value) ;

static inline void setStaticF__openXRRight(::GlobalNamespace::HandMirroring_HandSpace  value) ;

static inline void setStaticF__ovrLeft(::GlobalNamespace::HandMirroring_HandSpace  value) ;

static inline void setStaticF__ovrRight(::GlobalNamespace::HandMirroring_HandSpace  value) ;

static inline void setStaticF_openXRHands(::GlobalNamespace::HandMirroring_HandsSpace  value) ;

static inline void setStaticF_ovrHands(::GlobalNamespace::HandMirroring_HandsSpace  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandTranslationUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandTranslationUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandTranslationUtils(HandTranslationUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandTranslationUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandTranslationUtils(HandTranslationUtils const& ) = delete;

/// @brief Field UpgradeRequiredButton offset 0xffffffff size 0x8
static constexpr ::ConstString  UpgradeRequiredButton{u"Convert"};

/// @brief Field UpgradeRequiredMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  UpgradeRequiredMessage{u"Some fields do not contain the expected values of converting to OpenXR from the previous serialized data. Convert the values?"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15682};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::HandTranslationUtils) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction

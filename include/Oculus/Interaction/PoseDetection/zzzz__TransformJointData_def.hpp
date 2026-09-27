#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformJointData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(TransformJointData)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformJointData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformJointData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformJointData*, "Oculus.Interaction.PoseDetection", "TransformJointData");
// Dependencies Oculus.Interaction.Input.Handedness, System.Object, UnityEngine.Pose, UnityEngine.Vector3
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformJointData
class CORDL_TYPE TransformJointData : public ::System::Object {
public:
// Declarations
/// @brief Field CenterEyePose, offset 0x18, size 0x1c 
 __declspec(property(get=__cordl_internal_get_CenterEyePose, put=__cordl_internal_set_CenterEyePose)) ::UnityEngine::Pose  CenterEyePose;

/// @brief Field Handedness, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_Handedness, put=__cordl_internal_set_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

/// @brief Field IsValid, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsValid, put=__cordl_internal_set_IsValid)) bool  IsValid;

/// @brief Field TrackingSystemForward, offset 0x5c, size 0xc 
 __declspec(property(get=__cordl_internal_get_TrackingSystemForward, put=__cordl_internal_set_TrackingSystemForward)) ::UnityEngine::Vector3  TrackingSystemForward;

/// @brief Field TrackingSystemUp, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_TrackingSystemUp, put=__cordl_internal_set_TrackingSystemUp)) ::UnityEngine::Vector3  TrackingSystemUp;

/// @brief Field WristPose, offset 0x34, size 0x1c 
 __declspec(property(get=__cordl_internal_get_WristPose, put=__cordl_internal_set_WristPose)) ::UnityEngine::Pose  WristPose;

static inline ::Oculus::Interaction::PoseDetection::TransformJointData* New_ctor() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_CenterEyePose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_CenterEyePose() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get_Handedness() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get_Handedness() ;

constexpr bool const& __cordl_internal_get_IsValid() const;

constexpr bool& __cordl_internal_get_IsValid() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TrackingSystemForward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TrackingSystemForward() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_TrackingSystemUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_TrackingSystemUp() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_WristPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_WristPose() ;

constexpr void __cordl_internal_set_CenterEyePose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_Handedness(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set_IsValid(bool  value) ;

constexpr void __cordl_internal_set_TrackingSystemForward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_TrackingSystemUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_WristPose(::UnityEngine::Pose  value) ;

/// @brief Method .ctor, addr 0xa4a6b24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformJointData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformJointData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformJointData(TransformJointData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformJointData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformJointData(TransformJointData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16160};

/// @brief Field IsValid, offset: 0x10, size: 0x1, def value: None
 bool  ___IsValid;

/// @brief Field Handedness, offset: 0x14, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ___Handedness;

/// @brief Field CenterEyePose, offset: 0x18, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___CenterEyePose;

/// @brief Field WristPose, offset: 0x34, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___WristPose;

/// @brief Field TrackingSystemUp, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TrackingSystemUp;

/// @brief Field TrackingSystemForward, offset: 0x5c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___TrackingSystemForward;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___IsValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___Handedness) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___CenterEyePose) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___WristPose) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___TrackingSystemUp) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformJointData, ___TrackingSystemForward) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformJointData) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandDataAsset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__PoseOrigin_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HandDataAsset)
namespace Oculus::Interaction::Input {
class HandDataSourceConfig;
}
namespace Oculus::Interaction::Input {
template<typename TSelfType>
class ICopyFrom_1;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandDataAsset;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandDataAsset*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandDataAsset*, "Oculus.Interaction.Input", "HandDataAsset");
// Dependencies Oculus.Interaction.Input.PoseOrigin, System.Object, UnityEngine.Pose, UnityEngine.Quaternion
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandDataAsset
class CORDL_TYPE HandDataAsset : public ::System::Object {
public:
// Declarations
/// @brief Field Config, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_Config, put=__cordl_internal_set_Config)) ::Oculus::Interaction::Input::HandDataSourceConfig*  Config;

/// @brief Field FingerPinchStrength, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_FingerPinchStrength, put=__cordl_internal_set_FingerPinchStrength)) ::ArrayW<float_t>  FingerPinchStrength;

/// @brief Field HandScale, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_HandScale, put=__cordl_internal_set_HandScale)) float_t  HandScale;

/// @brief Field IsConnected, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsConnected, put=__cordl_internal_set_IsConnected)) bool  IsConnected;

/// @brief Field IsDataValid, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDataValid, put=__cordl_internal_set_IsDataValid)) bool  IsDataValid;

 __declspec(property(get=get_IsDataValidAndConnected)) bool  IsDataValidAndConnected;

/// @brief Field IsDominantHand, offset 0x94, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsDominantHand, put=__cordl_internal_set_IsDominantHand)) bool  IsDominantHand;

/// @brief Field IsFingerHighConfidence, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsFingerHighConfidence, put=__cordl_internal_set_IsFingerHighConfidence)) ::ArrayW<bool>  IsFingerHighConfidence;

/// @brief Field IsFingerPinching, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_IsFingerPinching, put=__cordl_internal_set_IsFingerPinching)) ::ArrayW<bool>  IsFingerPinching;

/// @brief Field IsHighConfidence, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsHighConfidence, put=__cordl_internal_set_IsHighConfidence)) bool  IsHighConfidence;

/// @brief Field IsTracked, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsTracked, put=__cordl_internal_set_IsTracked)) bool  IsTracked;

/// @brief Field JointPoses, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointPoses, put=__cordl_internal_set_JointPoses)) ::ArrayW<::UnityEngine::Pose>  JointPoses;

/// @brief Field JointRadii, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_JointRadii, put=__cordl_internal_set_JointRadii)) ::ArrayW<float_t>  JointRadii;

/// @brief Field Joints, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_Joints, put=__cordl_internal_set_Joints)) ::ArrayW<::UnityEngine::Quaternion>  Joints;

/// @brief Field PointerPose, offset 0x74, size 0x1c 
 __declspec(property(get=__cordl_internal_get_PointerPose, put=__cordl_internal_set_PointerPose)) ::UnityEngine::Pose  PointerPose;

/// @brief Field PointerPoseOrigin, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_PointerPoseOrigin, put=__cordl_internal_set_PointerPoseOrigin)) ::Oculus::Interaction::Input::PoseOrigin  PointerPoseOrigin;

/// @brief Field Root, offset 0x14, size 0x1c 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::UnityEngine::Pose  Root;

/// @brief Field RootPoseOrigin, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_RootPoseOrigin, put=__cordl_internal_set_RootPoseOrigin)) ::Oculus::Interaction::Input::PoseOrigin  RootPoseOrigin;

/// @brief Convert operator to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>"
constexpr operator  ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>*() noexcept;

/// @brief Method CopyFrom, addr 0xa508714, size 0x58, virtual true, abstract: false, final true
inline void CopyFrom(::Oculus::Interaction::Input::HandDataAsset*  source) ;

/// @brief Method CopyPosesFrom, addr 0xa50876c, size 0x100, virtual false, abstract: false, final false
inline void CopyPosesFrom(::Oculus::Interaction::Input::HandDataAsset*  source) ;

static inline ::Oculus::Interaction::Input::HandDataAsset* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig* const& __cordl_internal_get_Config() const;

constexpr ::Oculus::Interaction::Input::HandDataSourceConfig*& __cordl_internal_get_Config() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_FingerPinchStrength() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_FingerPinchStrength() ;

constexpr float_t const& __cordl_internal_get_HandScale() const;

constexpr float_t& __cordl_internal_get_HandScale() ;

constexpr bool const& __cordl_internal_get_IsConnected() const;

constexpr bool& __cordl_internal_get_IsConnected() ;

constexpr bool const& __cordl_internal_get_IsDataValid() const;

constexpr bool& __cordl_internal_get_IsDataValid() ;

constexpr bool const& __cordl_internal_get_IsDominantHand() const;

constexpr bool& __cordl_internal_get_IsDominantHand() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_IsFingerHighConfidence() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_IsFingerHighConfidence() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get_IsFingerPinching() const;

constexpr ::ArrayW<bool>& __cordl_internal_get_IsFingerPinching() ;

constexpr bool const& __cordl_internal_get_IsHighConfidence() const;

constexpr bool& __cordl_internal_get_IsHighConfidence() ;

constexpr bool const& __cordl_internal_get_IsTracked() const;

constexpr bool& __cordl_internal_get_IsTracked() ;

constexpr ::ArrayW<::UnityEngine::Pose> const& __cordl_internal_get_JointPoses() const;

constexpr ::ArrayW<::UnityEngine::Pose>& __cordl_internal_get_JointPoses() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_JointRadii() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_JointRadii() ;

constexpr ::ArrayW<::UnityEngine::Quaternion> const& __cordl_internal_get_Joints() const;

constexpr ::ArrayW<::UnityEngine::Quaternion>& __cordl_internal_get_Joints() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_PointerPose() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_PointerPose() ;

constexpr ::Oculus::Interaction::Input::PoseOrigin const& __cordl_internal_get_PointerPoseOrigin() const;

constexpr ::Oculus::Interaction::Input::PoseOrigin& __cordl_internal_get_PointerPoseOrigin() ;

constexpr ::UnityEngine::Pose const& __cordl_internal_get_Root() const;

constexpr ::UnityEngine::Pose& __cordl_internal_get_Root() ;

constexpr ::Oculus::Interaction::Input::PoseOrigin const& __cordl_internal_get_RootPoseOrigin() const;

constexpr ::Oculus::Interaction::Input::PoseOrigin& __cordl_internal_get_RootPoseOrigin() ;

constexpr void __cordl_internal_set_Config(::Oculus::Interaction::Input::HandDataSourceConfig*  value) ;

constexpr void __cordl_internal_set_FingerPinchStrength(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_HandScale(float_t  value) ;

constexpr void __cordl_internal_set_IsConnected(bool  value) ;

constexpr void __cordl_internal_set_IsDataValid(bool  value) ;

constexpr void __cordl_internal_set_IsDominantHand(bool  value) ;

constexpr void __cordl_internal_set_IsFingerHighConfidence(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_IsFingerPinching(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set_IsHighConfidence(bool  value) ;

constexpr void __cordl_internal_set_IsTracked(bool  value) ;

constexpr void __cordl_internal_set_JointPoses(::ArrayW<::UnityEngine::Pose>  value) ;

constexpr void __cordl_internal_set_JointRadii(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_Joints(::ArrayW<::UnityEngine::Quaternion>  value) ;

constexpr void __cordl_internal_set_PointerPose(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_PointerPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value) ;

constexpr void __cordl_internal_set_Root(::UnityEngine::Pose  value) ;

constexpr void __cordl_internal_set_RootPoseOrigin(::Oculus::Interaction::Input::PoseOrigin  value) ;

/// @brief Method .ctor, addr 0xa505720, size 0x174, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsDataValidAndConnected, addr 0xa50d73c, size 0x20, virtual false, abstract: false, final false
inline bool get_IsDataValidAndConnected() ;

/// @brief Convert to "::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>"
constexpr ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Input::HandDataAsset*>* i___Oculus__Interaction__Input__ICopyFrom_1___Oculus__Interaction__Input__HandDataAsset__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandDataAsset() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandDataAsset", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandDataAsset(HandDataAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandDataAsset", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandDataAsset(HandDataAsset const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16488};

/// @brief Field IsDataValid, offset: 0x10, size: 0x1, def value: None
 bool  ___IsDataValid;

/// @brief Field IsConnected, offset: 0x11, size: 0x1, def value: None
 bool  ___IsConnected;

/// @brief Field IsTracked, offset: 0x12, size: 0x1, def value: None
 bool  ___IsTracked;

/// @brief Field Root, offset: 0x14, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___Root;

/// @brief Field RootPoseOrigin, offset: 0x30, size: 0x4, def value: None
 ::Oculus::Interaction::Input::PoseOrigin  ___RootPoseOrigin;

/// @brief Field JointPoses, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Pose>  ___JointPoses;

/// @brief Field JointRadii, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<float_t>  ___JointRadii;

/// [Obsolete("Deprecated. Use JointPoses instead.")]
/// @brief Field Joints, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Quaternion>  ___Joints;

/// @brief Field IsHighConfidence, offset: 0x50, size: 0x1, def value: None
 bool  ___IsHighConfidence;

/// @brief Field IsFingerPinching, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<bool>  ___IsFingerPinching;

/// @brief Field IsFingerHighConfidence, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<bool>  ___IsFingerHighConfidence;

/// @brief Field FingerPinchStrength, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<float_t>  ___FingerPinchStrength;

/// @brief Field HandScale, offset: 0x70, size: 0x4, def value: None
 float_t  ___HandScale;

/// @brief Field PointerPose, offset: 0x74, size: 0x1c, def value: None
 ::UnityEngine::Pose  ___PointerPose;

/// @brief Field PointerPoseOrigin, offset: 0x90, size: 0x4, def value: None
 ::Oculus::Interaction::Input::PoseOrigin  ___PointerPoseOrigin;

/// @brief Field IsDominantHand, offset: 0x94, size: 0x1, def value: None
 bool  ___IsDominantHand;

/// @brief Field Config, offset: 0x98, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandDataSourceConfig*  ___Config;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsDataValid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsConnected) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsTracked) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___Root) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___RootPoseOrigin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___JointPoses) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___JointRadii) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___Joints) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsHighConfidence) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsFingerPinching) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsFingerHighConfidence) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___FingerPinchStrength) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___HandScale) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___PointerPose) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___PointerPoseOrigin) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___IsDominantHand) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataAsset, ___Config) == 0x98, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandDataAsset) == 0xa0, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

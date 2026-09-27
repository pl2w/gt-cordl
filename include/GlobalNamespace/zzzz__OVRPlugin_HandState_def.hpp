#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_HandFingerPinch_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStatus_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Vector3f_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_HandState)
namespace GlobalNamespace {
struct OVRPlugin_Quatf;
}
namespace GlobalNamespace {
struct OVRPlugin_TrackingConfidence;
}
namespace GlobalNamespace {
struct OVRPlugin_Vector3f;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandState, "", "OVRPlugin/HandState");
// Dependencies OVRPlugin::HandFingerPinch, OVRPlugin::HandStatus, OVRPlugin::Posef, OVRPlugin::Quatf, OVRPlugin::TrackingConfidence, OVRPlugin::Vector3f
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandState
struct CORDL_TYPE OVRPlugin_HandState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandState() ;

// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_HandStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "RootPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePositions", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pinches", ty: "::GlobalNamespace::OVRPlugin_HandFingerPinch", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointerPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandConfidence", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_TrackingConfidence>", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandState(::GlobalNamespace::OVRPlugin_HandStatus  Status, ::GlobalNamespace::OVRPlugin_Posef  RootPose, ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  BoneRotations, ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  BonePositions, ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches, ::ArrayW<float_t>  PinchStrength, ::GlobalNamespace::OVRPlugin_Posef  PointerPose, float_t  HandScale, ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence, ::ArrayW<::GlobalNamespace::OVRPlugin_TrackingConfidence>  FingerConfidences, double_t  RequestedTimeStamp, double_t  SampleTimeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12136};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x80};

/// @brief Field Status, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandStatus  Status;

/// @brief Field RootPose, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  RootPose;

/// @brief Field BoneRotations, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Quatf>  BoneRotations;

/// @brief Field BonePositions, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_Vector3f>  BonePositions;

/// @brief Field Pinches, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches;

/// @brief Field PinchStrength, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<float_t>  PinchStrength;

/// @brief Field PointerPose, offset: 0x40, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  PointerPose;

/// @brief Field HandScale, offset: 0x5c, size: 0x4, def value: None
 float_t  HandScale;

/// @brief Field HandConfidence, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence;

/// @brief Field FingerConfidences, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_TrackingConfidence>  FingerConfidences;

/// @brief Field RequestedTimeStamp, offset: 0x70, size: 0x8, def value: None
 double_t  RequestedTimeStamp;

/// @brief Field SampleTimeStamp, offset: 0x78, size: 0x8, def value: None
 double_t  SampleTimeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, RootPose) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, BoneRotations) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, BonePositions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, Pinches) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, PinchStrength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, PointerPose) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, HandScale) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, HandConfidence) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, FingerConfidences) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, RequestedTimeStamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState, SampleTimeStamp) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandState) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

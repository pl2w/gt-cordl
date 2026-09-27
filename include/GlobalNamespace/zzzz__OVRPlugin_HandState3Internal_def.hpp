#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandState3Internal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_HandFingerPinch_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStatus_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_HandState3Internal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandState3Internal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandState3Internal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandState3Internal, "", "OVRPlugin/HandState3Internal");
// Dependencies OVRPlugin::HandFingerPinch, OVRPlugin::HandStatus, OVRPlugin::Posef, OVRPlugin::TrackingConfidence
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandState3Internal
struct CORDL_TYPE OVRPlugin_HandState3Internal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandState3Internal() ;

// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_HandStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "RootPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_0", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_1", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_2", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_3", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_4", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_5", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_6", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_7", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_8", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_9", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_10", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_11", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_12", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_13", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_14", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_15", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_16", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_17", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_18", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_19", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_20", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_21", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_22", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_23", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_24", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BonePoses_25", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pinches", ty: "::GlobalNamespace::OVRPlugin_HandFingerPinch", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointerPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandConfidence", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_0", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_1", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_2", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_3", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_4", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandState3Internal(::GlobalNamespace::OVRPlugin_HandStatus  Status, ::GlobalNamespace::OVRPlugin_Posef  RootPose, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_0, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_1, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_2, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_3, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_4, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_5, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_6, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_7, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_8, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_9, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_10, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_11, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_12, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_13, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_14, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_15, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_16, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_17, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_18, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_19, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_20, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_21, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_22, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_23, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_24, ::GlobalNamespace::OVRPlugin_Posef  BonePoses_25, ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches, float_t  PinchStrength_0, float_t  PinchStrength_1, float_t  PinchStrength_2, float_t  PinchStrength_3, float_t  PinchStrength_4, ::GlobalNamespace::OVRPlugin_Posef  PointerPose, float_t  HandScale, ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_0, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_1, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_2, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_3, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_4, double_t  RequestedTimeStamp, double_t  SampleTimeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12140};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x358};

/// @brief Field Status, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandStatus  Status;

/// @brief Field RootPose, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  RootPose;

/// @brief Field BonePoses_0, offset: 0x20, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_0;

/// @brief Field BonePoses_1, offset: 0x3c, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_1;

/// @brief Field BonePoses_2, offset: 0x58, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_2;

/// @brief Field BonePoses_3, offset: 0x74, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_3;

/// @brief Field BonePoses_4, offset: 0x90, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_4;

/// @brief Field BonePoses_5, offset: 0xac, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_5;

/// @brief Field BonePoses_6, offset: 0xc8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_6;

/// @brief Field BonePoses_7, offset: 0xe4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_7;

/// @brief Field BonePoses_8, offset: 0x100, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_8;

/// @brief Field BonePoses_9, offset: 0x11c, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_9;

/// @brief Field BonePoses_10, offset: 0x138, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_10;

/// @brief Field BonePoses_11, offset: 0x154, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_11;

/// @brief Field BonePoses_12, offset: 0x170, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_12;

/// @brief Field BonePoses_13, offset: 0x18c, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_13;

/// @brief Field BonePoses_14, offset: 0x1a8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_14;

/// @brief Field BonePoses_15, offset: 0x1c4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_15;

/// @brief Field BonePoses_16, offset: 0x1e0, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_16;

/// @brief Field BonePoses_17, offset: 0x1fc, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_17;

/// @brief Field BonePoses_18, offset: 0x218, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_18;

/// @brief Field BonePoses_19, offset: 0x234, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_19;

/// @brief Field BonePoses_20, offset: 0x250, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_20;

/// @brief Field BonePoses_21, offset: 0x26c, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_21;

/// @brief Field BonePoses_22, offset: 0x288, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_22;

/// @brief Field BonePoses_23, offset: 0x2a4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_23;

/// @brief Field BonePoses_24, offset: 0x2c0, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_24;

/// @brief Field BonePoses_25, offset: 0x2dc, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  BonePoses_25;

/// @brief Field Pinches, offset: 0x2f8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches;

/// @brief Field PinchStrength_0, offset: 0x2fc, size: 0x4, def value: None
 float_t  PinchStrength_0;

/// @brief Field PinchStrength_1, offset: 0x300, size: 0x4, def value: None
 float_t  PinchStrength_1;

/// @brief Field PinchStrength_2, offset: 0x304, size: 0x4, def value: None
 float_t  PinchStrength_2;

/// @brief Field PinchStrength_3, offset: 0x308, size: 0x4, def value: None
 float_t  PinchStrength_3;

/// @brief Field PinchStrength_4, offset: 0x30c, size: 0x4, def value: None
 float_t  PinchStrength_4;

/// @brief Field PointerPose, offset: 0x310, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  PointerPose;

/// @brief Field HandScale, offset: 0x32c, size: 0x4, def value: None
 float_t  HandScale;

/// @brief Field HandConfidence, offset: 0x330, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence;

/// @brief Field FingerConfidences_0, offset: 0x334, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_0;

/// @brief Field FingerConfidences_1, offset: 0x338, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_1;

/// @brief Field FingerConfidences_2, offset: 0x33c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_2;

/// @brief Field FingerConfidences_3, offset: 0x340, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_3;

/// @brief Field FingerConfidences_4, offset: 0x344, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_4;

/// @brief Field RequestedTimeStamp, offset: 0x348, size: 0x8, def value: None
 double_t  RequestedTimeStamp;

/// @brief Field SampleTimeStamp, offset: 0x350, size: 0x8, def value: None
 double_t  SampleTimeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, RootPose) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_1) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_3) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_4) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_5) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_6) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_7) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_8) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_9) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_10) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_11) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_12) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_13) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_14) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_15) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_16) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_17) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_18) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_19) == 0x234, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_20) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_21) == 0x26c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_22) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_23) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_24) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, BonePoses_25) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, Pinches) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PinchStrength_0) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PinchStrength_1) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PinchStrength_2) == 0x304, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PinchStrength_3) == 0x308, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PinchStrength_4) == 0x30c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, PointerPose) == 0x310, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, HandScale) == 0x32c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, HandConfidence) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, FingerConfidences_0) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, FingerConfidences_1) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, FingerConfidences_2) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, FingerConfidences_3) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, FingerConfidences_4) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, RequestedTimeStamp) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandState3Internal, SampleTimeStamp) == 0x350, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandState3Internal) == 0x358, "Size mismatch!");

} // namespace end def GlobalNamespace

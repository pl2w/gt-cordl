#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_HandStateInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_HandFingerPinch_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_HandStatus_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Posef_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_Quatf_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_TrackingConfidence_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_HandStateInternal)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_HandStateInternal;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_HandStateInternal);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_HandStateInternal, "", "OVRPlugin/HandStateInternal");
// Dependencies OVRPlugin::HandFingerPinch, OVRPlugin::HandStatus, OVRPlugin::Posef, OVRPlugin::Quatf, OVRPlugin::TrackingConfidence
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/HandStateInternal
struct CORDL_TYPE OVRPlugin_HandStateInternal {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_HandStateInternal() ;

// Ctor Parameters [CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_HandStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "RootPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_0", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_1", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_2", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_3", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_4", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_5", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_6", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_7", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_8", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_9", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_10", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_11", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_12", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_13", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_14", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_15", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_16", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_17", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_18", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_19", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_20", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_21", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_22", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "BoneRotations_23", ty: "::GlobalNamespace::OVRPlugin_Quatf", modifiers: "", def_value: None, comment: None }, CppParam { name: "Pinches", ty: "::GlobalNamespace::OVRPlugin_HandFingerPinch", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_0", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_1", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_2", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_3", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PinchStrength_4", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PointerPose", ty: "::GlobalNamespace::OVRPlugin_Posef", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "HandConfidence", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_0", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_1", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_2", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_3", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "FingerConfidences_4", ty: "::GlobalNamespace::OVRPlugin_TrackingConfidence", modifiers: "", def_value: None, comment: None }, CppParam { name: "RequestedTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SampleTimeStamp", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_HandStateInternal(::GlobalNamespace::OVRPlugin_HandStatus  Status, ::GlobalNamespace::OVRPlugin_Posef  RootPose, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_0, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_1, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_2, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_3, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_4, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_5, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_6, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_7, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_8, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_9, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_10, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_11, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_12, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_13, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_14, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_15, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_16, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_17, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_18, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_19, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_20, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_21, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_22, ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_23, ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches, float_t  PinchStrength_0, float_t  PinchStrength_1, float_t  PinchStrength_2, float_t  PinchStrength_3, float_t  PinchStrength_4, ::GlobalNamespace::OVRPlugin_Posef  PointerPose, float_t  HandScale, ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_0, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_1, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_2, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_3, ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_4, double_t  RequestedTimeStamp, double_t  SampleTimeStamp) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12139};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x200};

/// @brief Field Status, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandStatus  Status;

/// @brief Field RootPose, offset: 0x4, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  RootPose;

/// @brief Field BoneRotations_0, offset: 0x20, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_0;

/// @brief Field BoneRotations_1, offset: 0x30, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_1;

/// @brief Field BoneRotations_2, offset: 0x40, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_2;

/// @brief Field BoneRotations_3, offset: 0x50, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_3;

/// @brief Field BoneRotations_4, offset: 0x60, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_4;

/// @brief Field BoneRotations_5, offset: 0x70, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_5;

/// @brief Field BoneRotations_6, offset: 0x80, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_6;

/// @brief Field BoneRotations_7, offset: 0x90, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_7;

/// @brief Field BoneRotations_8, offset: 0xa0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_8;

/// @brief Field BoneRotations_9, offset: 0xb0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_9;

/// @brief Field BoneRotations_10, offset: 0xc0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_10;

/// @brief Field BoneRotations_11, offset: 0xd0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_11;

/// @brief Field BoneRotations_12, offset: 0xe0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_12;

/// @brief Field BoneRotations_13, offset: 0xf0, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_13;

/// @brief Field BoneRotations_14, offset: 0x100, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_14;

/// @brief Field BoneRotations_15, offset: 0x110, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_15;

/// @brief Field BoneRotations_16, offset: 0x120, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_16;

/// @brief Field BoneRotations_17, offset: 0x130, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_17;

/// @brief Field BoneRotations_18, offset: 0x140, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_18;

/// @brief Field BoneRotations_19, offset: 0x150, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_19;

/// @brief Field BoneRotations_20, offset: 0x160, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_20;

/// @brief Field BoneRotations_21, offset: 0x170, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_21;

/// @brief Field BoneRotations_22, offset: 0x180, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_22;

/// @brief Field BoneRotations_23, offset: 0x190, size: 0x10, def value: None
 ::GlobalNamespace::OVRPlugin_Quatf  BoneRotations_23;

/// @brief Field Pinches, offset: 0x1a0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_HandFingerPinch  Pinches;

/// @brief Field PinchStrength_0, offset: 0x1a4, size: 0x4, def value: None
 float_t  PinchStrength_0;

/// @brief Field PinchStrength_1, offset: 0x1a8, size: 0x4, def value: None
 float_t  PinchStrength_1;

/// @brief Field PinchStrength_2, offset: 0x1ac, size: 0x4, def value: None
 float_t  PinchStrength_2;

/// @brief Field PinchStrength_3, offset: 0x1b0, size: 0x4, def value: None
 float_t  PinchStrength_3;

/// @brief Field PinchStrength_4, offset: 0x1b4, size: 0x4, def value: None
 float_t  PinchStrength_4;

/// @brief Field PointerPose, offset: 0x1b8, size: 0x1c, def value: None
 ::GlobalNamespace::OVRPlugin_Posef  PointerPose;

/// @brief Field HandScale, offset: 0x1d4, size: 0x4, def value: None
 float_t  HandScale;

/// @brief Field HandConfidence, offset: 0x1d8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  HandConfidence;

/// @brief Field FingerConfidences_0, offset: 0x1dc, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_0;

/// @brief Field FingerConfidences_1, offset: 0x1e0, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_1;

/// @brief Field FingerConfidences_2, offset: 0x1e4, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_2;

/// @brief Field FingerConfidences_3, offset: 0x1e8, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_3;

/// @brief Field FingerConfidences_4, offset: 0x1ec, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_TrackingConfidence  FingerConfidences_4;

/// @brief Field RequestedTimeStamp, offset: 0x1f0, size: 0x8, def value: None
 double_t  RequestedTimeStamp;

/// @brief Field SampleTimeStamp, offset: 0x1f8, size: 0x8, def value: None
 double_t  SampleTimeStamp;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, Status) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, RootPose) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_3) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_5) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_6) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_7) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_8) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_9) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_10) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_11) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_12) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_13) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_14) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_15) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_16) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_17) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_18) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_19) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_20) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_21) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_22) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, BoneRotations_23) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, Pinches) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PinchStrength_0) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PinchStrength_1) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PinchStrength_2) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PinchStrength_3) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PinchStrength_4) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, PointerPose) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, HandScale) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, HandConfidence) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, FingerConfidences_0) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, FingerConfidences_1) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, FingerConfidences_2) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, FingerConfidences_3) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, FingerConfidences_4) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, RequestedTimeStamp) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_HandStateInternal, SampleTimeStamp) == 0x1f8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_HandStateInternal) == 0x200, "Size mismatch!");

} // namespace end def GlobalNamespace

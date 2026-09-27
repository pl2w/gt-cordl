#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointLocation_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyJointSet_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingCalibrationState_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_BodyTrackingFidelity2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_BodyState)
namespace GlobalNamespace {
struct OVRPlugin_BodyJointLocation;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BodyState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BodyState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BodyState, "", "OVRPlugin/BodyState");
// Dependencies OVRPlugin::BodyJointLocation, OVRPlugin::BodyJointSet, OVRPlugin::BodyTrackingCalibrationState, OVRPlugin::BodyTrackingFidelity2
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BodyState
struct CORDL_TYPE OVRPlugin_BodyState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BodyState() ;

// Ctor Parameters [CppParam { name: "JointLocations", ty: "::ArrayW<::GlobalNamespace::OVRPlugin_BodyJointLocation>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Confidence", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "SkeletonChangedCount", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "JointSet", ty: "::GlobalNamespace::OVRPlugin_BodyJointSet", modifiers: "", def_value: None, comment: None }, CppParam { name: "CalibrationStatus", ty: "::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState", modifiers: "", def_value: None, comment: None }, CppParam { name: "Fidelity", ty: "::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BodyState(::ArrayW<::GlobalNamespace::OVRPlugin_BodyJointLocation>  JointLocations, float_t  Confidence, uint32_t  SkeletonChangedCount, double_t  Time, ::GlobalNamespace::OVRPlugin_BodyJointSet  JointSet, ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  CalibrationStatus, ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  Fidelity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12159};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field JointLocations, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::OVRPlugin_BodyJointLocation>  JointLocations;

/// @brief Field Confidence, offset: 0x8, size: 0x4, def value: None
 float_t  Confidence;

/// @brief Field SkeletonChangedCount, offset: 0xc, size: 0x4, def value: None
 uint32_t  SkeletonChangedCount;

/// @brief Field Time, offset: 0x10, size: 0x8, def value: None
 double_t  Time;

/// @brief Field JointSet, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyJointSet  JointSet;

/// @brief Field CalibrationStatus, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationState  CalibrationStatus;

/// @brief Field Fidelity, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_BodyTrackingFidelity2  Fidelity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, JointLocations) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, Confidence) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, SkeletonChangedCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, Time) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, JointSet) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, CalibrationStatus) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyState, Fidelity) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BodyState) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

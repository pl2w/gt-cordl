#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_FaceState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_FaceExpressionStatus_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_FaceTrackingDataSource_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_FaceState)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_FaceState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_FaceState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_FaceState, "", "OVRPlugin/FaceState");
// Dependencies OVRPlugin::FaceExpressionStatus, OVRPlugin::FaceTrackingDataSource
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/FaceState
struct CORDL_TYPE OVRPlugin_FaceState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_FaceState() ;

// Ctor Parameters [CppParam { name: "ExpressionWeights", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "ExpressionWeightConfidences", ty: "::ArrayW<float_t>", modifiers: "", def_value: None, comment: None }, CppParam { name: "Status", ty: "::GlobalNamespace::OVRPlugin_FaceExpressionStatus", modifiers: "", def_value: None, comment: None }, CppParam { name: "DataSource", ty: "::GlobalNamespace::OVRPlugin_FaceTrackingDataSource", modifiers: "", def_value: None, comment: None }, CppParam { name: "Time", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_FaceState(::ArrayW<float_t>  ExpressionWeights, ::ArrayW<float_t>  ExpressionWeightConfidences, ::GlobalNamespace::OVRPlugin_FaceExpressionStatus  Status, ::GlobalNamespace::OVRPlugin_FaceTrackingDataSource  DataSource, double_t  Time) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12164};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ExpressionWeights, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<float_t>  ExpressionWeights;

/// @brief Field ExpressionWeightConfidences, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<float_t>  ExpressionWeightConfidences;

/// @brief Field Status, offset: 0x10, size: 0x2, def value: None
 ::GlobalNamespace::OVRPlugin_FaceExpressionStatus  Status;

/// @brief Field DataSource, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRPlugin_FaceTrackingDataSource  DataSource;

/// @brief Field Time, offset: 0x18, size: 0x8, def value: None
 double_t  Time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceState, ExpressionWeights) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceState, ExpressionWeightConfidences) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceState, Status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceState, DataSource) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRPlugin_FaceState, Time) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_FaceState) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_BodyTrackingCalibrationInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRPlugin_BodyTrackingCalibrationInfo)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_BodyTrackingCalibrationInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo, "", "OVRPlugin/BodyTrackingCalibrationInfo");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/BodyTrackingCalibrationInfo
struct CORDL_TYPE OVRPlugin_BodyTrackingCalibrationInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_BodyTrackingCalibrationInfo() ;

// Ctor Parameters [CppParam { name: "BodyHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_BodyTrackingCalibrationInfo(float_t  BodyHeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12157};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field BodyHeight, offset: 0x0, size: 0x4, def value: None
 float_t  BodyHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo, BodyHeight) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_BodyTrackingCalibrationInfo) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

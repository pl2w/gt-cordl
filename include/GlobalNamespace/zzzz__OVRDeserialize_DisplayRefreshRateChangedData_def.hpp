#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize_DisplayRefreshRateChangedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(OVRDeserialize_DisplayRefreshRateChangedData)
// Forward declare root types
namespace GlobalNamespace {
struct OVRDeserialize_DisplayRefreshRateChangedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, "", "OVRDeserialize/DisplayRefreshRateChangedData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRDeserialize/DisplayRefreshRateChangedData
struct CORDL_TYPE OVRDeserialize_DisplayRefreshRateChangedData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr OVRDeserialize_DisplayRefreshRateChangedData() ;

// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRDeserialize_DisplayRefreshRateChangedData(float_t  FromRefreshRate, float_t  ToRefreshRate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12607};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field FromRefreshRate, offset: 0x0, size: 0x4, def value: None
 float_t  FromRefreshRate;

/// @brief Field ToRefreshRate, offset: 0x4, size: 0x4, def value: None
 float_t  ToRefreshRate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, FromRefreshRate) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData, ToRefreshRate) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

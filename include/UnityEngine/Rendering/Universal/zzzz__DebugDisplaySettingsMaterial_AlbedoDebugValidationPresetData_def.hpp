#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData)
// Forward declare root types
namespace GlobalNamespace {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/AlbedoDebugValidationPresetData
struct CORDL_TYPE DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "minLuminance", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxLuminance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData(::StringW  name, ::UnityEngine::Color  color, float_t  minLuminance, float_t  maxLuminance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18255};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field name, offset: 0x0, size: 0x8, def value: None
 ::StringW  name;

/// @brief Field color, offset: 0x8, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field minLuminance, offset: 0x18, size: 0x4, def value: None
 float_t  minLuminance;

/// @brief Field maxLuminance, offset: 0x1c, size: 0x4, def value: None
 float_t  maxLuminance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, name) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, color) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, minLuminance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData, maxLuminance) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPresetData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

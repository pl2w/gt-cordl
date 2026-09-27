#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset)
// Forward declare root types
namespace GlobalNamespace {
struct DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsMaterial/AlbedoDebugValidationPreset");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.DebugDisplaySettingsMaterial/AlbedoDebugValidationPreset
struct CORDL_TYPE DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped
enum struct __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped : int32_t {
__E_DefaultLuminance = static_cast<int32_t>(0x0),
__E_BlackAcrylicPaint = static_cast<int32_t>(0x1),
__E_DarkSoil = static_cast<int32_t>(0x2),
__E_WornAsphalt = static_cast<int32_t>(0x3),
__E_DryClaySoil = static_cast<int32_t>(0x4),
__E_GreenGrass = static_cast<int32_t>(0x5),
__E_OldConcrete = static_cast<int32_t>(0x6),
__E_RedClayTile = static_cast<int32_t>(0x7),
__E_DrySand = static_cast<int32_t>(0x8),
__E_NewConcrete = static_cast<int32_t>(0x9),
__E_WhiteAcrylicPaint = static_cast<int32_t>(0xa),
__E_FreshSnow = static_cast<int32_t>(0xb),
__E_BlueSky = static_cast<int32_t>(0xc),
__E_Foliage = static_cast<int32_t>(0xd),
__E_Custom = static_cast<int32_t>(0xe),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped () const noexcept {
return static_cast<__DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset(int32_t  value__) noexcept;

/// @brief Field BlackAcrylicPaint value: I32(1)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const BlackAcrylicPaint;

/// @brief Field BlueSky value: I32(12)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const BlueSky;

/// @brief Field Custom value: I32(14)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const Custom;

/// @brief Field DarkSoil value: I32(2)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DarkSoil;

/// @brief Field DefaultLuminance value: I32(0)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DefaultLuminance;

/// @brief Field DryClaySoil value: I32(4)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DryClaySoil;

/// @brief Field DrySand value: I32(8)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const DrySand;

/// @brief Field Foliage value: I32(13)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const Foliage;

/// @brief Field FreshSnow value: I32(11)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const FreshSnow;

/// @brief Field GreenGrass value: I32(5)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const GreenGrass;

/// @brief Field NewConcrete value: I32(9)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const NewConcrete;

/// @brief Field OldConcrete value: I32(6)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const OldConcrete;

/// @brief Field RedClayTile value: I32(7)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const RedClayTile;

/// @brief Field WhiteAcrylicPaint value: I32(10)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const WhiteAcrylicPaint;

/// @brief Field WornAsphalt value: I32(3)
static ::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset const WornAsphalt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18254};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DebugDisplaySettingsMaterial_AlbedoDebugValidationPreset) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

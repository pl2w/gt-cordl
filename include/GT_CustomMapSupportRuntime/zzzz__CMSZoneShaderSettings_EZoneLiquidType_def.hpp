#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_EZoneLiquidType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSZoneShaderSettings_EZoneLiquidType)
// Forward declare root types
namespace GlobalNamespace {
struct CMSZoneShaderSettings_EZoneLiquidType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType, "GT_CustomMapSupportRuntime", "CMSZoneShaderSettings/EZoneLiquidType");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.CMSZoneShaderSettings/EZoneLiquidType
struct CORDL_TYPE CMSZoneShaderSettings_EZoneLiquidType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CMSZoneShaderSettings_EZoneLiquidType_Unwrapped
enum struct __CMSZoneShaderSettings_EZoneLiquidType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Water = static_cast<int32_t>(0x1),
__E_Lava = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CMSZoneShaderSettings_EZoneLiquidType_Unwrapped () const noexcept {
return static_cast<__CMSZoneShaderSettings_EZoneLiquidType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CMSZoneShaderSettings_EZoneLiquidType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CMSZoneShaderSettings_EZoneLiquidType(int32_t  value__) noexcept;

/// @brief Field Lava value: I32(2)
static ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const Lava;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const None;

/// @brief Field Water value: I32(1)
static ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30885};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

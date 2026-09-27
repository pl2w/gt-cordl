#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneShaderSettings_EZoneLiquidType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneShaderSettings_EZoneLiquidType)
// Forward declare root types
namespace GlobalNamespace {
struct ZoneShaderSettings_EZoneLiquidType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType, "GorillaTag.Rendering", "ZoneShaderSettings/EZoneLiquidType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Rendering.ZoneShaderSettings/EZoneLiquidType
struct CORDL_TYPE ZoneShaderSettings_EZoneLiquidType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ZoneShaderSettings_EZoneLiquidType_Unwrapped
enum struct __ZoneShaderSettings_EZoneLiquidType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Water = static_cast<int32_t>(0x1),
__E_Lava = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ZoneShaderSettings_EZoneLiquidType_Unwrapped () const noexcept {
return static_cast<__ZoneShaderSettings_EZoneLiquidType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ZoneShaderSettings_EZoneLiquidType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ZoneShaderSettings_EZoneLiquidType(int32_t  value__) noexcept;

/// @brief Field Lava value: I32(2)
static ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType const Lava;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType const None;

/// @brief Field Water value: I32(1)
static ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType const Water;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

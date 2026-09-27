#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ExportLightingType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ExportLightingType)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct ExportLightingType;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::ExportLightingType);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ExportLightingType, "GT_CustomMapSupportRuntime", "ExportLightingType");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.ExportLightingType
struct CORDL_TYPE ExportLightingType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ExportLightingType_Unwrapped
enum struct __ExportLightingType_Unwrapped : int32_t {
__E_Default_Unity = static_cast<int32_t>(0x0),
__E_Alternative = static_cast<int32_t>(0x1),
__E_Off = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ExportLightingType_Unwrapped () const noexcept {
return static_cast<__ExportLightingType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ExportLightingType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ExportLightingType(int32_t  value__) noexcept;

/// @brief Field Alternative value: I32(1)
static ::GT_CustomMapSupportRuntime::ExportLightingType const Alternative;

/// @brief Field Default_Unity value: I32(0)
static ::GT_CustomMapSupportRuntime::ExportLightingType const Default_Unity;

/// @brief Field Off value: I32(2)
static ::GT_CustomMapSupportRuntime::ExportLightingType const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30908};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ExportLightingType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ExportLightingType) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

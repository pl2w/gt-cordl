#pragma once
// IWYU pragma private; include "Valve/OpenXR/Utils/FoveatedRenderingLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FoveatedRenderingLevel)
// Forward declare root types
namespace Valve::OpenXR::Utils {
struct FoveatedRenderingLevel;
}
// Write type traits
MARK_VAL_T(::Valve::OpenXR::Utils::FoveatedRenderingLevel);
DEFINE_IL2CPP_CLASS(::Valve::OpenXR::Utils::FoveatedRenderingLevel, "Valve.OpenXR.Utils", "FoveatedRenderingLevel");
// Dependencies 
namespace Valve::OpenXR::Utils {
// Is value type: true
// CS Name: Valve.OpenXR.Utils.FoveatedRenderingLevel
struct CORDL_TYPE FoveatedRenderingLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FoveatedRenderingLevel_Unwrapped
enum struct __FoveatedRenderingLevel_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_Low = static_cast<int32_t>(0x1),
__E_Medium = static_cast<int32_t>(0x2),
__E_High = static_cast<int32_t>(0x3),
__E_HighTop = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FoveatedRenderingLevel_Unwrapped () const noexcept {
return static_cast<__FoveatedRenderingLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FoveatedRenderingLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FoveatedRenderingLevel(int32_t  value__) noexcept;

/// @brief Field High value: I32(3)
static ::Valve::OpenXR::Utils::FoveatedRenderingLevel const High;

/// @brief Field HighTop value: I32(4)
static ::Valve::OpenXR::Utils::FoveatedRenderingLevel const HighTop;

/// @brief Field Low value: I32(1)
static ::Valve::OpenXR::Utils::FoveatedRenderingLevel const Low;

/// @brief Field Medium value: I32(2)
static ::Valve::OpenXR::Utils::FoveatedRenderingLevel const Medium;

/// @brief Field Off value: I32(0)
static ::Valve::OpenXR::Utils::FoveatedRenderingLevel const Off;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31837};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Valve::OpenXR::Utils::FoveatedRenderingLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Valve::OpenXR::Utils::FoveatedRenderingLevel) == 0x4, "Size mismatch!");

} // namespace end def Valve::OpenXR::Utils

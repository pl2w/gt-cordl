#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/SharedBlocksTerminal_ScreenType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedBlocksTerminal_ScreenType)
// Forward declare root types
namespace GlobalNamespace {
struct SharedBlocksTerminal_ScreenType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SharedBlocksTerminal_ScreenType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SharedBlocksTerminal_ScreenType, "GorillaTagScripts.Builder", "SharedBlocksTerminal/ScreenType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.Builder.SharedBlocksTerminal/ScreenType
struct CORDL_TYPE SharedBlocksTerminal_ScreenType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SharedBlocksTerminal_ScreenType_Unwrapped
enum struct __SharedBlocksTerminal_ScreenType_Unwrapped : int32_t {
__E_NO_DRIVER = static_cast<int32_t>(0x0),
__E_SEARCH = static_cast<int32_t>(0x1),
__E_LOADING = static_cast<int32_t>(0x2),
__E_ERROR = static_cast<int32_t>(0x3),
__E_SCAN_INFO = static_cast<int32_t>(0x4),
__E_OTHER_DRIVER = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SharedBlocksTerminal_ScreenType_Unwrapped () const noexcept {
return static_cast<__SharedBlocksTerminal_ScreenType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SharedBlocksTerminal_ScreenType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SharedBlocksTerminal_ScreenType(int32_t  value__) noexcept;

/// @brief Field ERROR value: I32(3)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const ERROR;

/// @brief Field LOADING value: I32(2)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const LOADING;

/// @brief Field NO_DRIVER value: I32(0)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const NO_DRIVER;

/// @brief Field OTHER_DRIVER value: I32(5)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const OTHER_DRIVER;

/// @brief Field SCAN_INFO value: I32(4)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const SCAN_INFO;

/// @brief Field SEARCH value: I32(1)
static ::GlobalNamespace::SharedBlocksTerminal_ScreenType const SEARCH;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4216};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SharedBlocksTerminal_ScreenType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SharedBlocksTerminal_ScreenType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/WarningButtonResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WarningButtonResult)
// Forward declare root types
namespace GlobalNamespace {
struct WarningButtonResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WarningButtonResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WarningButtonResult, "", "WarningButtonResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: WarningButtonResult
struct CORDL_TYPE WarningButtonResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WarningButtonResult_Unwrapped
enum struct __WarningButtonResult_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CloseWarning = static_cast<int32_t>(0x1),
__E_Continue = static_cast<int32_t>(0x2),
__E_OptIn = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WarningButtonResult_Unwrapped () const noexcept {
return static_cast<__WarningButtonResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr WarningButtonResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr WarningButtonResult(int32_t  value__) noexcept;

/// @brief Field CloseWarning value: I32(1)
static ::GlobalNamespace::WarningButtonResult const CloseWarning;

/// @brief Field Continue value: I32(2)
static ::GlobalNamespace::WarningButtonResult const Continue;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::WarningButtonResult const None;

/// @brief Field OptIn value: I32(3)
static ::GlobalNamespace::WarningButtonResult const OptIn;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3050};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WarningButtonResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WarningButtonResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Fusion/SimulationMessageResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationMessageResult)
// Forward declare root types
namespace Fusion {
struct SimulationMessageResult;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationMessageResult);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationMessageResult, "Fusion", "SimulationMessageResult");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationMessageResult
struct CORDL_TYPE SimulationMessageResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulationMessageResult_Unwrapped
enum struct __SimulationMessageResult_Unwrapped : int32_t {
__E_Handled = static_cast<int32_t>(0x0),
__E_Ignored = static_cast<int32_t>(0x1),
__E_Retry = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulationMessageResult_Unwrapped () const noexcept {
return static_cast<__SimulationMessageResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulationMessageResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationMessageResult(int32_t  value__) noexcept;

/// @brief Field Handled value: I32(0)
static ::Fusion::SimulationMessageResult const Handled;

/// @brief Field Ignored value: I32(1)
static ::Fusion::SimulationMessageResult const Ignored;

/// @brief Field Retry value: I32(2)
static ::Fusion::SimulationMessageResult const Retry;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19325};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationMessageResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationMessageResult) == 0x4, "Size mismatch!");

} // namespace end def Fusion

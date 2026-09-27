#pragma once
// IWYU pragma private; include "VYaml/Internal/LineBreakState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LineBreakState)
// Forward declare root types
namespace VYaml::Internal {
struct LineBreakState;
}
// Write type traits
MARK_VAL_T(::VYaml::Internal::LineBreakState);
DEFINE_IL2CPP_CLASS(::VYaml::Internal::LineBreakState, "VYaml.Internal", "LineBreakState");
// Dependencies 
namespace VYaml::Internal {
// Is value type: true
// CS Name: VYaml.Internal.LineBreakState
struct CORDL_TYPE LineBreakState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LineBreakState_Unwrapped
enum struct __LineBreakState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Lf = static_cast<int32_t>(0x1),
__E_CrLf = static_cast<int32_t>(0x2),
__E_Cr = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LineBreakState_Unwrapped () const noexcept {
return static_cast<__LineBreakState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LineBreakState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LineBreakState(int32_t  value__) noexcept;

/// @brief Field Cr value: I32(3)
static ::VYaml::Internal::LineBreakState const Cr;

/// @brief Field CrLf value: I32(2)
static ::VYaml::Internal::LineBreakState const CrLf;

/// @brief Field Lf value: I32(1)
static ::VYaml::Internal::LineBreakState const Lf;

/// @brief Field None value: I32(0)
static ::VYaml::Internal::LineBreakState const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29031};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::VYaml::Internal::LineBreakState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::VYaml::Internal::LineBreakState) == 0x4, "Size mismatch!");

} // namespace end def VYaml::Internal

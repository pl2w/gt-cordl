#pragma once
// IWYU pragma private; include "GlobalNamespace/SICombinedTerminal_TerminalSubFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SICombinedTerminal_TerminalSubFunction)
// Forward declare root types
namespace GlobalNamespace {
struct SICombinedTerminal_TerminalSubFunction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SICombinedTerminal_TerminalSubFunction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SICombinedTerminal_TerminalSubFunction, "", "SICombinedTerminal/TerminalSubFunction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: SICombinedTerminal/TerminalSubFunction
struct CORDL_TYPE SICombinedTerminal_TerminalSubFunction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SICombinedTerminal_TerminalSubFunction_Unwrapped
enum struct __SICombinedTerminal_TerminalSubFunction_Unwrapped : int32_t {
__E_TechTree = static_cast<int32_t>(0x0),
__E_GadgetDispenser = static_cast<int32_t>(0x1),
__E_ResourceCollection = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SICombinedTerminal_TerminalSubFunction_Unwrapped () const noexcept {
return static_cast<__SICombinedTerminal_TerminalSubFunction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SICombinedTerminal_TerminalSubFunction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SICombinedTerminal_TerminalSubFunction(int32_t  value__) noexcept;

/// @brief Field GadgetDispenser value: I32(1)
static ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction const GadgetDispenser;

/// @brief Field ResourceCollection value: I32(2)
static ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction const ResourceCollection;

/// @brief Field TechTree value: I32(0)
static ::GlobalNamespace::SICombinedTerminal_TerminalSubFunction const TechTree;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{314};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SICombinedTerminal_TerminalSubFunction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SICombinedTerminal_TerminalSubFunction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

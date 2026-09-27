#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleVariableResolver_Result.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleVariableResolver_Result)
// Forward declare root types
namespace GlobalNamespace {
struct StyleVariableResolver_Result;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StyleVariableResolver_Result);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StyleVariableResolver_Result, "UnityEngine.UIElements", "StyleVariableResolver/Result");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleVariableResolver/Result
struct CORDL_TYPE StyleVariableResolver_Result {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StyleVariableResolver_Result_Unwrapped
enum struct __StyleVariableResolver_Result_Unwrapped : int32_t {
__E_Valid = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_NotFound = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StyleVariableResolver_Result_Unwrapped () const noexcept {
return static_cast<__StyleVariableResolver_Result_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StyleVariableResolver_Result() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StyleVariableResolver_Result(int32_t  value__) noexcept;

/// @brief Field Invalid value: I32(1)
static ::GlobalNamespace::StyleVariableResolver_Result const Invalid;

/// @brief Field NotFound value: I32(2)
static ::GlobalNamespace::StyleVariableResolver_Result const NotFound;

/// @brief Field Valid value: I32(0)
static ::GlobalNamespace::StyleVariableResolver_Result const Valid;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StyleVariableResolver_Result, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StyleVariableResolver_Result) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

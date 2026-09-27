#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Utilities/StringUtils_SeparatedCaseState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringUtils_SeparatedCaseState)
// Forward declare root types
namespace GlobalNamespace {
struct StringUtils_SeparatedCaseState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StringUtils_SeparatedCaseState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StringUtils_SeparatedCaseState, "Newtonsoft.Json.Utilities", "StringUtils/SeparatedCaseState");
// [NullableContext(0)]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Newtonsoft.Json.Utilities.StringUtils/SeparatedCaseState
struct CORDL_TYPE StringUtils_SeparatedCaseState {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StringUtils_SeparatedCaseState_Unwrapped
enum struct __StringUtils_SeparatedCaseState_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Lower = static_cast<int32_t>(0x1),
__E_Upper = static_cast<int32_t>(0x2),
__E_NewWord = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StringUtils_SeparatedCaseState_Unwrapped () const noexcept {
return static_cast<__StringUtils_SeparatedCaseState_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr StringUtils_SeparatedCaseState() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StringUtils_SeparatedCaseState(int32_t  value__) noexcept;

/// @brief Field Lower value: I32(1)
static ::GlobalNamespace::StringUtils_SeparatedCaseState const Lower;

/// @brief Field NewWord value: I32(3)
static ::GlobalNamespace::StringUtils_SeparatedCaseState const NewWord;

/// @brief Field Start value: I32(0)
static ::GlobalNamespace::StringUtils_SeparatedCaseState const Start;

/// @brief Field Upper value: I32(2)
static ::GlobalNamespace::StringUtils_SeparatedCaseState const Upper;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23242};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StringUtils_SeparatedCaseState, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StringUtils_SeparatedCaseState) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputBinding_MatchOptions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputBinding_MatchOptions)
// Forward declare root types
namespace GlobalNamespace {
struct InputBinding_MatchOptions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputBinding_MatchOptions);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputBinding_MatchOptions, "UnityEngine.InputSystem", "InputBinding/MatchOptions");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputBinding/MatchOptions
struct CORDL_TYPE InputBinding_MatchOptions {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputBinding_MatchOptions_Unwrapped
enum struct __InputBinding_MatchOptions_Unwrapped : int32_t {
__E_EmptyGroupMatchesAny = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputBinding_MatchOptions_Unwrapped () const noexcept {
return static_cast<__InputBinding_MatchOptions_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputBinding_MatchOptions() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputBinding_MatchOptions(int32_t  value__) noexcept;

/// @brief Field EmptyGroupMatchesAny value: I32(1)
static ::GlobalNamespace::InputBinding_MatchOptions const EmptyGroupMatchesAny;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13394};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputBinding_MatchOptions, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputBinding_MatchOptions) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

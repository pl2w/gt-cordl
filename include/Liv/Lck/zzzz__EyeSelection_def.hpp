#pragma once
// IWYU pragma private; include "Liv/Lck/EyeSelection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EyeSelection)
// Forward declare root types
namespace Liv::Lck {
struct EyeSelection;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::EyeSelection);
DEFINE_IL2CPP_CLASS(::Liv::Lck::EyeSelection, "Liv.Lck", "EyeSelection");
// Dependencies 
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.EyeSelection
struct CORDL_TYPE EyeSelection {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EyeSelection_Unwrapped
enum struct __EyeSelection_Unwrapped : int32_t {
__E_Left = static_cast<int32_t>(0x0),
__E_Right = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EyeSelection_Unwrapped () const noexcept {
return static_cast<__EyeSelection_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EyeSelection() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EyeSelection(int32_t  value__) noexcept;

/// @brief Field Left value: I32(0)
static ::Liv::Lck::EyeSelection const Left;

/// @brief Field Right value: I32(1)
static ::Liv::Lck::EyeSelection const Right;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24730};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::EyeSelection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::EyeSelection) == 0x4, "Size mismatch!");

} // namespace end def Liv::Lck

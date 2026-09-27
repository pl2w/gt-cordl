#pragma once
// IWYU pragma private; include "Fusion/EditorButtonVisibility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EditorButtonVisibility)
// Forward declare root types
namespace Fusion {
struct EditorButtonVisibility;
}
// Write type traits
MARK_VAL_T(::Fusion::EditorButtonVisibility);
DEFINE_IL2CPP_CLASS(::Fusion::EditorButtonVisibility, "Fusion", "EditorButtonVisibility");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.EditorButtonVisibility
struct CORDL_TYPE EditorButtonVisibility {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EditorButtonVisibility_Unwrapped
enum struct __EditorButtonVisibility_Unwrapped : int32_t {
__E_PlayMode = static_cast<int32_t>(0x0),
__E_EditMode = static_cast<int32_t>(0x1),
__E_Always = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EditorButtonVisibility_Unwrapped () const noexcept {
return static_cast<__EditorButtonVisibility_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EditorButtonVisibility() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EditorButtonVisibility(int32_t  value__) noexcept;

/// @brief Field Always value: I32(2)
static ::Fusion::EditorButtonVisibility const Always;

/// @brief Field EditMode value: I32(1)
static ::Fusion::EditorButtonVisibility const EditMode;

/// @brief Field PlayMode value: I32(0)
static ::Fusion::EditorButtonVisibility const PlayMode;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31273};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::EditorButtonVisibility, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::EditorButtonVisibility) == 0x4, "Size mismatch!");

} // namespace end def Fusion

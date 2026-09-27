#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocument_WorldSpaceSizeMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIDocument_WorldSpaceSizeMode)
// Forward declare root types
namespace GlobalNamespace {
struct UIDocument_WorldSpaceSizeMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UIDocument_WorldSpaceSizeMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UIDocument_WorldSpaceSizeMode, "UnityEngine.UIElements", "UIDocument/WorldSpaceSizeMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIDocument/WorldSpaceSizeMode
struct CORDL_TYPE UIDocument_WorldSpaceSizeMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UIDocument_WorldSpaceSizeMode_Unwrapped
enum struct __UIDocument_WorldSpaceSizeMode_Unwrapped : int32_t {
__E_Dynamic = static_cast<int32_t>(0x0),
__E_Fixed = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UIDocument_WorldSpaceSizeMode_Unwrapped () const noexcept {
return static_cast<__UIDocument_WorldSpaceSizeMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UIDocument_WorldSpaceSizeMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UIDocument_WorldSpaceSizeMode(int32_t  value__) noexcept;

/// @brief Field Dynamic value: I32(0)
static ::GlobalNamespace::UIDocument_WorldSpaceSizeMode const Dynamic;

/// @brief Field Fixed value: I32(1)
static ::GlobalNamespace::UIDocument_WorldSpaceSizeMode const Fixed;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7788};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UIDocument_WorldSpaceSizeMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UIDocument_WorldSpaceSizeMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

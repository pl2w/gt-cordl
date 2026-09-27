#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BoolParameter_DisplayType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoolParameter_DisplayType)
// Forward declare root types
namespace GlobalNamespace {
struct BoolParameter_DisplayType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BoolParameter_DisplayType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BoolParameter_DisplayType, "UnityEngine.Rendering", "BoolParameter/DisplayType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.BoolParameter/DisplayType
struct CORDL_TYPE BoolParameter_DisplayType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BoolParameter_DisplayType_Unwrapped
enum struct __BoolParameter_DisplayType_Unwrapped : int32_t {
__E_Checkbox = static_cast<int32_t>(0x0),
__E_EnumPopup = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BoolParameter_DisplayType_Unwrapped () const noexcept {
return static_cast<__BoolParameter_DisplayType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BoolParameter_DisplayType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoolParameter_DisplayType(int32_t  value__) noexcept;

/// @brief Field Checkbox value: I32(0)
static ::GlobalNamespace::BoolParameter_DisplayType const Checkbox;

/// @brief Field EnumPopup value: I32(1)
static ::GlobalNamespace::BoolParameter_DisplayType const EnumPopup;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17061};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BoolParameter_DisplayType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BoolParameter_DisplayType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

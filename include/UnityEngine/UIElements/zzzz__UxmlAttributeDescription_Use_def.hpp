#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlAttributeDescription_Use.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlAttributeDescription_Use)
// Forward declare root types
namespace GlobalNamespace {
struct UxmlAttributeDescription_Use;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UxmlAttributeDescription_Use);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UxmlAttributeDescription_Use, "UnityEngine.UIElements", "UxmlAttributeDescription/Use");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlAttributeDescription/Use
struct CORDL_TYPE UxmlAttributeDescription_Use {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UxmlAttributeDescription_Use_Unwrapped
enum struct __UxmlAttributeDescription_Use_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Optional = static_cast<int32_t>(0x1),
__E_Prohibited = static_cast<int32_t>(0x2),
__E_Required = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UxmlAttributeDescription_Use_Unwrapped () const noexcept {
return static_cast<__UxmlAttributeDescription_Use_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UxmlAttributeDescription_Use() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UxmlAttributeDescription_Use(int32_t  value__) noexcept;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::UxmlAttributeDescription_Use const None;

/// @brief Field Optional value: I32(1)
static ::GlobalNamespace::UxmlAttributeDescription_Use const Optional;

/// @brief Field Prohibited value: I32(2)
static ::GlobalNamespace::UxmlAttributeDescription_Use const Prohibited;

/// @brief Field Required value: I32(3)
static ::GlobalNamespace::UxmlAttributeDescription_Use const Required;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8366};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UxmlAttributeDescription_Use, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UxmlAttributeDescription_Use) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

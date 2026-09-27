#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlSerializedData_UxmlAttributeFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlSerializedData_UxmlAttributeFlags)
// Forward declare root types
namespace GlobalNamespace {
struct UxmlSerializedData_UxmlAttributeFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags, "UnityEngine.UIElements", "UxmlSerializedData/UxmlAttributeFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.UIElements.UxmlSerializedData/UxmlAttributeFlags
struct CORDL_TYPE UxmlSerializedData_UxmlAttributeFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __UxmlSerializedData_UxmlAttributeFlags_Unwrapped
enum struct __UxmlSerializedData_UxmlAttributeFlags_Unwrapped : uint8_t {
__E_Ignore = static_cast<uint8_t>(0x0u),
__E_OverriddenInUxml = static_cast<uint8_t>(0x1u),
__E_DefaultValue = static_cast<uint8_t>(0x2u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UxmlSerializedData_UxmlAttributeFlags_Unwrapped () const noexcept {
return static_cast<__UxmlSerializedData_UxmlAttributeFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UxmlSerializedData_UxmlAttributeFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr UxmlSerializedData_UxmlAttributeFlags(uint8_t  value__) noexcept;

/// @brief Field DefaultValue value: U8(2)
static ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const DefaultValue;

/// @brief Field Ignore value: U8(0)
static ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const Ignore;

/// @brief Field OverriddenInUxml value: U8(1)
static ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const OverriddenInUxml;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8417};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags) == 0x1, "Size mismatch!");

} // namespace end def GlobalNamespace

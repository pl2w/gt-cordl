#pragma once
// IWYU pragma private; include "Oculus/Interaction/HelpBoxAttribute_MessageType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HelpBoxAttribute_MessageType)
// Forward declare root types
namespace GlobalNamespace {
struct HelpBoxAttribute_MessageType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HelpBoxAttribute_MessageType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HelpBoxAttribute_MessageType, "Oculus.Interaction", "HelpBoxAttribute/MessageType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.HelpBoxAttribute/MessageType
struct CORDL_TYPE HelpBoxAttribute_MessageType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HelpBoxAttribute_MessageType_Unwrapped
enum struct __HelpBoxAttribute_MessageType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Info = static_cast<int32_t>(0x1),
__E_Warning = static_cast<int32_t>(0x2),
__E_Error = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HelpBoxAttribute_MessageType_Unwrapped () const noexcept {
return static_cast<__HelpBoxAttribute_MessageType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HelpBoxAttribute_MessageType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HelpBoxAttribute_MessageType(int32_t  value__) noexcept;

/// @brief Field Error value: I32(3)
static ::GlobalNamespace::HelpBoxAttribute_MessageType const Error;

/// @brief Field Info value: I32(1)
static ::GlobalNamespace::HelpBoxAttribute_MessageType const Info;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::HelpBoxAttribute_MessageType const None;

/// @brief Field Warning value: I32(2)
static ::GlobalNamespace::HelpBoxAttribute_MessageType const Warning;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15685};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HelpBoxAttribute_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HelpBoxAttribute_MessageType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

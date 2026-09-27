#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_OptionalBool.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_OptionalBool)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_OptionalBool;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_OptionalBool);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_OptionalBool, "", "OVRPlugin/OptionalBool");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/OptionalBool
struct CORDL_TYPE OVRPlugin_OptionalBool {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRPlugin_OptionalBool_Unwrapped
enum struct __OVRPlugin_OptionalBool_Unwrapped : int32_t {
__E_False = static_cast<int32_t>(0x0),
__E_True = static_cast<int32_t>(0x1),
__E_Unknown = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_OptionalBool_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_OptionalBool_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_OptionalBool() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_OptionalBool(int32_t  value__) noexcept;

/// @brief Field False value: I32(0)
static ::GlobalNamespace::OVRPlugin_OptionalBool const False;

/// @brief Field True value: I32(1)
static ::GlobalNamespace::OVRPlugin_OptionalBool const True;

/// @brief Field Unknown value: I32(2)
static ::GlobalNamespace::OVRPlugin_OptionalBool const Unknown;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12046};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_OptionalBool, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_OptionalBool) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

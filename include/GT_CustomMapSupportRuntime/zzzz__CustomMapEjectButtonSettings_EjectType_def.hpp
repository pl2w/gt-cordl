#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CustomMapEjectButtonSettings_EjectType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapEjectButtonSettings_EjectType)
// Forward declare root types
namespace GlobalNamespace {
struct CustomMapEjectButtonSettings_EjectType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType, "GT_CustomMapSupportRuntime", "CustomMapEjectButtonSettings/EjectType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.CustomMapEjectButtonSettings/EjectType
struct CORDL_TYPE CustomMapEjectButtonSettings_EjectType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CustomMapEjectButtonSettings_EjectType_Unwrapped
enum struct __CustomMapEjectButtonSettings_EjectType_Unwrapped : int32_t {
__E_EjectFromVirtualStump = static_cast<int32_t>(0x0),
__E_ReturnToVirtualStump = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CustomMapEjectButtonSettings_EjectType_Unwrapped () const noexcept {
return static_cast<__CustomMapEjectButtonSettings_EjectType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CustomMapEjectButtonSettings_EjectType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CustomMapEjectButtonSettings_EjectType(int32_t  value__) noexcept;

/// @brief Field EjectFromVirtualStump value: I32(0)
static ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType const EjectFromVirtualStump;

/// @brief Field ReturnToVirtualStump value: I32(1)
static ::GlobalNamespace::CustomMapEjectButtonSettings_EjectType const ReturnToVirtualStump;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30892};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapEjectButtonSettings_EjectType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

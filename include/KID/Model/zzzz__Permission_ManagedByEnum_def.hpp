#pragma once
// IWYU pragma private; include "KID/Model/Permission_ManagedByEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Permission_ManagedByEnum)
// Forward declare root types
namespace GlobalNamespace {
struct Permission_ManagedByEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Permission_ManagedByEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Permission_ManagedByEnum, "KID.Model", "Permission/ManagedByEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.Permission/ManagedByEnum
struct CORDL_TYPE Permission_ManagedByEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Permission_ManagedByEnum_Unwrapped
enum struct __Permission_ManagedByEnum_Unwrapped : int32_t {
__E_PLAYER = static_cast<int32_t>(0x1),
__E_GUARDIAN = static_cast<int32_t>(0x2),
__E_PROHIBITED = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Permission_ManagedByEnum_Unwrapped () const noexcept {
return static_cast<__Permission_ManagedByEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Permission_ManagedByEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Permission_ManagedByEnum(int32_t  value__) noexcept;

/// @brief Field GUARDIAN value: I32(2)
static ::GlobalNamespace::Permission_ManagedByEnum const GUARDIAN;

/// @brief Field PLAYER value: I32(1)
static ::GlobalNamespace::Permission_ManagedByEnum const PLAYER;

/// @brief Field PROHIBITED value: I32(3)
static ::GlobalNamespace::Permission_ManagedByEnum const PROHIBITED;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31092};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Permission_ManagedByEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Permission_ManagedByEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

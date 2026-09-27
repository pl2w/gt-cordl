#pragma once
// IWYU pragma private; include "KID/Model/Session_StatusEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Session_StatusEnum)
// Forward declare root types
namespace GlobalNamespace {
struct Session_StatusEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Session_StatusEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Session_StatusEnum, "KID.Model", "Session/StatusEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.Session/StatusEnum
struct CORDL_TYPE Session_StatusEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Session_StatusEnum_Unwrapped
enum struct __Session_StatusEnum_Unwrapped : int32_t {
__E_ACTIVE = static_cast<int32_t>(0x1),
__E_HOLD = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Session_StatusEnum_Unwrapped () const noexcept {
return static_cast<__Session_StatusEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Session_StatusEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Session_StatusEnum(int32_t  value__) noexcept;

/// @brief Field ACTIVE value: I32(1)
static ::GlobalNamespace::Session_StatusEnum const ACTIVE;

/// @brief Field HOLD value: I32(2)
static ::GlobalNamespace::Session_StatusEnum const HOLD;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31097};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Session_StatusEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Session_StatusEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

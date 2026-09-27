#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeAppealResponse_StatusEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CheckAgeAppealResponse_StatusEnum)
// Forward declare root types
namespace GlobalNamespace {
struct CheckAgeAppealResponse_StatusEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum, "KID.Model", "CheckAgeAppealResponse/StatusEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.CheckAgeAppealResponse/StatusEnum
struct CORDL_TYPE CheckAgeAppealResponse_StatusEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CheckAgeAppealResponse_StatusEnum_Unwrapped
enum struct __CheckAgeAppealResponse_StatusEnum_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x1),
__E_FAIL = static_cast<int32_t>(0x2),
__E_CHALLENGE = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CheckAgeAppealResponse_StatusEnum_Unwrapped () const noexcept {
return static_cast<__CheckAgeAppealResponse_StatusEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CheckAgeAppealResponse_StatusEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CheckAgeAppealResponse_StatusEnum(int32_t  value__) noexcept;

/// @brief Field CHALLENGE value: I32(3)
static ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum const CHALLENGE;

/// @brief Field FAIL value: I32(2)
static ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum const FAIL;

/// @brief Field PASS value: I32(1)
static ::GlobalNamespace::CheckAgeAppealResponse_StatusEnum const PASS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31064};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CheckAgeAppealResponse_StatusEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

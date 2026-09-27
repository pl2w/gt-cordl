#pragma once
// IWYU pragma private; include "KID/Model/SetChallengeStatusRequest_StatusEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SetChallengeStatusRequest_StatusEnum)
// Forward declare root types
namespace GlobalNamespace {
struct SetChallengeStatusRequest_StatusEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum, "KID.Model", "SetChallengeStatusRequest/StatusEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.SetChallengeStatusRequest/StatusEnum
struct CORDL_TYPE SetChallengeStatusRequest_StatusEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SetChallengeStatusRequest_StatusEnum_Unwrapped
enum struct __SetChallengeStatusRequest_StatusEnum_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x1),
__E_FAIL = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SetChallengeStatusRequest_StatusEnum_Unwrapped () const noexcept {
return static_cast<__SetChallengeStatusRequest_StatusEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SetChallengeStatusRequest_StatusEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SetChallengeStatusRequest_StatusEnum(int32_t  value__) noexcept;

/// @brief Field FAIL value: I32(2)
static ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum const FAIL;

/// @brief Field PASS value: I32(1)
static ::GlobalNamespace::SetChallengeStatusRequest_StatusEnum const PASS;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31100};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SetChallengeStatusRequest_StatusEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

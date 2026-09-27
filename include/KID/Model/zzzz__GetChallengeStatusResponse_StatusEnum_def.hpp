#pragma once
// IWYU pragma private; include "KID/Model/GetChallengeStatusResponse_StatusEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GetChallengeStatusResponse_StatusEnum)
// Forward declare root types
namespace GlobalNamespace {
struct GetChallengeStatusResponse_StatusEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum, "KID.Model", "GetChallengeStatusResponse/StatusEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.GetChallengeStatusResponse/StatusEnum
struct CORDL_TYPE GetChallengeStatusResponse_StatusEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GetChallengeStatusResponse_StatusEnum_Unwrapped
enum struct __GetChallengeStatusResponse_StatusEnum_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x1),
__E_FAIL = static_cast<int32_t>(0x2),
__E_PENDING = static_cast<int32_t>(0x3),
__E_INPROGRESS = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GetChallengeStatusResponse_StatusEnum_Unwrapped () const noexcept {
return static_cast<__GetChallengeStatusResponse_StatusEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GetChallengeStatusResponse_StatusEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GetChallengeStatusResponse_StatusEnum(int32_t  value__) noexcept;

/// @brief Field FAIL value: I32(2)
static ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum const FAIL;

/// @brief Field INPROGRESS value: I32(4)
static ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum const INPROGRESS;

/// @brief Field PASS value: I32(1)
static ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum const PASS;

/// @brief Field PENDING value: I32(3)
static ::GlobalNamespace::GetChallengeStatusResponse_StatusEnum const PENDING;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GetChallengeStatusResponse_StatusEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

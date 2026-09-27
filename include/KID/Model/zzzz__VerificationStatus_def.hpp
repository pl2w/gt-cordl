#pragma once
// IWYU pragma private; include "KID/Model/VerificationStatus.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerificationStatus)
// Forward declare root types
namespace KID::Model {
struct VerificationStatus;
}
// Write type traits
MARK_VAL_T(::KID::Model::VerificationStatus);
DEFINE_IL2CPP_CLASS(::KID::Model::VerificationStatus, "KID.Model", "VerificationStatus");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.VerificationStatus
struct CORDL_TYPE VerificationStatus {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VerificationStatus_Unwrapped
enum struct __VerificationStatus_Unwrapped : int32_t {
__E_PASS = static_cast<int32_t>(0x1),
__E_FAIL = static_cast<int32_t>(0x2),
__E_PENDING = static_cast<int32_t>(0x3),
__E_INCONCLUSIVE = static_cast<int32_t>(0x4),
__E_TIMEDOUT = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VerificationStatus_Unwrapped () const noexcept {
return static_cast<__VerificationStatus_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VerificationStatus() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VerificationStatus(int32_t  value__) noexcept;

/// @brief Field FAIL value: I32(2)
static ::KID::Model::VerificationStatus const FAIL;

/// @brief Field INCONCLUSIVE value: I32(4)
static ::KID::Model::VerificationStatus const INCONCLUSIVE;

/// @brief Field PASS value: I32(1)
static ::KID::Model::VerificationStatus const PASS;

/// @brief Field PENDING value: I32(3)
static ::KID::Model::VerificationStatus const PENDING;

/// @brief Field TIMEDOUT value: I32(5)
static ::KID::Model::VerificationStatus const TIMEDOUT;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31111};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::VerificationStatus, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::VerificationStatus) == 0x4, "Size mismatch!");

} // namespace end def KID::Model

#pragma once
// IWYU pragma private; include "KID/Model/TestVerificationWebhookRequest_EventTypeEnum.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TestVerificationWebhookRequest_EventTypeEnum)
// Forward declare root types
namespace GlobalNamespace {
struct TestVerificationWebhookRequest_EventTypeEnum;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum, "KID.Model", "TestVerificationWebhookRequest/EventTypeEnum");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: KID.Model.TestVerificationWebhookRequest/EventTypeEnum
struct CORDL_TYPE TestVerificationWebhookRequest_EventTypeEnum {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TestVerificationWebhookRequest_EventTypeEnum_Unwrapped
enum struct __TestVerificationWebhookRequest_EventTypeEnum_Unwrapped : int32_t {
__E_AdultVerificationResult = static_cast<int32_t>(0x1),
__E_AgeAssuranceVerificationResult = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TestVerificationWebhookRequest_EventTypeEnum_Unwrapped () const noexcept {
return static_cast<__TestVerificationWebhookRequest_EventTypeEnum_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TestVerificationWebhookRequest_EventTypeEnum() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TestVerificationWebhookRequest_EventTypeEnum(int32_t  value__) noexcept;

/// @brief Field AdultVerificationResult value: I32(1)
static ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum const AdultVerificationResult;

/// @brief Field AgeAssuranceVerificationResult value: I32(2)
static ::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum const AgeAssuranceVerificationResult;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31105};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TestVerificationWebhookRequest_EventTypeEnum) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

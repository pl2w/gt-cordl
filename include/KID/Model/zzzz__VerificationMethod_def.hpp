#pragma once
// IWYU pragma private; include "KID/Model/VerificationMethod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VerificationMethod)
// Forward declare root types
namespace KID::Model {
struct VerificationMethod;
}
// Write type traits
MARK_VAL_T(::KID::Model::VerificationMethod);
DEFINE_IL2CPP_CLASS(::KID::Model::VerificationMethod, "KID.Model", "VerificationMethod");
// [JsonConverter(typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
// Dependencies 
namespace KID::Model {
// Is value type: true
// CS Name: KID.Model.VerificationMethod
struct CORDL_TYPE VerificationMethod {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VerificationMethod_Unwrapped
enum struct __VerificationMethod_Unwrapped : int32_t {
__E_AgeEstimation = static_cast<int32_t>(0x1),
__E_IdDocument = static_cast<int32_t>(0x2),
__E_CreditCard = static_cast<int32_t>(0x3),
__E_PersonalDetails = static_cast<int32_t>(0x4),
__E_Kws = static_cast<int32_t>(0x5),
__E_AgeAttestation = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VerificationMethod_Unwrapped () const noexcept {
return static_cast<__VerificationMethod_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr VerificationMethod() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr VerificationMethod(int32_t  value__) noexcept;

/// @brief Field AgeAttestation value: I32(6)
static ::KID::Model::VerificationMethod const AgeAttestation;

/// @brief Field AgeEstimation value: I32(1)
static ::KID::Model::VerificationMethod const AgeEstimation;

/// @brief Field CreditCard value: I32(3)
static ::KID::Model::VerificationMethod const CreditCard;

/// @brief Field IdDocument value: I32(2)
static ::KID::Model::VerificationMethod const IdDocument;

/// @brief Field Kws value: I32(5)
static ::KID::Model::VerificationMethod const Kws;

/// @brief Field PersonalDetails value: I32(4)
static ::KID::Model::VerificationMethod const PersonalDetails;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31109};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::VerificationMethod, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::KID::Model::VerificationMethod) == 0x4, "Size mismatch!");

} // namespace end def KID::Model

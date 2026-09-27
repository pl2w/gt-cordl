#pragma once
// IWYU pragma private; include "Modio/Customizations/AgreementType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AgreementType)
// Forward declare root types
namespace Modio::Customizations {
struct AgreementType;
}
// Write type traits
MARK_VAL_T(::Modio::Customizations::AgreementType);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::AgreementType, "Modio.Customizations", "AgreementType");
// Dependencies 
namespace Modio::Customizations {
// Is value type: true
// CS Name: Modio.Customizations.AgreementType
struct CORDL_TYPE AgreementType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AgreementType_Unwrapped
enum struct __AgreementType_Unwrapped : int32_t {
__E_TermsOfUse = static_cast<int32_t>(0x1),
__E_PrivacyPolicy = static_cast<int32_t>(0x2),
__E_GameTerms = static_cast<int32_t>(0x3),
__E_APIAccessTerms = static_cast<int32_t>(0x4),
__E_MonetizationTerms = static_cast<int32_t>(0x5),
__E_AcceptableUsePolicy = static_cast<int32_t>(0x6),
__E_CookiesPolicy = static_cast<int32_t>(0x7),
__E_RefundPolicy = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AgreementType_Unwrapped () const noexcept {
return static_cast<__AgreementType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AgreementType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AgreementType(int32_t  value__) noexcept;

/// @brief Field APIAccessTerms value: I32(4)
static ::Modio::Customizations::AgreementType const APIAccessTerms;

/// @brief Field AcceptableUsePolicy value: I32(6)
static ::Modio::Customizations::AgreementType const AcceptableUsePolicy;

/// @brief Field CookiesPolicy value: I32(7)
static ::Modio::Customizations::AgreementType const CookiesPolicy;

/// @brief Field GameTerms value: I32(3)
static ::Modio::Customizations::AgreementType const GameTerms;

/// @brief Field MonetizationTerms value: I32(5)
static ::Modio::Customizations::AgreementType const MonetizationTerms;

/// @brief Field PrivacyPolicy value: I32(2)
static ::Modio::Customizations::AgreementType const PrivacyPolicy;

/// @brief Field RefundPolicy value: I32(8)
static ::Modio::Customizations::AgreementType const RefundPolicy;

/// @brief Field TermsOfUse value: I32(1)
static ::Modio::Customizations::AgreementType const TermsOfUse;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17718};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::AgreementType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::AgreementType) == 0x4, "Size mismatch!");

} // namespace end def Modio::Customizations

#pragma once
// IWYU pragma private; include "GlobalNamespace/LegalAgreementTextAsset_PostAcceptAction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LegalAgreementTextAsset_PostAcceptAction)
// Forward declare root types
namespace GlobalNamespace {
struct LegalAgreementTextAsset_PostAcceptAction;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction, "", "LegalAgreementTextAsset/PostAcceptAction");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LegalAgreementTextAsset/PostAcceptAction
struct CORDL_TYPE LegalAgreementTextAsset_PostAcceptAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LegalAgreementTextAsset_PostAcceptAction_Unwrapped
enum struct __LegalAgreementTextAsset_PostAcceptAction_Unwrapped : int32_t {
__E_NONE = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LegalAgreementTextAsset_PostAcceptAction_Unwrapped () const noexcept {
return static_cast<__LegalAgreementTextAsset_PostAcceptAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LegalAgreementTextAsset_PostAcceptAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LegalAgreementTextAsset_PostAcceptAction(int32_t  value__) noexcept;

/// @brief Field NONE value: I32(0)
static ::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction const NONE;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3071};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LegalAgreementTextAsset_PostAcceptAction) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

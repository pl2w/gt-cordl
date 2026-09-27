#pragma once
// IWYU pragma private; include "PlayFab/LocalizationModels/GetLanguageListRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetLanguageListRequest)
// Forward declare root types
namespace PlayFab::LocalizationModels {
class GetLanguageListRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::LocalizationModels::GetLanguageListRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::LocalizationModels::GetLanguageListRequest*, "PlayFab.LocalizationModels", "GetLanguageListRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::LocalizationModels {
// Is value type: false
// CS Name: PlayFab.LocalizationModels.GetLanguageListRequest
class CORDL_TYPE GetLanguageListRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::LocalizationModels::GetLanguageListRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840c90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLanguageListRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLanguageListRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLanguageListRequest(GetLanguageListRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLanguageListRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLanguageListRequest(GetLanguageListRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19752};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::LocalizationModels::GetLanguageListRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::LocalizationModels

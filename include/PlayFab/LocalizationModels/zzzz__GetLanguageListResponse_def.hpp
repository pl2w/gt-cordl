#pragma once
// IWYU pragma private; include "PlayFab/LocalizationModels/GetLanguageListResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetLanguageListResponse)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::LocalizationModels {
class GetLanguageListResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::LocalizationModels::GetLanguageListResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::LocalizationModels::GetLanguageListResponse*, "PlayFab.LocalizationModels", "GetLanguageListResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::LocalizationModels {
// Is value type: false
// CS Name: PlayFab.LocalizationModels.GetLanguageListResponse
class CORDL_TYPE GetLanguageListResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field LanguageList, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LanguageList, put=__cordl_internal_set_LanguageList)) ::System::Collections::Generic::List_1<::StringW>*  LanguageList;

static inline ::PlayFab::LocalizationModels::GetLanguageListResponse* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_LanguageList() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_LanguageList() ;

constexpr void __cordl_internal_set_LanguageList(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840c98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLanguageListResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLanguageListResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLanguageListResponse(GetLanguageListResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLanguageListResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLanguageListResponse(GetLanguageListResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19753};

/// @brief Field LanguageList, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___LanguageList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::LocalizationModels::GetLanguageListResponse, ___LanguageList) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::LocalizationModels::GetLanguageListResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::LocalizationModels

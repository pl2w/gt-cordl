#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitleNewsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTitleNewsResult)
namespace PlayFab::ClientModels {
class TitleNewsItem;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTitleNewsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTitleNewsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTitleNewsResult*, "PlayFab.ClientModels", "GetTitleNewsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTitleNewsResult
class CORDL_TYPE GetTitleNewsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field News, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_News, put=__cordl_internal_set_News)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*  News;

static inline ::PlayFab::ClientModels::GetTitleNewsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>* const& __cordl_internal_get_News() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*& __cordl_internal_get_News() ;

constexpr void __cordl_internal_set_News(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*  value) ;

/// @brief Method .ctor, addr 0xa84de60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleNewsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleNewsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleNewsResult(GetTitleNewsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleNewsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleNewsResult(GetTitleNewsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20091};

/// @brief Field News, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TitleNewsItem*>*  ___News;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTitleNewsResult, ___News) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTitleNewsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

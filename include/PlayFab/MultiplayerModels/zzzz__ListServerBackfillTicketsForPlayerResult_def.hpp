#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListServerBackfillTicketsForPlayerResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ListServerBackfillTicketsForPlayerResult)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class ListServerBackfillTicketsForPlayerResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult*, "PlayFab.MultiplayerModels", "ListServerBackfillTicketsForPlayerResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.ListServerBackfillTicketsForPlayerResult
class CORDL_TYPE ListServerBackfillTicketsForPlayerResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field TicketIds, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TicketIds, put=__cordl_internal_set_TicketIds)) ::System::Collections::Generic::List_1<::StringW>*  TicketIds;

static inline ::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_TicketIds() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_TicketIds() ;

constexpr void __cordl_internal_set_TicketIds(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa840b38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ListServerBackfillTicketsForPlayerResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ListServerBackfillTicketsForPlayerResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ListServerBackfillTicketsForPlayerResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ListServerBackfillTicketsForPlayerResult(ListServerBackfillTicketsForPlayerResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19705};

/// @brief Field TicketIds, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___TicketIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult, ___TicketIds) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::ListServerBackfillTicketsForPlayerResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

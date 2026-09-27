#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/EnableMultiplayerServersForTitleResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServerEnabledStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(EnableMultiplayerServersForTitleResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class EnableMultiplayerServersForTitleResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse*, "PlayFab.MultiplayerModels", "EnableMultiplayerServersForTitleResponse");
// Dependencies PlayFab.MultiplayerModels.TitleMultiplayerServerEnabledStatus, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.EnableMultiplayerServersForTitleResponse
class CORDL_TYPE EnableMultiplayerServersForTitleResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Status, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  Status;

static inline ::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse* New_ctor() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  value) ;

/// @brief Method .ctor, addr 0xa840938, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnableMultiplayerServersForTitleResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnableMultiplayerServersForTitleResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnableMultiplayerServersForTitleResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnableMultiplayerServersForTitleResponse(EnableMultiplayerServersForTitleResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19641};

/// @brief Field Status, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  ___Status;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse, ___Status) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::EnableMultiplayerServersForTitleResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetTitleEnabledForMultiplayerServersStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/MultiplayerModels/zzzz__TitleMultiplayerServerEnabledStatus_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
CORDL_MODULE_EXPORT(GetTitleEnabledForMultiplayerServersStatusResponse)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetTitleEnabledForMultiplayerServersStatusResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse*, "PlayFab.MultiplayerModels", "GetTitleEnabledForMultiplayerServersStatusResponse");
// Dependencies PlayFab.MultiplayerModels.TitleMultiplayerServerEnabledStatus, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetTitleEnabledForMultiplayerServersStatusResponse
class CORDL_TYPE GetTitleEnabledForMultiplayerServersStatusResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Status, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_Status, put=__cordl_internal_set_Status)) ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  Status;

static inline ::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse* New_ctor() ;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus> const& __cordl_internal_get_Status() const;

constexpr ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>& __cordl_internal_get_Status() ;

constexpr void __cordl_internal_set_Status(::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  value) ;

/// @brief Method .ctor, addr 0xa840a20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleEnabledForMultiplayerServersStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleEnabledForMultiplayerServersStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleEnabledForMultiplayerServersStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleEnabledForMultiplayerServersStatusResponse(GetTitleEnabledForMultiplayerServersStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19670};

/// @brief Field Status, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::MultiplayerModels::TitleMultiplayerServerEnabledStatus>  ___Status;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse, ___Status) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetTitleEnabledForMultiplayerServersStatusResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels

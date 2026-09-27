#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromTwitchIDsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromTwitchIDsResult)
namespace PlayFab::ClientModels {
class TwitchPlayFabIdPair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromTwitchIDsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromTwitchIDsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromTwitchIDsResult
class CORDL_TYPE GetPlayFabIDsFromTwitchIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TwitchPlayFabIdPair*>*  Data;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TwitchPlayFabIdPair*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TwitchPlayFabIdPair*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::List_1<::PlayFab::ClientModels::TwitchPlayFabIdPair*>*  value) ;

/// @brief Method .ctor, addr 0xa84ddd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromTwitchIDsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromTwitchIDsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromTwitchIDsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromTwitchIDsResult(GetPlayFabIDsFromTwitchIDsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20074};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::TwitchPlayFabIdPair*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromTwitchIDsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

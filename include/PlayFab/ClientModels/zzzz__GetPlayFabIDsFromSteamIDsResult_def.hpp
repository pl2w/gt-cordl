#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromSteamIDsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromSteamIDsResult)
namespace PlayFab::ClientModels {
class SteamPlayFabIdPair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromSteamIDsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromSteamIDsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromSteamIDsResult
class CORDL_TYPE GetPlayFabIDsFromSteamIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SteamPlayFabIdPair*>*  Data;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SteamPlayFabIdPair*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SteamPlayFabIdPair*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::List_1<::PlayFab::ClientModels::SteamPlayFabIdPair*>*  value) ;

/// @brief Method .ctor, addr 0xa84ddc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromSteamIDsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromSteamIDsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromSteamIDsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromSteamIDsResult(GetPlayFabIDsFromSteamIDsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20072};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::SteamPlayFabIdPair*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromSteamIDsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

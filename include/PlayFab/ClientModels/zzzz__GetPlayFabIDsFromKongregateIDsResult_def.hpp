#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromKongregateIDsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromKongregateIDsResult)
namespace PlayFab::ClientModels {
class KongregatePlayFabIdPair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromKongregateIDsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromKongregateIDsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromKongregateIDsResult
class CORDL_TYPE GetPlayFabIDsFromKongregateIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::KongregatePlayFabIdPair*>*  Data;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::KongregatePlayFabIdPair*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::KongregatePlayFabIdPair*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::List_1<::PlayFab::ClientModels::KongregatePlayFabIdPair*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromKongregateIDsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromKongregateIDsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromKongregateIDsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromKongregateIDsResult(GetPlayFabIDsFromKongregateIDsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20066};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::KongregatePlayFabIdPair*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromKongregateIDsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

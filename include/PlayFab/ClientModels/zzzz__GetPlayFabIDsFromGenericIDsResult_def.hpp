#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayFabIDsFromGenericIDsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayFabIDsFromGenericIDsResult)
namespace PlayFab::ClientModels {
class GenericPlayFabIdPair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayFabIDsFromGenericIDsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsResult*, "PlayFab.ClientModels", "GetPlayFabIDsFromGenericIDsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayFabIDsFromGenericIDsResult
class CORDL_TYPE GetPlayFabIDsFromGenericIDsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericPlayFabIdPair*>*  Data;

static inline ::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericPlayFabIdPair*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericPlayFabIdPair*>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericPlayFabIdPair*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayFabIDsFromGenericIDsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGenericIDsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayFabIDsFromGenericIDsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayFabIDsFromGenericIDsResult(GetPlayFabIDsFromGenericIDsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20062};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::GenericPlayFabIdPair*>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayFabIDsFromGenericIDsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

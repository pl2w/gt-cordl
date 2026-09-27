#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitleDataRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTitleDataRequest)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTitleDataRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTitleDataRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTitleDataRequest*, "PlayFab.ClientModels", "GetTitleDataRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTitleDataRequest
class CORDL_TYPE GetTitleDataRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Keys, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Keys, put=__cordl_internal_set_Keys)) ::System::Collections::Generic::List_1<::StringW>*  Keys;

static inline ::PlayFab::ClientModels::GetTitleDataRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Keys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Keys() ;

constexpr void __cordl_internal_set_Keys(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84de48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTitleDataRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTitleDataRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTitleDataRequest(GetTitleDataRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTitleDataRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTitleDataRequest(GetTitleDataRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20088};

/// @brief Field Keys, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Keys;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetTitleDataRequest, ___Keys) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetTitleDataRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetSharedGroupDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetSharedGroupDataResult)
namespace PlayFab::ClientModels {
class SharedGroupDataRecord;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetSharedGroupDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetSharedGroupDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetSharedGroupDataResult*, "PlayFab.ClientModels", "GetSharedGroupDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetSharedGroupDataResult
class CORDL_TYPE GetSharedGroupDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  Data;

/// @brief Field Members, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Members, put=__cordl_internal_set_Members)) ::System::Collections::Generic::List_1<::StringW>*  Members;

static inline ::PlayFab::ClientModels::GetSharedGroupDataResult* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*& __cordl_internal_get_Data() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_Members() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_Members() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  value) ;

constexpr void __cordl_internal_set_Members(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84de20, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetSharedGroupDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetSharedGroupDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetSharedGroupDataResult(GetSharedGroupDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetSharedGroupDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetSharedGroupDataResult(GetSharedGroupDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20083};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::SharedGroupDataRecord*>*  ___Data;

/// @brief Field Members, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___Members;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetSharedGroupDataResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetSharedGroupDataResult, ___Members) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetSharedGroupDataResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

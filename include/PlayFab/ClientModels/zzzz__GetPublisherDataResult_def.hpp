#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPublisherDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPublisherDataResult)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPublisherDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPublisherDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPublisherDataResult*, "PlayFab.ClientModels", "GetPublisherDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPublisherDataResult
class CORDL_TYPE GetPublisherDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  Data;

static inline ::PlayFab::ClientModels::GetPublisherDataResult* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get_Data() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84ddf8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPublisherDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPublisherDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPublisherDataResult(GetPublisherDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPublisherDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPublisherDataResult(GetPublisherDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20078};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ___Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPublisherDataResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPublisherDataResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

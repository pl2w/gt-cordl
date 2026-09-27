#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetUserDataResult)
namespace PlayFab::ClientModels {
class UserDataRecord;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetUserDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetUserDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetUserDataResult*, "PlayFab.ClientModels", "GetUserDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetUserDataResult
class CORDL_TYPE GetUserDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Data, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  Data;

/// @brief Field DataVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataVersion, put=__cordl_internal_set_DataVersion)) uint32_t  DataVersion;

static inline ::PlayFab::ClientModels::GetUserDataResult* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& __cordl_internal_get_Data() ;

constexpr uint32_t const& __cordl_internal_get_DataVersion() const;

constexpr uint32_t& __cordl_internal_get_DataVersion() ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value) ;

constexpr void __cordl_internal_set_DataVersion(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84de90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetUserDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetUserDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetUserDataResult(GetUserDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetUserDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetUserDataResult(GetUserDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20097};

/// @brief Field Data, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  ___Data;

/// @brief Field DataVersion, offset: 0x28, size: 0x4, def value: None
 uint32_t  ___DataVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetUserDataResult, ___Data) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetUserDataResult, ___DataVersion) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetUserDataResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterDataResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetCharacterDataResult)
namespace PlayFab::ClientModels {
class UserDataRecord;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterDataResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterDataResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterDataResult*, "PlayFab.ClientModels", "GetCharacterDataResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterDataResult
class CORDL_TYPE GetCharacterDataResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field Data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Data, put=__cordl_internal_set_Data)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  Data;

/// @brief Field DataVersion, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_DataVersion, put=__cordl_internal_set_DataVersion)) uint32_t  DataVersion;

static inline ::PlayFab::ClientModels::GetCharacterDataResult* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>* const& __cordl_internal_get_Data() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*& __cordl_internal_get_Data() ;

constexpr uint32_t const& __cordl_internal_get_DataVersion() const;

constexpr uint32_t& __cordl_internal_get_DataVersion() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_Data(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  value) ;

constexpr void __cordl_internal_set_DataVersion(uint32_t  value) ;

/// @brief Method .ctor, addr 0xa84dbf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterDataResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterDataResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterDataResult(GetCharacterDataResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterDataResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterDataResult(GetCharacterDataResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20013};

/// @brief Field CharacterId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field Data, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::ClientModels::UserDataRecord*>*  ___Data;

/// @brief Field DataVersion, offset: 0x30, size: 0x4, def value: None
 uint32_t  ___DataVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataResult, ___CharacterId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataResult, ___Data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterDataResult, ___DataVersion) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterDataResult) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels

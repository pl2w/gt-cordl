#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetProfileLanguageResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/ProfilesModels/zzzz__OperationTypes_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SetProfileLanguageResponse)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class SetProfileLanguageResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::SetProfileLanguageResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::SetProfileLanguageResponse*, "PlayFab.ProfilesModels", "SetProfileLanguageResponse");
// Dependencies PlayFab.ProfilesModels.OperationTypes, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.SetProfileLanguageResponse
class CORDL_TYPE SetProfileLanguageResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field OperationResult, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_OperationResult, put=__cordl_internal_set_OperationResult)) ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>  OperationResult;

/// @brief Field VersionNumber, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_VersionNumber, put=__cordl_internal_set_VersionNumber)) ::System::Nullable_1<int32_t>  VersionNumber;

static inline ::PlayFab::ProfilesModels::SetProfileLanguageResponse* New_ctor() ;

constexpr ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes> const& __cordl_internal_get_OperationResult() const;

constexpr ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>& __cordl_internal_get_OperationResult() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_VersionNumber() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_VersionNumber() ;

constexpr void __cordl_internal_set_OperationResult(::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>  value) ;

constexpr void __cordl_internal_set_VersionNumber(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa840790, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetProfileLanguageResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetProfileLanguageResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetProfileLanguageResponse(SetProfileLanguageResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetProfileLanguageResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetProfileLanguageResponse(SetProfileLanguageResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19580};

/// @brief Field OperationResult, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::ProfilesModels::OperationTypes>  ___OperationResult;

/// @brief Field VersionNumber, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___VersionNumber;

/// @brief Size padding 0x30 - 0x40 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::SetProfileLanguageResponse, ___OperationResult) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::SetProfileLanguageResponse, ___VersionNumber) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::SetProfileLanguageResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels

#pragma once
// IWYU pragma private; include "PlayFab/GroupsModels/UpdateGroupResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/GroupsModels/zzzz__OperationTypes_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateGroupResponse)
// Forward declare root types
namespace PlayFab::GroupsModels {
class UpdateGroupResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::GroupsModels::UpdateGroupResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::GroupsModels::UpdateGroupResponse*, "PlayFab.GroupsModels", "UpdateGroupResponse");
// Dependencies PlayFab.GroupsModels.OperationTypes, PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::GroupsModels {
// Is value type: false
// CS Name: PlayFab.GroupsModels.UpdateGroupResponse
class CORDL_TYPE UpdateGroupResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field OperationReason, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationReason, put=__cordl_internal_set_OperationReason)) ::StringW  OperationReason;

/// @brief Field ProfileVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field SetResult, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_SetResult, put=__cordl_internal_set_SetResult)) ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>  SetResult;

static inline ::PlayFab::GroupsModels::UpdateGroupResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_OperationReason() const;

constexpr ::StringW& __cordl_internal_get_OperationReason() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes> const& __cordl_internal_get_SetResult() const;

constexpr ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>& __cordl_internal_get_SetResult() ;

constexpr void __cordl_internal_set_OperationReason(::StringW  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_SetResult(::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>  value) ;

/// @brief Method .ctor, addr 0xa840e60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateGroupResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateGroupResponse(UpdateGroupResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateGroupResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateGroupResponse(UpdateGroupResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19811};

/// @brief Field OperationReason, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___OperationReason;

/// @brief Field ProfileVersion, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field SetResult, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::GroupsModels::OperationTypes>  ___SetResult;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupResponse, ___OperationReason) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupResponse, ___ProfileVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::GroupsModels::UpdateGroupResponse, ___SetResult) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::GroupsModels::UpdateGroupResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::GroupsModels

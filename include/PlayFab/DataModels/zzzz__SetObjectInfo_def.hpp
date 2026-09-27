#pragma once
// IWYU pragma private; include "PlayFab/DataModels/SetObjectInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/DataModels/zzzz__OperationTypes_def.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SetObjectInfo)
// Forward declare root types
namespace PlayFab::DataModels {
class SetObjectInfo;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::SetObjectInfo*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::SetObjectInfo*, "PlayFab.DataModels", "SetObjectInfo");
// Dependencies PlayFab.DataModels.OperationTypes, PlayFab.SharedModels.PlayFabBaseModel, System.Nullable`1<T>
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.SetObjectInfo
class CORDL_TYPE SetObjectInfo : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field ObjectName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_ObjectName, put=__cordl_internal_set_ObjectName)) ::StringW  ObjectName;

/// @brief Field OperationReason, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OperationReason, put=__cordl_internal_set_OperationReason)) ::StringW  OperationReason;

/// @brief Field SetResult, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_SetResult, put=__cordl_internal_set_SetResult)) ::System::Nullable_1<::PlayFab::DataModels::OperationTypes>  SetResult;

static inline ::PlayFab::DataModels::SetObjectInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ObjectName() const;

constexpr ::StringW& __cordl_internal_get_ObjectName() ;

constexpr ::StringW const& __cordl_internal_get_OperationReason() const;

constexpr ::StringW& __cordl_internal_get_OperationReason() ;

constexpr ::System::Nullable_1<::PlayFab::DataModels::OperationTypes> const& __cordl_internal_get_SetResult() const;

constexpr ::System::Nullable_1<::PlayFab::DataModels::OperationTypes>& __cordl_internal_get_SetResult() ;

constexpr void __cordl_internal_set_ObjectName(::StringW  value) ;

constexpr void __cordl_internal_set_OperationReason(::StringW  value) ;

constexpr void __cordl_internal_set_SetResult(::System::Nullable_1<::PlayFab::DataModels::OperationTypes>  value) ;

/// @brief Method .ctor, addr 0xa842ef4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetObjectInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetObjectInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetObjectInfo(SetObjectInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetObjectInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetObjectInfo(SetObjectInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19866};

/// @brief Field ObjectName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___ObjectName;

/// @brief Field OperationReason, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___OperationReason;

/// @brief Field SetResult, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::PlayFab::DataModels::OperationTypes>  ___SetResult;

/// @brief Size padding 0x28 - 0x30 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::SetObjectInfo, ___ObjectName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObjectInfo, ___OperationReason) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::SetObjectInfo, ___SetResult) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::SetObjectInfo) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::DataModels

#pragma once
// IWYU pragma private; include "KID/Model/GetDefaultPermissionsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__AgeStatusType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetDefaultPermissionsResponse)
namespace KID::Model {
struct AgeCategoryV2;
}
namespace KID::Model {
struct AgeStatusType;
}
namespace KID::Model {
class Permission;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace KID::Model {
class GetDefaultPermissionsResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::GetDefaultPermissionsResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::GetDefaultPermissionsResponse*, "KID.Model", "GetDefaultPermissionsResponse");
// [DataContract(Name = "GetDefaultPermissionsResponse")]
// Dependencies KID.Model.AgeCategoryV2, KID.Model.AgeStatusType, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GetDefaultPermissionsResponse
class CORDL_TYPE GetDefaultPermissionsResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "ageCategory", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeCategory, put=set_AgeCategory)) ::KID::Model::AgeCategoryV2  AgeCategory;

/// @brief [DataMember(Name = "ageStatus", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeStatus, put=set_AgeStatus)) ::KID::Model::AgeStatusType  AgeStatus;

/// @brief [DataMember(Name = "permissions", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Permissions, put=set_Permissions)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  Permissions;

/// @brief [DataMember(Name = "requiresParentConsentForDataProcessing", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_RequiresParentConsentForDataProcessing, put=set_RequiresParentConsentForDataProcessing)) bool  RequiresParentConsentForDataProcessing;

/// @brief Field <AgeCategory>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeCategory_k__BackingField, put=__cordl_internal_set__AgeCategory_k__BackingField)) ::KID::Model::AgeCategoryV2  _AgeCategory_k__BackingField;

/// @brief Field <AgeStatus>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__AgeStatus_k__BackingField, put=__cordl_internal_set__AgeStatus_k__BackingField)) ::KID::Model::AgeStatusType  _AgeStatus_k__BackingField;

/// @brief Field <Permissions>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Permissions_k__BackingField, put=__cordl_internal_set__Permissions_k__BackingField)) ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  _Permissions_k__BackingField;

/// @brief Field <RequiresParentConsentForDataProcessing>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__RequiresParentConsentForDataProcessing_k__BackingField, put=__cordl_internal_set__RequiresParentConsentForDataProcessing_k__BackingField)) bool  _RequiresParentConsentForDataProcessing_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GetDefaultPermissionsResponse* New_ctor() ;

static inline ::KID::Model::GetDefaultPermissionsResponse* New_ctor(bool  requiresParentConsentForDataProcessing, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory) ;

/// @brief Method ToJson, addr 0x9cd8790, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd8548, size 0x248, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::KID::Model::AgeCategoryV2 const& __cordl_internal_get__AgeCategory_k__BackingField() const;

constexpr ::KID::Model::AgeCategoryV2& __cordl_internal_get__AgeCategory_k__BackingField() ;

constexpr ::KID::Model::AgeStatusType const& __cordl_internal_get__AgeStatus_k__BackingField() const;

constexpr ::KID::Model::AgeStatusType& __cordl_internal_get__AgeStatus_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>* const& __cordl_internal_get__Permissions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::KID::Model::Permission*>*& __cordl_internal_get__Permissions_k__BackingField() ;

constexpr bool const& __cordl_internal_get__RequiresParentConsentForDataProcessing_k__BackingField() const;

constexpr bool& __cordl_internal_get__RequiresParentConsentForDataProcessing_k__BackingField() ;

constexpr void __cordl_internal_set__AgeCategory_k__BackingField(::KID::Model::AgeCategoryV2  value) ;

constexpr void __cordl_internal_set__AgeStatus_k__BackingField(::KID::Model::AgeStatusType  value) ;

constexpr void __cordl_internal_set__Permissions_k__BackingField(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

constexpr void __cordl_internal_set__RequiresParentConsentForDataProcessing_k__BackingField(bool  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd8484, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd848c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(bool  requiresParentConsentForDataProcessing, ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  permissions, ::KID::Model::AgeStatusType  ageStatus, ::KID::Model::AgeCategoryV2  ageCategory) ;

/// [CompilerGenerated]
/// @brief Method get_AgeCategory, addr 0x9cd8474, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeCategoryV2 get_AgeCategory() ;

/// [CompilerGenerated]
/// @brief Method get_AgeStatus, addr 0x9cd8464, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeStatusType get_AgeStatus() ;

/// [CompilerGenerated]
/// @brief Method get_Permissions, addr 0x9cd8538, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::KID::Model::Permission*>* get_Permissions() ;

/// [CompilerGenerated]
/// @brief Method get_RequiresParentConsentForDataProcessing, addr 0x9cd8528, size 0x8, virtual false, abstract: false, final false
inline bool get_RequiresParentConsentForDataProcessing() ;

/// [CompilerGenerated]
/// @brief Method set_AgeCategory, addr 0x9cd847c, size 0x8, virtual false, abstract: false, final false
inline void set_AgeCategory(::KID::Model::AgeCategoryV2  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeStatus, addr 0x9cd846c, size 0x8, virtual false, abstract: false, final false
inline void set_AgeStatus(::KID::Model::AgeStatusType  value) ;

/// [CompilerGenerated]
/// @brief Method set_Permissions, addr 0x9cd8540, size 0x8, virtual false, abstract: false, final false
inline void set_Permissions(::System::Collections::Generic::List_1<::KID::Model::Permission*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RequiresParentConsentForDataProcessing, addr 0x9cd8530, size 0x8, virtual false, abstract: false, final false
inline void set_RequiresParentConsentForDataProcessing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetDefaultPermissionsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetDefaultPermissionsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetDefaultPermissionsResponse(GetDefaultPermissionsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetDefaultPermissionsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetDefaultPermissionsResponse(GetDefaultPermissionsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31090};

/// [CompilerGenerated]
/// @brief Field <AgeStatus>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::KID::Model::AgeStatusType  ____AgeStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeCategory>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::KID::Model::AgeCategoryV2  ____AgeCategory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RequiresParentConsentForDataProcessing>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____RequiresParentConsentForDataProcessing_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Permissions>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::KID::Model::Permission*>*  ____Permissions_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GetDefaultPermissionsResponse, ____AgeStatus_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetDefaultPermissionsResponse, ____AgeCategory_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetDefaultPermissionsResponse, ____RequiresParentConsentForDataProcessing_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetDefaultPermissionsResponse, ____Permissions_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GetDefaultPermissionsResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model

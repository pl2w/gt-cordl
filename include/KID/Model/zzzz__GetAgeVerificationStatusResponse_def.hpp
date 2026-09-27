#pragma once
// IWYU pragma private; include "KID/Model/GetAgeVerificationStatusResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "KID/Model/zzzz__AgeCategoryV2_def.hpp"
#include "KID/Model/zzzz__VerificationMethod_def.hpp"
#include "KID/Model/zzzz__VerificationStatusV2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetAgeVerificationStatusResponse)
namespace KID::Model {
struct AgeCategoryV2;
}
namespace KID::Model {
class AgeRangeV2;
}
namespace KID::Model {
struct VerificationMethod;
}
namespace KID::Model {
struct VerificationStatusV2;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace KID::Model {
class GetAgeVerificationStatusResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::GetAgeVerificationStatusResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::GetAgeVerificationStatusResponse*, "KID.Model", "GetAgeVerificationStatusResponse");
// [DataContract(Name = "GetAgeVerificationStatusResponse")]
// Dependencies KID.Model.AgeCategoryV2, KID.Model.VerificationMethod, KID.Model.VerificationStatusV2, System.Guid, System.Nullable`1<T>, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GetAgeVerificationStatusResponse
class CORDL_TYPE GetAgeVerificationStatusResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "age", EmitDefaultValue = false)]
 __declspec(property(get=get_Age, put=set_Age)) ::KID::Model::AgeRangeV2*  Age;

/// @brief [DataMember(Name = "ageCategory", EmitDefaultValue = false)]
 __declspec(property(get=get_AgeCategory, put=set_AgeCategory)) ::System::Nullable_1<::KID::Model::AgeCategoryV2>  AgeCategory;

/// @brief [DataMember(Name = "id", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Id, put=set_Id)) ::System::Guid  Id;

/// @brief [DataMember(Name = "method", EmitDefaultValue = false)]
 __declspec(property(get=get_Method, put=set_Method)) ::System::Nullable_1<::KID::Model::VerificationMethod>  Method;

/// @brief [DataMember(Name = "status", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Status, put=set_Status)) ::KID::Model::VerificationStatusV2  Status;

/// @brief Field <AgeCategory>k__BackingField, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get__AgeCategory_k__BackingField, put=__cordl_internal_set__AgeCategory_k__BackingField)) ::System::Nullable_1<::KID::Model::AgeCategoryV2>  _AgeCategory_k__BackingField;

/// @brief Field <Age>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) ::KID::Model::AgeRangeV2*  _Age_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::System::Guid  _Id_k__BackingField;

/// @brief Field <Method>k__BackingField, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__Method_k__BackingField, put=__cordl_internal_set__Method_k__BackingField)) ::System::Nullable_1<::KID::Model::VerificationMethod>  _Method_k__BackingField;

/// @brief Field <Status>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Status_k__BackingField, put=__cordl_internal_set__Status_k__BackingField)) ::KID::Model::VerificationStatusV2  _Status_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GetAgeVerificationStatusResponse* New_ctor() ;

static inline ::KID::Model::GetAgeVerificationStatusResponse* New_ctor(::System::Guid  id, ::KID::Model::VerificationStatusV2  status, ::KID::Model::AgeRangeV2*  age, ::System::Nullable_1<::KID::Model::AgeCategoryV2>  ageCategory, ::System::Nullable_1<::KID::Model::VerificationMethod>  method) ;

/// @brief Method ToJson, addr 0x9cd8114, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd7e28, size 0x2ec, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Nullable_1<::KID::Model::AgeCategoryV2> const& __cordl_internal_get__AgeCategory_k__BackingField() const;

constexpr ::System::Nullable_1<::KID::Model::AgeCategoryV2>& __cordl_internal_get__AgeCategory_k__BackingField() ;

constexpr ::KID::Model::AgeRangeV2* const& __cordl_internal_get__Age_k__BackingField() const;

constexpr ::KID::Model::AgeRangeV2*& __cordl_internal_get__Age_k__BackingField() ;

constexpr ::System::Guid const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::System::Guid& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::System::Nullable_1<::KID::Model::VerificationMethod> const& __cordl_internal_get__Method_k__BackingField() const;

constexpr ::System::Nullable_1<::KID::Model::VerificationMethod>& __cordl_internal_get__Method_k__BackingField() ;

constexpr ::KID::Model::VerificationStatusV2 const& __cordl_internal_get__Status_k__BackingField() const;

constexpr ::KID::Model::VerificationStatusV2& __cordl_internal_get__Status_k__BackingField() ;

constexpr void __cordl_internal_set__AgeCategory_k__BackingField(::System::Nullable_1<::KID::Model::AgeCategoryV2>  value) ;

constexpr void __cordl_internal_set__Age_k__BackingField(::KID::Model::AgeRangeV2*  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(::System::Guid  value) ;

constexpr void __cordl_internal_set__Method_k__BackingField(::System::Nullable_1<::KID::Model::VerificationMethod>  value) ;

constexpr void __cordl_internal_set__Status_k__BackingField(::KID::Model::VerificationStatusV2  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd7d88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd7d90, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  id, ::KID::Model::VerificationStatusV2  status, ::KID::Model::AgeRangeV2*  age, ::System::Nullable_1<::KID::Model::AgeCategoryV2>  ageCategory, ::System::Nullable_1<::KID::Model::VerificationMethod>  method) ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x9cd7e18, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::AgeRangeV2* get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_AgeCategory, addr 0x9cd7d68, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::KID::Model::AgeCategoryV2> get_AgeCategory() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0x9cd7dfc, size 0x10, virtual false, abstract: false, final false
inline ::System::Guid get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Method, addr 0x9cd7d78, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<::KID::Model::VerificationMethod> get_Method() ;

/// [CompilerGenerated]
/// @brief Method get_Status, addr 0x9cd7d58, size 0x8, virtual false, abstract: false, final false
inline ::KID::Model::VerificationStatusV2 get_Status() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x9cd7e20, size 0x8, virtual false, abstract: false, final false
inline void set_Age(::KID::Model::AgeRangeV2*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgeCategory, addr 0x9cd7d70, size 0x8, virtual false, abstract: false, final false
inline void set_AgeCategory(::System::Nullable_1<::KID::Model::AgeCategoryV2>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0x9cd7e0c, size 0xc, virtual false, abstract: false, final false
inline void set_Id(::System::Guid  value) ;

/// [CompilerGenerated]
/// @brief Method set_Method, addr 0x9cd7d80, size 0x8, virtual false, abstract: false, final false
inline void set_Method(::System::Nullable_1<::KID::Model::VerificationMethod>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Status, addr 0x9cd7d60, size 0x8, virtual false, abstract: false, final false
inline void set_Status(::KID::Model::VerificationStatusV2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAgeVerificationStatusResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAgeVerificationStatusResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAgeVerificationStatusResponse(GetAgeVerificationStatusResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAgeVerificationStatusResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAgeVerificationStatusResponse(GetAgeVerificationStatusResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31087};

/// [CompilerGenerated]
/// @brief Field <Status>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::KID::Model::VerificationStatusV2  ____Status_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeCategory>k__BackingField, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<::KID::Model::AgeCategoryV2>  ____AgeCategory_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Method>k__BackingField, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::KID::Model::VerificationMethod>  ____Method_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x38, size: 0x10, def value: None
 ::System::Guid  ____Id_k__BackingField;

/// @brief Size padding 0x40 - 0x50 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::KID::Model::AgeRangeV2*  ____Age_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GetAgeVerificationStatusResponse, ____Status_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeVerificationStatusResponse, ____AgeCategory_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeVerificationStatusResponse, ____Method_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeVerificationStatusResponse, ____Id_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeVerificationStatusResponse, ____Age_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GetAgeVerificationStatusResponse) == 0x40, "Size mismatch!");

} // namespace end def KID::Model

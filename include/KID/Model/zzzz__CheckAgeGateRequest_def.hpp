#pragma once
// IWYU pragma private; include "KID/Model/CheckAgeGateRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CheckAgeGateRequest)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace KID::Model {
class CheckAgeGateRequest;
}
// Write type traits
MARK_REF_T(::KID::Model::CheckAgeGateRequest*);
DEFINE_IL2CPP_CLASS(::KID::Model::CheckAgeGateRequest*, "KID.Model", "CheckAgeGateRequest");
// [DataContract(Name = "CheckAgeGateRequest")]
// Dependencies System.DateTime, System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.CheckAgeGateRequest
class CORDL_TYPE CheckAgeGateRequest : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "age", EmitDefaultValue = false)]
 __declspec(property(get=get_Age, put=set_Age)) int32_t  Age;

/// [DataMember(Name = "dateOfBirth", EmitDefaultValue = false)]
/// @brief [JsonConverter(typeof(KID.Client.OpenAPIDateConverter))]
 __declspec(property(get=get_DateOfBirth, put=set_DateOfBirth)) ::System::DateTime  DateOfBirth;

/// @brief [DataMember(Name = "jurisdiction", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_Jurisdiction, put=set_Jurisdiction)) ::StringW  Jurisdiction;

/// @brief Field <Age>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__Age_k__BackingField, put=__cordl_internal_set__Age_k__BackingField)) int32_t  _Age_k__BackingField;

/// @brief Field <DateOfBirth>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateOfBirth_k__BackingField, put=__cordl_internal_set__DateOfBirth_k__BackingField)) ::System::DateTime  _DateOfBirth_k__BackingField;

/// @brief Field <Jurisdiction>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Jurisdiction_k__BackingField, put=__cordl_internal_set__Jurisdiction_k__BackingField)) ::StringW  _Jurisdiction_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::CheckAgeGateRequest* New_ctor() ;

static inline ::KID::Model::CheckAgeGateRequest* New_ctor(::StringW  jurisdiction, ::System::DateTime  dateOfBirth, int32_t  age) ;

/// @brief Method ToJson, addr 0x9cd4434, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd4260, size 0x1d4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get__Age_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Age_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateOfBirth_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateOfBirth_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Jurisdiction_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Jurisdiction_k__BackingField() ;

constexpr void __cordl_internal_set__Age_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__DateOfBirth_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Jurisdiction_k__BackingField(::StringW  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd4190, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd4198, size 0x98, virtual false, abstract: false, final false
inline void _ctor(::StringW  jurisdiction, ::System::DateTime  dateOfBirth, int32_t  age) ;

/// [CompilerGenerated]
/// @brief Method get_Age, addr 0x9cd4250, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Age() ;

/// [CompilerGenerated]
/// @brief Method get_DateOfBirth, addr 0x9cd4240, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateOfBirth() ;

/// [CompilerGenerated]
/// @brief Method get_Jurisdiction, addr 0x9cd4230, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Jurisdiction() ;

/// [CompilerGenerated]
/// @brief Method set_Age, addr 0x9cd4258, size 0x8, virtual false, abstract: false, final false
inline void set_Age(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateOfBirth, addr 0x9cd4248, size 0x8, virtual false, abstract: false, final false
inline void set_DateOfBirth(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Jurisdiction, addr 0x9cd4238, size 0x8, virtual false, abstract: false, final false
inline void set_Jurisdiction(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CheckAgeGateRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeGateRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CheckAgeGateRequest(CheckAgeGateRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CheckAgeGateRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CheckAgeGateRequest(CheckAgeGateRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31066};

/// [CompilerGenerated]
/// @brief Field <Jurisdiction>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Jurisdiction_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateOfBirth>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::System::DateTime  ____DateOfBirth_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Age>k__BackingField, offset: 0x20, size: 0x4, def value: None
 int32_t  ____Age_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::CheckAgeGateRequest, ____Jurisdiction_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeGateRequest, ____DateOfBirth_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::CheckAgeGateRequest, ____Age_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::CheckAgeGateRequest) == 0x28, "Size mismatch!");

} // namespace end def KID::Model

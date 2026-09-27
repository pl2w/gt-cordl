#pragma once
// IWYU pragma private; include "KID/Model/GetAgeGateRequirementsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetAgeGateRequirementsResponse)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace KID::Model {
class GetAgeGateRequirementsResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::GetAgeGateRequirementsResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::GetAgeGateRequirementsResponse*, "KID.Model", "GetAgeGateRequirementsResponse");
// [DataContract(Name = "GetAgeGateRequirementsResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.GetAgeGateRequirementsResponse
class CORDL_TYPE GetAgeGateRequirementsResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "ageAssuranceRequired", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeAssuranceRequired, put=set_AgeAssuranceRequired)) bool  AgeAssuranceRequired;

/// @brief [DataMember(Name = "approvedAgeCollectionMethods", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ApprovedAgeCollectionMethods, put=set_ApprovedAgeCollectionMethods)) ::System::Collections::Generic::List_1<::StringW>*  ApprovedAgeCollectionMethods;

/// @brief [DataMember(Name = "civilAge", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_CivilAge, put=set_CivilAge)) int32_t  CivilAge;

/// @brief [DataMember(Name = "digitalConsentAge", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_DigitalConsentAge, put=set_DigitalConsentAge)) int32_t  DigitalConsentAge;

/// @brief [DataMember(Name = "minimumAge", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_MinimumAge, put=set_MinimumAge)) int32_t  MinimumAge;

/// @brief [DataMember(Name = "shouldDisplay", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ShouldDisplay, put=set_ShouldDisplay)) bool  ShouldDisplay;

/// @brief Field <AgeAssuranceRequired>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__AgeAssuranceRequired_k__BackingField, put=__cordl_internal_set__AgeAssuranceRequired_k__BackingField)) bool  _AgeAssuranceRequired_k__BackingField;

/// @brief Field <ApprovedAgeCollectionMethods>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ApprovedAgeCollectionMethods_k__BackingField, put=__cordl_internal_set__ApprovedAgeCollectionMethods_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>*  _ApprovedAgeCollectionMethods_k__BackingField;

/// @brief Field <CivilAge>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__CivilAge_k__BackingField, put=__cordl_internal_set__CivilAge_k__BackingField)) int32_t  _CivilAge_k__BackingField;

/// @brief Field <DigitalConsentAge>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__DigitalConsentAge_k__BackingField, put=__cordl_internal_set__DigitalConsentAge_k__BackingField)) int32_t  _DigitalConsentAge_k__BackingField;

/// @brief Field <MinimumAge>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinimumAge_k__BackingField, put=__cordl_internal_set__MinimumAge_k__BackingField)) int32_t  _MinimumAge_k__BackingField;

/// @brief Field <ShouldDisplay>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShouldDisplay_k__BackingField, put=__cordl_internal_set__ShouldDisplay_k__BackingField)) bool  _ShouldDisplay_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::GetAgeGateRequirementsResponse* New_ctor() ;

static inline ::KID::Model::GetAgeGateRequirementsResponse* New_ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge, int32_t  minimumAge, ::System::Collections::Generic::List_1<::StringW>*  approvedAgeCollectionMethods) ;

/// @brief Method ToJson, addr 0x9cd7cfc, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cd7a98, size 0x264, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__AgeAssuranceRequired_k__BackingField() const;

constexpr bool& __cordl_internal_get__AgeAssuranceRequired_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__ApprovedAgeCollectionMethods_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__ApprovedAgeCollectionMethods_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CivilAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CivilAge_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DigitalConsentAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DigitalConsentAge_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__MinimumAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__MinimumAge_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShouldDisplay_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShouldDisplay_k__BackingField() ;

constexpr void __cordl_internal_set__AgeAssuranceRequired_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ApprovedAgeCollectionMethods_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__CivilAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__DigitalConsentAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__MinimumAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ShouldDisplay_k__BackingField(bool  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cd7980, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cd7988, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge, int32_t  minimumAge, ::System::Collections::Generic::List_1<::StringW>*  approvedAgeCollectionMethods) ;

/// [CompilerGenerated]
/// @brief Method get_AgeAssuranceRequired, addr 0x9cd7a48, size 0x8, virtual false, abstract: false, final false
inline bool get_AgeAssuranceRequired() ;

/// [CompilerGenerated]
/// @brief Method get_ApprovedAgeCollectionMethods, addr 0x9cd7a88, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::StringW>* get_ApprovedAgeCollectionMethods() ;

/// [CompilerGenerated]
/// @brief Method get_CivilAge, addr 0x9cd7a68, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CivilAge() ;

/// [CompilerGenerated]
/// @brief Method get_DigitalConsentAge, addr 0x9cd7a58, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DigitalConsentAge() ;

/// [CompilerGenerated]
/// @brief Method get_MinimumAge, addr 0x9cd7a78, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MinimumAge() ;

/// [CompilerGenerated]
/// @brief Method get_ShouldDisplay, addr 0x9cd7a38, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldDisplay() ;

/// [CompilerGenerated]
/// @brief Method set_AgeAssuranceRequired, addr 0x9cd7a50, size 0x8, virtual false, abstract: false, final false
inline void set_AgeAssuranceRequired(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ApprovedAgeCollectionMethods, addr 0x9cd7a90, size 0x8, virtual false, abstract: false, final false
inline void set_ApprovedAgeCollectionMethods(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CivilAge, addr 0x9cd7a70, size 0x8, virtual false, abstract: false, final false
inline void set_CivilAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DigitalConsentAge, addr 0x9cd7a60, size 0x8, virtual false, abstract: false, final false
inline void set_DigitalConsentAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_MinimumAge, addr 0x9cd7a80, size 0x8, virtual false, abstract: false, final false
inline void set_MinimumAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldDisplay, addr 0x9cd7a40, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldDisplay(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetAgeGateRequirementsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetAgeGateRequirementsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetAgeGateRequirementsResponse(GetAgeGateRequirementsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetAgeGateRequirementsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetAgeGateRequirementsResponse(GetAgeGateRequirementsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31086};

/// [CompilerGenerated]
/// @brief Field <ShouldDisplay>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____ShouldDisplay_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgeAssuranceRequired>k__BackingField, offset: 0x11, size: 0x1, def value: None
 bool  ____AgeAssuranceRequired_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DigitalConsentAge>k__BackingField, offset: 0x14, size: 0x4, def value: None
 int32_t  ____DigitalConsentAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CivilAge>k__BackingField, offset: 0x18, size: 0x4, def value: None
 int32_t  ____CivilAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinimumAge>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____MinimumAge_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ApprovedAgeCollectionMethods>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____ApprovedAgeCollectionMethods_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____ShouldDisplay_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____AgeAssuranceRequired_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____DigitalConsentAge_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____CivilAge_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____MinimumAge_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::KID::Model::GetAgeGateRequirementsResponse, ____ApprovedAgeCollectionMethods_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::KID::Model::GetAgeGateRequirementsResponse) == 0x28, "Size mismatch!");

} // namespace end def KID::Model

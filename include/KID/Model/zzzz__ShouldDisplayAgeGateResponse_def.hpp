#pragma once
// IWYU pragma private; include "KID/Model/ShouldDisplayAgeGateResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShouldDisplayAgeGateResponse)
// Forward declare root types
namespace KID::Model {
class ShouldDisplayAgeGateResponse;
}
// Write type traits
MARK_REF_T(::KID::Model::ShouldDisplayAgeGateResponse*);
DEFINE_IL2CPP_CLASS(::KID::Model::ShouldDisplayAgeGateResponse*, "KID.Model", "ShouldDisplayAgeGateResponse");
// [DataContract(Name = "ShouldDisplayAgeGateResponse")]
// Dependencies System.Object
namespace KID::Model {
// Is value type: false
// CS Name: KID.Model.ShouldDisplayAgeGateResponse
class CORDL_TYPE ShouldDisplayAgeGateResponse : public ::System::Object {
public:
// Declarations
/// @brief [DataMember(Name = "ageAssuranceRequired", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_AgeAssuranceRequired, put=set_AgeAssuranceRequired)) bool  AgeAssuranceRequired;

/// @brief [DataMember(Name = "civilAge", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_CivilAge, put=set_CivilAge)) int32_t  CivilAge;

/// @brief [DataMember(Name = "digitalConsentAge", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_DigitalConsentAge, put=set_DigitalConsentAge)) int32_t  DigitalConsentAge;

/// @brief [DataMember(Name = "shouldDisplay", IsRequired = true, EmitDefaultValue = true)]
 __declspec(property(get=get_ShouldDisplay, put=set_ShouldDisplay)) bool  ShouldDisplay;

/// @brief Field <AgeAssuranceRequired>k__BackingField, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get__AgeAssuranceRequired_k__BackingField, put=__cordl_internal_set__AgeAssuranceRequired_k__BackingField)) bool  _AgeAssuranceRequired_k__BackingField;

/// @brief Field <CivilAge>k__BackingField, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__CivilAge_k__BackingField, put=__cordl_internal_set__CivilAge_k__BackingField)) int32_t  _CivilAge_k__BackingField;

/// @brief Field <DigitalConsentAge>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__DigitalConsentAge_k__BackingField, put=__cordl_internal_set__DigitalConsentAge_k__BackingField)) int32_t  _DigitalConsentAge_k__BackingField;

/// @brief Field <ShouldDisplay>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShouldDisplay_k__BackingField, put=__cordl_internal_set__ShouldDisplay_k__BackingField)) bool  _ShouldDisplay_k__BackingField;

/// @brief [JsonConstructor]
static inline ::KID::Model::ShouldDisplayAgeGateResponse* New_ctor() ;

static inline ::KID::Model::ShouldDisplayAgeGateResponse* New_ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge) ;

/// @brief Method ToJson, addr 0x9cda660, size 0x5c, virtual true, abstract: false, final false
inline ::StringW ToJson() ;

/// @brief Method ToString, addr 0x9cda484, size 0x1dc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__AgeAssuranceRequired_k__BackingField() const;

constexpr bool& __cordl_internal_get__AgeAssuranceRequired_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__CivilAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__CivilAge_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__DigitalConsentAge_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__DigitalConsentAge_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShouldDisplay_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShouldDisplay_k__BackingField() ;

constexpr void __cordl_internal_set__AgeAssuranceRequired_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__CivilAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__DigitalConsentAge_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__ShouldDisplay_k__BackingField(bool  value) ;

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cda3f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x9cda400, size 0x44, virtual false, abstract: false, final false
inline void _ctor(bool  shouldDisplay, bool  ageAssuranceRequired, int32_t  digitalConsentAge, int32_t  civilAge) ;

/// [CompilerGenerated]
/// @brief Method get_AgeAssuranceRequired, addr 0x9cda454, size 0x8, virtual false, abstract: false, final false
inline bool get_AgeAssuranceRequired() ;

/// [CompilerGenerated]
/// @brief Method get_CivilAge, addr 0x9cda474, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CivilAge() ;

/// [CompilerGenerated]
/// @brief Method get_DigitalConsentAge, addr 0x9cda464, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DigitalConsentAge() ;

/// [CompilerGenerated]
/// @brief Method get_ShouldDisplay, addr 0x9cda444, size 0x8, virtual false, abstract: false, final false
inline bool get_ShouldDisplay() ;

/// [CompilerGenerated]
/// @brief Method set_AgeAssuranceRequired, addr 0x9cda45c, size 0x8, virtual false, abstract: false, final false
inline void set_AgeAssuranceRequired(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_CivilAge, addr 0x9cda47c, size 0x8, virtual false, abstract: false, final false
inline void set_CivilAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DigitalConsentAge, addr 0x9cda46c, size 0x8, virtual false, abstract: false, final false
inline void set_DigitalConsentAge(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShouldDisplay, addr 0x9cda44c, size 0x8, virtual false, abstract: false, final false
inline void set_ShouldDisplay(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShouldDisplayAgeGateResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShouldDisplayAgeGateResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShouldDisplayAgeGateResponse(ShouldDisplayAgeGateResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShouldDisplayAgeGateResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShouldDisplayAgeGateResponse(ShouldDisplayAgeGateResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31104};

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

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::KID::Model::ShouldDisplayAgeGateResponse, ____ShouldDisplay_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::KID::Model::ShouldDisplayAgeGateResponse, ____AgeAssuranceRequired_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::KID::Model::ShouldDisplayAgeGateResponse, ____DigitalConsentAge_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(offsetof(::KID::Model::ShouldDisplayAgeGateResponse, ____CivilAge_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::KID::Model::ShouldDisplayAgeGateResponse) == 0x20, "Size mismatch!");

} // namespace end def KID::Model

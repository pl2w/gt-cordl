#pragma once
// IWYU pragma private; include "Modio/Customizations/Agreement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Customizations/zzzz__AgreementType_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Agreement)
namespace GlobalNamespace {
struct Agreement__GetAgreement_d__43;
}
namespace Modio::API::SchemaDefinitions {
struct AgreementVersionObject;
}
namespace Modio::Customizations {
struct AgreementType;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct DateTime;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Customizations {
class Agreement;
}
// Write type traits
MARK_REF_T(::Modio::Customizations::Agreement*);
DEFINE_IL2CPP_CLASS(::Modio::Customizations::Agreement*, "Modio.Customizations", "Agreement");
// Dependencies Modio.Customizations.AgreementType, System.DateTime, System.Object
namespace Modio::Customizations {
// Is value type: false
// CS Name: Modio.Customizations.Agreement
class CORDL_TYPE Agreement : public ::System::Object {
public:
// Declarations
using _GetAgreement_d__43 = ::GlobalNamespace::Agreement__GetAgreement_d__43;

 __declspec(property(get=get_Changelog, put=set_Changelog)) ::StringW  Changelog;

 __declspec(property(get=get_Content, put=set_Content)) ::StringW  Content;

 __declspec(property(get=get_DateAdded, put=set_DateAdded)) ::System::DateTime  DateAdded;

 __declspec(property(get=get_DateLive, put=set_DateLive)) ::System::DateTime  DateLive;

 __declspec(property(get=get_DateUpdated, put=set_DateUpdated)) ::System::DateTime  DateUpdated;

 __declspec(property(get=get_Id, put=set_Id)) int64_t  Id;

 __declspec(property(get=get_IsActive, put=set_IsActive)) bool  IsActive;

 __declspec(property(get=get_IsLatest, put=set_IsLatest)) bool  IsLatest;

 __declspec(property(get=get_Name, put=set_Name)) ::StringW  Name;

 __declspec(property(get=get_Type, put=set_Type)) ::Modio::Customizations::AgreementType  Type;

/// @brief Field <Changelog>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Changelog_k__BackingField, put=__cordl_internal_set__Changelog_k__BackingField)) ::StringW  _Changelog_k__BackingField;

/// @brief Field <Content>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__Content_k__BackingField, put=__cordl_internal_set__Content_k__BackingField)) ::StringW  _Content_k__BackingField;

/// @brief Field <DateAdded>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateAdded_k__BackingField, put=__cordl_internal_set__DateAdded_k__BackingField)) ::System::DateTime  _DateAdded_k__BackingField;

/// @brief Field <DateLive>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateLive_k__BackingField, put=__cordl_internal_set__DateLive_k__BackingField)) ::System::DateTime  _DateLive_k__BackingField;

/// @brief Field <DateUpdated>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__DateUpdated_k__BackingField, put=__cordl_internal_set__DateUpdated_k__BackingField)) ::System::DateTime  _DateUpdated_k__BackingField;

/// @brief Field <Id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) int64_t  _Id_k__BackingField;

/// @brief Field <IsActive>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsActive_k__BackingField, put=__cordl_internal_set__IsActive_k__BackingField)) bool  _IsActive_k__BackingField;

/// @brief Field <IsLatest>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsLatest_k__BackingField, put=__cordl_internal_set__IsLatest_k__BackingField)) bool  _IsLatest_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

/// @brief Field <Type>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Type_k__BackingField, put=__cordl_internal_set__Type_k__BackingField)) ::Modio::Customizations::AgreementType  _Type_k__BackingField;

/// @brief Field _agreementCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__agreementCache, put=setStaticF__agreementCache)) ::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*  _agreementCache;

/// @brief Method ApplyDetailsFromAgreementObject, addr 0xa0570f0, size 0x134, virtual false, abstract: false, final false
inline ::Modio::Customizations::Agreement* ApplyDetailsFromAgreementObject(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject) ;

/// [AsyncStateMachine(typeof(Modio.Customizations.Agreement::<GetAgreement>d__43))]
/// @brief Method GetAgreement, addr 0xa057224, size 0x108, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::Customizations::Agreement*>>* GetAgreement(::Modio::Customizations::AgreementType  type, bool  forceUpdate) ;

static inline ::Modio::Customizations::Agreement* New_ctor(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject) ;

constexpr ::StringW const& __cordl_internal_get__Changelog_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Changelog_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Content_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Content_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateAdded_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateAdded_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateLive_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateLive_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__DateUpdated_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DateUpdated_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__Id_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__Id_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsActive_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsActive_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsLatest_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsLatest_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr ::Modio::Customizations::AgreementType const& __cordl_internal_get__Type_k__BackingField() const;

constexpr ::Modio::Customizations::AgreementType& __cordl_internal_get__Type_k__BackingField() ;

constexpr void __cordl_internal_set__Changelog_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Content_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DateAdded_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__DateLive_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__DateUpdated_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__Id_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__IsActive_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsLatest_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Type_k__BackingField(::Modio::Customizations::AgreementType  value) ;

/// @brief Method .ctor, addr 0xa0570a0, size 0x50, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::AgreementVersionObject  agreementObject) ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>* getStaticF__agreementCache() ;

/// [CompilerGenerated]
/// @brief Method get_Changelog, addr 0xa057080, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Changelog() ;

/// [CompilerGenerated]
/// @brief Method get_Content, addr 0xa057090, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Content() ;

/// [CompilerGenerated]
/// @brief Method get_DateAdded, addr 0xa057040, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateAdded() ;

/// [CompilerGenerated]
/// @brief Method get_DateLive, addr 0xa057060, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateLive() ;

/// [CompilerGenerated]
/// @brief Method get_DateUpdated, addr 0xa057050, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DateUpdated() ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0xa057000, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_IsActive, addr 0xa057010, size 0x8, virtual false, abstract: false, final false
inline bool get_IsActive() ;

/// [CompilerGenerated]
/// @brief Method get_IsLatest, addr 0xa057020, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLatest() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xa057070, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// [CompilerGenerated]
/// @brief Method get_Type, addr 0xa057030, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Customizations::AgreementType get_Type() ;

static inline void setStaticF__agreementCache(::System::Collections::Generic::Dictionary_2<::Modio::Customizations::AgreementType,::Modio::Customizations::Agreement*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Changelog, addr 0xa057088, size 0x8, virtual false, abstract: false, final false
inline void set_Changelog(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Content, addr 0xa057098, size 0x8, virtual false, abstract: false, final false
inline void set_Content(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateAdded, addr 0xa057048, size 0x8, virtual false, abstract: false, final false
inline void set_DateAdded(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateLive, addr 0xa057068, size 0x8, virtual false, abstract: false, final false
inline void set_DateLive(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_DateUpdated, addr 0xa057058, size 0x8, virtual false, abstract: false, final false
inline void set_DateUpdated(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_Id, addr 0xa057008, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsActive, addr 0xa057018, size 0x8, virtual false, abstract: false, final false
inline void set_IsActive(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsLatest, addr 0xa057028, size 0x8, virtual false, abstract: false, final false
inline void set_IsLatest(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Name, addr 0xa057078, size 0x8, virtual false, abstract: false, final false
inline void set_Name(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Type, addr 0xa057038, size 0x8, virtual false, abstract: false, final false
inline void set_Type(::Modio::Customizations::AgreementType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Agreement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Agreement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Agreement(Agreement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Agreement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Agreement(Agreement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17720};

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsActive>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsActive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsLatest>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____IsLatest_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Type>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 ::Modio::Customizations::AgreementType  ____Type_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateAdded>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ____DateAdded_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateUpdated>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::DateTime  ____DateUpdated_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DateLive>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____DateLive_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Changelog>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____Changelog_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Content>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____Content_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Customizations::Agreement, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____IsActive_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____IsLatest_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____Type_k__BackingField) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____DateAdded_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____DateUpdated_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____DateLive_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____Name_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____Changelog_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Customizations::Agreement, ____Content_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Customizations::Agreement) == 0x50, "Size mismatch!");

} // namespace end def Modio::Customizations

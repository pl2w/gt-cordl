#pragma once
// IWYU pragma private; include "Modio/TermsOfUse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/zzzz__TermsOfUseLink_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TermsOfUse)
namespace GlobalNamespace {
struct TermsOfUse__Get_d__17;
}
namespace Modio::API::SchemaDefinitions {
struct TermsObject;
}
namespace Modio {
class Error;
}
namespace Modio {
struct LinkType;
}
namespace Modio {
struct TermsOfUseLink;
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
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio {
class TermsOfUse;
}
// Write type traits
MARK_REF_T(::Modio::TermsOfUse*);
DEFINE_IL2CPP_CLASS(::Modio::TermsOfUse*, "Modio", "TermsOfUse");
// Dependencies Modio.TermsOfUseLink, System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.TermsOfUse
class CORDL_TYPE TermsOfUse : public ::System::Object {
public:
// Declarations
using _Get_d__17 = ::GlobalNamespace::TermsOfUse__Get_d__17;

 __declspec(property(get=get_AgreeText, put=set_AgreeText)) ::StringW  AgreeText;

 __declspec(property(get=get_DisagreeText, put=set_DisagreeText)) ::StringW  DisagreeText;

 __declspec(property(get=get_Links, put=set_Links)) ::ArrayW<::Modio::TermsOfUseLink>  Links;

 __declspec(property(get=get_TermsText, put=set_TermsText)) ::StringW  TermsText;

/// @brief Field <AgreeText>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__AgreeText_k__BackingField, put=__cordl_internal_set__AgreeText_k__BackingField)) ::StringW  _AgreeText_k__BackingField;

/// @brief Field <DisagreeText>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__DisagreeText_k__BackingField, put=__cordl_internal_set__DisagreeText_k__BackingField)) ::StringW  _DisagreeText_k__BackingField;

/// @brief Field <Links>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Links_k__BackingField, put=__cordl_internal_set__Links_k__BackingField)) ::ArrayW<::Modio::TermsOfUseLink>  _Links_k__BackingField;

/// @brief Field <TermsText>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__TermsText_k__BackingField, put=__cordl_internal_set__TermsText_k__BackingField)) ::StringW  _TermsText_k__BackingField;

/// @brief Field _termsCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__termsCache, put=setStaticF__termsCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*  _termsCache;

/// @brief Method ConvertTermsObjectToTermsOfUse, addr 0xa01bdd4, size 0x27c, virtual false, abstract: false, final false
static inline ::Modio::TermsOfUse* ConvertTermsObjectToTermsOfUse(::Modio::API::SchemaDefinitions::TermsObject  termsObject) ;

/// [AsyncStateMachine(typeof(Modio.TermsOfUse::<Get>d__17))]
/// @brief Method Get, addr 0xa01bb58, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::TermsOfUse*>>* Get() ;

/// @brief Method GetLink, addr 0xa01bc44, size 0x190, virtual false, abstract: false, final false
inline ::Modio::TermsOfUseLink GetLink(::Modio::LinkType  type) ;

static inline ::Modio::TermsOfUse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__AgreeText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__AgreeText_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__DisagreeText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__DisagreeText_k__BackingField() ;

constexpr ::ArrayW<::Modio::TermsOfUseLink> const& __cordl_internal_get__Links_k__BackingField() const;

constexpr ::ArrayW<::Modio::TermsOfUseLink>& __cordl_internal_get__Links_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__TermsText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__TermsText_k__BackingField() ;

constexpr void __cordl_internal_set__AgreeText_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__DisagreeText_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Links_k__BackingField(::ArrayW<::Modio::TermsOfUseLink>  value) ;

constexpr void __cordl_internal_set__TermsText_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa01c050, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>* getStaticF__termsCache() ;

/// [CompilerGenerated]
/// @brief Method get_AgreeText, addr 0xa01bb28, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_AgreeText() ;

/// [CompilerGenerated]
/// @brief Method get_DisagreeText, addr 0xa01bb38, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DisagreeText() ;

/// [CompilerGenerated]
/// @brief Method get_Links, addr 0xa01bb48, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Modio::TermsOfUseLink> get_Links() ;

/// [CompilerGenerated]
/// @brief Method get_TermsText, addr 0xa01bb18, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TermsText() ;

static inline void setStaticF__termsCache(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::TermsOfUse*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_AgreeText, addr 0xa01bb30, size 0x8, virtual false, abstract: false, final false
inline void set_AgreeText(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_DisagreeText, addr 0xa01bb40, size 0x8, virtual false, abstract: false, final false
inline void set_DisagreeText(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Links, addr 0xa01bb50, size 0x8, virtual false, abstract: false, final false
inline void set_Links(::ArrayW<::Modio::TermsOfUseLink>  value) ;

/// [CompilerGenerated]
/// @brief Method set_TermsText, addr 0xa01bb20, size 0x8, virtual false, abstract: false, final false
inline void set_TermsText(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TermsOfUse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TermsOfUse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TermsOfUse(TermsOfUse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TermsOfUse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TermsOfUse(TermsOfUse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17520};

/// [CompilerGenerated]
/// @brief Field <TermsText>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____TermsText_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AgreeText>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____AgreeText_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <DisagreeText>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____DisagreeText_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Links>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Modio::TermsOfUseLink>  ____Links_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::TermsOfUse, ____TermsText_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUse, ____AgreeText_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUse, ____DisagreeText_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::TermsOfUse, ____Links_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::TermsOfUse) == 0x30, "Size mismatch!");

} // namespace end def Modio

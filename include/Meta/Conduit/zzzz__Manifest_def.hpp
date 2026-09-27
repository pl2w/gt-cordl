#pragma once
// IWYU pragma private; include "Meta/Conduit/Manifest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Manifest)
namespace Meta::Conduit {
class IManifestMethod;
}
namespace Meta::Conduit {
class InvocationContext;
}
namespace Meta::Conduit {
class ManifestAction;
}
namespace Meta::Conduit {
class ManifestEntity;
}
namespace Meta::Conduit {
class ManifestErrorHandler;
}
namespace Meta::Conduit {
class Manifest___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class Manifest;
}
namespace Meta::Conduit {
class Manifest___c;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::Manifest*);
MARK_REF_T(::Meta::Conduit::Manifest___c*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::Manifest*, "Meta.Conduit", "Manifest");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::Manifest___c*, "Meta.Conduit", "Manifest/<>c");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.Manifest
class CORDL_TYPE Manifest : public ::System::Object {
public:
// Declarations
using __c = ::Meta::Conduit::Manifest___c;

/// @brief [Preserve]
 __declspec(property(get=get_Actions, put=set_Actions)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  Actions;

/// @brief [JsonIgnore]
 __declspec(property(get=get_CustomEntityTypes)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  CustomEntityTypes;

/// @brief [Preserve]
 __declspec(property(get=get_Domain, put=set_Domain)) ::StringW  Domain;

/// @brief [Preserve]
 __declspec(property(get=get_Entities, put=set_Entities)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  Entities;

/// @brief Field ErrorHandlers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ErrorHandlers, put=__cordl_internal_set_ErrorHandlers)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*  ErrorHandlers;

/// @brief [Preserve]
 __declspec(property(get=get_Version, put=set_Version)) ::StringW  Version;

/// @brief Field WitResponseMatcherIntents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WitResponseMatcherIntents, put=setStaticF_WitResponseMatcherIntents)) ::System::Collections::Generic::List_1<::StringW>*  WitResponseMatcherIntents;

/// @brief Field <Actions>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Actions_k__BackingField, put=__cordl_internal_set__Actions_k__BackingField)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  _Actions_k__BackingField;

/// @brief Field <CustomEntityTypes>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__CustomEntityTypes_k__BackingField, put=__cordl_internal_set__CustomEntityTypes_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  _CustomEntityTypes_k__BackingField;

/// @brief Field <Domain>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Domain_k__BackingField, put=__cordl_internal_set__Domain_k__BackingField)) ::StringW  _Domain_k__BackingField;

/// @brief Field <Entities>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Entities_k__BackingField, put=__cordl_internal_set__Entities_k__BackingField)) ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  _Entities_k__BackingField;

/// @brief Field <ID>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ID_k__BackingField, put=__cordl_internal_set__ID_k__BackingField)) ::StringW  _ID_k__BackingField;

/// @brief Field <Version>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Version_k__BackingField, put=__cordl_internal_set__Version_k__BackingField)) ::StringW  _Version_k__BackingField;

/// @brief [Preserve]
 __declspec(property(get=get_ID, put=set_ID)) ::StringW  _cordl_ID;

/// @brief Field _methodLookup, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__methodLookup, put=__cordl_internal_set__methodLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*  _methodLookup;

/// @brief Method ContainsAction, addr 0x9e1c174, size 0xe8, virtual false, abstract: false, final false
inline bool ContainsAction(::StringW  actionId) ;

/// @brief Method GetBestMethodMatch, addr 0x9e200b8, size 0x30, virtual false, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetBestMethodMatch(::System::Type*  targetType, ::StringW  method, ::ArrayW<::System::Type*>  parameterTypes) ;

/// @brief Method GetErrorHandlerContexts, addr 0x9e1d078, size 0x39c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* GetErrorHandlerContexts() ;

/// @brief Method GetInvocationContexts, addr 0x9e1c4b8, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* GetInvocationContexts(::StringW  actionId) ;

/// @brief Method GetMethodInfo, addr 0x9e1f840, size 0x878, virtual false, abstract: false, final false
inline ::System::Tuple_2<::System::Reflection::MethodInfo*,::System::Type*>* GetMethodInfo(::Meta::Conduit::IManifestMethod*  action) ;

/// @brief [Preserve]
static inline ::Meta::Conduit::Manifest* New_ctor() ;

/// @brief Method ResolveActions, addr 0x9e21574, size 0x28, virtual false, abstract: false, final false
inline bool ResolveActions() ;

/// @brief Method ResolveAllActions, addr 0x9e200e8, size 0xa08, virtual false, abstract: false, final false
inline bool ResolveAllActions() ;

/// @brief Method ResolveEntities, addr 0x9e1f52c, size 0x314, virtual false, abstract: false, final false
inline bool ResolveEntities() ;

/// @brief Method ResolveErrorHandlers, addr 0x9e20af0, size 0xa84, virtual false, abstract: false, final false
inline bool ResolveErrorHandlers() ;

/// @brief Method ToString, addr 0x9e2159c, size 0x74, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>* const& __cordl_internal_get_ErrorHandlers() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*& __cordl_internal_get_ErrorHandlers() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>* const& __cordl_internal_get__Actions_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*& __cordl_internal_get__Actions_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* const& __cordl_internal_get__CustomEntityTypes_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*& __cordl_internal_get__CustomEntityTypes_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Domain_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Domain_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>* const& __cordl_internal_get__Entities_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*& __cordl_internal_get__Entities_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ID_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ID_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Version_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Version_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>* const& __cordl_internal_get__methodLookup() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*& __cordl_internal_get__methodLookup() ;

constexpr void __cordl_internal_set_ErrorHandlers(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*  value) ;

constexpr void __cordl_internal_set__Actions_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  value) ;

constexpr void __cordl_internal_set__CustomEntityTypes_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value) ;

constexpr void __cordl_internal_set__Domain_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Entities_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  value) ;

constexpr void __cordl_internal_set__ID_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Version_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__methodLookup(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9e1f2a8, size 0x22c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_WitResponseMatcherIntents() ;

/// [CompilerGenerated]
/// @brief Method get_Actions, addr 0x9e1f514, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>* get_Actions() ;

/// [CompilerGenerated]
/// @brief Method get_CustomEntityTypes, addr 0x9e1f524, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* get_CustomEntityTypes() ;

/// [CompilerGenerated]
/// @brief Method get_Domain, addr 0x9e1f4f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Domain() ;

/// [CompilerGenerated]
/// @brief Method get_Entities, addr 0x9e1f504, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>* get_Entities() ;

/// [CompilerGenerated]
/// @brief Method get_ID, addr 0x9e1f4d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ID() ;

/// [CompilerGenerated]
/// @brief Method get_Version, addr 0x9e1f4e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Version() ;

static inline void setStaticF_WitResponseMatcherIntents(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Actions, addr 0x9e1f51c, size 0x8, virtual false, abstract: false, final false
inline void set_Actions(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Domain, addr 0x9e1f4fc, size 0x8, virtual false, abstract: false, final false
inline void set_Domain(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Entities, addr 0x9e1f50c, size 0x8, virtual false, abstract: false, final false
inline void set_Entities(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ID, addr 0x9e1f4dc, size 0x8, virtual false, abstract: false, final false
inline void set_ID(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Version, addr 0x9e1f4ec, size 0x8, virtual false, abstract: false, final false
inline void set_Version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Manifest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Manifest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Manifest(Manifest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Manifest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Manifest(Manifest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25416};

/// [CompilerGenerated]
/// @brief Field <ID>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ID_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Version>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Version_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Domain>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____Domain_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Entities>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  ____Entities_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Actions>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  ____Actions_k__BackingField;

/// [Preserve]
/// @brief Field ErrorHandlers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*  ___ErrorHandlers;

/// @brief Field _methodLookup, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*  ____methodLookup;

/// [CompilerGenerated]
/// @brief Field <CustomEntityTypes>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  ____CustomEntityTypes_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::Manifest, ____ID_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____Version_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____Domain_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____Entities_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____Actions_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ___ErrorHandlers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____methodLookup) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::Manifest, ____CustomEntityTypes_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::Manifest) == 0x50, "Size mismatch!");

} // namespace end def Meta::Conduit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.Manifest/<>c
class CORDL_TYPE Manifest___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::Conduit::Manifest___c*  __9;

/// @brief Field <>9__29_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_0, put=setStaticF___9__29_0)) ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  __9__29_0;

/// @brief Field <>9__29_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__29_1, put=setStaticF___9__29_1)) ::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  __9__29_1;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  __9__30_0;

/// @brief Field <>9__30_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_1, put=setStaticF___9__30_1)) ::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  __9__30_1;

static inline ::Meta::Conduit::Manifest___c* New_ctor() ;

/// @brief Method <ResolveAllActions>b__29_0, addr 0x9e21718, size 0x4c, virtual false, abstract: false, final false
inline bool _ResolveAllActions_b__29_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  invocationContext) ;

/// @brief Method <ResolveAllActions>b__29_1, addr 0x9e21764, size 0x6c, virtual false, abstract: false, final false
inline int32_t _ResolveAllActions_b__29_1(::Meta::Conduit::InvocationContext*  one, ::Meta::Conduit::InvocationContext*  two) ;

/// @brief Method <ResolveErrorHandlers>b__30_0, addr 0x9e217d0, size 0x4c, virtual false, abstract: false, final false
inline bool _ResolveErrorHandlers_b__30_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  invocationContext) ;

/// @brief Method <ResolveErrorHandlers>b__30_1, addr 0x9e2181c, size 0x6c, virtual false, abstract: false, final false
inline int32_t _ResolveErrorHandlers_b__30_1(::Meta::Conduit::InvocationContext*  one, ::Meta::Conduit::InvocationContext*  two) ;

/// @brief Method .ctor, addr 0x9e21710, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::Conduit::Manifest___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>* getStaticF___9__29_0() ;

static inline ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* getStaticF___9__29_1() ;

static inline ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>* getStaticF___9__30_0() ;

static inline ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* getStaticF___9__30_1() ;

static inline void setStaticF___9(::Meta::Conduit::Manifest___c*  value) ;

static inline void setStaticF___9__29_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  value) ;

static inline void setStaticF___9__29_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  value) ;

static inline void setStaticF___9__30_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  value) ;

static inline void setStaticF___9__30_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Manifest___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Manifest___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Manifest___c(Manifest___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Manifest___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Manifest___c(Manifest___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25415};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Conduit::Manifest___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::Conduit

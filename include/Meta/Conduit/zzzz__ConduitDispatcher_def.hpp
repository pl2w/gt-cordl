#pragma once
// IWYU pragma private; include "Meta/Conduit/ConduitDispatcher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ConduitDispatcher)
namespace GlobalNamespace {
struct ConduitDispatcher__Initialize_d__11;
}
namespace Meta::Conduit {
class ConduitDispatcher_InvocationContextFilter;
}
namespace Meta::Conduit {
class IConduitDispatcher;
}
namespace Meta::Conduit {
class IInstanceResolver;
}
namespace Meta::Conduit {
class IManifestLoader;
}
namespace Meta::Conduit {
class IParameterProvider;
}
namespace Meta::Conduit {
class InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0;
}
namespace Meta::Conduit {
class InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0;
}
namespace Meta::Conduit {
class InvocationContext;
}
namespace Meta::Conduit {
class Manifest;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class ISet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::Conduit {
class ConduitDispatcher;
}
namespace Meta::Conduit {
class ConduitDispatcher_InvocationContextFilter;
}
namespace Meta::Conduit {
class InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0;
}
namespace Meta::Conduit {
class InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0;
}
// Write type traits
MARK_REF_T(::Meta::Conduit::ConduitDispatcher*);
MARK_REF_T(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*);
MARK_REF_T(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*);
MARK_REF_T(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*);
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitDispatcher*, "Meta.Conduit", "ConduitDispatcher");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*, "Meta.Conduit", "ConduitDispatcher/InvocationContextFilter");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0*, "Meta.Conduit", "ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0");
DEFINE_IL2CPP_CLASS(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0*, "Meta.Conduit", "ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass6_0");
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitDispatcher
class CORDL_TYPE ConduitDispatcher : public ::System::Object {
public:
// Declarations
using _Initialize_d__11 = ::GlobalNamespace::ConduitDispatcher__Initialize_d__11;

using InvocationContextFilter = ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter;

 __declspec(property(get=get_Manifest, put=set_Manifest)) ::Meta::Conduit::Manifest*  Manifest;

/// @brief Field <Manifest>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Manifest_k__BackingField, put=__cordl_internal_set__Manifest_k__BackingField)) ::Meta::Conduit::Manifest*  _Manifest_k__BackingField;

/// @brief Field _ignoredActionIds, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__ignoredActionIds, put=__cordl_internal_set__ignoredActionIds)) ::System::Collections::Generic::HashSet_1<::StringW>*  _ignoredActionIds;

/// @brief Field _instanceResolver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__instanceResolver, put=__cordl_internal_set__instanceResolver)) ::Meta::Conduit::IInstanceResolver*  _instanceResolver;

/// @brief Field _isInitialized, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _isInitializing, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitializing, put=__cordl_internal_set__isInitializing)) bool  _isInitializing;

/// @brief Field _manifestLoader, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__manifestLoader, put=__cordl_internal_set__manifestLoader)) ::Meta::Conduit::IManifestLoader*  _manifestLoader;

/// @brief Field _parameterToRoleMap, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__parameterToRoleMap, put=__cordl_internal_set__parameterToRoleMap)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _parameterToRoleMap;

/// @brief Convert operator to "::Meta::Conduit::IConduitDispatcher"
constexpr operator  ::Meta::Conduit::IConduitDispatcher*() noexcept;

/// [AsyncStateMachine(typeof(Meta.Conduit.ConduitDispatcher::<Initialize>d__11))]
/// @brief Method Initialize, addr 0x9e1b8ec, size 0xf8, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task* Initialize(::StringW  manifestFilePath) ;

/// @brief Method InvokeAction, addr 0x9e1b9e4, size 0x790, virtual true, abstract: false, final true
inline bool InvokeAction(::Meta::Conduit::IParameterProvider*  parameterProvider, ::StringW  actionId, bool  relaxed, float_t  confidence, bool  partial) ;

/// @brief Method InvokeError, addr 0x9e1c25c, size 0x25c, virtual true, abstract: false, final true
inline bool InvokeError(::StringW  actionId, ::System::Exception*  exception) ;

/// @brief Method InvokeMethod, addr 0x9e1c714, size 0x964, virtual false, abstract: false, final false
inline bool InvokeMethod(::Meta::Conduit::InvocationContext*  invocationContext, ::Meta::Conduit::IParameterProvider*  parameterProvider, bool  relaxed) ;

static inline ::Meta::Conduit::ConduitDispatcher* New_ctor(::Meta::Conduit::IManifestLoader*  manifestLoader, ::Meta::Conduit::IInstanceResolver*  instanceResolver) ;

constexpr ::Meta::Conduit::Manifest* const& __cordl_internal_get__Manifest_k__BackingField() const;

constexpr ::Meta::Conduit::Manifest*& __cordl_internal_get__Manifest_k__BackingField() ;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& __cordl_internal_get__ignoredActionIds() const;

constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& __cordl_internal_get__ignoredActionIds() ;

constexpr ::Meta::Conduit::IInstanceResolver* const& __cordl_internal_get__instanceResolver() const;

constexpr ::Meta::Conduit::IInstanceResolver*& __cordl_internal_get__instanceResolver() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr bool const& __cordl_internal_get__isInitializing() const;

constexpr bool& __cordl_internal_get__isInitializing() ;

constexpr ::Meta::Conduit::IManifestLoader* const& __cordl_internal_get__manifestLoader() const;

constexpr ::Meta::Conduit::IManifestLoader*& __cordl_internal_get__manifestLoader() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& __cordl_internal_get__parameterToRoleMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& __cordl_internal_get__parameterToRoleMap() ;

constexpr void __cordl_internal_set__Manifest_k__BackingField(::Meta::Conduit::Manifest*  value) ;

constexpr void __cordl_internal_set__ignoredActionIds(::System::Collections::Generic::HashSet_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__instanceResolver(::Meta::Conduit::IInstanceResolver*  value) ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__isInitializing(bool  value) ;

constexpr void __cordl_internal_set__manifestLoader(::Meta::Conduit::IManifestLoader*  value) ;

constexpr void __cordl_internal_set__parameterToRoleMap(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e1b7e0, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::Meta::Conduit::IManifestLoader*  manifestLoader, ::Meta::Conduit::IInstanceResolver*  instanceResolver) ;

/// [CompilerGenerated]
/// @brief Method get_Manifest, addr 0x9e1b7d0, size 0x8, virtual true, abstract: false, final true
inline ::Meta::Conduit::Manifest* get_Manifest() ;

/// @brief Convert to "::Meta::Conduit::IConduitDispatcher"
constexpr ::Meta::Conduit::IConduitDispatcher* i___Meta__Conduit__IConduitDispatcher() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Manifest, addr 0x9e1b7d8, size 0x8, virtual false, abstract: false, final false
inline void set_Manifest(::Meta::Conduit::Manifest*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConduitDispatcher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConduitDispatcher(ConduitDispatcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConduitDispatcher(ConduitDispatcher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25408};

/// [CompilerGenerated]
/// @brief Field <Manifest>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Meta::Conduit::Manifest*  ____Manifest_k__BackingField;

/// @brief Field _manifestLoader, offset: 0x18, size: 0x8, def value: None
 ::Meta::Conduit::IManifestLoader*  ____manifestLoader;

/// @brief Field _instanceResolver, offset: 0x20, size: 0x8, def value: None
 ::Meta::Conduit::IInstanceResolver*  ____instanceResolver;

/// @brief Field _isInitializing, offset: 0x28, size: 0x1, def value: None
 bool  ____isInitializing;

/// @brief Field _isInitialized, offset: 0x29, size: 0x1, def value: None
 bool  ____isInitialized;

/// @brief Field _parameterToRoleMap, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  ____parameterToRoleMap;

/// @brief Field _ignoredActionIds, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::StringW>*  ____ignoredActionIds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____Manifest_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____manifestLoader) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____instanceResolver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____isInitializing) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____isInitialized) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____parameterToRoleMap) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher, ____ignoredActionIds) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ConduitDispatcher) == 0x40, "Size mismatch!");

} // namespace end def Meta::Conduit
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitDispatcher/InvocationContextFilter
class CORDL_TYPE ConduitDispatcher_InvocationContextFilter : public ::System::Object {
public:
// Declarations
using __c__DisplayClass4_0 = ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0;

using __c__DisplayClass6_0 = ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0;

/// @brief Field _actionContexts, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__actionContexts, put=__cordl_internal_set__actionContexts)) ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  _actionContexts;

/// @brief Field _parameterProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__parameterProvider, put=__cordl_internal_set__parameterProvider)) ::Meta::Conduit::IParameterProvider*  _parameterProvider;

/// @brief Field _relaxed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__relaxed, put=__cordl_internal_set__relaxed)) bool  _relaxed;

/// @brief Method CompatibleInvocationContext, addr 0x9e1d7b4, size 0x470, virtual false, abstract: false, final false
inline bool CompatibleInvocationContext(::Meta::Conduit::InvocationContext*  invocationContext, float_t  confidence, bool  partial) ;

static inline ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter* New_ctor(::Meta::Conduit::IParameterProvider*  parameterProvider, ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  actionContexts, bool  relaxed) ;

/// @brief Method ResolveByType, addr 0x9e1dc24, size 0x4f4, virtual false, abstract: false, final false
inline bool ResolveByType(::Meta::Conduit::InvocationContext*  invocationContext, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters, ::System::Collections::Generic::ICollection_1<::StringW>*  exactMatches, ::System::Collections::Generic::ISet_1<::System::Type*>*  actualTypes, ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  parameterMap) ;

/// @brief Method ResolveInvocationContexts, addr 0x9e1c5a4, size 0x170, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* ResolveInvocationContexts(::StringW  actionId, float_t  confidence, bool  partial) ;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* const& __cordl_internal_get__actionContexts() const;

constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*& __cordl_internal_get__actionContexts() ;

constexpr ::Meta::Conduit::IParameterProvider* const& __cordl_internal_get__parameterProvider() const;

constexpr ::Meta::Conduit::IParameterProvider*& __cordl_internal_get__parameterProvider() ;

constexpr bool const& __cordl_internal_get__relaxed() const;

constexpr bool& __cordl_internal_get__relaxed() ;

constexpr void __cordl_internal_set__actionContexts(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  value) ;

constexpr void __cordl_internal_set__parameterProvider(::Meta::Conduit::IParameterProvider*  value) ;

constexpr void __cordl_internal_set__relaxed(bool  value) ;

/// @brief Method .ctor, addr 0x9e1c54c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Meta::Conduit::IParameterProvider*  parameterProvider, ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  actionContexts, bool  relaxed) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConduitDispatcher_InvocationContextFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcher_InvocationContextFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConduitDispatcher_InvocationContextFilter(ConduitDispatcher_InvocationContextFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConduitDispatcher_InvocationContextFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConduitDispatcher_InvocationContextFilter(ConduitDispatcher_InvocationContextFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25406};

/// @brief Field _actionContexts, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  ____actionContexts;

/// @brief Field _parameterProvider, offset: 0x18, size: 0x8, def value: None
 ::Meta::Conduit::IParameterProvider*  ____parameterProvider;

/// @brief Field _relaxed, offset: 0x20, size: 0x1, def value: None
 bool  ____relaxed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter, ____actionContexts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter, ____parameterProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter, ____relaxed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter) == 0x28, "Size mismatch!");

} // namespace end def Meta::Conduit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass6_0
class CORDL_TYPE InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Func_2<::StringW,bool>*  __9__0;

/// @brief Field exactMatches, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exactMatches, put=__cordl_internal_set_exactMatches)) ::System::Collections::Generic::ICollection_1<::StringW>*  exactMatches;

static inline ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0* New_ctor() ;

/// @brief Method <ResolveByType>b__0, addr 0x9e1e140, size 0xb8, virtual false, abstract: false, final false
inline bool _ResolveByType_b__0(::StringW  parameterName) ;

constexpr ::System::Func_2<::StringW,bool>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Func_2<::StringW,bool>*& __cordl_internal_get___9__0() ;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>* const& __cordl_internal_get_exactMatches() const;

constexpr ::System::Collections::Generic::ICollection_1<::StringW>*& __cordl_internal_get_exactMatches() ;

constexpr void __cordl_internal_set___9__0(::System::Func_2<::StringW,bool>*  value) ;

constexpr void __cordl_internal_set_exactMatches(::System::Collections::Generic::ICollection_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x9e1e118, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0(InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0(InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25405};

/// @brief Field exactMatches, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::ICollection_1<::StringW>*  ___exactMatches;

/// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
 ::System::Func_2<::StringW,bool>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0, ___exactMatches) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass6_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Conduit
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::Conduit {
// Is value type: false
// CS Name: Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass4_0
class CORDL_TYPE InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*  __4__this;

/// @brief Field confidence, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_confidence, put=__cordl_internal_set_confidence)) float_t  confidence;

/// @brief Field partial, offset 0x1c, size 0x1 
 __declspec(property(get=__cordl_internal_get_partial, put=__cordl_internal_set_partial)) bool  partial;

static inline ::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <ResolveInvocationContexts>b__0, addr 0x9e1e120, size 0x20, virtual false, abstract: false, final false
inline bool _ResolveInvocationContexts_b__0(::Meta::Conduit::InvocationContext*  context) ;

constexpr ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter* const& __cordl_internal_get___4__this() const;

constexpr ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_confidence() const;

constexpr float_t& __cordl_internal_get_confidence() ;

constexpr bool const& __cordl_internal_get_partial() const;

constexpr bool& __cordl_internal_get_partial() ;

constexpr void __cordl_internal_set___4__this(::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*  value) ;

constexpr void __cordl_internal_set_confidence(float_t  value) ;

constexpr void __cordl_internal_set_partial(bool  value) ;

/// @brief Method .ctor, addr 0x9e1d7ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0(InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0(InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25404};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Meta::Conduit::ConduitDispatcher_InvocationContextFilter*  _____4__this;

/// @brief Field confidence, offset: 0x18, size: 0x4, def value: None
 float_t  ___confidence;

/// @brief Field partial, offset: 0x1c, size: 0x1, def value: None
 bool  ___partial;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0, ___confidence) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0, ___partial) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Meta::Conduit::InvocationContextFilter_ConduitDispatcher___c__DisplayClass4_0) == 0x20, "Size mismatch!");

} // namespace end def Meta::Conduit

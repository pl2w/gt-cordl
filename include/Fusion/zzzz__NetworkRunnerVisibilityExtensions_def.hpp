#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerVisibilityExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkRunnerVisibilityExtensions)
namespace Fusion {
class NetworkRunnerVisibilityExtensions_RunnerVisibility;
}
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class RunnerVisibilityLink;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion {
class NetworkRunnerVisibilityExtensions;
}
namespace Fusion {
class NetworkRunnerVisibilityExtensions_RunnerVisibility;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRunnerVisibilityExtensions*);
MARK_REF_T(::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerVisibilityExtensions*, "Fusion", "NetworkRunnerVisibilityExtensions");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*, "Fusion", "NetworkRunnerVisibilityExtensions/RunnerVisibility");
// [Extension]
// Dependencies System.Object, System.Type
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerVisibilityExtensions
class CORDL_TYPE NetworkRunnerVisibilityExtensions : public ::System::Object {
public:
// Declarations
using RunnerVisibility = ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility;

/// @brief Field CommonObjectLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CommonObjectLookup, put=setStaticF_CommonObjectLookup)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*  CommonObjectLookup;

/// @brief Field DictionaryLookup, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DictionaryLookup, put=setStaticF_DictionaryLookup)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*  DictionaryLookup;

/// @brief Field RecognizedBehaviourNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RecognizedBehaviourNames, put=setStaticF_RecognizedBehaviourNames)) ::ArrayW<::StringW>  RecognizedBehaviourNames;

/// @brief Field RecognizedBehaviourTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RecognizedBehaviourTypes, put=setStaticF_RecognizedBehaviourTypes)) ::ArrayW<::System::Type*>  RecognizedBehaviourTypes;

/// @brief Field _commonLinksWithMissingInputAuthNeedRefresh, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__commonLinksWithMissingInputAuthNeedRefresh, put=setStaticF__commonLinksWithMissingInputAuthNeedRefresh)) bool  _commonLinksWithMissingInputAuthNeedRefresh;

/// @brief Method AddNodeToCommonLookup, addr 0x60e8b10, size 0x1ac, virtual false, abstract: false, final false
static inline void AddNodeToCommonLookup(::Fusion::RunnerVisibilityLink*  link) ;

/// [Extension]
/// @brief Method AddVisibilityNodes, addr 0x60e8268, size 0x1e8, virtual false, abstract: false, final false
static inline void AddVisibilityNodes(::Fusion::NetworkRunner*  runner, ::UnityEngine::GameObject*  go) ;

/// @brief Method CollectBehavioursAndAddNodes, addr 0x60e87a0, size 0x370, virtual false, abstract: false, final false
static inline void CollectBehavioursAndAddNodes(::UnityEngine::GameObject*  go, ::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  existingNodes) ;

/// [Extension]
/// @brief Method DisableVisibilityExtension, addr 0x60e7c40, size 0x104, virtual false, abstract: false, final false
static inline void DisableVisibilityExtension(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method EnableVisibilityExtension, addr 0x60e7a80, size 0x130, virtual false, abstract: false, final false
static inline void EnableVisibilityExtension(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method GetVisibilityInfo, addr 0x60e7f38, size 0xa0, virtual false, abstract: false, final false
static inline ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility* GetVisibilityInfo(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method GetVisibilityNodes, addr 0x60e81cc, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>* GetVisibilityNodes(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method GetVisible, addr 0x60e7dc4, size 0xf4, virtual false, abstract: false, final false
static inline bool GetVisible(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method HasVisibilityEnabled, addr 0x60e7d44, size 0x80, virtual false, abstract: false, final false
static inline bool HasVisibilityEnabled(::Fusion::NetworkRunner*  runner) ;

/// [Extension]
/// @brief Method IsRecognizedByRunnerVisibility, addr 0x60e8d5c, size 0x154, virtual false, abstract: false, final false
static inline bool IsRecognizedByRunnerVisibility(::System::Type*  type) ;

/// @brief Method RefreshCommonObjectVisibilities, addr 0x60e7510, size 0x570, virtual false, abstract: false, final false
static inline void RefreshCommonObjectVisibilities() ;

/// @brief Method RefreshRunnerVisibility, addr 0x60e7fd8, size 0x1f4, virtual false, abstract: false, final false
static inline void RefreshRunnerVisibility(::Fusion::NetworkRunner*  runner, bool  refreshCommonObjects) ;

/// @brief Method RegisterNode, addr 0x60e8cbc, size 0xa0, virtual false, abstract: false, final false
static inline void RegisterNode(::Fusion::RunnerVisibilityLink*  link, ::Fusion::NetworkRunner*  runner, ::UnityEngine::Component*  comp) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method ResetAllSimulationStatics, addr 0x60e7020, size 0x4c, virtual false, abstract: false, final false
static inline void ResetAllSimulationStatics() ;

/// @brief Method ResetStatics, addr 0x60e706c, size 0x78, virtual false, abstract: false, final false
static inline void ResetStatics() ;

/// @brief Method RetryRefreshCommonLinks, addr 0x60e74b8, size 0x58, virtual false, abstract: false, final false
static inline void RetryRefreshCommonLinks() ;

/// [Extension]
/// @brief Method SetVisible, addr 0x60e7eb8, size 0x80, virtual false, abstract: false, final false
static inline void SetVisible(::Fusion::NetworkRunner*  runner, bool  isVisibile) ;

/// [Extension]
/// @brief Method UnregisterNode, addr 0x60e91ec, size 0x27c, virtual false, abstract: false, final false
static inline void UnregisterNode(::Fusion::RunnerVisibilityLink*  link) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>* getStaticF_CommonObjectLookup() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>* getStaticF_DictionaryLookup() ;

static inline ::ArrayW<::StringW> getStaticF_RecognizedBehaviourNames() ;

static inline ::ArrayW<::System::Type*> getStaticF_RecognizedBehaviourTypes() ;

static inline bool getStaticF__commonLinksWithMissingInputAuthNeedRefresh() ;

static inline void setStaticF_CommonObjectLookup(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::UnityW<::Fusion::RunnerVisibilityLink>>*>*  value) ;

static inline void setStaticF_DictionaryLookup(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::NetworkRunner>,::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility*>*  value) ;

static inline void setStaticF_RecognizedBehaviourNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF_RecognizedBehaviourTypes(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF__commonLinksWithMissingInputAuthNeedRefresh(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerVisibilityExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerVisibilityExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerVisibilityExtensions(NetworkRunnerVisibilityExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerVisibilityExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerVisibilityExtensions(NetworkRunnerVisibilityExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23454};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunnerVisibilityExtensions) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerVisibilityExtensions/RunnerVisibility
class CORDL_TYPE NetworkRunnerVisibilityExtensions_RunnerVisibility : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsVisible, put=set_IsVisible)) bool  IsVisible;

/// @brief Field Nodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Nodes, put=__cordl_internal_set_Nodes)) ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  Nodes;

/// @brief Field <IsVisible>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsVisible_k__BackingField, put=__cordl_internal_set__IsVisible_k__BackingField)) bool  _IsVisible_k__BackingField;

static inline ::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility* New_ctor() ;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>* const& __cordl_internal_get_Nodes() const;

constexpr ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*& __cordl_internal_get_Nodes() ;

constexpr bool const& __cordl_internal_get__IsVisible_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsVisible_k__BackingField() ;

constexpr void __cordl_internal_set_Nodes(::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  value) ;

constexpr void __cordl_internal_set__IsVisible_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x60e7bb0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsVisible, addr 0x60e96f4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsVisible() ;

/// [CompilerGenerated]
/// @brief Method set_IsVisible, addr 0x60e96fc, size 0x8, virtual false, abstract: false, final false
inline void set_IsVisible(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerVisibilityExtensions_RunnerVisibility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerVisibilityExtensions_RunnerVisibility", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerVisibilityExtensions_RunnerVisibility(NetworkRunnerVisibilityExtensions_RunnerVisibility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerVisibilityExtensions_RunnerVisibility", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerVisibilityExtensions_RunnerVisibility(NetworkRunnerVisibilityExtensions_RunnerVisibility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23453};

/// [CompilerGenerated]
/// @brief Field <IsVisible>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsVisible_k__BackingField;

/// @brief Field Nodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::UnityW<::Fusion::RunnerVisibilityLink>>*  ___Nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility, ____IsVisible_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility, ___Nodes) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerVisibilityExtensions_RunnerVisibility) == 0x20, "Size mismatch!");

} // namespace end def Fusion

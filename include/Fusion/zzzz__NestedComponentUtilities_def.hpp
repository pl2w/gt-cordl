#pragma once
// IWYU pragma private; include "Fusion/NestedComponentUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NestedComponentUtilities)
namespace Fusion {
template<typename T>
class NestedComponentUtilities_RecyclableList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Type;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Fusion {
class NestedComponentUtilities;
}
namespace Fusion {
template<typename T>
class NestedComponentUtilities_RecyclableList_1;
}
// Write type traits
MARK_REF_T(::Fusion::NestedComponentUtilities*);
MARK_GEN_REF_T_PTR(::Fusion::NestedComponentUtilities_RecyclableList_1);
DEFINE_IL2CPP_CLASS(::Fusion::NestedComponentUtilities*, "Fusion", "NestedComponentUtilities");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Fusion::NestedComponentUtilities_RecyclableList_1, "Fusion", "NestedComponentUtilities/RecyclableList`1");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NestedComponentUtilities
class CORDL_TYPE NestedComponentUtilities : public ::System::Object {
public:
// Declarations
template<typename T>
using RecyclableList_1 = ::Fusion::NestedComponentUtilities_RecyclableList_1<T>;

/// @brief Field nodeStack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeStack, put=setStaticF_nodeStack)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  nodeStack;

/// @brief Field nodesQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodesQueue, put=setStaticF_nodesQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  nodesQueue;

/// [Extension]
/// @brief Method EnsureRootComponentExists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStopOn>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<TStopOn, ::UnityEngine::Component*>)
static inline T EnsureRootComponentExists(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method FindObjectsOfTypeInOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline ::ArrayW<T> FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive) ;

/// [Extension]
/// @brief Method FindObjectsOfTypeInOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TCast>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TCast>)
static inline ::ArrayW<TCast> FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, bool  includeInactive) ;

/// [Extension]
/// @brief Method FindObjectsOfTypeInOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline void FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive) ;

/// [Extension]
/// @brief Method FindObjectsOfTypeInOrder, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TCast>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TCast>)
static inline void FindObjectsOfTypeInOrder(::UnityEngine::SceneManagement::Scene  scene, ::System::Collections::Generic::List_1<TCast>*  list, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNestedComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
static inline T GetNestedComponentInChildren(::UnityEngine::Transform*  t, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNestedComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
static inline T GetNestedComponentInParent(::UnityEngine::Transform*  t) ;

/// [Extension]
/// @brief Method GetNestedComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
static inline T GetNestedComponentInParents(::UnityEngine::Transform*  t) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStopOn>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStopOn>)
static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive, /* [ParamArray] */ ::ArrayW<::System::Type*>  stopOn) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TSearch,typename TStop>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TSearch>)
static inline void GetNestedComponentsInChildren(::UnityEngine::Transform*  t, bool  includeInactive, ::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method GetNestedComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TStop>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<TStop>)
static inline void GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method GetNestedComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void GetNestedComponentsInParents(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method GetParentComponent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline T GetParentComponent(::UnityEngine::Transform*  t) ;

static inline ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>* getStaticF_nodeStack() ;

static inline ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>* getStaticF_nodesQueue() ;

static inline void setStaticF_nodeStack(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_nodesQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedComponentUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedComponentUtilities(NestedComponentUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedComponentUtilities(NestedComponentUtilities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18938};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NestedComponentUtilities) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies System.Object
namespace Fusion {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Fusion.NestedComponentUtilities/RecyclableList`1<T>
class CORDL_TYPE NestedComponentUtilities_RecyclableList_1 : public ::System::Object {
public:
// Declarations
/// @brief Field List, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_List, put=setStaticF_List)) ::System::Collections::Generic::List_1<T>*  List;

static inline ::System::Collections::Generic::List_1<T>* getStaticF_List() ;

static inline void setStaticF_List(::System::Collections::Generic::List_1<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NestedComponentUtilities_RecyclableList_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities_RecyclableList_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NestedComponentUtilities_RecyclableList_1(NestedComponentUtilities_RecyclableList_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NestedComponentUtilities_RecyclableList_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NestedComponentUtilities_RecyclableList_1(NestedComponentUtilities_RecyclableList_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18937};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Fusion

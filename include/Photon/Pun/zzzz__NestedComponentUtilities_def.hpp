#pragma once
// IWYU pragma private; include "Photon/Pun/NestedComponentUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(NestedComponentUtilities)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace System::Collections {
class ICollection;
}
namespace System {
class Type;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Photon::Pun {
class NestedComponentUtilities;
}
// Write type traits
MARK_REF_T(::Photon::Pun::NestedComponentUtilities*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::NestedComponentUtilities*, "Photon.Pun", "NestedComponentUtilities");
// [Extension]
// Dependencies System.Object, UnityEngine.Component
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.NestedComponentUtilities
class CORDL_TYPE NestedComponentUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field nodeStack, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodeStack, put=setStaticF_nodeStack)) ::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  nodeStack;

/// @brief Field nodesQueue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nodesQueue, put=setStaticF_nodesQueue)) ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  nodesQueue;

/// @brief Field searchLists, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_searchLists, put=setStaticF_searchLists)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*  searchLists;

/// [Extension]
/// @brief Method EnsureRootComponentExists, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*> && ::cordl_internals::type_constraint<NestedT, ::UnityEngine::Component*>)
static inline T EnsureRootComponentExists(::UnityEngine::Transform*  transform) ;

/// [Extension]
/// @brief Method GetNestedComponentInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
static inline T GetNestedComponentInChildren(::UnityEngine::Transform*  t, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNestedComponentInParent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
static inline T GetNestedComponentInParent(::UnityEngine::Transform*  t) ;

/// [Extension]
/// @brief Method GetNestedComponentInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
static inline T GetNestedComponentInParents(::UnityEngine::Transform*  t) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::reference_type_constraint<T>)
static inline ::System::Collections::Generic::List_1<T>* GetNestedComponentsInChildren(::UnityEngine::Transform*  t, ::System::Collections::Generic::List_1<T>*  list, bool  includeInactive, /* [ParamArray] */ ::ArrayW<::System::Type*>  stopOn) ;

/// [Extension]
/// @brief Method GetNestedComponentsInChildren, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename SearchT,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<SearchT>)
static inline void GetNestedComponentsInChildren(::UnityEngine::Transform*  t, bool  includeInactive, ::System::Collections::Generic::List_1<T>*  list) ;

/// [Extension]
/// @brief Method GetNestedComponentsInParents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename NestedT>
requires(::cordl_internals::reference_type_constraint<T> && ::cordl_internals::reference_type_constraint<NestedT>)
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

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>* getStaticF_searchLists() ;

static inline void setStaticF_nodeStack(::System::Collections::Generic::Stack_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_nodesQueue(::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::Transform>>*  value) ;

static inline void setStaticF_searchLists(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::ICollection*>*  value) ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29722};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::NestedComponentUtilities) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun

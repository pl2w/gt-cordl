#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DelayedActionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "UnityEngine/ResourceManagement/Util/zzzz__DelayedActionManager_DelegateInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DelayedActionManager)
namespace GlobalNamespace {
struct DelayedActionManager_DelegateInfo;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedListNode_1;
}
namespace System::Collections::Generic {
template<typename T>
class LinkedList_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DelayedActionManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::ResourceManagement::Util::DelayedActionManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ResourceManagement::Util::DelayedActionManager*, "UnityEngine.ResourceManagement.Util", "DelayedActionManager");
// Dependencies System.Collections.Generic.List`1<T>, UnityEngine.ResourceManagement.Util.ComponentSingleton`1<T>, UnityEngine.ResourceManagement.Util.DelayedActionManager::DelegateInfo
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.DelayedActionManager
class CORDL_TYPE DelayedActionManager : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::UnityEngine::ResourceManagement::Util::DelayedActionManager>> {
public:
// Declarations
using DelegateInfo = ::GlobalNamespace::DelayedActionManager_DelegateInfo;

/// @brief Field m_Actions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Actions, put=__cordl_internal_set_m_Actions)) ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>  m_Actions;

/// @brief Field m_CollectionIndex, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CollectionIndex, put=__cordl_internal_set_m_CollectionIndex)) int32_t  m_CollectionIndex;

/// @brief Field m_DelayedActions, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DelayedActions, put=__cordl_internal_set_m_DelayedActions)) ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*  m_DelayedActions;

/// @brief Field m_DestroyOnCompletion, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DestroyOnCompletion, put=__cordl_internal_set_m_DestroyOnCompletion)) bool  m_DestroyOnCompletion;

/// @brief Field m_NodeCache, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NodeCache, put=__cordl_internal_set_m_NodeCache)) ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*  m_NodeCache;

/// @brief Method AddAction, addr 0xb2f97a8, size 0x74, virtual false, abstract: false, final false
static inline void AddAction(::System::Delegate*  action, float_t  delay, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method AddActionInternal, addr 0xb2f981c, size 0x240, virtual false, abstract: false, final false
inline void AddActionInternal(::System::Delegate*  action, float_t  delay, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters) ;

/// @brief Method Clear, addr 0xb2f9728, size 0x74, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method DestroyWhenComplete, addr 0xb2f979c, size 0xc, virtual false, abstract: false, final false
inline void DestroyWhenComplete() ;

/// @brief Method GetNode, addr 0xb2f9634, size 0xf4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>* GetNode(::by_ref<::GlobalNamespace::DelayedActionManager_DelegateInfo>  del) ;

/// @brief Method InternalLateUpdate, addr 0xb2f9d70, size 0x30c, virtual false, abstract: false, final false
inline void InternalLateUpdate(float_t  t) ;

/// @brief Method LateUpdate, addr 0xb2fa07c, size 0x1c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::ResourceManagement::Util::DelayedActionManager* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0xb2fa1ec, size 0xb4, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method Wait, addr 0xb2f9c10, size 0x160, virtual false, abstract: false, final false
static inline bool Wait(float_t  timeout, float_t  timeAdvanceAmount) ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*> const& __cordl_internal_get_m_Actions() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>& __cordl_internal_get_m_Actions() ;

constexpr int32_t const& __cordl_internal_get_m_CollectionIndex() const;

constexpr int32_t& __cordl_internal_get_m_CollectionIndex() ;

constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>* const& __cordl_internal_get_m_DelayedActions() const;

constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*& __cordl_internal_get_m_DelayedActions() ;

constexpr bool const& __cordl_internal_get_m_DestroyOnCompletion() const;

constexpr bool& __cordl_internal_get_m_DestroyOnCompletion() ;

constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>* const& __cordl_internal_get_m_NodeCache() const;

constexpr ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*& __cordl_internal_get_m_NodeCache() ;

constexpr void __cordl_internal_set_m_Actions(::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>  value) ;

constexpr void __cordl_internal_set_m_CollectionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_DelayedActions(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*  value) ;

constexpr void __cordl_internal_set_m_DestroyOnCompletion(bool  value) ;

constexpr void __cordl_internal_set_m_NodeCache(::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*  value) ;

/// @brief Method .ctor, addr 0xb2fa2a0, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsActive, addr 0xb2f9af4, size 0x11c, virtual false, abstract: false, final false
static inline bool get_IsActive() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayedActionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayedActionManager(DelayedActionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayedActionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayedActionManager(DelayedActionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28573};

/// @brief Field m_Actions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>  ___m_Actions;

/// @brief Field m_DelayedActions, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*  ___m_DelayedActions;

/// @brief Field m_NodeCache, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::System::Collections::Generic::LinkedListNode_1<::GlobalNamespace::DelayedActionManager_DelegateInfo>*>*  ___m_NodeCache;

/// @brief Field m_CollectionIndex, offset: 0x38, size: 0x4, def value: None
 int32_t  ___m_CollectionIndex;

/// @brief Field m_DestroyOnCompletion, offset: 0x3c, size: 0x1, def value: None
 bool  ___m_DestroyOnCompletion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_Actions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DelayedActions) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_NodeCache) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_CollectionIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::DelayedActionManager, ___m_DestroyOnCompletion) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ResourceManagement::Util::DelayedActionManager) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util

#pragma once
// IWYU pragma private; include "GorillaTag/StaticLodManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StaticLodManager)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct StaticLodManager_GroupInfo;
}
namespace GorillaTag {
class StaticLodGroup;
}
namespace GorillaTag {
template<typename T>
class StaticLodManager__GetBoundsDelegate_1;
}
namespace GorillaTag {
class StaticLodManager___c;
}
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
class Stack_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace GorillaTag {
class StaticLodManager;
}
namespace GorillaTag {
template<typename T>
class StaticLodManager__GetBoundsDelegate_1;
}
namespace GorillaTag {
class StaticLodManager___c;
}
// Write type traits
MARK_REF_T(::GorillaTag::StaticLodManager*);
MARK_GEN_REF_T_PTR(::GorillaTag::StaticLodManager__GetBoundsDelegate_1);
MARK_REF_T(::GorillaTag::StaticLodManager___c*);
DEFINE_IL2CPP_CLASS(::GorillaTag::StaticLodManager*, "GorillaTag", "StaticLodManager");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GorillaTag::StaticLodManager__GetBoundsDelegate_1, "GorillaTag", "StaticLodManager/_GetBoundsDelegate`1");
DEFINE_IL2CPP_CLASS(::GorillaTag::StaticLodManager___c*, "GorillaTag", "StaticLodManager/<>c");
// [DefaultExecutionOrder(2000)]
// Dependencies UnityEngine.Component, UnityEngine.MonoBehaviour
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.StaticLodManager
class CORDL_TYPE StaticLodManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GroupInfo = ::GlobalNamespace::StaticLodManager_GroupInfo;

template<typename T>
using _GetBoundsDelegate_1 = ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>;

using __c = ::GorillaTag::StaticLodManager___c;

/// @brief Field _groupInstId_to_index, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__groupInstId_to_index, put=setStaticF__groupInstId_to_index)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  _groupInstId_to_index;

/// @brief Field freeSlots, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_freeSlots, put=setStaticF_freeSlots)) ::System::Collections::Generic::Stack_1<int32_t>*  freeSlots;

/// @brief Field groupInfos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_groupInfos, put=setStaticF_groupInfos)) ::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*  groupInfos;

/// @brief Field groupMonoBehaviours, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_groupMonoBehaviours, put=setStaticF_groupMonoBehaviours)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*  groupMonoBehaviours;

/// @brief Field hasMainCamera, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMainCamera, put=__cordl_internal_set_hasMainCamera)) bool  hasMainCamera;

/// @brief Field mainCamera, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainCamera, put=__cordl_internal_set_mainCamera)) ::UnityW<::UnityEngine::Camera>  mainCamera;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

static inline ::GorillaTag::StaticLodManager* New_ctor() ;

/// @brief Method OldRegister, addr 0x5d25364, size 0x1090, virtual false, abstract: false, final false
static inline int32_t OldRegister(::GorillaTag::StaticLodGroup*  lodGroup) ;

/// @brief Method OnDisable, addr 0x5d24d8c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d24cf4, size 0x98, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0x5d24608, size 0x6d0, virtual false, abstract: false, final false
static inline int32_t Register(::GorillaTag::StaticLodGroup*  lodGroup) ;

/// @brief Method SetEnabled, addr 0x5d240e8, size 0x1ec, virtual false, abstract: false, final false
static inline void SetEnabled(int32_t  index, bool  enable) ;

/// @brief Method SliceUpdate, addr 0x5d2662c, size 0x490, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method TryAddLateInstantiatedMembers, addr 0x5d263f4, size 0x238, virtual false, abstract: false, final false
static inline bool TryAddLateInstantiatedMembers(::UnityEngine::GameObject*  root) ;

/// @brief Method Unregister, addr 0x5d243b0, size 0x1e4, virtual false, abstract: false, final false
static inline void Unregister(int32_t  lodGroupIndex) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method _EdAddPathsToGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline void _EdAddPathsToGroup(::ArrayW<T>  components, ::by_ref<::ArrayW<::StringW>>  ref_edDebugPaths) ;

/// @brief Method _TryAddComponentsToGroup, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Component*>)
static inline bool _TryAddComponentsToGroup(::GorillaTag::StaticLodGroup*  lodGroup, ::by_ref<::GlobalNamespace::StaticLodManager_GroupInfo>  ref_groupInfo, ::by_ref<::ArrayW<T>>  ref_components, ::System::Predicate_1<T>*  includeIf, ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>*  getBounds) ;

/// @brief Method _TryAddMembersToLodGroup, addr 0x5d24d98, size 0x5cc, virtual false, abstract: false, final false
static inline bool _TryAddMembersToLodGroup(bool  isNew, int32_t  groupIndex) ;

constexpr bool const& __cordl_internal_get_hasMainCamera() const;

constexpr bool& __cordl_internal_get_hasMainCamera() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_mainCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_mainCamera() ;

constexpr void __cordl_internal_set_hasMainCamera(bool  value) ;

constexpr void __cordl_internal_set_mainCamera(::UnityW<::UnityEngine::Camera>  value) ;

/// @brief Method .ctor, addr 0x5d26abc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* getStaticF__groupInstId_to_index() ;

static inline ::System::Collections::Generic::Stack_1<int32_t>* getStaticF_freeSlots() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>* getStaticF_groupInfos() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>* getStaticF_groupMonoBehaviours() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__groupInstId_to_index(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

static inline void setStaticF_freeSlots(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

static inline void setStaticF_groupInfos(::System::Collections::Generic::List_1<::GlobalNamespace::StaticLodManager_GroupInfo>*  value) ;

static inline void setStaticF_groupMonoBehaviours(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::StaticLodGroup>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticLodManager(StaticLodManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticLodManager(StaticLodManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4620};

/// @brief Field mainCamera, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___mainCamera;

/// @brief Field hasMainCamera, offset: 0x28, size: 0x1, def value: None
 bool  ___hasMainCamera;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::StaticLodManager, ___mainCamera) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::StaticLodManager, ___hasMainCamera) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::StaticLodManager) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag {
// Is value type: false
// CS Name: GorillaTag.StaticLodManager/<>c
class CORDL_TYPE StaticLodManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GorillaTag::StaticLodManager___c*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  __9__13_0;

/// @brief Field <>9__13_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_1, put=setStaticF___9__13_1)) ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*  __9__13_1;

/// @brief Field <>9__13_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_2, put=setStaticF___9__13_2)) ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  __9__13_2;

/// @brief Field <>9__13_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_3, put=setStaticF___9__13_3)) ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*  __9__13_3;

/// @brief Field <>9__13_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_4, put=setStaticF___9__13_4)) ::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*  __9__13_4;

/// @brief Field <>9__13_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_5, put=setStaticF___9__13_5)) ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*  __9__13_5;

static inline ::GorillaTag::StaticLodManager___c* New_ctor() ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_0, addr 0x5d26ce0, size 0x28, virtual false, abstract: false, final false
inline bool __TryAddMembersToLodGroup_b__13_0(::UnityEngine::Collider*  coll) ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_1, addr 0x5d26d08, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds __TryAddMembersToLodGroup_b__13_1(::UnityEngine::Collider*  coll) ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_2, addr 0x5d26d48, size 0x54, virtual false, abstract: false, final false
inline bool __TryAddMembersToLodGroup_b__13_2(::UnityEngine::Renderer*  rend) ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_3, addr 0x5d26d9c, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds __TryAddMembersToLodGroup_b__13_3(::UnityEngine::Renderer*  rend) ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_4, addr 0x5d26ddc, size 0x8, virtual false, abstract: false, final false
inline bool __TryAddMembersToLodGroup_b__13_4(::UnityEngine::UI::Graphic*  _) ;

/// @brief Method <_TryAddMembersToLodGroup>b__13_5, addr 0x5d26de4, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds __TryAddMembersToLodGroup_b__13_5(::UnityEngine::UI::Graphic*  gfx) ;

/// @brief Method .ctor, addr 0x5d26cd8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GorillaTag::StaticLodManager___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* getStaticF___9__13_0() ;

static inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>* getStaticF___9__13_1() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>* getStaticF___9__13_2() ;

static inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>* getStaticF___9__13_3() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF___9__13_4() ;

static inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF___9__13_5() ;

static inline void setStaticF___9(::GorillaTag::StaticLodManager___c*  value) ;

static inline void setStaticF___9__13_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF___9__13_1(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Collider>>*  value) ;

static inline void setStaticF___9__13_2(::System::Predicate_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

static inline void setStaticF___9__13_3(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

static inline void setStaticF___9__13_4(::System::Predicate_1<::UnityW<::UnityEngine::UI::Graphic>>*  value) ;

static inline void setStaticF___9__13_5(::GorillaTag::StaticLodManager__GetBoundsDelegate_1<::UnityW<::UnityEngine::UI::Graphic>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticLodManager___c(StaticLodManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticLodManager___c(StaticLodManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4619};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GorillaTag::StaticLodManager___c) == 0x10, "Size mismatch!");

} // namespace end def GorillaTag
// Dependencies System.MulticastDelegate
namespace GorillaTag {
// cpp template
template<typename T>
// Is value type: false
// CS Name: GorillaTag.StaticLodManager/_GetBoundsDelegate`1<T>
class CORDL_TYPE StaticLodManager__GetBoundsDelegate_1 : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(T  t, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds Invoke(T  t) ;

static inline ::GorillaTag::StaticLodManager__GetBoundsDelegate_1<T>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StaticLodManager__GetBoundsDelegate_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager__GetBoundsDelegate_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StaticLodManager__GetBoundsDelegate_1(StaticLodManager__GetBoundsDelegate_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StaticLodManager__GetBoundsDelegate_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StaticLodManager__GetBoundsDelegate_1(StaticLodManager__GetBoundsDelegate_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GorillaTag

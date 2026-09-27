#pragma once
// IWYU pragma private; include "Oculus/Interaction/DebugTree/DebugTreeUI_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugTreeUI_1)
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTreeUI_1__BuildTree_d__10;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTreeUI_1___c__DisplayClass10_0;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTree_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class INodeUI_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class ITreeNode_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTreeUI_1;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTreeUI_1__BuildTree_d__10;
}
namespace Oculus::Interaction::DebugTree {
template<typename TLeaf>
class DebugTreeUI_1___c__DisplayClass10_0;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1, "Oculus.Interaction.DebugTree", "DebugTreeUI`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10, "Oculus.Interaction.DebugTree", "DebugTreeUI`1/<BuildTree>d__10");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0, "Oculus.Interaction.DebugTree", "DebugTreeUI`1/<>c__DisplayClass10_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.DebugTreeUI`1<TLeaf>
class CORDL_TYPE DebugTreeUI_1 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _BuildTree_d__10 = ::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>;

using __c__DisplayClass10_0 = ::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>;

 __declspec(property(get=get_NodePrefab)) ::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*  NodePrefab;

 __declspec(property(get=get_Value)) TLeaf  Value;

/// @brief Field _buildTreeOnStart, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__buildTreeOnStart, put=__cordl_internal_set__buildTreeOnStart)) bool  _buildTreeOnStart;

/// @brief Field _contentArea, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentArea, put=__cordl_internal_set__contentArea)) ::UnityW<::UnityEngine::RectTransform>  _contentArea;

/// @brief Field _nodeToUI, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__nodeToUI, put=__cordl_internal_set__nodeToUI)) ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*  _nodeToUI;

/// @brief Field _title, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__title, put=__cordl_internal_set__title)) ::UnityW<::TMPro::TMP_Text>  _title;

/// @brief Field _tree, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__tree, put=__cordl_internal_set__tree)) ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  _tree;

/// [IteratorStateMachine(typeof(Oculus.Interaction.DebugTree.DebugTreeUI`1::<BuildTree>d__10<TLeaf>))]
/// @brief Method BuildTree, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* BuildTree() ;

/// @brief Method BuildTreeRecursive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BuildTreeRecursive(::UnityEngine::RectTransform*  parent, ::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*  node, bool  isRoot) ;

/// @brief Method ClearContentArea, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearContentArea() ;

/// @brief Method CreateTree, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* CreateTree(TLeaf  value) ;

static inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1<TLeaf>* New_ctor() ;

/// @brief Method SetTitleText, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetTitleText() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TitleForValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW TitleForValue(TLeaf  value) ;

constexpr bool const& __cordl_internal_get__buildTreeOnStart() const;

constexpr bool& __cordl_internal_get__buildTreeOnStart() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentArea() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentArea() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>* const& __cordl_internal_get__nodeToUI() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*& __cordl_internal_get__nodeToUI() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__title() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__title() ;

constexpr ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>* const& __cordl_internal_get__tree() const;

constexpr ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*& __cordl_internal_get__tree() ;

constexpr void __cordl_internal_set__buildTreeOnStart(bool  value) ;

constexpr void __cordl_internal_set__contentArea(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__nodeToUI(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*  value) ;

constexpr void __cordl_internal_set__title(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__tree(::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NodePrefab, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>* get_NodePrefab() ;

/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TLeaf get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTreeUI_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTreeUI_1(DebugTreeUI_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTreeUI_1(DebugTreeUI_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16209};

/// [Tooltip("Node prefabs will be instantiated inside of this content area.")]
/// [SerializeField]
/// @brief Field _contentArea, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____contentArea;

/// [Tooltip("This title text will display the GameObject name of the IActiveState.")]
/// [SerializeField]
/// [Optional]
/// @brief Field _title, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____title;

/// [Tooltip("If true, the tree UI will be built on Start.")]
/// [SerializeField]
/// @brief Field _buildTreeOnStart, offset: 0x30, size: 0x1, def value: None
 bool  ____buildTreeOnStart;

/// @brief Field _tree, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::DebugTree::DebugTree_1<TLeaf>*  ____tree;

/// @brief Field _nodeToUI, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::DebugTree::ITreeNode_1<TLeaf>*,::Oculus::Interaction::DebugTree::INodeUI_1<TLeaf>*>*  ____nodeToUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.DebugTreeUI`1/<BuildTree>d__10<TLeaf>
class CORDL_TYPE DebugTreeUI_1__BuildTree_d__10 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<TLeaf>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1__BuildTree_d__10<TLeaf>* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<TLeaf> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<TLeaf>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<TLeaf>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTreeUI_1__BuildTree_d__10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1__BuildTree_d__10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTreeUI_1__BuildTree_d__10(DebugTreeUI_1__BuildTree_d__10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1__BuildTree_d__10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTreeUI_1__BuildTree_d__10(DebugTreeUI_1__BuildTree_d__10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16208};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<TLeaf>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::DebugTree {
// cpp template
template<typename TLeaf>
// Is value type: false
// CS Name: Oculus.Interaction.DebugTree.DebugTreeUI`1/<>c__DisplayClass10_0<TLeaf>
class CORDL_TYPE DebugTreeUI_1___c__DisplayClass10_0 : public ::System::Object {
public:
// Declarations
/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task*  task;

static inline ::Oculus::Interaction::DebugTree::DebugTreeUI_1___c__DisplayClass10_0<TLeaf>* New_ctor() ;

/// @brief Method <BuildTree>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _BuildTree_b__0() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DebugTreeUI_1___c__DisplayClass10_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1___c__DisplayClass10_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DebugTreeUI_1___c__DisplayClass10_0(DebugTreeUI_1___c__DisplayClass10_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DebugTreeUI_1___c__DisplayClass10_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DebugTreeUI_1___c__DisplayClass10_0(DebugTreeUI_1___c__DisplayClass10_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16207};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___task;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::DebugTree

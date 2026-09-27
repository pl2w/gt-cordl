#pragma once
// IWYU pragma private; include "Oculus/Interaction/Body/Input/BodySkeletonMapping_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Body/Input/zzzz__BodyJointId_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BodySkeletonMapping_1)
namespace GlobalNamespace {
template<typename TSourceJointId>
struct BodySkeletonMapping_1_JointInfo;
}
namespace Oculus::Interaction::Body::Input {
struct BodyJointId;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class BodySkeletonMapping_1_SkeletonTree;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class BodySkeletonMapping_1___c;
}
namespace Oculus::Interaction::Body::Input {
class ISkeletonMapping;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class SkeletonTree_BodySkeletonMapping_1_Node;
}
namespace Oculus::Interaction::Collections {
template<typename T>
class IEnumerableHashSet_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class BodySkeletonMapping_1;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class BodySkeletonMapping_1_SkeletonTree;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class BodySkeletonMapping_1___c;
}
namespace Oculus::Interaction::Body::Input {
template<typename TSourceJointId>
class SkeletonTree_BodySkeletonMapping_1_Node;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1, "Oculus.Interaction.Body.Input", "BodySkeletonMapping`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree, "Oculus.Interaction.Body.Input", "BodySkeletonMapping`1/SkeletonTree");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c, "Oculus.Interaction.Body.Input", "BodySkeletonMapping`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node, "Oculus.Interaction.Body.Input", "BodySkeletonMapping`1/SkeletonTree/Node");
// Dependencies System.Object
namespace Oculus::Interaction::Body::Input {
// cpp template
template<typename TSourceJointId>
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodySkeletonMapping`1<TSourceJointId>
class CORDL_TYPE BodySkeletonMapping_1 : public ::System::Object {
public:
// Declarations
using JointInfo = ::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>;

using SkeletonTree = ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>;

using __c = ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>;

 __declspec(property(get=get_Joints)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  Joints;

/// @brief Field _forwardMap, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__forwardMap, put=__cordl_internal_set__forwardMap)) ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  _forwardMap;

/// @brief Field _jointToParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__jointToParent, put=__cordl_internal_set__jointToParent)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  _jointToParent;

/// @brief Field _joints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__joints, put=__cordl_internal_set__joints)) ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  _joints;

/// @brief Field _reverseMap, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__reverseMap, put=__cordl_internal_set__reverseMap)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*  _reverseMap;

/// @brief Field _tree, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__tree, put=__cordl_internal_set__tree)) ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*  _tree;

/// @brief Convert operator to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr operator  ::Oculus::Interaction::Body::Input::ISkeletonMapping*() noexcept;

/// @brief Method GetBodyJointFromSourceJoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId GetBodyJointFromSourceJoint(TSourceJointId  sourceJointId) ;

/// @brief Method GetSourceJointFromBodyJoint, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TSourceJointId GetSourceJointFromBodyJoint(::Oculus::Interaction::Body::Input::BodyJointId  jointId) ;

static inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1<TSourceJointId>* New_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  jointMapping) ;

/// @brief Method TryGetBodyJointId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetBodyJointId(TSourceJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  bodyJointId) ;

/// @brief Method TryGetParentJointId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool TryGetParentJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<::Oculus::Interaction::Body::Input::BodyJointId>  parentJointId) ;

/// @brief Method TryGetSourceJointId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetSourceJointId(::Oculus::Interaction::Body::Input::BodyJointId  jointId, ::by_ref<TSourceJointId>  sourceJointId) ;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& __cordl_internal_get__forwardMap() const;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& __cordl_internal_get__forwardMap() ;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>* const& __cordl_internal_get__jointToParent() const;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*& __cordl_internal_get__jointToParent() ;

constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* const& __cordl_internal_get__joints() const;

constexpr ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*& __cordl_internal_get__joints() ;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>* const& __cordl_internal_get__reverseMap() const;

constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*& __cordl_internal_get__reverseMap() ;

constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>* const& __cordl_internal_get__tree() const;

constexpr ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*& __cordl_internal_get__tree() ;

constexpr void __cordl_internal_set__forwardMap(::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

constexpr void __cordl_internal_set__jointToParent(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

constexpr void __cordl_internal_set__joints(::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

constexpr void __cordl_internal_set__reverseMap(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*  value) ;

constexpr void __cordl_internal_set__tree(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  jointMapping) ;

/// @brief Method get_Joints, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>* get_Joints() ;

/// @brief Convert to "::Oculus::Interaction::Body::Input::ISkeletonMapping"
constexpr ::Oculus::Interaction::Body::Input::ISkeletonMapping* i___Oculus__Interaction__Body__Input__ISkeletonMapping() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodySkeletonMapping_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodySkeletonMapping_1(BodySkeletonMapping_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodySkeletonMapping_1(BodySkeletonMapping_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16410};

/// @brief Field _tree, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>*  ____tree;

/// @brief Field _joints, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::Collections::IEnumerableHashSet_1<::Oculus::Interaction::Body::Input::BodyJointId>*  ____joints;

/// @brief Field _forwardMap, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyDictionary_2<TSourceJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  ____forwardMap;

/// @brief Field _reverseMap, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,TSourceJointId>*  ____reverseMap;

/// @brief Field _jointToParent, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::Oculus::Interaction::Body::Input::BodyJointId>*  ____jointToParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction::Body::Input {
// cpp template
template<typename TSourceJointId>
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodySkeletonMapping`1/<>c<TSourceJointId>
class CORDL_TYPE BodySkeletonMapping_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  __9__7_1;

/// @brief Field <>9__7_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_2, put=setStaticF___9__7_2)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  __9__7_2;

/// @brief Field <>9__7_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_3, put=setStaticF___9__7_3)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  __9__7_3;

/// @brief Field <>9__7_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_4, put=setStaticF___9__7_4)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  __9__7_4;

/// @brief Field <>9__7_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_5, put=setStaticF___9__7_5)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  __9__7_5;

/// @brief Field <>9__7_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_6, put=setStaticF___9__7_6)) ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  __9__7_6;

static inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>* New_ctor() ;

/// @brief Method <.ctor>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId __ctor_b__7_0(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TSourceJointId __ctor_b__7_1(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId __ctor_b__7_2(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId __ctor_b__7_3(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TSourceJointId __ctor_b__7_4(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId __ctor_b__7_5(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method <.ctor>b__7_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Body::Input::BodyJointId __ctor_b__7_6(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  n) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>* getStaticF___9() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* getStaticF___9__7_0() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>* getStaticF___9__7_1() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* getStaticF___9__7_2() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* getStaticF___9__7_3() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>* getStaticF___9__7_4() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* getStaticF___9__7_5() ;

static inline ::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>* getStaticF___9__7_6() ;

static inline void setStaticF___9(::Oculus::Interaction::Body::Input::BodySkeletonMapping_1___c<TSourceJointId>*  value) ;

static inline void setStaticF___9__7_0(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

static inline void setStaticF___9__7_1(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  value) ;

static inline void setStaticF___9__7_2(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

static inline void setStaticF___9__7_3(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

static inline void setStaticF___9__7_4(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,TSourceJointId>*  value) ;

static inline void setStaticF___9__7_5(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

static inline void setStaticF___9__7_6(::System::Func_2<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*,::Oculus::Interaction::Body::Input::BodyJointId>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodySkeletonMapping_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodySkeletonMapping_1___c(BodySkeletonMapping_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodySkeletonMapping_1___c(BodySkeletonMapping_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16409};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input
// Dependencies System.Object
namespace Oculus::Interaction::Body::Input {
// cpp template
template<typename TSourceJointId>
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodySkeletonMapping`1/SkeletonTree<TSourceJointId>
class CORDL_TYPE BodySkeletonMapping_1_SkeletonTree : public ::System::Object {
public:
// Declarations
using Node = ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>;

/// @brief Field Nodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Nodes, put=__cordl_internal_set_Nodes)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  Nodes;

/// @brief Field Root, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Root, put=__cordl_internal_set_Root)) ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  Root;

static inline ::Oculus::Interaction::Body::Input::BodySkeletonMapping_1_SkeletonTree<TSourceJointId>* New_ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  mapping) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>* const& __cordl_internal_get_Nodes() const;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*& __cordl_internal_get_Nodes() ;

constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* const& __cordl_internal_get_Root() const;

constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*& __cordl_internal_get_Root() ;

constexpr void __cordl_internal_set_Nodes(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  value) ;

constexpr void __cordl_internal_set_Root(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TSourceJointId  root, ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::Body::Input::BodyJointId,::GlobalNamespace::BodySkeletonMapping_1_JointInfo<TSourceJointId>>*  mapping) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BodySkeletonMapping_1_SkeletonTree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1_SkeletonTree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BodySkeletonMapping_1_SkeletonTree(BodySkeletonMapping_1_SkeletonTree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BodySkeletonMapping_1_SkeletonTree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BodySkeletonMapping_1_SkeletonTree(BodySkeletonMapping_1_SkeletonTree const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16407};

/// @brief Field Root, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  ___Root;

/// @brief Field Nodes, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  ___Nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input
// Dependencies Oculus.Interaction.Body.Input.BodyJointId, System.Object
namespace Oculus::Interaction::Body::Input {
// cpp template
template<typename TSourceJointId>
// Is value type: false
// CS Name: Oculus.Interaction.Body.Input.BodySkeletonMapping`1/SkeletonTree/Node<TSourceJointId>
class CORDL_TYPE SkeletonTree_BodySkeletonMapping_1_Node : public ::System::Object {
public:
// Declarations
/// @brief Field BodyJointId, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_BodyJointId, put=__cordl_internal_set_BodyJointId)) ::Oculus::Interaction::Body::Input::BodyJointId  BodyJointId;

/// @brief Field Children, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Children, put=__cordl_internal_set_Children)) ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  Children;

/// @brief Field Parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parent, put=__cordl_internal_set_Parent)) ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  Parent;

/// @brief Field SourceJointId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_SourceJointId, put=__cordl_internal_set_SourceJointId)) TSourceJointId  SourceJointId;

static inline ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* New_ctor(TSourceJointId  sourceJointId, ::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId) ;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId const& __cordl_internal_get_BodyJointId() const;

constexpr ::Oculus::Interaction::Body::Input::BodyJointId& __cordl_internal_get_BodyJointId() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>* const& __cordl_internal_get_Children() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*& __cordl_internal_get_Children() ;

constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>* const& __cordl_internal_get_Parent() const;

constexpr ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*& __cordl_internal_get_Parent() ;

constexpr TSourceJointId const& __cordl_internal_get_SourceJointId() const;

constexpr TSourceJointId& __cordl_internal_get_SourceJointId() ;

constexpr void __cordl_internal_set_BodyJointId(::Oculus::Interaction::Body::Input::BodyJointId  value) ;

constexpr void __cordl_internal_set_Children(::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  value) ;

constexpr void __cordl_internal_set_Parent(::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  value) ;

constexpr void __cordl_internal_set_SourceJointId(TSourceJointId  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(TSourceJointId  sourceJointId, ::Oculus::Interaction::Body::Input::BodyJointId  bodyJointId) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SkeletonTree_BodySkeletonMapping_1_Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SkeletonTree_BodySkeletonMapping_1_Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SkeletonTree_BodySkeletonMapping_1_Node(SkeletonTree_BodySkeletonMapping_1_Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SkeletonTree_BodySkeletonMapping_1_Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SkeletonTree_BodySkeletonMapping_1_Node(SkeletonTree_BodySkeletonMapping_1_Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16406};

/// @brief Field SourceJointId, offset: 0x10, size: 0x8, def value: None
 TSourceJointId  ___SourceJointId;

/// @brief Field BodyJointId, offset: 0x18, size: 0x4, def value: None
 ::Oculus::Interaction::Body::Input::BodyJointId  ___BodyJointId;

/// @brief Field Parent, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*  ___Parent;

/// @brief Field Children, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::Input::SkeletonTree_BodySkeletonMapping_1_Node<TSourceJointId>*>*  ___Children;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction::Body::Input

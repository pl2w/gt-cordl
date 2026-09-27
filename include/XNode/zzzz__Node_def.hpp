#pragma once
// IWYU pragma private; include "XNode/Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "XNode/zzzz__Node_ConnectionType_def.hpp"
#include "XNode/zzzz__Node_ShowBackingValue_def.hpp"
#include "XNode/zzzz__Node_TypeConstraint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Node)
namespace GlobalNamespace {
struct NodePort_IO;
}
namespace GlobalNamespace {
struct Node_ConnectionType;
}
namespace GlobalNamespace {
struct Node_ShowBackingValue;
}
namespace GlobalNamespace {
struct Node_TypeConstraint;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace XNode {
class NodeGraph;
}
namespace XNode {
class NodePort;
}
namespace XNode {
class Node_CreateNodeMenuAttribute;
}
namespace XNode {
class Node_DisallowMultipleNodesAttribute;
}
namespace XNode {
class Node_InputAttribute;
}
namespace XNode {
class Node_NodePortDictionary;
}
namespace XNode {
class Node_NodeTintAttribute;
}
namespace XNode {
class Node_NodeWidthAttribute;
}
namespace XNode {
class Node_OutputAttribute;
}
namespace XNode {
class Node__get_DynamicInputs_d__26;
}
namespace XNode {
class Node__get_DynamicOutputs_d__24;
}
namespace XNode {
class Node__get_DynamicPorts_d__22;
}
namespace XNode {
class Node__get_Inputs_d__20;
}
namespace XNode {
class Node__get_Outputs_d__18;
}
namespace XNode {
class Node__get_Ports_d__16;
}
// Forward declare root types
namespace XNode {
class Node;
}
namespace XNode {
class Node_CreateNodeMenuAttribute;
}
namespace XNode {
class Node_DisallowMultipleNodesAttribute;
}
namespace XNode {
class Node_InputAttribute;
}
namespace XNode {
class Node_NodePortDictionary;
}
namespace XNode {
class Node_NodeTintAttribute;
}
namespace XNode {
class Node_NodeWidthAttribute;
}
namespace XNode {
class Node_OutputAttribute;
}
namespace XNode {
class Node__get_DynamicInputs_d__26;
}
namespace XNode {
class Node__get_DynamicOutputs_d__24;
}
namespace XNode {
class Node__get_DynamicPorts_d__22;
}
namespace XNode {
class Node__get_Inputs_d__20;
}
namespace XNode {
class Node__get_Outputs_d__18;
}
namespace XNode {
class Node__get_Ports_d__16;
}
// Write type traits
MARK_REF_T(::XNode::Node*);
MARK_REF_T(::XNode::Node_CreateNodeMenuAttribute*);
MARK_REF_T(::XNode::Node_DisallowMultipleNodesAttribute*);
MARK_REF_T(::XNode::Node_InputAttribute*);
MARK_REF_T(::XNode::Node_NodePortDictionary*);
MARK_REF_T(::XNode::Node_NodeTintAttribute*);
MARK_REF_T(::XNode::Node_NodeWidthAttribute*);
MARK_REF_T(::XNode::Node_OutputAttribute*);
MARK_REF_T(::XNode::Node__get_DynamicInputs_d__26*);
MARK_REF_T(::XNode::Node__get_DynamicOutputs_d__24*);
MARK_REF_T(::XNode::Node__get_DynamicPorts_d__22*);
MARK_REF_T(::XNode::Node__get_Inputs_d__20*);
MARK_REF_T(::XNode::Node__get_Outputs_d__18*);
MARK_REF_T(::XNode::Node__get_Ports_d__16*);
DEFINE_IL2CPP_CLASS(::XNode::Node*, "XNode", "Node");
DEFINE_IL2CPP_CLASS(::XNode::Node_CreateNodeMenuAttribute*, "XNode", "Node/CreateNodeMenuAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node_DisallowMultipleNodesAttribute*, "XNode", "Node/DisallowMultipleNodesAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node_InputAttribute*, "XNode", "Node/InputAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node_NodePortDictionary*, "XNode", "Node/NodePortDictionary");
DEFINE_IL2CPP_CLASS(::XNode::Node_NodeTintAttribute*, "XNode", "Node/NodeTintAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node_NodeWidthAttribute*, "XNode", "Node/NodeWidthAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node_OutputAttribute*, "XNode", "Node/OutputAttribute");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_DynamicInputs_d__26*, "XNode", "Node/<get_DynamicInputs>d__26");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_DynamicOutputs_d__24*, "XNode", "Node/<get_DynamicOutputs>d__24");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_DynamicPorts_d__22*, "XNode", "Node/<get_DynamicPorts>d__22");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_Inputs_d__20*, "XNode", "Node/<get_Inputs>d__20");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_Outputs_d__18*, "XNode", "Node/<get_Outputs>d__18");
DEFINE_IL2CPP_CLASS(::XNode::Node__get_Ports_d__16*, "XNode", "Node/<get_Ports>d__16");
// Dependencies UnityEngine.ScriptableObject, UnityEngine.Vector2
namespace XNode {
// Is value type: false
// CS Name: XNode.Node
class CORDL_TYPE Node : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ConnectionType = ::GlobalNamespace::Node_ConnectionType;

using ShowBackingValue = ::GlobalNamespace::Node_ShowBackingValue;

using TypeConstraint = ::GlobalNamespace::Node_TypeConstraint;

using CreateNodeMenuAttribute = ::XNode::Node_CreateNodeMenuAttribute;

using DisallowMultipleNodesAttribute = ::XNode::Node_DisallowMultipleNodesAttribute;

using InputAttribute = ::XNode::Node_InputAttribute;

using NodePortDictionary = ::XNode::Node_NodePortDictionary;

using NodeTintAttribute = ::XNode::Node_NodeTintAttribute;

using NodeWidthAttribute = ::XNode::Node_NodeWidthAttribute;

using OutputAttribute = ::XNode::Node_OutputAttribute;

using _get_DynamicInputs_d__26 = ::XNode::Node__get_DynamicInputs_d__26;

using _get_DynamicOutputs_d__24 = ::XNode::Node__get_DynamicOutputs_d__24;

using _get_DynamicPorts_d__22 = ::XNode::Node__get_DynamicPorts_d__22;

using _get_Inputs_d__20 = ::XNode::Node__get_Inputs_d__20;

using _get_Outputs_d__18 = ::XNode::Node__get_Outputs_d__18;

using _get_Ports_d__16 = ::XNode::Node__get_Ports_d__16;

 __declspec(property(get=get_DynamicInputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  DynamicInputs;

 __declspec(property(get=get_DynamicOutputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  DynamicOutputs;

 __declspec(property(get=get_DynamicPorts)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  DynamicPorts;

 __declspec(property(get=get_Inputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  Inputs;

/// @brief [Obsolete("Use DynamicInputs instead")]
 __declspec(property(get=get_InstanceInputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  InstanceInputs;

/// @brief [Obsolete("Use DynamicOutputs instead")]
 __declspec(property(get=get_InstanceOutputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  InstanceOutputs;

/// @brief [Obsolete("Use DynamicPorts instead")]
 __declspec(property(get=get_InstancePorts)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  InstancePorts;

 __declspec(property(get=get_Outputs)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  Outputs;

 __declspec(property(get=get_Ports)) ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*  Ports;

/// @brief Field graph, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::UnityW<::XNode::NodeGraph>  graph;

/// @brief Field graphHotfix, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_graphHotfix, put=setStaticF_graphHotfix)) ::UnityW<::XNode::NodeGraph>  graphHotfix;

/// @brief Field ports, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ports, put=__cordl_internal_set_ports)) ::XNode::Node_NodePortDictionary*  ports;

/// @brief Field position, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_position, put=__cordl_internal_set_position)) ::UnityEngine::Vector2  position;

/// @brief Method AddDynamicInput, addr 0xb98b8b4, size 0x14, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddDynamicInput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// @brief Method AddDynamicOutput, addr 0xb98b8dc, size 0x14, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddDynamicOutput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// @brief Method AddDynamicPort, addr 0xb98b8f4, size 0x224, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddDynamicPort(::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// [Obsolete("Use AddDynamicInput instead")]
/// @brief Method AddInstanceInput, addr 0xb98b8a0, size 0x14, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddInstanceInput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// [Obsolete("Use AddDynamicOutput instead")]
/// @brief Method AddInstanceOutput, addr 0xb98b8c8, size 0x14, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddInstanceOutput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// [Obsolete("Use AddDynamicPort instead")]
/// @brief Method AddInstancePort, addr 0xb98b8f0, size 0x4, virtual false, abstract: false, final false
inline ::XNode::NodePort* AddInstancePort(::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName) ;

/// @brief Method ClearConnections, addr 0xb98d17c, size 0x2a8, virtual false, abstract: false, final false
inline void ClearConnections() ;

/// [ContextMenu("Clear Dynamic Ports")]
/// @brief Method ClearDynamicPorts, addr 0xb98bcb0, size 0x17c, virtual false, abstract: false, final false
inline void ClearDynamicPorts() ;

/// [Obsolete("Use ClearDynamicPorts instead")]
/// @brief Method ClearInstancePorts, addr 0xb98bcac, size 0x4, virtual false, abstract: false, final false
inline void ClearInstancePorts() ;

/// @brief Method GetInputPort, addr 0xb98d0a0, size 0x20, virtual false, abstract: false, final false
inline ::XNode::NodePort* GetInputPort(::StringW  fieldName) ;

/// @brief Method GetInputValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetInputValue(::StringW  fieldName, T  fallback) ;

/// @brief Method GetInputValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetInputValues(::StringW  fieldName, /* [ParamArray] */ ::ArrayW<T>  fallback) ;

/// @brief Method GetOutputPort, addr 0xb98d080, size 0x20, virtual false, abstract: false, final false
inline ::XNode::NodePort* GetOutputPort(::StringW  fieldName) ;

/// @brief Method GetPort, addr 0xb98cf6c, size 0x78, virtual false, abstract: false, final false
inline ::XNode::NodePort* GetPort(::StringW  fieldName) ;

/// @brief Method GetValue, addr 0xb98d0c0, size 0xb4, virtual true, abstract: false, final false
inline ::System::Object* GetValue(::XNode::NodePort*  port) ;

/// @brief Method HasPort, addr 0xb98ce1c, size 0x58, virtual false, abstract: false, final false
inline bool HasPort(::StringW  fieldName) ;

/// @brief Method Init, addr 0xb98c9fc, size 0x4, virtual true, abstract: false, final false
inline void Init() ;

static inline ::XNode::Node* New_ctor() ;

/// @brief Method OnCreateConnection, addr 0xb98d174, size 0x4, virtual true, abstract: false, final false
inline void OnCreateConnection(::XNode::NodePort*  from, ::XNode::NodePort*  to) ;

/// @brief Method OnEnable, addr 0xb98c0e4, size 0xd8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRemoveConnection, addr 0xb98d178, size 0x4, virtual true, abstract: false, final false
inline void OnRemoveConnection(::XNode::NodePort*  port) ;

/// @brief Method RemoveDynamicPort, addr 0xb98bb1c, size 0xa4, virtual false, abstract: false, final false
inline void RemoveDynamicPort(::StringW  fieldName) ;

/// @brief Method RemoveDynamicPort, addr 0xb98bbc4, size 0xe8, virtual false, abstract: false, final false
inline void RemoveDynamicPort(::XNode::NodePort*  port) ;

/// [Obsolete("Use RemoveDynamicPort instead")]
/// @brief Method RemoveInstancePort, addr 0xb98bb18, size 0x4, virtual false, abstract: false, final false
inline void RemoveInstancePort(::StringW  fieldName) ;

/// [Obsolete("Use RemoveDynamicPort instead")]
/// @brief Method RemoveInstancePort, addr 0xb98bbc0, size 0x4, virtual false, abstract: false, final false
inline void RemoveInstancePort(::XNode::NodePort*  port) ;

/// @brief Method UpdatePorts, addr 0xb98c1bc, size 0x8, virtual false, abstract: false, final false
inline void UpdatePorts() ;

/// @brief Method VerifyConnections, addr 0xb98ca00, size 0x2a8, virtual false, abstract: false, final false
inline void VerifyConnections() ;

constexpr ::UnityW<::XNode::NodeGraph> const& __cordl_internal_get_graph() const;

constexpr ::UnityW<::XNode::NodeGraph>& __cordl_internal_get_graph() ;

constexpr ::XNode::Node_NodePortDictionary* const& __cordl_internal_get_ports() const;

constexpr ::XNode::Node_NodePortDictionary*& __cordl_internal_get_ports() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_position() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_position() ;

constexpr void __cordl_internal_set_graph(::UnityW<::XNode::NodeGraph>  value) ;

constexpr void __cordl_internal_set_ports(::XNode::Node_NodePortDictionary*  value) ;

constexpr void __cordl_internal_set_position(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xb98d424, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::XNode::NodeGraph> getStaticF_graphHotfix() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_DynamicInputs>d__26))]
/// @brief Method get_DynamicInputs, addr 0xb98b820, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_DynamicInputs() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_DynamicOutputs>d__24))]
/// @brief Method get_DynamicOutputs, addr 0xb98b79c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_DynamicOutputs() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_DynamicPorts>d__22))]
/// @brief Method get_DynamicPorts, addr 0xb98b718, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_DynamicPorts() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_Inputs>d__20))]
/// @brief Method get_Inputs, addr 0xb98bf94, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_Inputs() ;

/// @brief Method get_InstanceInputs, addr 0xb98b81c, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_InstanceInputs() ;

/// @brief Method get_InstanceOutputs, addr 0xb98b798, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_InstanceOutputs() ;

/// @brief Method get_InstancePorts, addr 0xb98b714, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_InstancePorts() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_Outputs>d__18))]
/// @brief Method get_Outputs, addr 0xb98bee0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_Outputs() ;

/// [IteratorStateMachine(typeof(XNode.Node::<get_Ports>d__16))]
/// @brief Method get_Ports, addr 0xb98be2c, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* get_Ports() ;

static inline void setStaticF_graphHotfix(::UnityW<::XNode::NodeGraph>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node(Node && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node(Node const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32272};

/// [SerializeField]
/// @brief Field graph, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::XNode::NodeGraph>  ___graph;

/// [SerializeField]
/// @brief Field position, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___position;

/// [SerializeField]
/// @brief Field ports, offset: 0x28, size: 0x8, def value: None
 ::XNode::Node_NodePortDictionary*  ___ports;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node, ___graph) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node, ___position) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node, ___ports) == 0x28, "Offset mismatch!");

static_assert(sizeof(::XNode::Node) == 0x30, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Collections.Generic.Dictionary`2::ValueCollection::Enumerator<TKey, TValue>, System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_Ports>d__16
class CORDL_TYPE Node__get_Ports_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98f488, size 0x1cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_Ports_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98f6ec, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98f6a4, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98f790, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98f6ac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98f6e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98f46c, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*> const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98f654, size 0x50, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98beac, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_Ports_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Ports_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_Ports_d__16(Node__get_Ports_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Ports_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_Ports_d__16(Node__get_Ports_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32271};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_Ports_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Ports_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Ports_d__16, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Ports_d__16, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Ports_d__16, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_Ports_d__16) == 0x48, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_Outputs>d__18
class CORDL_TYPE Node__get_Outputs_d__18 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98f00c, size 0x2c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_Outputs_d__18* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98f3c4, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98f37c, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98f468, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98f384, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98f3bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98eff0, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98f2cc, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98bf60, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_Outputs_d__18() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Outputs_d__18", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_Outputs_d__18(Node__get_Outputs_d__18 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Outputs_d__18", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_Outputs_d__18(Node__get_Outputs_d__18 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32270};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_Outputs_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Outputs_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Outputs_d__18, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Outputs_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Outputs_d__18, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_Outputs_d__18) == 0x38, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_Inputs>d__20
class CORDL_TYPE Node__get_Inputs_d__20 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98eb94, size 0x2bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_Inputs_d__20* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98ef48, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98ef00, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98efec, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98ef08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98ef40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98eb78, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98ee50, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98c014, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_Inputs_d__20() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Inputs_d__20", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_Inputs_d__20(Node__get_Inputs_d__20 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_Inputs_d__20", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_Inputs_d__20(Node__get_Inputs_d__20 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32269};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_Inputs_d__20, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Inputs_d__20, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Inputs_d__20, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Inputs_d__20, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_Inputs_d__20, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_Inputs_d__20) == 0x38, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_DynamicPorts>d__22
class CORDL_TYPE Node__get_DynamicPorts_d__22 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98e71c, size 0x2bc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_DynamicPorts_d__22* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98ead0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98ea88, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98eb74, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98ea90, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98eac8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98e700, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98e9d8, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98c048, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_DynamicPorts_d__22() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicPorts_d__22", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_DynamicPorts_d__22(Node__get_DynamicPorts_d__22 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicPorts_d__22", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_DynamicPorts_d__22(Node__get_DynamicPorts_d__22 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32268};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_DynamicPorts_d__22, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicPorts_d__22, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicPorts_d__22, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicPorts_d__22, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicPorts_d__22, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_DynamicPorts_d__22) == 0x38, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_DynamicOutputs>d__24
class CORDL_TYPE Node__get_DynamicOutputs_d__24 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98e284, size 0x2cc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_DynamicOutputs_d__24* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98e658, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98e610, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98e6fc, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98e618, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98e650, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98e268, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98e560, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98c07c, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_DynamicOutputs_d__24() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicOutputs_d__24", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_DynamicOutputs_d__24(Node__get_DynamicOutputs_d__24 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicOutputs_d__24", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_DynamicOutputs_d__24(Node__get_DynamicOutputs_d__24 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32267};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_DynamicOutputs_d__24, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicOutputs_d__24, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicOutputs_d__24, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicOutputs_d__24, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicOutputs_d__24, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_DynamicOutputs_d__24) == 0x38, "Size mismatch!");

} // namespace end def XNode
// [CompilerGenerated]
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/<get_DynamicInputs>d__26
class CORDL_TYPE Node__get_DynamicInputs_d__26 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)) ::XNode::NodePort*  System_Collections_Generic_IEnumerator_XNode_NodePort__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::XNode::NodePort*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::XNode::Node>  __4__this;

/// @brief Field <>7__wrap1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb98ddf0, size 0x2c8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::XNode::Node__get_DynamicInputs_d__26* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator, addr 0xb98e1c0, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current, addr 0xb98e178, size 0x8, virtual true, abstract: false, final true
inline ::XNode::NodePort* System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb98e264, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb98e180, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb98e1b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb98ddd4, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get___2__current() const;

constexpr ::XNode::NodePort*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

/// @brief Method <>m__Finally1, addr 0xb98e0c8, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb98c0b0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node__get_DynamicInputs_d__26() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicInputs_d__26", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node__get_DynamicInputs_d__26(Node__get_DynamicInputs_d__26 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node__get_DynamicInputs_d__26", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node__get_DynamicInputs_d__26(Node__get_DynamicInputs_d__26 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32266};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::XNode::NodePort*  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node__get_DynamicInputs_d__26, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicInputs_d__26, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicInputs_d__26, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicInputs_d__26, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::Node__get_DynamicInputs_d__26, _____7__wrap1) == 0x30, "Offset mismatch!");

static_assert(sizeof(::XNode::Node__get_DynamicInputs_d__26) == 0x38, "Size mismatch!");

} // namespace end def XNode
// Dependencies System.Collections.Generic.Dictionary`2<TKey, TValue>
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/NodePortDictionary
class CORDL_TYPE Node_NodePortDictionary : public ::System::Collections::Generic::Dictionary_2<::StringW,::XNode::NodePort*> {
public:
// Declarations
/// @brief Field keys, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_keys, put=__cordl_internal_set_keys)) ::System::Collections::Generic::List_1<::StringW>*  keys;

/// @brief Field values, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_values, put=__cordl_internal_set_values)) ::System::Collections::Generic::List_1<::XNode::NodePort*>*  values;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::XNode::Node_NodePortDictionary* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb98db48, size 0x28c, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb98d800, size 0x348, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_keys() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_keys() ;

constexpr ::System::Collections::Generic::List_1<::XNode::NodePort*>* const& __cordl_internal_get_values() const;

constexpr ::System::Collections::Generic::List_1<::XNode::NodePort*>*& __cordl_internal_get_values() ;

constexpr void __cordl_internal_set_keys(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_values(::System::Collections::Generic::List_1<::XNode::NodePort*>*  value) ;

/// @brief Method .ctor, addr 0xb98d48c, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_NodePortDictionary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_NodePortDictionary", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_NodePortDictionary(Node_NodePortDictionary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_NodePortDictionary", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_NodePortDictionary(Node_NodePortDictionary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32265};

/// [SerializeField]
/// @brief Field keys, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___keys;

/// [SerializeField]
/// @brief Field values, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::XNode::NodePort*>*  ___values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_NodePortDictionary, ___keys) == 0x50, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_NodePortDictionary, ___values) == 0x58, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_NodePortDictionary) == 0x60, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false)]
// Dependencies System.Attribute
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/NodeWidthAttribute
class CORDL_TYPE Node_NodeWidthAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field width, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::XNode::Node_NodeWidthAttribute* New_ctor(int32_t  width) ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0xb98d7d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  width) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_NodeWidthAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_NodeWidthAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_NodeWidthAttribute(Node_NodeWidthAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_NodeWidthAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_NodeWidthAttribute(Node_NodeWidthAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32264};

/// @brief Field width, offset: 0x10, size: 0x4, def value: None
 int32_t  ___width;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_NodeWidthAttribute, ___width) == 0x10, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_NodeWidthAttribute) == 0x18, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false)]
// Dependencies System.Attribute, UnityEngine.Color
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/NodeTintAttribute
class CORDL_TYPE Node_NodeTintAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field color, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

static inline ::XNode::Node_NodeTintAttribute* New_ctor(::StringW  hex) ;

static inline ::XNode::Node_NodeTintAttribute* New_ctor(float_t  r, float_t  g, float_t  b) ;

static inline ::XNode::Node_NodeTintAttribute* New_ctor(uint8_t  r, uint8_t  g, uint8_t  b) ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xb98d744, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  hex) ;

/// @brief Method .ctor, addr 0xb98d700, size 0x44, virtual false, abstract: false, final false
inline void _ctor(float_t  r, float_t  g, float_t  b) ;

/// @brief Method .ctor, addr 0xb98d774, size 0x64, virtual false, abstract: false, final false
inline void _ctor(uint8_t  r, uint8_t  g, uint8_t  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_NodeTintAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_NodeTintAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_NodeTintAttribute(Node_NodeTintAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_NodeTintAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_NodeTintAttribute(Node_NodeTintAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32263};

/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_NodeTintAttribute, ___color) == 0x10, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_NodeTintAttribute) == 0x20, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false)]
// Dependencies System.Attribute
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/DisallowMultipleNodesAttribute
class CORDL_TYPE Node_DisallowMultipleNodesAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field max, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_max, put=__cordl_internal_set_max)) int32_t  max;

static inline ::XNode::Node_DisallowMultipleNodesAttribute* New_ctor(int32_t  max) ;

constexpr int32_t const& __cordl_internal_get_max() const;

constexpr int32_t& __cordl_internal_get_max() ;

constexpr void __cordl_internal_set_max(int32_t  value) ;

/// @brief Method .ctor, addr 0xb98d6d8, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  max) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_DisallowMultipleNodesAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_DisallowMultipleNodesAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_DisallowMultipleNodesAttribute(Node_DisallowMultipleNodesAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_DisallowMultipleNodesAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_DisallowMultipleNodesAttribute(Node_DisallowMultipleNodesAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32262};

/// @brief Field max, offset: 0x10, size: 0x4, def value: None
 int32_t  ___max;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_DisallowMultipleNodesAttribute, ___max) == 0x10, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_DisallowMultipleNodesAttribute) == 0x18, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)4, AllowMultiple = false)]
// Dependencies System.Attribute
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/CreateNodeMenuAttribute
class CORDL_TYPE Node_CreateNodeMenuAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field menuName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_menuName, put=__cordl_internal_set_menuName)) ::StringW  menuName;

/// @brief Field order, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_order, put=__cordl_internal_set_order)) int32_t  order;

static inline ::XNode::Node_CreateNodeMenuAttribute* New_ctor(::StringW  menuName) ;

static inline ::XNode::Node_CreateNodeMenuAttribute* New_ctor(::StringW  menuName, int32_t  order) ;

constexpr ::StringW const& __cordl_internal_get_menuName() const;

constexpr ::StringW& __cordl_internal_get_menuName() ;

constexpr int32_t const& __cordl_internal_get_order() const;

constexpr int32_t& __cordl_internal_get_order() ;

constexpr void __cordl_internal_set_menuName(::StringW  value) ;

constexpr void __cordl_internal_set_order(int32_t  value) ;

/// @brief Method .ctor, addr 0xb98d664, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  menuName) ;

/// @brief Method .ctor, addr 0xb98d69c, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  menuName, int32_t  order) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_CreateNodeMenuAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_CreateNodeMenuAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_CreateNodeMenuAttribute(Node_CreateNodeMenuAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_CreateNodeMenuAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_CreateNodeMenuAttribute(Node_CreateNodeMenuAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32261};

/// @brief Field menuName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___menuName;

/// @brief Field order, offset: 0x18, size: 0x4, def value: None
 int32_t  ___order;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_CreateNodeMenuAttribute, ___menuName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_CreateNodeMenuAttribute, ___order) == 0x18, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_CreateNodeMenuAttribute) == 0x20, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute, XNode.Node::ConnectionType, XNode.Node::ShowBackingValue, XNode.Node::TypeConstraint
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/OutputAttribute
class CORDL_TYPE Node_OutputAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field backingValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_backingValue, put=__cordl_internal_set_backingValue)) ::GlobalNamespace::Node_ShowBackingValue  backingValue;

/// @brief Field connectionType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionType, put=__cordl_internal_set_connectionType)) ::GlobalNamespace::Node_ConnectionType  connectionType;

/// @brief Field dynamicPortList, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_dynamicPortList, put=__cordl_internal_set_dynamicPortList)) bool  dynamicPortList;

/// @brief [Obsolete("Use dynamicPortList instead")]
 __declspec(property(get=get_instancePortList, put=set_instancePortList)) bool  instancePortList;

/// @brief Field typeConstraint, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_typeConstraint, put=__cordl_internal_set_typeConstraint)) ::GlobalNamespace::Node_TypeConstraint  typeConstraint;

/// @brief [Obsolete("Use constructor with TypeConstraint")]
static inline ::XNode::Node_OutputAttribute* New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, bool  dynamicPortList) ;

static inline ::XNode::Node_OutputAttribute* New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList) ;

constexpr ::GlobalNamespace::Node_ShowBackingValue const& __cordl_internal_get_backingValue() const;

constexpr ::GlobalNamespace::Node_ShowBackingValue& __cordl_internal_get_backingValue() ;

constexpr ::GlobalNamespace::Node_ConnectionType const& __cordl_internal_get_connectionType() const;

constexpr ::GlobalNamespace::Node_ConnectionType& __cordl_internal_get_connectionType() ;

constexpr bool const& __cordl_internal_get_dynamicPortList() const;

constexpr bool& __cordl_internal_get_dynamicPortList() ;

constexpr ::GlobalNamespace::Node_TypeConstraint const& __cordl_internal_get_typeConstraint() const;

constexpr ::GlobalNamespace::Node_TypeConstraint& __cordl_internal_get_typeConstraint() ;

constexpr void __cordl_internal_set_backingValue(::GlobalNamespace::Node_ShowBackingValue  value) ;

constexpr void __cordl_internal_set_connectionType(::GlobalNamespace::Node_ConnectionType  value) ;

constexpr void __cordl_internal_set_dynamicPortList(bool  value) ;

constexpr void __cordl_internal_set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value) ;

/// [Obsolete("Use constructor with TypeConstraint")]
/// @brief Method .ctor, addr 0xb98d624, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, bool  dynamicPortList) ;

/// @brief Method .ctor, addr 0xb98d5e0, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList) ;

/// @brief Method get_instancePortList, addr 0xb98d5d0, size 0x8, virtual false, abstract: false, final false
inline bool get_instancePortList() ;

/// @brief Method set_instancePortList, addr 0xb98d5d8, size 0x8, virtual false, abstract: false, final false
inline void set_instancePortList(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_OutputAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_OutputAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_OutputAttribute(Node_OutputAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_OutputAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_OutputAttribute(Node_OutputAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32260};

/// @brief Field backingValue, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Node_ShowBackingValue  ___backingValue;

/// @brief Field connectionType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::Node_ConnectionType  ___connectionType;

/// @brief Field dynamicPortList, offset: 0x18, size: 0x1, def value: None
 bool  ___dynamicPortList;

/// @brief Field typeConstraint, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::Node_TypeConstraint  ___typeConstraint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_OutputAttribute, ___backingValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_OutputAttribute, ___connectionType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_OutputAttribute, ___dynamicPortList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_OutputAttribute, ___typeConstraint) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_OutputAttribute) == 0x20, "Size mismatch!");

} // namespace end def XNode
// [AttributeUsage((System.AttributeTargets)256)]
// Dependencies System.Attribute, XNode.Node::ConnectionType, XNode.Node::ShowBackingValue, XNode.Node::TypeConstraint
namespace XNode {
// Is value type: false
// CS Name: XNode.Node/InputAttribute
class CORDL_TYPE Node_InputAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field backingValue, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_backingValue, put=__cordl_internal_set_backingValue)) ::GlobalNamespace::Node_ShowBackingValue  backingValue;

/// @brief Field connectionType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_connectionType, put=__cordl_internal_set_connectionType)) ::GlobalNamespace::Node_ConnectionType  connectionType;

/// @brief Field dynamicPortList, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_dynamicPortList, put=__cordl_internal_set_dynamicPortList)) bool  dynamicPortList;

/// @brief [Obsolete("Use dynamicPortList instead")]
 __declspec(property(get=get_instancePortList, put=set_instancePortList)) bool  instancePortList;

/// @brief Field typeConstraint, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_typeConstraint, put=__cordl_internal_set_typeConstraint)) ::GlobalNamespace::Node_TypeConstraint  typeConstraint;

static inline ::XNode::Node_InputAttribute* New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList) ;

constexpr ::GlobalNamespace::Node_ShowBackingValue const& __cordl_internal_get_backingValue() const;

constexpr ::GlobalNamespace::Node_ShowBackingValue& __cordl_internal_get_backingValue() ;

constexpr ::GlobalNamespace::Node_ConnectionType const& __cordl_internal_get_connectionType() const;

constexpr ::GlobalNamespace::Node_ConnectionType& __cordl_internal_get_connectionType() ;

constexpr bool const& __cordl_internal_get_dynamicPortList() const;

constexpr bool& __cordl_internal_get_dynamicPortList() ;

constexpr ::GlobalNamespace::Node_TypeConstraint const& __cordl_internal_get_typeConstraint() const;

constexpr ::GlobalNamespace::Node_TypeConstraint& __cordl_internal_get_typeConstraint() ;

constexpr void __cordl_internal_set_backingValue(::GlobalNamespace::Node_ShowBackingValue  value) ;

constexpr void __cordl_internal_set_connectionType(::GlobalNamespace::Node_ConnectionType  value) ;

constexpr void __cordl_internal_set_dynamicPortList(bool  value) ;

constexpr void __cordl_internal_set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value) ;

/// @brief Method .ctor, addr 0xb98d58c, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList) ;

/// @brief Method get_instancePortList, addr 0xb98d57c, size 0x8, virtual false, abstract: false, final false
inline bool get_instancePortList() ;

/// @brief Method set_instancePortList, addr 0xb98d584, size 0x8, virtual false, abstract: false, final false
inline void set_instancePortList(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Node_InputAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Node_InputAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Node_InputAttribute(Node_InputAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Node_InputAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Node_InputAttribute(Node_InputAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32259};

/// @brief Field backingValue, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::Node_ShowBackingValue  ___backingValue;

/// @brief Field connectionType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::Node_ConnectionType  ___connectionType;

/// @brief Field dynamicPortList, offset: 0x18, size: 0x1, def value: None
 bool  ___dynamicPortList;

/// @brief Field typeConstraint, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::Node_TypeConstraint  ___typeConstraint;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::Node_InputAttribute, ___backingValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_InputAttribute, ___connectionType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_InputAttribute, ___dynamicPortList) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::Node_InputAttribute, ___typeConstraint) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::XNode::Node_InputAttribute) == 0x20, "Size mismatch!");

} // namespace end def XNode

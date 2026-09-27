#pragma once
// IWYU pragma private; include "XNode/NodePort.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "XNode/zzzz__NodePort_IO_def.hpp"
#include "XNode/zzzz__Node_ConnectionType_def.hpp"
#include "XNode/zzzz__Node_TypeConstraint_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NodePort)
namespace GlobalNamespace {
struct NodePort_IO;
}
namespace GlobalNamespace {
struct Node_ConnectionType;
}
namespace GlobalNamespace {
struct Node_TypeConstraint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine {
struct Vector2;
}
namespace XNode {
class NodePort_PortConnection;
}
namespace XNode {
class Node;
}
// Forward declare root types
namespace XNode {
class NodePort;
}
namespace XNode {
class NodePort_PortConnection;
}
// Write type traits
MARK_REF_T(::XNode::NodePort*);
MARK_REF_T(::XNode::NodePort_PortConnection*);
DEFINE_IL2CPP_CLASS(::XNode::NodePort*, "XNode", "NodePort");
DEFINE_IL2CPP_CLASS(::XNode::NodePort_PortConnection*, "XNode", "NodePort/PortConnection");
// Dependencies System.Object, XNode.Node::ConnectionType, XNode.Node::TypeConstraint, XNode.NodePort::IO
namespace XNode {
// Is value type: false
// CS Name: XNode.NodePort
class CORDL_TYPE NodePort : public ::System::Object {
public:
// Declarations
using IO = ::GlobalNamespace::NodePort_IO;

using PortConnection = ::XNode::NodePort_PortConnection;

 __declspec(property(get=get_Connection)) ::XNode::NodePort*  Connection;

 __declspec(property(get=get_ConnectionCount)) int32_t  ConnectionCount;

 __declspec(property(get=get_IsConnected)) bool  IsConnected;

 __declspec(property(get=get_IsDynamic)) bool  IsDynamic;

 __declspec(property(get=get_IsInput)) bool  IsInput;

 __declspec(property(get=get_IsOutput)) bool  IsOutput;

 __declspec(property(get=get_IsStatic)) bool  IsStatic;

 __declspec(property(get=get_ValueType, put=set_ValueType)) ::System::Type*  ValueType;

/// @brief Field _connectionType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__connectionType, put=__cordl_internal_set__connectionType)) ::GlobalNamespace::Node_ConnectionType  _connectionType;

/// @brief Field _direction, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__direction, put=__cordl_internal_set__direction)) ::GlobalNamespace::NodePort_IO  _direction;

/// @brief Field _dynamic, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__dynamic, put=__cordl_internal_set__dynamic)) bool  _dynamic;

/// @brief Field _fieldName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__fieldName, put=__cordl_internal_set__fieldName)) ::StringW  _fieldName;

/// @brief Field _node, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__node, put=__cordl_internal_set__node)) ::UnityW<::XNode::Node>  _node;

/// @brief Field _typeConstraint, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__typeConstraint, put=__cordl_internal_set__typeConstraint)) ::GlobalNamespace::Node_TypeConstraint  _typeConstraint;

/// @brief Field _typeQualifiedName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeQualifiedName, put=__cordl_internal_set__typeQualifiedName)) ::StringW  _typeQualifiedName;

 __declspec(property(get=get_connectionType, put=set_connectionType)) ::GlobalNamespace::Node_ConnectionType  connectionType;

/// @brief Field connections, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*  connections;

 __declspec(property(get=get_direction, put=set_direction)) ::GlobalNamespace::NodePort_IO  direction;

 __declspec(property(get=get_fieldName)) ::StringW  fieldName;

 __declspec(property(get=get_node)) ::UnityW<::XNode::Node>  node;

 __declspec(property(get=get_typeConstraint, put=set_typeConstraint)) ::GlobalNamespace::Node_TypeConstraint  typeConstraint;

/// @brief Field valueType, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_valueType, put=__cordl_internal_set_valueType)) ::System::Type*  valueType;

/// @brief Method AddConnections, addr 0xb99383c, size 0xa0, virtual false, abstract: false, final false
inline void AddConnections(::XNode::NodePort*  targetPort) ;

/// @brief Method CanConnectTo, addr 0xb990280, size 0x300, virtual false, abstract: false, final false
inline bool CanConnectTo(::XNode::NodePort*  port) ;

/// @brief Method ClearConnections, addr 0xb98cff4, size 0x8c, virtual false, abstract: false, final false
inline void ClearConnections() ;

/// @brief Method Connect, addr 0xb990580, size 0x3f0, virtual false, abstract: false, final false
inline void Connect(::XNode::NodePort*  port) ;

/// @brief Method Disconnect, addr 0xb9933d0, size 0x14c, virtual false, abstract: false, final false
inline void Disconnect(int32_t  i) ;

/// @brief Method Disconnect, addr 0xb993284, size 0x14c, virtual false, abstract: false, final false
inline void Disconnect(::XNode::NodePort*  port) ;

/// @brief Method GetConnection, addr 0xb993098, size 0x148, virtual false, abstract: false, final false
inline ::XNode::NodePort* GetConnection(int32_t  i) ;

/// @brief Method GetConnectionIndex, addr 0xb9931e0, size 0xa4, virtual false, abstract: false, final false
inline int32_t GetConnectionIndex(::XNode::NodePort*  port) ;

/// @brief Method GetConnections, addr 0xb98fd40, size 0x128, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::XNode::NodePort*>* GetConnections() ;

/// @brief Method GetInputSum, addr 0xb992de8, size 0xa8, virtual false, abstract: false, final false
inline float_t GetInputSum(float_t  fallback) ;

/// @brief Method GetInputSum, addr 0xb992e90, size 0xa0, virtual false, abstract: false, final false
inline int32_t GetInputSum(int32_t  fallback) ;

/// @brief Method GetInputValue, addr 0xb992c74, size 0x1c, virtual false, abstract: false, final false
inline ::System::Object* GetInputValue() ;

/// @brief Method GetInputValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetInputValue() ;

/// @brief Method GetInputValues, addr 0xb992c90, size 0x158, virtual false, abstract: false, final false
inline ::ArrayW<::System::Object*> GetInputValues() ;

/// @brief Method GetInputValues, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::ArrayW<T> GetInputValues() ;

/// @brief Method GetOutputValue, addr 0xb992c44, size 0x30, virtual false, abstract: false, final false
inline ::System::Object* GetOutputValue() ;

/// @brief Method GetReroutePoints, addr 0xb99351c, size 0x64, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* GetReroutePoints(int32_t  index) ;

/// @brief Method IsConnectedTo, addr 0xb992f30, size 0xa4, virtual false, abstract: false, final false
inline bool IsConnectedTo(::XNode::NodePort*  port) ;

/// @brief Method MoveConnections, addr 0xb9938dc, size 0xb0, virtual false, abstract: false, final false
inline void MoveConnections(::XNode::NodePort*  targetPort) ;

static inline ::XNode::NodePort* New_ctor(::System::Reflection::FieldInfo*  fieldInfo) ;

static inline ::XNode::NodePort* New_ctor(::StringW  fieldName, ::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::XNode::Node*  node) ;

static inline ::XNode::NodePort* New_ctor(::XNode::NodePort*  nodePort, ::XNode::Node*  node) ;

/// @brief Method Redirect, addr 0xb992638, size 0x1c8, virtual false, abstract: false, final false
inline void Redirect(::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  oldNodes, ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  newNodes) ;

/// @brief Method SwapConnections, addr 0xb993580, size 0x2bc, virtual false, abstract: false, final false
inline void SwapConnections(::XNode::NodePort*  targetPort) ;

/// @brief Method TryGetInputValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetInputValue(::by_ref<T>  value) ;

/// @brief Method VerifyConnections, addr 0xb98cca8, size 0x174, virtual false, abstract: false, final false
inline void VerifyConnections() ;

/// [CompilerGenerated]
/// @brief Method <Disconnect>b__59_0, addr 0xb99398c, size 0x28, virtual false, abstract: false, final false
inline bool _Disconnect_b__59_0(::XNode::NodePort_PortConnection*  it) ;

constexpr ::GlobalNamespace::Node_ConnectionType const& __cordl_internal_get__connectionType() const;

constexpr ::GlobalNamespace::Node_ConnectionType& __cordl_internal_get__connectionType() ;

constexpr ::GlobalNamespace::NodePort_IO const& __cordl_internal_get__direction() const;

constexpr ::GlobalNamespace::NodePort_IO& __cordl_internal_get__direction() ;

constexpr bool const& __cordl_internal_get__dynamic() const;

constexpr bool& __cordl_internal_get__dynamic() ;

constexpr ::StringW const& __cordl_internal_get__fieldName() const;

constexpr ::StringW& __cordl_internal_get__fieldName() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get__node() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get__node() ;

constexpr ::GlobalNamespace::Node_TypeConstraint const& __cordl_internal_get__typeConstraint() const;

constexpr ::GlobalNamespace::Node_TypeConstraint& __cordl_internal_get__typeConstraint() ;

constexpr ::StringW const& __cordl_internal_get__typeQualifiedName() const;

constexpr ::StringW& __cordl_internal_get__typeQualifiedName() ;

constexpr ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>* const& __cordl_internal_get_connections() const;

constexpr ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*& __cordl_internal_get_connections() ;

constexpr ::System::Type* const& __cordl_internal_get_valueType() const;

constexpr ::System::Type*& __cordl_internal_get_valueType() ;

constexpr void __cordl_internal_set__connectionType(::GlobalNamespace::Node_ConnectionType  value) ;

constexpr void __cordl_internal_set__direction(::GlobalNamespace::NodePort_IO  value) ;

constexpr void __cordl_internal_set__dynamic(bool  value) ;

constexpr void __cordl_internal_set__fieldName(::StringW  value) ;

constexpr void __cordl_internal_set__node(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set__typeConstraint(::GlobalNamespace::Node_TypeConstraint  value) ;

constexpr void __cordl_internal_set__typeQualifiedName(::StringW  value) ;

constexpr void __cordl_internal_set_connections(::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*  value) ;

constexpr void __cordl_internal_set_valueType(::System::Type*  value) ;

/// @brief Method .ctor, addr 0xb99169c, size 0x274, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::FieldInfo*  fieldInfo) ;

/// @brief Method .ctor, addr 0xb98ce74, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::StringW  fieldName, ::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::XNode::Node*  node) ;

/// @brief Method .ctor, addr 0xb99019c, size 0xe4, virtual false, abstract: false, final false
inline void _ctor(::XNode::NodePort*  nodePort, ::XNode::Node*  node) ;

/// @brief Method get_Connection, addr 0xb992ac0, size 0xac, virtual false, abstract: false, final false
inline ::XNode::NodePort* get_Connection() ;

/// @brief Method get_ConnectionCount, addr 0xb992a78, size 0x48, virtual false, abstract: false, final false
inline int32_t get_ConnectionCount() ;

/// @brief Method get_IsConnected, addr 0xb992bdc, size 0x50, virtual false, abstract: false, final false
inline bool get_IsConnected() ;

/// @brief Method get_IsDynamic, addr 0xb992c3c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDynamic() ;

/// @brief Method get_IsInput, addr 0xb98e0b8, size 0x10, virtual false, abstract: false, final false
inline bool get_IsInput() ;

/// @brief Method get_IsOutput, addr 0xb98e550, size 0x10, virtual false, abstract: false, final false
inline bool get_IsOutput() ;

/// @brief Method get_IsStatic, addr 0xb98cfe4, size 0x10, virtual false, abstract: false, final false
inline bool get_IsStatic() ;

/// @brief Method get_ValueType, addr 0xb98fe68, size 0xdc, virtual false, abstract: false, final false
inline ::System::Type* get_ValueType() ;

/// @brief Method get_connectionType, addr 0xb992bbc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Node_ConnectionType get_connectionType() ;

/// @brief Method get_direction, addr 0xb992bac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::NodePort_IO get_direction() ;

/// @brief Method get_fieldName, addr 0xb992c2c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_fieldName() ;

/// @brief Method get_node, addr 0xb992c34, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::XNode::Node> get_node() ;

/// @brief Method get_typeConstraint, addr 0xb992bcc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Node_TypeConstraint get_typeConstraint() ;

/// @brief Method set_ValueType, addr 0xb98ff44, size 0xb0, virtual false, abstract: false, final false
inline void set_ValueType(::System::Type*  value) ;

/// @brief Method set_connectionType, addr 0xb992bc4, size 0x8, virtual false, abstract: false, final false
inline void set_connectionType(::GlobalNamespace::Node_ConnectionType  value) ;

/// @brief Method set_direction, addr 0xb992bb4, size 0x8, virtual false, abstract: false, final false
inline void set_direction(::GlobalNamespace::NodePort_IO  value) ;

/// @brief Method set_typeConstraint, addr 0xb992bd4, size 0x8, virtual false, abstract: false, final false
inline void set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodePort() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodePort", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodePort(NodePort && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodePort", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodePort(NodePort const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32283};

/// @brief Field valueType, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___valueType;

/// [SerializeField]
/// @brief Field _fieldName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____fieldName;

/// [SerializeField]
/// @brief Field _node, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  ____node;

/// [SerializeField]
/// @brief Field _typeQualifiedName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____typeQualifiedName;

/// [SerializeField]
/// @brief Field connections, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*  ___connections;

/// [SerializeField]
/// @brief Field _direction, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::NodePort_IO  ____direction;

/// [SerializeField]
/// @brief Field _connectionType, offset: 0x3c, size: 0x4, def value: None
 ::GlobalNamespace::Node_ConnectionType  ____connectionType;

/// [SerializeField]
/// @brief Field _typeConstraint, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::Node_TypeConstraint  ____typeConstraint;

/// [SerializeField]
/// @brief Field _dynamic, offset: 0x44, size: 0x1, def value: None
 bool  ____dynamic;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodePort, ___valueType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____fieldName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____typeQualifiedName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ___connections) == 0x30, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____direction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____connectionType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____typeConstraint) == 0x40, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort, ____dynamic) == 0x44, "Offset mismatch!");

static_assert(sizeof(::XNode::NodePort) == 0x48, "Size mismatch!");

} // namespace end def XNode
// Dependencies System.Object
namespace XNode {
// Is value type: false
// CS Name: XNode.NodePort/PortConnection
class CORDL_TYPE NodePort_PortConnection : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Port)) ::XNode::NodePort*  Port;

/// @brief Field fieldName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_fieldName, put=__cordl_internal_set_fieldName)) ::StringW  fieldName;

/// @brief Field node, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_node, put=__cordl_internal_set_node)) ::UnityW<::XNode::Node>  node;

/// @brief Field port, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_port, put=__cordl_internal_set_port)) ::XNode::NodePort*  port;

/// @brief Field reroutePoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reroutePoints, put=__cordl_internal_set_reroutePoints)) ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  reroutePoints;

/// @brief Method GetPort, addr 0xb9939b4, size 0x98, virtual false, abstract: false, final false
inline ::XNode::NodePort* GetPort() ;

static inline ::XNode::NodePort_PortConnection* New_ctor(::XNode::NodePort*  port) ;

constexpr ::StringW const& __cordl_internal_get_fieldName() const;

constexpr ::StringW& __cordl_internal_get_fieldName() ;

constexpr ::UnityW<::XNode::Node> const& __cordl_internal_get_node() const;

constexpr ::UnityW<::XNode::Node>& __cordl_internal_get_node() ;

constexpr ::XNode::NodePort* const& __cordl_internal_get_port() const;

constexpr ::XNode::NodePort*& __cordl_internal_get_port() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& __cordl_internal_get_reroutePoints() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& __cordl_internal_get_reroutePoints() ;

constexpr void __cordl_internal_set_fieldName(::StringW  value) ;

constexpr void __cordl_internal_set_node(::UnityW<::XNode::Node>  value) ;

constexpr void __cordl_internal_set_port(::XNode::NodePort*  value) ;

constexpr void __cordl_internal_set_reroutePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method .ctor, addr 0xb992fd4, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(::XNode::NodePort*  port) ;

/// @brief Method get_Port, addr 0xb992b6c, size 0x40, virtual false, abstract: false, final false
inline ::XNode::NodePort* get_Port() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NodePort_PortConnection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NodePort_PortConnection", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NodePort_PortConnection(NodePort_PortConnection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NodePort_PortConnection", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NodePort_PortConnection(NodePort_PortConnection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32282};

/// [SerializeField]
/// @brief Field fieldName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___fieldName;

/// [SerializeField]
/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::XNode::Node>  ___node;

/// @brief Field port, offset: 0x20, size: 0x8, def value: None
 ::XNode::NodePort*  ___port;

/// [SerializeField]
/// @brief Field reroutePoints, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  ___reroutePoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::XNode::NodePort_PortConnection, ___fieldName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort_PortConnection, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort_PortConnection, ___port) == 0x20, "Offset mismatch!");

static_assert(offsetof(::XNode::NodePort_PortConnection, ___reroutePoints) == 0x28, "Offset mismatch!");

static_assert(sizeof(::XNode::NodePort_PortConnection) == 0x30, "Size mismatch!");

} // namespace end def XNode

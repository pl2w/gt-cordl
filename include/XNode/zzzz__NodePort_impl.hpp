#pragma once
// IWYU pragma private; include "XNode/NodePort.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "XNode/zzzz__NodePort_IO_impl.hpp"
#include "XNode/zzzz__Node_ConnectionType_impl.hpp"
#include "XNode/zzzz__Node_TypeConstraint_impl.hpp"
#include "XNode/zzzz__NodePort_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "XNode/zzzz__NodePort_IO_def.hpp"
#include "XNode/zzzz__NodePort_def.hpp"
#include "XNode/zzzz__Node_ConnectionType_def.hpp"
#include "XNode/zzzz__Node_TypeConstraint_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::XNode::NodePort.get_ConnectionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::XNode::NodePort::*)()>(&::XNode::NodePort::get_ConnectionCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb992a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_ConnectionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_Connection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::NodePort::*)()>(&::XNode::NodePort::get_Connection)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb992ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_Connection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NodePort_IO (::XNode::NodePort::*)()>(&::XNode::NodePort::get_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_direction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.set_direction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::GlobalNamespace::NodePort_IO)>(&::XNode::NodePort::set_direction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_direction", {}, {::i2c::type_of<::GlobalNamespace::NodePort_IO>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_connectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Node_ConnectionType (::XNode::NodePort::*)()>(&::XNode::NodePort::get_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_connectionType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.set_connectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::GlobalNamespace::Node_ConnectionType)>(&::XNode::NodePort::set_connectionType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_connectionType", {}, {::i2c::type_of<::GlobalNamespace::Node_ConnectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_typeConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Node_TypeConstraint (::XNode::NodePort::*)()>(&::XNode::NodePort::get_typeConstraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_typeConstraint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.set_typeConstraint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::GlobalNamespace::Node_TypeConstraint)>(&::XNode::NodePort::set_typeConstraint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_typeConstraint", {}, {::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_IsConnected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)()>(&::XNode::NodePort::get_IsConnected)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb992bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsConnected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_IsInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)()>(&::XNode::NodePort::get_IsInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb98e0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_IsOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)()>(&::XNode::NodePort::get_IsOutput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb98e550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsOutput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_fieldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::XNode::NodePort::*)()>(&::XNode::NodePort::get_fieldName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_fieldName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_node
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::XNode::Node> (::XNode::NodePort::*)()>(&::XNode::NodePort::get_node)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_node", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_IsDynamic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)()>(&::XNode::NodePort::get_IsDynamic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb992c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsDynamic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_IsStatic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)()>(&::XNode::NodePort::get_IsStatic)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb98cfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsStatic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.get_ValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::XNode::NodePort::*)()>(&::XNode::NodePort::get_ValueType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb98fe68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_ValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.set_ValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::System::Type*)>(&::XNode::NodePort::set_ValueType)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98ff44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_ValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::System::Reflection::FieldInfo*)>(&::XNode::NodePort::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0xb99169c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*, ::XNode::Node*)>(&::XNode::NodePort::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb99019c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::XNode::NodePort*>(), ::i2c::type_of<::XNode::Node*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::StringW, ::System::Type*, ::GlobalNamespace::NodePort_IO, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::XNode::Node*)>(&::XNode::NodePort::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb98ce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::XNode::Node*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.VerifyConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)()>(&::XNode::NodePort::VerifyConnections)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb98cca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"VerifyConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetOutputValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::NodePort::*)()>(&::XNode::NodePort::GetOutputValue)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb992c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetOutputValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetInputValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::NodePort::*)()>(&::XNode::NodePort::GetInputValue)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb992c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetInputValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::XNode::NodePort::*)()>(&::XNode::NodePort::GetInputValues)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb992c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetInputSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::XNode::NodePort::*)(float_t)>(&::XNode::NodePort::GetInputSum)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb992de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputSum", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetInputSum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::XNode::NodePort::*)(int32_t)>(&::XNode::NodePort::GetInputSum)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb992e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputSum", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.Connect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::Connect)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xb990580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Connect", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::XNode::NodePort*>* (::XNode::NodePort::*)()>(&::XNode::NodePort::GetConnections)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb98fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::NodePort::*)(int32_t)>(&::XNode::NodePort::GetConnection)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb993098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetConnectionIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::GetConnectionIndex)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb9931e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnectionIndex", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.IsConnectedTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::IsConnectedTo)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb992f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"IsConnectedTo", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.CanConnectTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::CanConnectTo)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0xb990280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"CanConnectTo", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::Disconnect)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb993284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Disconnect", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.Disconnect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(int32_t)>(&::XNode::NodePort::Disconnect)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb9933d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)()>(&::XNode::NodePort::ClearConnections)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb98cff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"ClearConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.GetReroutePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector2>* (::XNode::NodePort::*)(int32_t)>(&::XNode::NodePort::GetReroutePoints)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb99351c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetReroutePoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.SwapConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::SwapConnections)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb993580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"SwapConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.AddConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::AddConnections)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb99383c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"AddConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.MoveConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::XNode::NodePort*)>(&::XNode::NodePort::MoveConnections)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb9938dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"MoveConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort.Redirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort::*)(::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*, ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*)>(&::XNode::NodePort::Redirect)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb992638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Redirect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort._Disconnect_b__59_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodePort::*)(::XNode::NodePort_PortConnection*)>(&::XNode::NodePort::_Disconnect_b__59_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb99398c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"<Disconnect>b__59_0", {}, {::i2c::type_of<::XNode::NodePort_PortConnection*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& XNode::NodePort::__cordl_internal_get_valueType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueType;
}
constexpr ::System::Type* const& XNode::NodePort::__cordl_internal_get_valueType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueType;
}
constexpr void XNode::NodePort::__cordl_internal_set_valueType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueType = value;
}
constexpr ::StringW& XNode::NodePort::__cordl_internal_get__fieldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fieldName;
}
constexpr ::StringW const& XNode::NodePort::__cordl_internal_get__fieldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fieldName;
}
constexpr void XNode::NodePort::__cordl_internal_set__fieldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fieldName = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::NodePort::__cordl_internal_get__node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node;
}
constexpr ::UnityW<::XNode::Node> const& XNode::NodePort::__cordl_internal_get__node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____node;
}
constexpr void XNode::NodePort::__cordl_internal_set__node(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____node = value;
}
constexpr ::StringW& XNode::NodePort::__cordl_internal_get__typeQualifiedName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeQualifiedName;
}
constexpr ::StringW const& XNode::NodePort::__cordl_internal_get__typeQualifiedName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeQualifiedName;
}
constexpr void XNode::NodePort::__cordl_internal_set__typeQualifiedName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeQualifiedName = value;
}
constexpr ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*& XNode::NodePort::__cordl_internal_get_connections()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr ::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>* const& XNode::NodePort::__cordl_internal_get_connections() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connections;
}
constexpr void XNode::NodePort::__cordl_internal_set_connections(::System::Collections::Generic::List_1<::XNode::NodePort_PortConnection*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connections = value;
}
constexpr ::GlobalNamespace::NodePort_IO& XNode::NodePort::__cordl_internal_get__direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____direction;
}
constexpr ::GlobalNamespace::NodePort_IO const& XNode::NodePort::__cordl_internal_get__direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____direction;
}
constexpr void XNode::NodePort::__cordl_internal_set__direction(::GlobalNamespace::NodePort_IO  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____direction = value;
}
constexpr ::GlobalNamespace::Node_ConnectionType& XNode::NodePort::__cordl_internal_get__connectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionType;
}
constexpr ::GlobalNamespace::Node_ConnectionType const& XNode::NodePort::__cordl_internal_get__connectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____connectionType;
}
constexpr void XNode::NodePort::__cordl_internal_set__connectionType(::GlobalNamespace::Node_ConnectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____connectionType = value;
}
constexpr ::GlobalNamespace::Node_TypeConstraint& XNode::NodePort::__cordl_internal_get__typeConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeConstraint;
}
constexpr ::GlobalNamespace::Node_TypeConstraint const& XNode::NodePort::__cordl_internal_get__typeConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeConstraint;
}
constexpr void XNode::NodePort::__cordl_internal_set__typeConstraint(::GlobalNamespace::Node_TypeConstraint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeConstraint = value;
}
constexpr bool& XNode::NodePort::__cordl_internal_get__dynamic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamic;
}
constexpr bool const& XNode::NodePort::__cordl_internal_get__dynamic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamic;
}
constexpr void XNode::NodePort::__cordl_internal_set__dynamic(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamic = value;
}
inline int32_t XNode::NodePort::get_ConnectionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_ConnectionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::NodePort::get_Connection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_Connection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline ::GlobalNamespace::NodePort_IO XNode::NodePort::get_direction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_direction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePort_IO>(this, ___internal_method);
}
inline void XNode::NodePort::set_direction(::GlobalNamespace::NodePort_IO  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_direction", {}, {::i2c::type_of<::GlobalNamespace::NodePort_IO>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Node_ConnectionType XNode::NodePort::get_connectionType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_connectionType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_ConnectionType>(this, ___internal_method);
}
inline void XNode::NodePort::set_connectionType(::GlobalNamespace::Node_ConnectionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_connectionType", {}, {::i2c::type_of<::GlobalNamespace::Node_ConnectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::Node_TypeConstraint XNode::NodePort::get_typeConstraint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_typeConstraint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Node_TypeConstraint>(this, ___internal_method);
}
inline void XNode::NodePort::set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_typeConstraint", {}, {::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool XNode::NodePort::get_IsConnected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsConnected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool XNode::NodePort::get_IsInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool XNode::NodePort::get_IsOutput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsOutput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW XNode::NodePort::get_fieldName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_fieldName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::XNode::Node> XNode::NodePort::get_node()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_node", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::XNode::Node>>(this, ___internal_method);
}
inline bool XNode::NodePort::get_IsDynamic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsDynamic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool XNode::NodePort::get_IsStatic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_IsStatic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* XNode::NodePort::get_ValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"get_ValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void XNode::NodePort::set_ValueType(::System::Type*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"set_ValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void XNode::NodePort::_ctor(::System::Reflection::FieldInfo*  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldInfo);
}
inline void XNode::NodePort::_ctor(::XNode::NodePort*  nodePort, ::XNode::Node*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::XNode::NodePort*>(), ::i2c::type_of<::XNode::Node*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodePort, node);
}
inline void XNode::NodePort::_ctor(::StringW  fieldName, ::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::XNode::Node*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::XNode::Node*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldName, type, direction, connectionType, typeConstraint, node);
}
inline void XNode::NodePort::VerifyConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"VerifyConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::NodePort::GetOutputValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetOutputValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Object* XNode::NodePort::GetInputValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> XNode::NodePort::GetInputValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method);
}
template<typename T>
inline T XNode::NodePort::GetInputValue()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::NodePort*>(),
                    {"GetInputValue", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> XNode::NodePort::GetInputValues()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::NodePort*>(),
                    {"GetInputValues", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline bool XNode::NodePort::TryGetInputValue(::by_ref<T>  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::NodePort*>(),
                    {"TryGetInputValue", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline float_t XNode::NodePort::GetInputSum(float_t  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputSum", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, fallback);
}
inline int32_t XNode::NodePort::GetInputSum(int32_t  fallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetInputSum", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, fallback);
}
inline void XNode::NodePort::Connect(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Connect", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline ::System::Collections::Generic::List_1<::XNode::NodePort*>* XNode::NodePort::GetConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::NodePort::GetConnection(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnection", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, i);
}
inline int32_t XNode::NodePort::GetConnectionIndex(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetConnectionIndex", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, port);
}
inline bool XNode::NodePort::IsConnectedTo(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"IsConnectedTo", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port);
}
inline bool XNode::NodePort::CanConnectTo(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"CanConnectTo", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, port);
}
inline void XNode::NodePort::Disconnect(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Disconnect", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void XNode::NodePort::Disconnect(int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Disconnect", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, i);
}
inline void XNode::NodePort::ClearConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"ClearConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* XNode::NodePort::GetReroutePoints(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"GetReroutePoints", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>(this, ___internal_method, index);
}
inline void XNode::NodePort::SwapConnections(::XNode::NodePort*  targetPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"SwapConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPort);
}
inline void XNode::NodePort::AddConnections(::XNode::NodePort*  targetPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"AddConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPort);
}
inline void XNode::NodePort::MoveConnections(::XNode::NodePort*  targetPort)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"MoveConnections", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPort);
}
inline void XNode::NodePort::Redirect(::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  oldNodes, ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  newNodes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"Redirect", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldNodes, newNodes);
}
inline bool XNode::NodePort::_Disconnect_b__59_0(::XNode::NodePort_PortConnection*  it)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort*>(),
                        {"<Disconnect>b__59_0", {}, {::i2c::type_of<::XNode::NodePort_PortConnection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, it);
}
inline ::XNode::NodePort* XNode::NodePort::New_ctor(::System::Reflection::FieldInfo*  fieldInfo)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodePort*>(fieldInfo));
}
inline ::XNode::NodePort* XNode::NodePort::New_ctor(::XNode::NodePort*  nodePort, ::XNode::Node*  node)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodePort*>(nodePort, node));
}
inline ::XNode::NodePort* XNode::NodePort::New_ctor(::StringW  fieldName, ::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::XNode::Node*  node)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodePort*>(fieldName, type, direction, connectionType, typeConstraint, node));
}
// Ctor Parameters []
constexpr ::XNode::NodePort::NodePort()   {
}
//  Writing Method size for method: ::XNode::NodePort_PortConnection.get_Port
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::NodePort_PortConnection::*)()>(&::XNode::NodePort_PortConnection::get_Port)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb992b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {"get_Port", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort_PortConnection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodePort_PortConnection::*)(::XNode::NodePort*)>(&::XNode::NodePort_PortConnection::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb992fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodePort_PortConnection.GetPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::NodePort_PortConnection::*)()>(&::XNode::NodePort_PortConnection::GetPort)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb9939b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {"GetPort", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& XNode::NodePort_PortConnection::__cordl_internal_get_fieldName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldName;
}
constexpr ::StringW const& XNode::NodePort_PortConnection::__cordl_internal_get_fieldName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldName;
}
constexpr void XNode::NodePort_PortConnection::__cordl_internal_set_fieldName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fieldName = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::NodePort_PortConnection::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityW<::XNode::Node> const& XNode::NodePort_PortConnection::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void XNode::NodePort_PortConnection::__cordl_internal_set_node(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::XNode::NodePort*& XNode::NodePort_PortConnection::__cordl_internal_get_port()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr ::XNode::NodePort* const& XNode::NodePort_PortConnection::__cordl_internal_get_port() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___port;
}
constexpr void XNode::NodePort_PortConnection::__cordl_internal_set_port(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___port = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>*& XNode::NodePort_PortConnection::__cordl_internal_get_reroutePoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reroutePoints;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector2>* const& XNode::NodePort_PortConnection::__cordl_internal_get_reroutePoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reroutePoints;
}
constexpr void XNode::NodePort_PortConnection::__cordl_internal_set_reroutePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector2>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reroutePoints = value;
}
inline ::XNode::NodePort* XNode::NodePort_PortConnection::get_Port()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {"get_Port", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::NodePort_PortConnection::_ctor(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {".ctor", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline ::XNode::NodePort* XNode::NodePort_PortConnection::GetPort()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodePort_PortConnection*>(),
                        {"GetPort", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline ::XNode::NodePort_PortConnection* XNode::NodePort_PortConnection::New_ctor(::XNode::NodePort*  port)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodePort_PortConnection*>(port));
}
// Ctor Parameters []
constexpr ::XNode::NodePort_PortConnection::NodePort_PortConnection()   {
}

#pragma once
// IWYU pragma private; include "XNode/Node.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary`2_ValueCollection_Enumerator_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "XNode/zzzz__Node_ConnectionType_impl.hpp"
#include "XNode/zzzz__Node_ShowBackingValue_impl.hpp"
#include "XNode/zzzz__Node_TypeConstraint_impl.hpp"
#include "XNode/zzzz__Node_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "XNode/zzzz__NodeGraph_def.hpp"
#include "XNode/zzzz__NodePort_IO_def.hpp"
#include "XNode/zzzz__NodePort_def.hpp"
#include "XNode/zzzz__Node_ConnectionType_def.hpp"
#include "XNode/zzzz__Node_ShowBackingValue_def.hpp"
#include "XNode/zzzz__Node_TypeConstraint_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::XNode::Node.get_InstancePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_InstancePorts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98b714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstancePorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_InstanceOutputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_InstanceOutputs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98b798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstanceOutputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_InstanceInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_InstanceInputs)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98b81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstanceInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddInstanceInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddInstanceInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb98b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstanceInput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddInstanceOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddInstanceOutput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb98b8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstanceOutput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddInstancePort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::NodePort_IO, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddInstancePort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98b8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstancePort", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.RemoveInstancePort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::StringW)>(&::XNode::Node::RemoveInstancePort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98bb18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveInstancePort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.RemoveInstancePort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::XNode::NodePort*)>(&::XNode::Node::RemoveInstancePort)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98bbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveInstancePort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.ClearInstancePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::ClearInstancePorts)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98bcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearInstancePorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_Ports
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_Ports)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98be2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Ports", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_Outputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_Outputs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98bee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Outputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_Inputs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98bf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Inputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_DynamicPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_DynamicPorts)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98b718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicPorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_DynamicOutputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_DynamicOutputs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98b79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicOutputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.get_DynamicInputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* (::XNode::Node::*)()>(&::XNode::Node::get_DynamicInputs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb98b820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicInputs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::OnEnable)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb98c0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.UpdatePorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::UpdatePorts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98c1bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"UpdatePorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::Init)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98c9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {::i2c::class_of<::XNode::Node*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.VerifyConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::VerifyConnections)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb98ca00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"VerifyConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddDynamicInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddDynamicInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb98b8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicInput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddDynamicOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddDynamicOutput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb98b8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicOutput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.AddDynamicPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::System::Type*, ::GlobalNamespace::NodePort_IO, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, ::StringW)>(&::XNode::Node::AddDynamicPort)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb98b8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicPort", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.RemoveDynamicPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::StringW)>(&::XNode::Node::RemoveDynamicPort)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98bb1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveDynamicPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.RemoveDynamicPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::XNode::NodePort*)>(&::XNode::Node::RemoveDynamicPort)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb98bbc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveDynamicPort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.ClearDynamicPorts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::ClearDynamicPorts)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb98bcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearDynamicPorts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.GetOutputPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::StringW)>(&::XNode::Node::GetOutputPort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb98d080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetOutputPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.GetInputPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::StringW)>(&::XNode::Node::GetInputPort)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb98d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetInputPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.GetPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node::*)(::StringW)>(&::XNode::Node::GetPort)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb98cf6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.HasPort
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node::*)(::StringW)>(&::XNode::Node::HasPort)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb98ce1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"HasPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node::*)(::XNode::NodePort*)>(&::XNode::Node::GetValue)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb98d0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {::i2c::class_of<::XNode::Node*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.OnCreateConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::XNode::NodePort*, ::XNode::NodePort*)>(&::XNode::Node::OnCreateConnection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98d174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {::i2c::class_of<::XNode::Node*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.OnRemoveConnection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)(::XNode::NodePort*)>(&::XNode::Node::OnRemoveConnection)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98d178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {::i2c::class_of<::XNode::Node*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node.ClearConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::ClearConnections)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb98d17c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearConnections", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node::*)()>(&::XNode::Node::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb98d424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::XNode::NodeGraph>& XNode::Node::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::UnityW<::XNode::NodeGraph> const& XNode::Node::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void XNode::Node::__cordl_internal_set_graph(::UnityW<::XNode::NodeGraph>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
constexpr ::UnityEngine::Vector2& XNode::Node::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Vector2 const& XNode::Node::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void XNode::Node::__cordl_internal_set_position(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::XNode::Node_NodePortDictionary*& XNode::Node::__cordl_internal_get_ports()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ports;
}
constexpr ::XNode::Node_NodePortDictionary* const& XNode::Node::__cordl_internal_get_ports() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ports;
}
constexpr void XNode::Node::__cordl_internal_set_ports(::XNode::Node_NodePortDictionary*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ports = value;
}
inline void XNode::Node::setStaticF_graphHotfix(::UnityW<::XNode::NodeGraph>  value)  {
::cordl_internals::setStaticField<::UnityW<::XNode::NodeGraph>, "graphHotfix", ::XNode::Node*>(std::forward<::UnityW<::XNode::NodeGraph>>(value));
}
inline ::UnityW<::XNode::NodeGraph> XNode::Node::getStaticF_graphHotfix()  {
return ::cordl_internals::getStaticField<::UnityW<::XNode::NodeGraph>, "graphHotfix", ::XNode::Node*>();
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_InstancePorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstancePorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_InstanceOutputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstanceOutputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_InstanceInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_InstanceInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node::AddInstanceInput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstanceInput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, connectionType, typeConstraint, fieldName);
}
inline ::XNode::NodePort* XNode::Node::AddInstanceOutput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstanceOutput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, connectionType, typeConstraint, fieldName);
}
inline ::XNode::NodePort* XNode::Node::AddInstancePort(::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddInstancePort", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, direction, connectionType, typeConstraint, fieldName);
}
inline void XNode::Node::RemoveInstancePort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveInstancePort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldName);
}
inline void XNode::Node::RemoveInstancePort(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveInstancePort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void XNode::Node::ClearInstancePorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearInstancePorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_Ports()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Ports", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_Outputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Outputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_Inputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_Inputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_DynamicPorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicPorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_DynamicOutputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicOutputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node::get_DynamicInputs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"get_DynamicInputs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline void XNode::Node::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node::UpdatePorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"UpdatePorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node::Init()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::Node*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node::VerifyConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"VerifyConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node::AddDynamicInput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicInput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, connectionType, typeConstraint, fieldName);
}
inline ::XNode::NodePort* XNode::Node::AddDynamicOutput(::System::Type*  type, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicOutput", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, connectionType, typeConstraint, fieldName);
}
inline ::XNode::NodePort* XNode::Node::AddDynamicPort(::System::Type*  type, ::GlobalNamespace::NodePort_IO  direction, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"AddDynamicPort", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::GlobalNamespace::NodePort_IO>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, type, direction, connectionType, typeConstraint, fieldName);
}
inline void XNode::Node::RemoveDynamicPort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveDynamicPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fieldName);
}
inline void XNode::Node::RemoveDynamicPort(::XNode::NodePort*  port)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"RemoveDynamicPort", {}, {::i2c::type_of<::XNode::NodePort*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void XNode::Node::ClearDynamicPorts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearDynamicPorts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node::GetOutputPort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetOutputPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, fieldName);
}
inline ::XNode::NodePort* XNode::Node::GetInputPort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetInputPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, fieldName);
}
inline ::XNode::NodePort* XNode::Node::GetPort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"GetPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method, fieldName);
}
inline bool XNode::Node::HasPort(::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"HasPort", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fieldName);
}
template<typename T>
inline T XNode::Node::GetInputValue(::StringW  fieldName, T  fallback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {"GetInputValue", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, fieldName, fallback);
}
template<typename T>
inline ::ArrayW<T> XNode::Node::GetInputValues(::StringW  fieldName, /* [ParamArray] */ ::ArrayW<T>  fallback)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::Node*>(),
                    {"GetInputValues", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method, fieldName, fallback);
}
inline ::System::Object* XNode::Node::GetValue(::XNode::NodePort*  port)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::Node*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, port);
}
inline void XNode::Node::OnCreateConnection(::XNode::NodePort*  from, ::XNode::NodePort*  to)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::Node*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline void XNode::Node::OnRemoveConnection(::XNode::NodePort*  port)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::Node*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, port);
}
inline void XNode::Node::ClearConnections()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {"ClearConnections", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::Node* XNode::Node::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node*>());
}
// Ctor Parameters []
constexpr ::XNode::Node::Node()   {
}
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Ports_d__16::*)(int32_t)>(&::XNode::Node__get_Ports_d__16::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98beac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98f46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xb98f488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb98f654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98f6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98f6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98f6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Ports_d__16.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_Ports_d__16::*)()>(&::XNode::Node__get_Ports_d__16::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98f790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_Ports_d__16::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_Ports_d__16::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_Ports_d__16::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_Ports_d__16::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_Ports_d__16::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_Ports_d__16::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_Ports_d__16::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_Ports_d__16::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_Ports_d__16::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_Ports_d__16::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_Ports_d__16::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_Ports_d__16::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>& XNode::Node__get_Ports_d__16::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*> const& XNode::Node__get_Ports_d__16::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_Ports_d__16::__cordl_internal_set___7__wrap1(::GlobalNamespace::ValueCollection_Dictionary_2_Enumerator<::StringW,::XNode::NodePort*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_Ports_d__16::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_Ports_d__16::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_Ports_d__16::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_Ports_d__16::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_Ports_d__16::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_Ports_d__16::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_Ports_d__16::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Ports_d__16::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_Ports_d__16::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Ports_d__16*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_Ports_d__16* XNode::Node__get_Ports_d__16::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_Ports_d__16*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Ports_d__16::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_Ports_d__16::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_Ports_d__16::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_Ports_d__16::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Ports_d__16::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Ports_d__16::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_Ports_d__16::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_Ports_d__16::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_Ports_d__16::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_Ports_d__16::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_Ports_d__16::Node__get_Ports_d__16()   {
}
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Outputs_d__18::*)(int32_t)>(&::XNode::Node__get_Outputs_d__18::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98bf60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98eff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0xb98f00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98f2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98f37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98f384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98f3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98f3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Outputs_d__18.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_Outputs_d__18::*)()>(&::XNode::Node__get_Outputs_d__18::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98f468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_Outputs_d__18::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_Outputs_d__18::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_Outputs_d__18::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_Outputs_d__18::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_Outputs_d__18::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_Outputs_d__18::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_Outputs_d__18::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_Outputs_d__18::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_Outputs_d__18::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_Outputs_d__18::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_Outputs_d__18::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_Outputs_d__18::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& XNode::Node__get_Outputs_d__18::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& XNode::Node__get_Outputs_d__18::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_Outputs_d__18::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_Outputs_d__18::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_Outputs_d__18::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_Outputs_d__18::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_Outputs_d__18::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_Outputs_d__18::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_Outputs_d__18::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_Outputs_d__18::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Outputs_d__18::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_Outputs_d__18::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Outputs_d__18*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_Outputs_d__18* XNode::Node__get_Outputs_d__18::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_Outputs_d__18*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Outputs_d__18::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_Outputs_d__18::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_Outputs_d__18::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_Outputs_d__18::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Outputs_d__18::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Outputs_d__18::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_Outputs_d__18::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_Outputs_d__18::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_Outputs_d__18::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_Outputs_d__18::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_Outputs_d__18::Node__get_Outputs_d__18()   {
}
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Inputs_d__20::*)(int32_t)>(&::XNode::Node__get_Inputs_d__20::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98c014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98eb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb98eb94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98ee50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98ef00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98ef08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98ef40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98ef48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_Inputs_d__20.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_Inputs_d__20::*)()>(&::XNode::Node__get_Inputs_d__20::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_Inputs_d__20::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_Inputs_d__20::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_Inputs_d__20::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_Inputs_d__20::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_Inputs_d__20::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_Inputs_d__20::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_Inputs_d__20::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_Inputs_d__20::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_Inputs_d__20::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_Inputs_d__20::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_Inputs_d__20::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_Inputs_d__20::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& XNode::Node__get_Inputs_d__20::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& XNode::Node__get_Inputs_d__20::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_Inputs_d__20::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_Inputs_d__20::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_Inputs_d__20::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_Inputs_d__20::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_Inputs_d__20::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_Inputs_d__20::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_Inputs_d__20::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_Inputs_d__20::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Inputs_d__20::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_Inputs_d__20::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_Inputs_d__20*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_Inputs_d__20* XNode::Node__get_Inputs_d__20::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_Inputs_d__20*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Inputs_d__20::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_Inputs_d__20::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_Inputs_d__20::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_Inputs_d__20::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_Inputs_d__20::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_Inputs_d__20::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_Inputs_d__20::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_Inputs_d__20::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_Inputs_d__20::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_Inputs_d__20::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_Inputs_d__20::Node__get_Inputs_d__20()   {
}
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicPorts_d__22::*)(int32_t)>(&::XNode::Node__get_DynamicPorts_d__22::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98e700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb98e71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98e9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98ea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98ea90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98eac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98ead0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicPorts_d__22.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_DynamicPorts_d__22::*)()>(&::XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98eb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_DynamicPorts_d__22::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_DynamicPorts_d__22::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_DynamicPorts_d__22::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_DynamicPorts_d__22::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& XNode::Node__get_DynamicPorts_d__22::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_DynamicPorts_d__22::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_DynamicPorts_d__22::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_DynamicPorts_d__22::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_DynamicPorts_d__22::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicPorts_d__22::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_DynamicPorts_d__22::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicPorts_d__22::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_DynamicPorts_d__22::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicPorts_d__22*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_DynamicPorts_d__22* XNode::Node__get_DynamicPorts_d__22::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_DynamicPorts_d__22*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicPorts_d__22::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_DynamicPorts_d__22::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_DynamicPorts_d__22::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_DynamicPorts_d__22::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicPorts_d__22::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicPorts_d__22::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_DynamicPorts_d__22::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_DynamicPorts_d__22::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_DynamicPorts_d__22::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_DynamicPorts_d__22::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_DynamicPorts_d__22::Node__get_DynamicPorts_d__22()   {
}
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicOutputs_d__24::*)(int32_t)>(&::XNode::Node__get_DynamicOutputs_d__24::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98c07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98e268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb98e284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98e560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98e610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicOutputs_d__24.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_DynamicOutputs_d__24::*)()>(&::XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98e6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_DynamicOutputs_d__24::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_DynamicOutputs_d__24::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_DynamicOutputs_d__24::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_DynamicOutputs_d__24::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicOutputs_d__24::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_DynamicOutputs_d__24::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicOutputs_d__24::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_DynamicOutputs_d__24::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicOutputs_d__24*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_DynamicOutputs_d__24* XNode::Node__get_DynamicOutputs_d__24::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_DynamicOutputs_d__24*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicOutputs_d__24::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_DynamicOutputs_d__24::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_DynamicOutputs_d__24::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_DynamicOutputs_d__24::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicOutputs_d__24::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicOutputs_d__24::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_DynamicOutputs_d__24::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_DynamicOutputs_d__24::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_DynamicOutputs_d__24::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_DynamicOutputs_d__24::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_DynamicOutputs_d__24::Node__get_DynamicOutputs_d__24()   {
}
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicInputs_d__26::*)(int32_t)>(&::XNode::Node__get_DynamicInputs_d__26::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb98c0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb98ddd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb98ddf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb98e0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::XNode::NodePort* (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98e180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98e1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb98e1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node__get_DynamicInputs_d__26.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::XNode::Node__get_DynamicInputs_d__26::*)()>(&::XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb98e264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void XNode::Node__get_DynamicInputs_d__26::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::XNode::NodePort*& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::XNode::NodePort* const& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void XNode::Node__get_DynamicInputs_d__26::__cordl_internal_set___2__current(::XNode::NodePort*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void XNode::Node__get_DynamicInputs_d__26::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::UnityW<::XNode::Node>& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::XNode::Node> const& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void XNode::Node__get_DynamicInputs_d__26::__cordl_internal_set___4__this(::UnityW<::XNode::Node>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* const& XNode::Node__get_DynamicInputs_d__26::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void XNode::Node__get_DynamicInputs_d__26::__cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void XNode::Node__get_DynamicInputs_d__26::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void XNode::Node__get_DynamicInputs_d__26::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool XNode::Node__get_DynamicInputs_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicInputs_d__26::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodePort* XNode::Node__get_DynamicInputs_d__26::System_Collections_Generic_IEnumerator_XNode_NodePort__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.Generic.IEnumerator<XNode.NodePort>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::XNode::NodePort*>(this, ___internal_method);
}
inline void XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicInputs_d__26::System_Collections_Generic_IEnumerable_XNode_NodePort__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.Generic.IEnumerable<XNode.NodePort>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* XNode::Node__get_DynamicInputs_d__26::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node__get_DynamicInputs_d__26*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::XNode::Node__get_DynamicInputs_d__26* XNode::Node__get_DynamicInputs_d__26::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node__get_DynamicInputs_d__26*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicInputs_d__26::operator ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>* XNode::Node__get_DynamicInputs_d__26::i___System__Collections__Generic__IEnumerable_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  XNode::Node__get_DynamicInputs_d__26::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* XNode::Node__get_DynamicInputs_d__26::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr  XNode::Node__get_DynamicInputs_d__26::operator ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>* XNode::Node__get_DynamicInputs_d__26::i___System__Collections__Generic__IEnumerator_1___XNode__NodePort__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::XNode::NodePort*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  XNode::Node__get_DynamicInputs_d__26::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* XNode::Node__get_DynamicInputs_d__26::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  XNode::Node__get_DynamicInputs_d__26::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* XNode::Node__get_DynamicInputs_d__26::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node__get_DynamicInputs_d__26::Node__get_DynamicInputs_d__26()   {
}
//  Writing Method size for method: ::XNode::Node_NodePortDictionary.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodePortDictionary::*)()>(&::XNode::Node_NodePortDictionary::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xb98d800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_NodePortDictionary.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodePortDictionary::*)()>(&::XNode::Node_NodePortDictionary::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0xb98db48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_NodePortDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodePortDictionary::*)()>(&::XNode::Node_NodePortDictionary::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb98d48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& XNode::Node_NodePortDictionary::__cordl_internal_get_keys()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& XNode::Node_NodePortDictionary::__cordl_internal_get_keys() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___keys;
}
constexpr void XNode::Node_NodePortDictionary::__cordl_internal_set_keys(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___keys = value;
}
constexpr ::System::Collections::Generic::List_1<::XNode::NodePort*>*& XNode::Node_NodePortDictionary::__cordl_internal_get_values()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr ::System::Collections::Generic::List_1<::XNode::NodePort*>* const& XNode::Node_NodePortDictionary::__cordl_internal_get_values() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___values;
}
constexpr void XNode::Node_NodePortDictionary::__cordl_internal_set_values(::System::Collections::Generic::List_1<::XNode::NodePort*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___values = value;
}
inline void XNode::Node_NodePortDictionary::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node_NodePortDictionary::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::Node_NodePortDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodePortDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::Node_NodePortDictionary* XNode::Node_NodePortDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_NodePortDictionary*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  XNode::Node_NodePortDictionary::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* XNode::Node_NodePortDictionary::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::XNode::Node_NodePortDictionary::Node_NodePortDictionary()   {
}
//  Writing Method size for method: ::XNode::Node_NodeWidthAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodeWidthAttribute::*)(int32_t)>(&::XNode::Node_NodeWidthAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb98d7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeWidthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node_NodeWidthAttribute::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& XNode::Node_NodeWidthAttribute::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void XNode::Node_NodeWidthAttribute::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
inline void XNode::Node_NodeWidthAttribute::_ctor(int32_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeWidthAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, width);
}
inline ::XNode::Node_NodeWidthAttribute* XNode::Node_NodeWidthAttribute::New_ctor(int32_t  width)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_NodeWidthAttribute*>(width));
}
// Ctor Parameters []
constexpr ::XNode::Node_NodeWidthAttribute::Node_NodeWidthAttribute()   {
}
//  Writing Method size for method: ::XNode::Node_NodeTintAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodeTintAttribute::*)(float_t, float_t, float_t)>(&::XNode::Node_NodeTintAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb98d700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_NodeTintAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodeTintAttribute::*)(::StringW)>(&::XNode::Node_NodeTintAttribute::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb98d744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_NodeTintAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_NodeTintAttribute::*)(uint8_t, uint8_t, uint8_t)>(&::XNode::Node_NodeTintAttribute::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb98d774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& XNode::Node_NodeTintAttribute::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Color const& XNode::Node_NodeTintAttribute::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void XNode::Node_NodeTintAttribute::__cordl_internal_set_color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
inline void XNode::Node_NodeTintAttribute::_ctor(float_t  r, float_t  g, float_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, g, b);
}
inline void XNode::Node_NodeTintAttribute::_ctor(::StringW  hex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hex);
}
inline void XNode::Node_NodeTintAttribute::_ctor(uint8_t  r, uint8_t  g, uint8_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_NodeTintAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r, g, b);
}
inline ::XNode::Node_NodeTintAttribute* XNode::Node_NodeTintAttribute::New_ctor(float_t  r, float_t  g, float_t  b)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_NodeTintAttribute*>(r, g, b));
}
inline ::XNode::Node_NodeTintAttribute* XNode::Node_NodeTintAttribute::New_ctor(::StringW  hex)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_NodeTintAttribute*>(hex));
}
inline ::XNode::Node_NodeTintAttribute* XNode::Node_NodeTintAttribute::New_ctor(uint8_t  r, uint8_t  g, uint8_t  b)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_NodeTintAttribute*>(r, g, b));
}
// Ctor Parameters []
constexpr ::XNode::Node_NodeTintAttribute::Node_NodeTintAttribute()   {
}
//  Writing Method size for method: ::XNode::Node_DisallowMultipleNodesAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_DisallowMultipleNodesAttribute::*)(int32_t)>(&::XNode::Node_DisallowMultipleNodesAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb98d6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_DisallowMultipleNodesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& XNode::Node_DisallowMultipleNodesAttribute::__cordl_internal_get_max()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr int32_t const& XNode::Node_DisallowMultipleNodesAttribute::__cordl_internal_get_max() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___max;
}
constexpr void XNode::Node_DisallowMultipleNodesAttribute::__cordl_internal_set_max(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___max = value;
}
inline void XNode::Node_DisallowMultipleNodesAttribute::_ctor(int32_t  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_DisallowMultipleNodesAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, max);
}
inline ::XNode::Node_DisallowMultipleNodesAttribute* XNode::Node_DisallowMultipleNodesAttribute::New_ctor(int32_t  max)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_DisallowMultipleNodesAttribute*>(max));
}
// Ctor Parameters []
constexpr ::XNode::Node_DisallowMultipleNodesAttribute::Node_DisallowMultipleNodesAttribute()   {
}
//  Writing Method size for method: ::XNode::Node_CreateNodeMenuAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_CreateNodeMenuAttribute::*)(::StringW)>(&::XNode::Node_CreateNodeMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb98d664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_CreateNodeMenuAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_CreateNodeMenuAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_CreateNodeMenuAttribute::*)(::StringW, int32_t)>(&::XNode::Node_CreateNodeMenuAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb98d69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_CreateNodeMenuAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& XNode::Node_CreateNodeMenuAttribute::__cordl_internal_get_menuName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuName;
}
constexpr ::StringW const& XNode::Node_CreateNodeMenuAttribute::__cordl_internal_get_menuName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___menuName;
}
constexpr void XNode::Node_CreateNodeMenuAttribute::__cordl_internal_set_menuName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___menuName = value;
}
constexpr int32_t& XNode::Node_CreateNodeMenuAttribute::__cordl_internal_get_order()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr int32_t const& XNode::Node_CreateNodeMenuAttribute::__cordl_internal_get_order() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___order;
}
constexpr void XNode::Node_CreateNodeMenuAttribute::__cordl_internal_set_order(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___order = value;
}
inline void XNode::Node_CreateNodeMenuAttribute::_ctor(::StringW  menuName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_CreateNodeMenuAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuName);
}
inline void XNode::Node_CreateNodeMenuAttribute::_ctor(::StringW  menuName, int32_t  order)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_CreateNodeMenuAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, menuName, order);
}
inline ::XNode::Node_CreateNodeMenuAttribute* XNode::Node_CreateNodeMenuAttribute::New_ctor(::StringW  menuName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_CreateNodeMenuAttribute*>(menuName));
}
inline ::XNode::Node_CreateNodeMenuAttribute* XNode::Node_CreateNodeMenuAttribute::New_ctor(::StringW  menuName, int32_t  order)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_CreateNodeMenuAttribute*>(menuName, order));
}
// Ctor Parameters []
constexpr ::XNode::Node_CreateNodeMenuAttribute::Node_CreateNodeMenuAttribute()   {
}
//  Writing Method size for method: ::XNode::Node_OutputAttribute.get_instancePortList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node_OutputAttribute::*)()>(&::XNode::Node_OutputAttribute::get_instancePortList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98d5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {"get_instancePortList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_OutputAttribute.set_instancePortList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_OutputAttribute::*)(bool)>(&::XNode::Node_OutputAttribute::set_instancePortList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {"set_instancePortList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_OutputAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_OutputAttribute::*)(::GlobalNamespace::Node_ShowBackingValue, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, bool)>(&::XNode::Node_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb98d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_OutputAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_OutputAttribute::*)(::GlobalNamespace::Node_ShowBackingValue, ::GlobalNamespace::Node_ConnectionType, bool)>(&::XNode::Node_OutputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb98d624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Node_ShowBackingValue& XNode::Node_OutputAttribute::__cordl_internal_get_backingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingValue;
}
constexpr ::GlobalNamespace::Node_ShowBackingValue const& XNode::Node_OutputAttribute::__cordl_internal_get_backingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingValue;
}
constexpr void XNode::Node_OutputAttribute::__cordl_internal_set_backingValue(::GlobalNamespace::Node_ShowBackingValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backingValue = value;
}
constexpr ::GlobalNamespace::Node_ConnectionType& XNode::Node_OutputAttribute::__cordl_internal_get_connectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr ::GlobalNamespace::Node_ConnectionType const& XNode::Node_OutputAttribute::__cordl_internal_get_connectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr void XNode::Node_OutputAttribute::__cordl_internal_set_connectionType(::GlobalNamespace::Node_ConnectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionType = value;
}
constexpr bool& XNode::Node_OutputAttribute::__cordl_internal_get_dynamicPortList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicPortList;
}
constexpr bool const& XNode::Node_OutputAttribute::__cordl_internal_get_dynamicPortList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicPortList;
}
constexpr void XNode::Node_OutputAttribute::__cordl_internal_set_dynamicPortList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicPortList = value;
}
constexpr ::GlobalNamespace::Node_TypeConstraint& XNode::Node_OutputAttribute::__cordl_internal_get_typeConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeConstraint;
}
constexpr ::GlobalNamespace::Node_TypeConstraint const& XNode::Node_OutputAttribute::__cordl_internal_get_typeConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeConstraint;
}
constexpr void XNode::Node_OutputAttribute::__cordl_internal_set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeConstraint = value;
}
inline bool XNode::Node_OutputAttribute::get_instancePortList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {"get_instancePortList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node_OutputAttribute::set_instancePortList(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {"set_instancePortList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void XNode::Node_OutputAttribute::_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backingValue, connectionType, typeConstraint, dynamicPortList);
}
inline void XNode::Node_OutputAttribute::_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, bool  dynamicPortList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_OutputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backingValue, connectionType, dynamicPortList);
}
inline ::XNode::Node_OutputAttribute* XNode::Node_OutputAttribute::New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_OutputAttribute*>(backingValue, connectionType, typeConstraint, dynamicPortList));
}
/// @brief [Obsolete("Use constructor with TypeConstraint")]
inline ::XNode::Node_OutputAttribute* XNode::Node_OutputAttribute::New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, bool  dynamicPortList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_OutputAttribute*>(backingValue, connectionType, dynamicPortList));
}
// Ctor Parameters []
constexpr ::XNode::Node_OutputAttribute::Node_OutputAttribute()   {
}
//  Writing Method size for method: ::XNode::Node_InputAttribute.get_instancePortList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::Node_InputAttribute::*)()>(&::XNode::Node_InputAttribute::get_instancePortList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98d57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {"get_instancePortList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_InputAttribute.set_instancePortList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_InputAttribute::*)(bool)>(&::XNode::Node_InputAttribute::set_instancePortList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb98d584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {"set_instancePortList", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::Node_InputAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::Node_InputAttribute::*)(::GlobalNamespace::Node_ShowBackingValue, ::GlobalNamespace::Node_ConnectionType, ::GlobalNamespace::Node_TypeConstraint, bool)>(&::XNode::Node_InputAttribute::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb98d58c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Node_ShowBackingValue& XNode::Node_InputAttribute::__cordl_internal_get_backingValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingValue;
}
constexpr ::GlobalNamespace::Node_ShowBackingValue const& XNode::Node_InputAttribute::__cordl_internal_get_backingValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backingValue;
}
constexpr void XNode::Node_InputAttribute::__cordl_internal_set_backingValue(::GlobalNamespace::Node_ShowBackingValue  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backingValue = value;
}
constexpr ::GlobalNamespace::Node_ConnectionType& XNode::Node_InputAttribute::__cordl_internal_get_connectionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr ::GlobalNamespace::Node_ConnectionType const& XNode::Node_InputAttribute::__cordl_internal_get_connectionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectionType;
}
constexpr void XNode::Node_InputAttribute::__cordl_internal_set_connectionType(::GlobalNamespace::Node_ConnectionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectionType = value;
}
constexpr bool& XNode::Node_InputAttribute::__cordl_internal_get_dynamicPortList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicPortList;
}
constexpr bool const& XNode::Node_InputAttribute::__cordl_internal_get_dynamicPortList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicPortList;
}
constexpr void XNode::Node_InputAttribute::__cordl_internal_set_dynamicPortList(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicPortList = value;
}
constexpr ::GlobalNamespace::Node_TypeConstraint& XNode::Node_InputAttribute::__cordl_internal_get_typeConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeConstraint;
}
constexpr ::GlobalNamespace::Node_TypeConstraint const& XNode::Node_InputAttribute::__cordl_internal_get_typeConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___typeConstraint;
}
constexpr void XNode::Node_InputAttribute::__cordl_internal_set_typeConstraint(::GlobalNamespace::Node_TypeConstraint  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___typeConstraint = value;
}
inline bool XNode::Node_InputAttribute::get_instancePortList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {"get_instancePortList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void XNode::Node_InputAttribute::set_instancePortList(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {"set_instancePortList", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void XNode::Node_InputAttribute::_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::Node_InputAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Node_ShowBackingValue>(), ::i2c::type_of<::GlobalNamespace::Node_ConnectionType>(), ::i2c::type_of<::GlobalNamespace::Node_TypeConstraint>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, backingValue, connectionType, typeConstraint, dynamicPortList);
}
inline ::XNode::Node_InputAttribute* XNode::Node_InputAttribute::New_ctor(::GlobalNamespace::Node_ShowBackingValue  backingValue, ::GlobalNamespace::Node_ConnectionType  connectionType, ::GlobalNamespace::Node_TypeConstraint  typeConstraint, bool  dynamicPortList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::Node_InputAttribute*>(backingValue, connectionType, typeConstraint, dynamicPortList));
}
// Ctor Parameters []
constexpr ::XNode::Node_InputAttribute::Node_InputAttribute()   {
}

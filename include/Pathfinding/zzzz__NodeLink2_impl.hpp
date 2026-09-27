#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink2.hpp"
#include "Pathfinding/zzzz__GraphModifier_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NodeLink2_def.hpp"
#include "Pathfinding/Serialization/zzzz__GraphSerializationContext_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__PointNode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::NodeLink2.GetNodeLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Pathfinding::NodeLink2> (*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink2::GetNodeLink)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e5e5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"GetNodeLink", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_StartTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_StartTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_StartTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_EndTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_startNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PointNode* (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_startNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_startNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.set_startNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)(::Pathfinding::PointNode*)>(&::Pathfinding::NodeLink2::set_startNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"set_startNode", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_endNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PointNode* (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_endNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_endNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.set_endNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)(::Pathfinding::PointNode*)>(&::Pathfinding::NodeLink2::set_endNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"set_endNode", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_StartNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_StartNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_StartNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.get_EndNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::get_EndNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5e680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_EndNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnPostScan)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e5e688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink2*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.InternalOnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::InternalOnPostScan)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5e5e68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"InternalOnPostScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnGraphsPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnGraphsPostUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e5f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink2*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnEnable)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5e5f46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink2*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnDisable)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e5f624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink2*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.RemoveConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink2::RemoveConnections)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e5f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"RemoveConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.ContextApplyForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::ContextApplyForce)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e5f7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"ContextApplyForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)(bool)>(&::Pathfinding::NodeLink2::Apply)> {
  constexpr static std::size_t size = 0x844;
  constexpr static std::size_t addrs = 0x5e5eb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink2*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e5fdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)(bool)>(&::Pathfinding::NodeLink2::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x5e5f838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.SerializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NodeLink2::SerializeReferences)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5e5fdd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"SerializeReferences", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2.DeserializeReferences
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Serialization::GraphSerializationContext*)>(&::Pathfinding::NodeLink2::DeserializeReferences)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x5e60050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"DeserializeReferences", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink2._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink2::*)()>(&::Pathfinding::NodeLink2::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e604f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::NodeLink2::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::NodeLink2::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr float_t& Pathfinding::NodeLink2::__cordl_internal_get_costFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costFactor;
}
constexpr float_t const& Pathfinding::NodeLink2::__cordl_internal_get_costFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costFactor;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_costFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costFactor = value;
}
constexpr bool& Pathfinding::NodeLink2::__cordl_internal_get_oneWay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneWay;
}
constexpr bool const& Pathfinding::NodeLink2::__cordl_internal_get_oneWay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneWay;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_oneWay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneWay = value;
}
constexpr ::Pathfinding::PointNode*& Pathfinding::NodeLink2::__cordl_internal_get__startNode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNode_k__BackingField;
}
constexpr ::Pathfinding::PointNode* const& Pathfinding::NodeLink2::__cordl_internal_get__startNode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startNode_k__BackingField;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set__startNode_k__BackingField(::Pathfinding::PointNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startNode_k__BackingField = value;
}
constexpr ::Pathfinding::PointNode*& Pathfinding::NodeLink2::__cordl_internal_get__endNode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endNode_k__BackingField;
}
constexpr ::Pathfinding::PointNode* const& Pathfinding::NodeLink2::__cordl_internal_get__endNode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endNode_k__BackingField;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set__endNode_k__BackingField(::Pathfinding::PointNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endNode_k__BackingField = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::NodeLink2::__cordl_internal_get_connectedNode1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode1;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::NodeLink2::__cordl_internal_get_connectedNode1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode1;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_connectedNode1(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedNode1 = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::NodeLink2::__cordl_internal_get_connectedNode2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode2;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::NodeLink2::__cordl_internal_get_connectedNode2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode2;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_connectedNode2(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedNode2 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink2::__cordl_internal_get_clamped1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped1;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink2::__cordl_internal_get_clamped1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped1;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_clamped1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clamped1 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink2::__cordl_internal_get_clamped2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped2;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink2::__cordl_internal_get_clamped2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped2;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_clamped2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clamped2 = value;
}
constexpr bool& Pathfinding::NodeLink2::__cordl_internal_get_postScanCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postScanCalled;
}
constexpr bool const& Pathfinding::NodeLink2::__cordl_internal_get_postScanCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postScanCalled;
}
constexpr void Pathfinding::NodeLink2::__cordl_internal_set_postScanCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postScanCalled = value;
}
inline void Pathfinding::NodeLink2::setStaticF_reference(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*, "reference", ::Pathfinding::NodeLink2*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>* Pathfinding::NodeLink2::getStaticF_reference()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink2>>*, "reference", ::Pathfinding::NodeLink2*>();
}
inline void Pathfinding::NodeLink2::setStaticF_GizmosColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmosColor", ::Pathfinding::NodeLink2*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NodeLink2::getStaticF_GizmosColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmosColor", ::Pathfinding::NodeLink2*>();
}
inline void Pathfinding::NodeLink2::setStaticF_GizmosColorSelected(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmosColorSelected", ::Pathfinding::NodeLink2*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NodeLink2::getStaticF_GizmosColorSelected()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmosColorSelected", ::Pathfinding::NodeLink2*>();
}
inline ::UnityW<::Pathfinding::NodeLink2> Pathfinding::NodeLink2::GetNodeLink(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"GetNodeLink", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Pathfinding::NodeLink2>>(nullptr, ___internal_method, node);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::NodeLink2::get_StartTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_StartTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::NodeLink2::get_EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Pathfinding::PointNode* Pathfinding::NodeLink2::get_startNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_startNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PointNode*>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::set_startNode(::Pathfinding::PointNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"set_startNode", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::PointNode* Pathfinding::NodeLink2::get_endNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_endNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PointNode*>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::set_endNode(::Pathfinding::PointNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"set_endNode", {}, {::i2c::type_of<::Pathfinding::PointNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink2::get_StartNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_StartNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink2::get_EndNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"get_EndNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnPostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink2*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::InternalOnPostScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"InternalOnPostScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnGraphsPostUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink2*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink2*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink2*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::RemoveConnections(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"RemoveConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::NodeLink2::ContextApplyForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"ContextApplyForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::Apply(bool  forceNewCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceNewCheck);
}
inline void Pathfinding::NodeLink2::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink2*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink2::OnDrawGizmos(bool  selected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void Pathfinding::NodeLink2::SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"SerializeReferences", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx);
}
inline void Pathfinding::NodeLink2::DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {"DeserializeReferences", {}, {::i2c::type_of<::Pathfinding::Serialization::GraphSerializationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ctx);
}
inline void Pathfinding::NodeLink2::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink2*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::NodeLink2* Pathfinding::NodeLink2::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NodeLink2*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NodeLink2::NodeLink2()   {
}

#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink3.hpp"
#include "Pathfinding/zzzz__GraphModifier_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NodeLink3_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__MeshNode_def.hpp"
#include "Pathfinding/zzzz__NodeLink3Node_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Pathfinding::NodeLink3.GetNodeLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Pathfinding::NodeLink3> (*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink3::GetNodeLink)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5e6097c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"GetNodeLink", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.get_StartTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::get_StartTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e60a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_StartTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.get_EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::get_EndTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e60a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.get_StartNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::get_StartNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e60a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_StartNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.get_EndNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::get_EndNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e60a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_EndNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnPostScan)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e60a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.InternalOnPostScan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::InternalOnPostScan)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x5e60b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"InternalOnPostScan", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnGraphsPostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnGraphsPostUpdate)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5e62114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnEnable)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e62210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnDisable)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e62354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.RemoveConnections
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink3::RemoveConnections)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e624c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"RemoveConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.ContextApplyForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::ContextApplyForce)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e624e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"ContextApplyForce", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)(bool)>(&::Pathfinding::NodeLink3::Apply)> {
  constexpr static std::size_t size = 0x1294;
  constexpr static std::size_t addrs = 0x5e60e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e62558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e62af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)(bool)>(&::Pathfinding::NodeLink3::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x5e62560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3::*)()>(&::Pathfinding::NodeLink3::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e62afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3._OnPostScan_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NodeLink3::*)(bool)>(&::Pathfinding::NodeLink3::_OnPostScan_b__20_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e62c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"<OnPostScan>b__20_0", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::NodeLink3::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::NodeLink3::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_end(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr float_t& Pathfinding::NodeLink3::__cordl_internal_get_costFactor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costFactor;
}
constexpr float_t const& Pathfinding::NodeLink3::__cordl_internal_get_costFactor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___costFactor;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_costFactor(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___costFactor = value;
}
constexpr bool& Pathfinding::NodeLink3::__cordl_internal_get_oneWay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneWay;
}
constexpr bool const& Pathfinding::NodeLink3::__cordl_internal_get_oneWay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___oneWay;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_oneWay(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___oneWay = value;
}
constexpr ::Pathfinding::NodeLink3Node*& Pathfinding::NodeLink3::__cordl_internal_get_startNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr ::Pathfinding::NodeLink3Node* const& Pathfinding::NodeLink3::__cordl_internal_get_startNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNode;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_startNode(::Pathfinding::NodeLink3Node*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startNode = value;
}
constexpr ::Pathfinding::NodeLink3Node*& Pathfinding::NodeLink3::__cordl_internal_get_endNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNode;
}
constexpr ::Pathfinding::NodeLink3Node* const& Pathfinding::NodeLink3::__cordl_internal_get_endNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endNode;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_endNode(::Pathfinding::NodeLink3Node*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endNode = value;
}
constexpr ::Pathfinding::MeshNode*& Pathfinding::NodeLink3::__cordl_internal_get_connectedNode1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode1;
}
constexpr ::Pathfinding::MeshNode* const& Pathfinding::NodeLink3::__cordl_internal_get_connectedNode1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode1;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_connectedNode1(::Pathfinding::MeshNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedNode1 = value;
}
constexpr ::Pathfinding::MeshNode*& Pathfinding::NodeLink3::__cordl_internal_get_connectedNode2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode2;
}
constexpr ::Pathfinding::MeshNode* const& Pathfinding::NodeLink3::__cordl_internal_get_connectedNode2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNode2;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_connectedNode2(::Pathfinding::MeshNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedNode2 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink3::__cordl_internal_get_clamped1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped1;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink3::__cordl_internal_get_clamped1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped1;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_clamped1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clamped1 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink3::__cordl_internal_get_clamped2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped2;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink3::__cordl_internal_get_clamped2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clamped2;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_clamped2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clamped2 = value;
}
constexpr bool& Pathfinding::NodeLink3::__cordl_internal_get_postScanCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postScanCalled;
}
constexpr bool const& Pathfinding::NodeLink3::__cordl_internal_get_postScanCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postScanCalled;
}
constexpr void Pathfinding::NodeLink3::__cordl_internal_set_postScanCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postScanCalled = value;
}
inline void Pathfinding::NodeLink3::setStaticF_reference(::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*, "reference", ::Pathfinding::NodeLink3*>(std::forward<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>* Pathfinding::NodeLink3::getStaticF_reference()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Pathfinding::GraphNode*,::UnityW<::Pathfinding::NodeLink3>>*, "reference", ::Pathfinding::NodeLink3*>();
}
inline void Pathfinding::NodeLink3::setStaticF_GizmosColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmosColor", ::Pathfinding::NodeLink3*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NodeLink3::getStaticF_GizmosColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmosColor", ::Pathfinding::NodeLink3*>();
}
inline void Pathfinding::NodeLink3::setStaticF_GizmosColorSelected(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmosColorSelected", ::Pathfinding::NodeLink3*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::NodeLink3::getStaticF_GizmosColorSelected()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmosColorSelected", ::Pathfinding::NodeLink3*>();
}
inline ::UnityW<::Pathfinding::NodeLink3> Pathfinding::NodeLink3::GetNodeLink(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"GetNodeLink", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Pathfinding::NodeLink3>>(nullptr, ___internal_method, node);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::NodeLink3::get_StartTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_StartTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::NodeLink3::get_EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink3::get_StartNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_StartNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink3::get_EndNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"get_EndNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnPostScan()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::InternalOnPostScan()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"InternalOnPostScan", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnGraphsPostUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::RemoveConnections(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"RemoveConnections", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void Pathfinding::NodeLink3::ContextApplyForce()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"ContextApplyForce", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::Apply(bool  forceNewCheck)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"Apply", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forceNewCheck);
}
inline void Pathfinding::NodeLink3::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::NodeLink3::OnDrawGizmos(bool  selected)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"OnDrawGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selected);
}
inline void Pathfinding::NodeLink3::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::NodeLink3::_OnPostScan_b__20_0(bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3*>(),
                        {"<OnPostScan>b__20_0", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, force);
}
inline ::Pathfinding::NodeLink3* Pathfinding::NodeLink3::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NodeLink3*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::NodeLink3::NodeLink3()   {
}

#pragma once
// IWYU pragma private; include "Pathfinding/NodeLink3Node.hpp"
#include "Pathfinding/zzzz__PointNode_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__NodeLink3Node_def.hpp"
#include "GlobalNamespace/zzzz__AstarPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__NodeLink3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::NodeLink3Node._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::NodeLink3Node::*)(::GlobalNamespace::AstarPath*)>(&::Pathfinding::NodeLink3Node::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e60610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3Node.GetPortal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, bool)>(&::Pathfinding::NodeLink3Node::GetPortal)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e60618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                    {::i2c::class_of<::Pathfinding::NodeLink3Node*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3Node.GetOther
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink3Node::GetOther)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e607e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {"GetOther", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::NodeLink3Node.GetOtherInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::GraphNode* (::Pathfinding::NodeLink3Node::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::NodeLink3Node::GetOtherInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e60940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {"GetOtherInternal", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Pathfinding::NodeLink3>& Pathfinding::NodeLink3Node::__cordl_internal_get_link()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr ::UnityW<::Pathfinding::NodeLink3> const& Pathfinding::NodeLink3Node::__cordl_internal_get_link() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr void Pathfinding::NodeLink3Node::__cordl_internal_set_link(::UnityW<::Pathfinding::NodeLink3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___link = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink3Node::__cordl_internal_get_portalA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalA;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink3Node::__cordl_internal_get_portalA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalA;
}
constexpr void Pathfinding::NodeLink3Node::__cordl_internal_set_portalA(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalA = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::NodeLink3Node::__cordl_internal_get_portalB()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalB;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::NodeLink3Node::__cordl_internal_get_portalB() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___portalB;
}
constexpr void Pathfinding::NodeLink3Node::__cordl_internal_set_portalB(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___portalB = value;
}
inline void Pathfinding::NodeLink3Node::_ctor(::GlobalNamespace::AstarPath*  active)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::AstarPath*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, active);
}
inline bool Pathfinding::NodeLink3Node::GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::NodeLink3Node*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, left, right, backwards);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink3Node::GetOther(::Pathfinding::GraphNode*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {"GetOther", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, a);
}
inline ::Pathfinding::GraphNode* Pathfinding::NodeLink3Node::GetOtherInternal(::Pathfinding::GraphNode*  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::NodeLink3Node*>(),
                        {"GetOtherInternal", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::GraphNode*>(this, ___internal_method, a);
}
inline ::Pathfinding::NodeLink3Node* Pathfinding::NodeLink3Node::New_ctor(::GlobalNamespace::AstarPath*  active)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::NodeLink3Node*>(active));
}
// Ctor Parameters []
constexpr ::Pathfinding::NodeLink3Node::NodeLink3Node()   {
}

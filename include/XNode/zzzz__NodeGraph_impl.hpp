#pragma once
// IWYU pragma private; include "XNode/NodeGraph.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "XNode/zzzz__Node_impl.hpp"
#include "XNode/zzzz__NodeGraph_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "XNode/zzzz__NodeGraph_def.hpp"
#include "XNode/zzzz__Node_def.hpp"
//  Writing Method size for method: ::XNode::NodeGraph.AddNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::XNode::Node> (::XNode::NodeGraph::*)(::System::Type*)>(&::XNode::NodeGraph::AddNode)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb991c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph.CopyNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::XNode::Node> (::XNode::NodeGraph::*)(::XNode::Node*)>(&::XNode::NodeGraph::CopyNode)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb991db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph.RemoveNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph::*)(::XNode::Node*)>(&::XNode::NodeGraph::RemoveNode)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb991f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph::*)()>(&::XNode::NodeGraph::Clear)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb991fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::XNode::NodeGraph> (::XNode::NodeGraph::*)()>(&::XNode::NodeGraph::Copy)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0xb992144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph::*)()>(&::XNode::NodeGraph::OnDestroy)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb992800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {::i2c::class_of<::XNode::NodeGraph*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph::*)()>(&::XNode::NodeGraph::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb99280c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*& XNode::NodeGraph::__cordl_internal_get_nodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>* const& XNode::NodeGraph::__cordl_internal_get_nodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodes;
}
constexpr void XNode::NodeGraph::__cordl_internal_set_nodes(::System::Collections::Generic::List_1<::UnityW<::XNode::Node>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodes = value;
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::XNode::Node*>)
inline T XNode::NodeGraph::AddNode()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::XNode::NodeGraph*>(),
                    {"AddNode", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
inline ::UnityW<::XNode::Node> XNode::NodeGraph::AddNode(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::XNode::Node>>(this, ___internal_method, type);
}
inline ::UnityW<::XNode::Node> XNode::NodeGraph::CopyNode(::XNode::Node*  original)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::XNode::Node>>(this, ___internal_method, original);
}
inline void XNode::NodeGraph::RemoveNode(::XNode::Node*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void XNode::NodeGraph::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::XNode::NodeGraph> XNode::NodeGraph::Copy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::XNode::NodeGraph>>(this, ___internal_method);
}
inline void XNode::NodeGraph::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::XNode::NodeGraph*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void XNode::NodeGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::NodeGraph* XNode::NodeGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeGraph*>());
}
// Ctor Parameters []
constexpr ::XNode::NodeGraph::NodeGraph()   {
}
//  Writing Method size for method: ::XNode::NodeGraph_RequireNodeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph_RequireNodeAttribute::*)(::System::Type*)>(&::XNode::NodeGraph_RequireNodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb992894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph_RequireNodeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph_RequireNodeAttribute::*)(::System::Type*, ::System::Type*)>(&::XNode::NodeGraph_RequireNodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb9928e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph_RequireNodeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::NodeGraph_RequireNodeAttribute::*)(::System::Type*, ::System::Type*, ::System::Type*)>(&::XNode::NodeGraph_RequireNodeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb992938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::XNode::NodeGraph_RequireNodeAttribute.Requires
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::XNode::NodeGraph_RequireNodeAttribute::*)(::System::Type*)>(&::XNode::NodeGraph_RequireNodeAttribute::Requires)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb992998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {"Requires", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type0()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type0;
}
constexpr ::System::Type* const& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type0() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type0;
}
constexpr void XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_set_type0(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type0 = value;
}
constexpr ::System::Type*& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type1;
}
constexpr ::System::Type* const& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type1;
}
constexpr void XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_set_type1(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type1 = value;
}
constexpr ::System::Type*& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type2;
}
constexpr ::System::Type* const& XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_get_type2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type2;
}
constexpr void XNode::NodeGraph_RequireNodeAttribute::__cordl_internal_set_type2(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type2 = value;
}
inline void XNode::NodeGraph_RequireNodeAttribute::_ctor(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline void XNode::NodeGraph_RequireNodeAttribute::_ctor(::System::Type*  type, ::System::Type*  type2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, type2);
}
inline void XNode::NodeGraph_RequireNodeAttribute::_ctor(::System::Type*  type, ::System::Type*  type2, ::System::Type*  type3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, type2, type3);
}
inline bool XNode::NodeGraph_RequireNodeAttribute::Requires(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::NodeGraph_RequireNodeAttribute*>(),
                        {"Requires", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type);
}
inline ::XNode::NodeGraph_RequireNodeAttribute* XNode::NodeGraph_RequireNodeAttribute::New_ctor(::System::Type*  type)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeGraph_RequireNodeAttribute*>(type));
}
inline ::XNode::NodeGraph_RequireNodeAttribute* XNode::NodeGraph_RequireNodeAttribute::New_ctor(::System::Type*  type, ::System::Type*  type2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeGraph_RequireNodeAttribute*>(type, type2));
}
inline ::XNode::NodeGraph_RequireNodeAttribute* XNode::NodeGraph_RequireNodeAttribute::New_ctor(::System::Type*  type, ::System::Type*  type2, ::System::Type*  type3)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::NodeGraph_RequireNodeAttribute*>(type, type2, type3));
}
// Ctor Parameters []
constexpr ::XNode::NodeGraph_RequireNodeAttribute::NodeGraph_RequireNodeAttribute()   {
}

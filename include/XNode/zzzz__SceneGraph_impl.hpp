#pragma once
// IWYU pragma private; include "XNode/SceneGraph.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "XNode/zzzz__SceneGraph_def.hpp"
#include "XNode/zzzz__NodeGraph_def.hpp"
//  Writing Method size for method: ::XNode::SceneGraph._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::XNode::SceneGraph::*)()>(&::XNode::SceneGraph::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb993a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::SceneGraph*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::XNode::NodeGraph>& XNode::SceneGraph::__cordl_internal_get_graph()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr ::UnityW<::XNode::NodeGraph> const& XNode::SceneGraph::__cordl_internal_get_graph() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graph;
}
constexpr void XNode::SceneGraph::__cordl_internal_set_graph(::UnityW<::XNode::NodeGraph>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graph = value;
}
inline void XNode::SceneGraph::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::XNode::SceneGraph*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::XNode::SceneGraph* XNode::SceneGraph::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::XNode::SceneGraph*>());
}
// Ctor Parameters []
constexpr ::XNode::SceneGraph::SceneGraph()   {
}

#pragma once
// IWYU pragma private; include "XNode/NodeInspectorBridge.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "XNode/zzzz__NodeInspectorBridge_def.hpp"
inline void XNode::NodeInspectorBridge::setStaticF_InNodeEditor(bool  value)  {
::cordl_internals::setStaticField<bool, "InNodeEditor", ::XNode::NodeInspectorBridge*>(std::forward<bool>(value));
}
inline bool XNode::NodeInspectorBridge::getStaticF_InNodeEditor()  {
return ::cordl_internals::getStaticField<bool, "InNodeEditor", ::XNode::NodeInspectorBridge*>();
}
// Ctor Parameters []
constexpr ::XNode::NodeInspectorBridge::NodeInspectorBridge()   {
}

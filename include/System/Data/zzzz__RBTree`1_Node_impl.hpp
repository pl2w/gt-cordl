#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_Node.hpp"
#include "System/Data/zzzz__RBTree`1_NodeColor_impl.hpp"
#include "System/Data/zzzz__RBTree`1_Node_def.hpp"
// Ctor Parameters [CppParam { name: "_selfId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_leftId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rightId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_parentId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nextId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_subTreeSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_keyOfNode", ty: "K", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nodeColor", ty: "::GlobalNamespace::RBTree_1_NodeColor<K>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_Node<K>::RBTree_1_Node(int32_t  _selfId, int32_t  _leftId, int32_t  _rightId, int32_t  _parentId, int32_t  _nextId, int32_t  _subTreeSize, K  _keyOfNode, ::GlobalNamespace::RBTree_1_NodeColor<K>  _nodeColor) noexcept  {
this->_selfId = _selfId;
this->_leftId = _leftId;
this->_rightId = _rightId;
this->_parentId = _parentId;
this->_nextId = _nextId;
this->_subTreeSize = _subTreeSize;
this->_keyOfNode = _keyOfNode;
this->_nodeColor = _nodeColor;
}
// Ctor Parameters []
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_Node<K>::RBTree_1_Node()   {
}

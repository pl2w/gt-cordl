#pragma once
// IWYU pragma private; include "System/Data/RBTree`1_NodePath.hpp"
#include "System/Data/zzzz__RBTree`1_NodePath_def.hpp"
template<typename K>
inline void GlobalNamespace::RBTree_1_NodePath<K>::_ctor(int32_t  nodeID, int32_t  mainTreeNodeID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RBTree_1_NodePath<K>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodeID, mainTreeNodeID);
}
// Ctor Parameters [CppParam { name: "_nodeID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_mainTreeNodeID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodePath<K>::RBTree_1_NodePath(int32_t  _nodeID, int32_t  _mainTreeNodeID) noexcept  {
this->_nodeID = _nodeID;
this->_mainTreeNodeID = _mainTreeNodeID;
}
// Ctor Parameters []
template<typename K>
constexpr ::GlobalNamespace::RBTree_1_NodePath<K>::RBTree_1_NodePath()   {
}

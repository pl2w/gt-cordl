#pragma once
// IWYU pragma private; include "GlobalNamespace/SkeletonPathingNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SkeletonPathingNode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SkeletonPathingNode.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonPathingNode::*)()>(&::GlobalNamespace::SkeletonPathingNode::Awake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5d11d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonPathingNode*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SkeletonPathingNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SkeletonPathingNode::*)()>(&::GlobalNamespace::SkeletonPathingNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d11da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonPathingNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_ejectionPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionPoint;
}
constexpr bool const& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_ejectionPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ejectionPoint;
}
constexpr void GlobalNamespace::SkeletonPathingNode::__cordl_internal_set_ejectionPoint(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ejectionPoint = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_connectedNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNodes;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>> const& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_connectedNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___connectedNodes;
}
constexpr void GlobalNamespace::SkeletonPathingNode::__cordl_internal_set_connectedNodes(::ArrayW<::UnityW<::GlobalNamespace::SkeletonPathingNode>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___connectedNodes = value;
}
constexpr float_t& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_distanceToExitNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToExitNode;
}
constexpr float_t const& GlobalNamespace::SkeletonPathingNode::__cordl_internal_get_distanceToExitNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToExitNode;
}
constexpr void GlobalNamespace::SkeletonPathingNode::__cordl_internal_set_distanceToExitNode(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceToExitNode = value;
}
inline void GlobalNamespace::SkeletonPathingNode::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonPathingNode*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SkeletonPathingNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SkeletonPathingNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SkeletonPathingNode* GlobalNamespace::SkeletonPathingNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SkeletonPathingNode*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SkeletonPathingNode::SkeletonPathingNode()   {
}

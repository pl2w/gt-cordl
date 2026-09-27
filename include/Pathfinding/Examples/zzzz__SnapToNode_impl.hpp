#pragma once
// IWYU pragma private; include "Pathfinding/Examples/SnapToNode.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__SnapToNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::SnapToNode.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::SnapToNode::*)()>(&::Pathfinding::Examples::SnapToNode::Update)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x5efb4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::SnapToNode*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::SnapToNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::SnapToNode::*)()>(&::Pathfinding::Examples::SnapToNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5efb684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::SnapToNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Examples::SnapToNode::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::SnapToNode*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::SnapToNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::SnapToNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::SnapToNode* Pathfinding::Examples::SnapToNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::SnapToNode*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::SnapToNode::SnapToNode()   {
}

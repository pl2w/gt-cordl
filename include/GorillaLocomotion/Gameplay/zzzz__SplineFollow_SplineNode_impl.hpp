#pragma once
// IWYU pragma private; include "GorillaLocomotion/Gameplay/SplineFollow_SplineNode.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaLocomotion/Gameplay/zzzz__SplineFollow_SplineNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SplineFollow_SplineNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SplineFollow_SplineNode::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::SplineFollow_SplineNode::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5cf0e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineFollow_SplineNode>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SplineFollow_SplineNode.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SplineFollow_SplineNode (*)(::GlobalNamespace::SplineFollow_SplineNode, ::GlobalNamespace::SplineFollow_SplineNode, float_t)>(&::GlobalNamespace::SplineFollow_SplineNode::Lerp)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cf12ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineFollow_SplineNode>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::SplineFollow_SplineNode>(), ::i2c::type_of<::GlobalNamespace::SplineFollow_SplineNode>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SplineFollow_SplineNode::_ctor(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  tangent, ::UnityEngine::Vector3  up)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineFollow_SplineNode>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, position, tangent, up);
}
inline ::GlobalNamespace::SplineFollow_SplineNode GlobalNamespace::SplineFollow_SplineNode::Lerp(::GlobalNamespace::SplineFollow_SplineNode  a, ::GlobalNamespace::SplineFollow_SplineNode  b, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SplineFollow_SplineNode>(),
                        {"Lerp", {}, {::i2c::type_of<::GlobalNamespace::SplineFollow_SplineNode>(), ::i2c::type_of<::GlobalNamespace::SplineFollow_SplineNode>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SplineFollow_SplineNode>(nullptr, ___internal_method, a, b, t);
}
// Ctor Parameters [CppParam { name: "Position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Up", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SplineFollow_SplineNode::SplineFollow_SplineNode(::UnityEngine::Vector3  Position, ::UnityEngine::Vector3  Tangent, ::UnityEngine::Vector3  Up) noexcept  {
this->Position = Position;
this->Tangent = Tangent;
this->Up = Up;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SplineFollow_SplineNode::SplineFollow_SplineNode()   {
}

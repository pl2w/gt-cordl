#pragma once
// IWYU pragma private; include "GlobalNamespace/HangingClaw_RopeSegment.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__HangingClaw_RopeSegment_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HangingClaw_RopeSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HangingClaw_RopeSegment::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::HangingClaw_RopeSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x589ce68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw_RopeSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HangingClaw_RopeSegment::_ctor(::UnityEngine::Vector3  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HangingClaw_RopeSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, p);
}
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posOld", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::HangingClaw_RopeSegment::HangingClaw_RopeSegment(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  posOld) noexcept  {
this->pos = pos;
this->posOld = posOld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HangingClaw_RopeSegment::HangingClaw_RopeSegment()   {
}

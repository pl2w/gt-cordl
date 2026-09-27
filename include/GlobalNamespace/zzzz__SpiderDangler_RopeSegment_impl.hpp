#pragma once
// IWYU pragma private; include "GlobalNamespace/SpiderDangler_RopeSegment.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SpiderDangler_RopeSegment_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SpiderDangler_RopeSegment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SpiderDangler_RopeSegment::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::SpiderDangler_RopeSegment::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5dfd5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpiderDangler_RopeSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SpiderDangler_RopeSegment::_ctor(::UnityEngine::Vector3  pos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SpiderDangler_RopeSegment>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, pos);
}
// Ctor Parameters [CppParam { name: "pos", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posOld", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SpiderDangler_RopeSegment::SpiderDangler_RopeSegment(::UnityEngine::Vector3  pos, ::UnityEngine::Vector3  posOld) noexcept  {
this->pos = pos;
this->posOld = posOld;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SpiderDangler_RopeSegment::SpiderDangler_RopeSegment()   {
}

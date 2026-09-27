#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor_SurfaceHitCache_HitInfo.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_impl.hpp"
#include "Oculus/Interaction/zzzz__PokeInteractor_SurfaceHitCache_HitInfo_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo::*)(bool, ::Oculus::Interaction::Surfaces::SurfaceHit)>(&::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa459c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::Surfaces::SurfaceHit>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo::_ctor(bool  isValid, ::Oculus::Interaction::Surfaces::SurfaceHit  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo>(),
                        {".ctor", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::Oculus::Interaction::Surfaces::SurfaceHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, isValid, hit);
}
// Ctor Parameters [CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Hit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo::SurfaceHitCache_PokeInteractor_HitInfo(bool  IsValid, ::Oculus::Interaction::Surfaces::SurfaceHit  Hit) noexcept  {
this->IsValid = IsValid;
this->Hit = Hit;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SurfaceHitCache_PokeInteractor_HitInfo::SurfaceHitCache_PokeInteractor_HitInfo()   {
}

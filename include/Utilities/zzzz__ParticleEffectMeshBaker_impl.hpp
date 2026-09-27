#pragma once
// IWYU pragma private; include "Utilities/ParticleEffectMeshBaker.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Utilities/zzzz__ParticleEffectMeshBaker_def.hpp"
//  Writing Method size for method: ::Utilities::ParticleEffectMeshBaker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Utilities::ParticleEffectMeshBaker::*)()>(&::Utilities::ParticleEffectMeshBaker::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b710d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::ParticleEffectMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Utilities::ParticleEffectMeshBaker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Utilities::ParticleEffectMeshBaker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Utilities::ParticleEffectMeshBaker* Utilities::ParticleEffectMeshBaker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Utilities::ParticleEffectMeshBaker*>());
}
// Ctor Parameters []
constexpr ::Utilities::ParticleEffectMeshBaker::ParticleEffectMeshBaker()   {
}

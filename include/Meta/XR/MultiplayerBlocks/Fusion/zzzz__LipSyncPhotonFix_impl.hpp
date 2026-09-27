#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Fusion/LipSyncPhotonFix.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Fusion/zzzz__LipSyncPhotonFix_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix::*)()>(&::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f61034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix* Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Fusion::LipSyncPhotonFix::LipSyncPhotonFix()   {
}

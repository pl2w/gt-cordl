#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/ITeleportationVolumeAnchorFilter.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__ITeleportationVolumeAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter.GetDestinationAnchorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter::GetDestinationAnchorIndex)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter::GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, teleportationVolume);
}

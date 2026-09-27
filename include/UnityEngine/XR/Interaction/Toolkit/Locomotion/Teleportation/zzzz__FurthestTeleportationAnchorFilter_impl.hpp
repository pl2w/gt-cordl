#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/FurthestTeleportationAnchorFilter.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__FurthestTeleportationAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__ITeleportationVolumeAnchorFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationMultiAnchorVolume_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter.GetDestinationAnchorIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::GetDestinationAnchorIndex)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb44d53c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*>(),
                        {"GetDestinationAnchorIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44d658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::GetDestinationAnchorIndex(::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*  teleportationVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*>(),
                        {"GetDestinationAnchorIndex", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationMultiAnchorVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, teleportationVolume);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__Teleportation__ITeleportationVolumeAnchorFilter() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::ITeleportationVolumeAnchorFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::FurthestTeleportationAnchorFilter::FurthestTeleportationAnchorFilter()   {
}

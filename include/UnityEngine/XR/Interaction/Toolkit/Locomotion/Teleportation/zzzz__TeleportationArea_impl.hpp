#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/TeleportationArea.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__BaseTeleportationInteractable_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportationArea_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRSelectInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRRayInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/Teleportation/zzzz__TeleportRequest_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea.GenerateTeleportRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::RaycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::GenerateTeleportRequest)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb44e100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea.IsSelectableBy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSelectableBy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb44e384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea.IsSphereCastRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSphereCastRay)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb44e210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {"IsSphereCastRay", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea.IsSphereCastOverlap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RaycastHit)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSphereCastOverlap)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xb44e334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {"IsSphereCastOverlap", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb44e40c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::GenerateTeleportRequest(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::RaycastHit  raycastHit, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportRequest>  teleportRequest)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, raycastHit, teleportRequest);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSphereCastRay(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>  rayInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {"IsSphereCastRay", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRRayInteractor*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, rayInteractor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::IsSphereCastOverlap(::UnityEngine::RaycastHit  raycastHit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {"IsSphereCastOverlap", {}, {::i2c::type_of<::UnityEngine::RaycastHit>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, raycastHit);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea* UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::Teleportation::TeleportationArea::TeleportationArea()   {
}

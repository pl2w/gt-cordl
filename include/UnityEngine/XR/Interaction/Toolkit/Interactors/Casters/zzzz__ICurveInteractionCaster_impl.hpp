#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/ICurveInteractionCaster.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__ICurveInteractionCaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/Casters/zzzz__IInteractionCaster_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionManager_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster.get_samplePoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::get_samplePoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster.get_lastSamplePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::get_lastSamplePoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster.TryGetColliderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::*)(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::TryGetColliderTargets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 2}
                ));
    return ___internal_method;
  }
};
inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::get_samplePoints()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::get_lastSamplePoint()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::TryGetColliderTargets(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  interactionManager, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders, ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit>*  raycastHits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactionManager, colliders, raycastHits);
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster* UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::ICurveInteractionCaster::i___UnityEngine__XR__Interaction__Toolkit__Interactors__Casters__IInteractionCaster() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::Casters::IInteractionCaster*>(static_cast<void*>(this));
}

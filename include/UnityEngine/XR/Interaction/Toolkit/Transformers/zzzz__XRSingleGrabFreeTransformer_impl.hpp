#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRSingleGrabFreeTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRSingleGrabFreeTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::Process)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb45e1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::by_ref<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::UpdateTarget)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xb45e1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::UpdateTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::by_ref<::UnityEngine::Pose>  targetPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, grabInteractable, targetPose);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRSingleGrabFreeTransformer::XRSingleGrabFreeTransformer()   {
}

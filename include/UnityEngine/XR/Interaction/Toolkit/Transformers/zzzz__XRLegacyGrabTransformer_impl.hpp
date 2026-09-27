#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRLegacyGrabTransformer.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRLegacyGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer.OnLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnLink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e1c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer.OnGrabCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::Process)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb45e1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb45e1d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRLegacyGrabTransformer::XRLegacyGrabTransformer()   {
}

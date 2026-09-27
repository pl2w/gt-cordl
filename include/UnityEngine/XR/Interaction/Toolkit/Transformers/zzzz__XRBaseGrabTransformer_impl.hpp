#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Transformers/XRBaseGrabTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRGrabInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__IXRGrabTransformer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Transformers/zzzz__XRBaseGrabTransformer_RegistrationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.get_canProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_canProcess)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.get_registrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_registrationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb459470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.GetRegistrationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::GetRegistrationMode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb459478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                        {"GetRegistrationMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Start)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb459484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnDestroy)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb459618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnLink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4596a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrab)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4596a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnGrabCountChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::UnityEngine::Pose, ::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrabCountChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4596ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.Process
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer.OnUnlink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnUnlink)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4596b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4596b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_canProcess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::get_registrationMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode>(this, ___internal_method);
}
inline ::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::GetRegistrationMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                        {"GetRegistrationMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseGrabTransformer_RegistrationMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnLink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrab(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnGrabCountChanged(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::UnityEngine::Pose  targetPose, ::UnityEngine::Vector3  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::Process(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable, ::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase, ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Vector3>  localScale)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable, updatePhase, targetPose, localScale);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::OnUnlink(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRGrabInteractable*  grabInteractable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr  UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::operator ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer* UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::i___UnityEngine__XR__Interaction__Toolkit__Transformers__IXRGrabTransformer() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Transformers::IXRGrabTransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Transformers::XRBaseGrabTransformer::XRBaseGrabTransformer()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleGhostDrawer.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleGhostDrawer_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataGhost_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabInteractor_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabState_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandFingerFlags_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "Oculus/Interaction/Input/zzzz__SyntheticHand_def.hpp"
#include "Oculus/Interaction/zzzz__IHandVisual_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.get_HandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::HandGrab::IHandGrabInteractor* (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_HandGrabInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f08f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"get_HandGrabInteractor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.set_HandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::set_HandGrabInteractor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"set_HandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.get_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IInteractorView* (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.set_Interactor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::IInteractorView*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::set_Interactor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f0910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.get_InteractableComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Component> (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_InteractableComponent)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4f0918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Awake)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4f0a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Start)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4f0aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.UpdateHandPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabState*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::UpdateHandPose)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0xa4f0bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"UpdateHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.UpdateFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::HandGrab::HandPose*, ::Oculus::Interaction::Input::HandFingerFlags)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::UpdateFingers)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4f0ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"UpdateFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.FreeFingers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::FreeFingers)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4f0e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"FreeFingers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.FreeWrist
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::FreeWrist)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f0e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"FreeWrist", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.Align
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Align)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4f0f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Draw)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4f0fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Hide)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4f1074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.InjectAllReticleGhostDrawer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*, ::Oculus::Interaction::Input::SyntheticHand*, ::Oculus::Interaction::IHandVisual*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectAllReticleGhostDrawer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4f1134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectAllReticleGhostDrawer", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>(), ::i2c::type_of<::Oculus::Interaction::IHandVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.InjectHandGrabInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::HandGrab::IHandGrabInteractor*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectHandGrabInteractor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa4f1170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.InjectSyntheticHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::Input::SyntheticHand*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectSyntheticHand)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f1344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer.InjectVisualHand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)(::Oculus::Interaction::IHandVisual*)>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectVisualHand)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4f1274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectVisualHand", {}, {::i2c::type_of<::Oculus::Interaction::IHandVisual*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4f134c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer._Start_b__18_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::_Start_b__18_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4f139c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"<Start>b__18_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__handGrabInteractor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__handGrabInteractor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handGrabInteractor;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__handGrabInteractor(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handGrabInteractor = value;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor*& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__HandGrabInteractor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabInteractor_k__BackingField;
}
constexpr ::Oculus::Interaction::HandGrab::IHandGrabInteractor* const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__HandGrabInteractor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HandGrabInteractor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__HandGrabInteractor_k__BackingField(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HandGrabInteractor_k__BackingField = value;
}
constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__syntheticHand()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__syntheticHand() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____syntheticHand;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____syntheticHand = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__handVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__handVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handVisual;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__handVisual(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handVisual = value;
}
constexpr ::Oculus::Interaction::IHandVisual*& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get_HandVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandVisual;
}
constexpr ::Oculus::Interaction::IHandVisual* const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get_HandVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___HandVisual;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set_HandVisual(::Oculus::Interaction::IHandVisual*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___HandVisual = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__areFingersFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areFingersFree;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__areFingersFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____areFingersFree;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__areFingersFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____areFingersFree = value;
}
constexpr bool& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__isWristFree()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWristFree;
}
constexpr bool const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__isWristFree() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWristFree;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__isWristFree(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWristFree = value;
}
constexpr ::Oculus::Interaction::IInteractorView*& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__Interactor_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr ::Oculus::Interaction::IInteractorView* const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get__Interactor_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Interactor_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set__Interactor_k__BackingField(::Oculus::Interaction::IInteractorView*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Interactor_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get_Transformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_get_Transformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transformer;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::__cordl_internal_set_Transformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Transformer = value;
}
inline ::Oculus::Interaction::HandGrab::IHandGrabInteractor* Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_HandGrabInteractor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"get_HandGrabInteractor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::set_HandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"set_HandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_Interactor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::set_Interactor(::Oculus::Interaction::IInteractorView*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Component> Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::get_InteractableComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::UpdateHandPose(::Oculus::Interaction::HandGrab::IHandGrabState*  snapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"UpdateHandPose", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapper);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::UpdateFingers(::Oculus::Interaction::HandGrab::HandPose*  handPose, ::Oculus::Interaction::Input::HandFingerFlags  grabbingFingers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"UpdateFingers", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<::Oculus::Interaction::Input::HandFingerFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handPose, grabbingFingers);
}
inline bool Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::FreeFingers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"FreeFingers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::FreeWrist()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"FreeWrist", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Align(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Draw(::Oculus::Interaction::DistanceReticles::ReticleDataGhost*  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectAllReticleGhostDrawer(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::Input::SyntheticHand*  syntheticHand, ::Oculus::Interaction::IHandVisual*  visualHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectAllReticleGhostDrawer", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>(), ::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>(), ::i2c::type_of<::Oculus::Interaction::IHandVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor, syntheticHand, visualHand);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::IHandGrabInteractor*  handGrabInteractor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectHandGrabInteractor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::IHandGrabInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handGrabInteractor);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectSyntheticHand", {}, {::i2c::type_of<::Oculus::Interaction::Input::SyntheticHand*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, syntheticHand);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::InjectVisualHand(::Oculus::Interaction::IHandVisual*  visualHand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"InjectVisualHand", {}, {::i2c::type_of<::Oculus::Interaction::IHandVisual*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualHand);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::_Start_b__18_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>(),
                        {"<Start>b__18_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer* Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::ReticleGhostDrawer::ReticleGhostDrawer()   {
}

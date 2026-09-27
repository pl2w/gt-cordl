#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/LocomotionTurnerInteractor.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnerInteractor_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IAxis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ITrackingToWorldTransformer_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnerInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionTurnerInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.get_DragThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_DragThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_DragThresold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.set_DragThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::set_DragThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"set_DragThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.get_MidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_MidPoint)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa4d2c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_MidPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.get_Origin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_Origin)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4d2d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.add_WhenTurnDirectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::System::Action_1<float_t>*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::add_WhenTurnDirectionChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4d2d78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"add_WhenTurnDirectionChanged", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.remove_WhenTurnDirectionChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::System::Action_1<float_t>*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::remove_WhenTurnDirectionChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4d2e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"remove_WhenTurnDirectionChanged", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.get_ShouldHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_ShouldHover)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa4d2ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.get_ShouldUnhover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_ShouldUnhover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d2f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Awake)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa4d2f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4d2ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.HandleEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::HandleEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4d3088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 67}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.DoHoverUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DoHoverUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4d3438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.DoSelectUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DoSelectUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4d3528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.UpdatePointers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdatePointers)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4d3488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdatePointers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InitializeMidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InitializeMidPoint)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0xa4d310c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InitializeMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.UpdateMidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdateMidPoint)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa4d3578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdateMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.DragMidPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DragMidPoint)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xa4d3854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"DragMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.UpdateAxisValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Pose, ::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdateAxisValue)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa4d3c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdateAxisValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Value)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4d3eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.ComputeCandidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable> (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::ComputeCandidate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d3f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InjectAllLocomotionTurnerInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Transform*, ::Oculus::Interaction::ISelector*, ::UnityEngine::Transform*, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectAllLocomotionTurnerInteractor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4d3f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectAllLocomotionTurnerInteractor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InjectOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectOrigin)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d411c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InjectSelector
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::Oculus::Interaction::ISelector*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectSelector)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4d3f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InjectStabilizationPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectStabilizationPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4d412c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectStabilizationPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor.InjectTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)(::Oculus::Interaction::Input::ITrackingToWorldTransformer*)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectTransformer)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4d404c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa4d413c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor._Start_b__24_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::_Start_b__24_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4d429c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"<Start>b__24_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____origin;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__origin(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____origin = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__selector(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__stabilizationPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__stabilizationPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stabilizationPoint;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__stabilizationPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stabilizationPoint = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__transformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformer;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__transformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transformer;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__transformer(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____transformer = value;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get_Transformer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transformer;
}
constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get_Transformer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Transformer;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set_Transformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Transformer = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__dragThresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresold;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__dragThresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragThresold;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__dragThresold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragThresold = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__midPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midPoint;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__midPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____midPoint;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__midPoint(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____midPoint = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__axisValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisValue;
}
constexpr float_t const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__axisValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axisValue;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__axisValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axisValue = value;
}
constexpr ::System::Action_1<float_t>*& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__whenTurnDirectionChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenTurnDirectionChanged;
}
constexpr ::System::Action_1<float_t>* const& Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_get__whenTurnDirectionChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenTurnDirectionChanged;
}
constexpr void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::__cordl_internal_set__whenTurnDirectionChanged(::System::Action_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenTurnDirectionChanged = value;
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_DragThresold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_DragThresold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::set_DragThresold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"set_DragThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_MidPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_MidPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_Origin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"get_Origin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::add_WhenTurnDirectionChanged(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"add_WhenTurnDirectionChanged", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::remove_WhenTurnDirectionChanged(::System::Action_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"remove_WhenTurnDirectionChanged", {}, {::i2c::type_of<::System::Action_1<float_t>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::HandleEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdatePointers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdatePointers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InitializeMidPoint(::UnityEngine::Pose  pointer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InitializeMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdateMidPoint(::UnityEngine::Pose  pointer, ::UnityEngine::Pose  midPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdateMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, midPoint);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::DragMidPoint(::UnityEngine::Pose  worldMidPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"DragMidPoint", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldMidPoint);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::UpdateAxisValue(::UnityEngine::Pose  pointer, ::UnityEngine::Pose  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"UpdateAxisValue", {}, {::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointer, origin);
}
inline float_t Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable> Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractable>>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectAllLocomotionTurnerInteractor(::UnityEngine::Transform*  origin, ::Oculus::Interaction::ISelector*  selector, ::UnityEngine::Transform*  stabilizationPoint, ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectAllLocomotionTurnerInteractor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::ISelector*>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin, selector, stabilizationPoint, transformer);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectOrigin(::UnityEngine::Transform*  origin)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectOrigin", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, origin);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectSelector(::Oculus::Interaction::ISelector*  selector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectSelector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selector);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectStabilizationPoint(::UnityEngine::Transform*  stabilizationPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectStabilizationPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stabilizationPoint);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::InjectTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  transformer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"InjectTransformer", {}, {::i2c::type_of<::Oculus::Interaction::Input::ITrackingToWorldTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformer);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::_Start_b__24_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>(),
                        {"<Start>b__24_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor* Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr  Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::operator ::Oculus::Interaction::Input::IAxis1D*() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::i___Oculus__Interaction__Input__IAxis1D() noexcept {
return static_cast<::Oculus::Interaction::Input::IAxis1D*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor::LocomotionTurnerInteractor()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::*)()>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d434c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c.__ctor_b__40_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::*)(float_t)>(&::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::__ctor_b__40_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4d4354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(),
                        {"<.ctor>b__40_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::setStaticF___9(::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(std::forward<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(value));
}
inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c* Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*, "<>9", ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::setStaticF___9__40_0(::System::Action_1<float_t>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<float_t>*, "<>9__40_0", ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(std::forward<::System::Action_1<float_t>*>(value));
}
inline ::System::Action_1<float_t>* Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::getStaticF___9__40_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<float_t>*, "<>9__40_0", ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>();
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::__ctor_b__40_0(float_t  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>(),
                        {"<.ctor>b__40_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
inline ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c* Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::LocomotionTurnerInteractor___c::LocomotionTurnerInteractor___c()   {
}

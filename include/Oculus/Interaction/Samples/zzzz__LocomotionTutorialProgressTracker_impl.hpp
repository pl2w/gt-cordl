#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/LocomotionTutorialProgressTracker.hpp"
#include "UnityEngine/UI/zzzz__Image_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__LocomotionTutorialProgressTracker_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__ILocomotionEventHandler_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_RotationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_TranslationType_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__LocomotionEvent_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa438704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Start)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa43876c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::OnEnable)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa4387ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa438934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                    {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.LocomotionEventHandled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::Oculus::Interaction::Locomotion::LocomotionEvent, ::UnityEngine::Pose)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::LocomotionEventHandled)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa438a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"LocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Progress)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa438ad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.ResetProgress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::ResetProgress)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4388b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"ResetProgress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectAllLocomotionTutorialProgressTracker
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::ArrayW<::UnityEngine::UI::Image*>, ::UnityEngine::Sprite*, ::UnityEngine::Sprite*, ::UnityEngine::Sprite*, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*, ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectAllLocomotionTutorialProgressTracker)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa438b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectAllLocomotionTutorialProgressTracker", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UI::Image*>>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectDots
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::ArrayW<::UnityEngine::UI::Image*>)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectDots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectDots", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UI::Image*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectPendingSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::UnityEngine::Sprite*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectPendingSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438cfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectPendingSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectCurrentSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::UnityEngine::Sprite*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectCurrentSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectCurrentSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectCompletedSprite
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::UnityEngine::Sprite*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectCompletedSprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectCompletedSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectConsumeTranslationEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectConsumeTranslationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectConsumeTranslationEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectConsumeRotationEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectConsumeRotationEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa438d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectConsumeRotationEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker.InjectLocomotionHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*)>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectLocomotionHandler)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa438c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectLocomotionHandler", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::*)()>(&::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa438d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>>& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__dots()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dots;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::UI::Image>> const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__dots() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dots;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__dots(::ArrayW<::UnityW<::UnityEngine::UI::Image>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dots = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__pendingSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__pendingSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pendingSprite;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__pendingSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pendingSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__currentSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__currentSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentSprite;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__currentSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentSprite = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__completedSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__completedSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____completedSprite;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__completedSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____completedSprite = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__consumeTranslationEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumeTranslationEvents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>* const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__consumeTranslationEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumeTranslationEvents;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__consumeTranslationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____consumeTranslationEvents = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__consumeRotationEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumeRotationEvents;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>* const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__consumeRotationEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumeRotationEvents;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__consumeRotationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____consumeRotationEvents = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__locomotionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionHandler;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__locomotionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locomotionHandler;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__locomotionHandler(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____locomotionHandler = value;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get_LocomotionHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocomotionHandler;
}
constexpr ::Oculus::Interaction::Locomotion::ILocomotionEventHandler* const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get_LocomotionHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LocomotionHandler;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set_LocomotionHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LocomotionHandler = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get_WhenCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get_WhenCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenCompleted;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set_WhenCompleted(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenCompleted = value;
}
constexpr bool& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr int32_t& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__currentProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress;
}
constexpr int32_t const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__currentProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentProgress;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__currentProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentProgress = value;
}
constexpr int32_t& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__totalProgress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalProgress;
}
constexpr int32_t const& Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_get__totalProgress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalProgress;
}
constexpr void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::__cordl_internal_set__totalProgress(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalProgress = value;
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::LocomotionEventHandled(::Oculus::Interaction::Locomotion::LocomotionEvent  arg1, ::UnityEngine::Pose  arg2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"LocomotionEventHandled", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::LocomotionEvent>(), ::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, arg1, arg2);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::ResetProgress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"ResetProgress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectAllLocomotionTutorialProgressTracker(::ArrayW<::UnityEngine::UI::Image*>  dots, ::UnityEngine::Sprite*  pendingSprite, ::UnityEngine::Sprite*  currentSprite, ::UnityEngine::Sprite*  completedSprite, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  consumeTranslationEvents, ::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  consumeRotationEvents, ::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectAllLocomotionTutorialProgressTracker", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UI::Image*>>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*>(), ::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dots, pendingSprite, currentSprite, completedSprite, consumeTranslationEvents, consumeRotationEvents, locomotionHandler);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectDots(::ArrayW<::UnityEngine::UI::Image*>  dots)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectDots", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UI::Image*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dots);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectPendingSprite(::UnityEngine::Sprite*  pendingSprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectPendingSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pendingSprite);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectCurrentSprite(::UnityEngine::Sprite*  currentSprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectCurrentSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentSprite);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectCompletedSprite(::UnityEngine::Sprite*  completedSprite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectCompletedSprite", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, completedSprite);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectConsumeTranslationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*  consumeTranslationEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectConsumeTranslationEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_TranslationType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, consumeTranslationEvents);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectConsumeRotationEvents(::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*  consumeRotationEvents)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectConsumeRotationEvents", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::LocomotionEvent_RotationType>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, consumeRotationEvents);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::InjectLocomotionHandler(::Oculus::Interaction::Locomotion::ILocomotionEventHandler*  locomotionHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {"InjectLocomotionHandler", {}, {::i2c::type_of<::Oculus::Interaction::Locomotion::ILocomotionEventHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, locomotionHandler);
}
inline void Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker* Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::LocomotionTutorialProgressTracker::LocomotionTutorialProgressTracker()   {
}

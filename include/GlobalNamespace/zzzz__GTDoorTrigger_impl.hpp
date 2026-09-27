#pragma once
// IWYU pragma private; include "GlobalNamespace/GTDoorTrigger.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GTDoorTrigger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger.get_overlapCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::GTDoorTrigger::*)()>(&::GlobalNamespace::GTDoorTrigger::get_overlapCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5677d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"get_overlapCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger.get_TriggeredThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GTDoorTrigger::*)()>(&::GlobalNamespace::GTDoorTrigger::get_TriggeredThisFrame)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5678410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger.ValidateOverlappingColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoorTrigger::*)()>(&::GlobalNamespace::GTDoorTrigger::ValidateOverlappingColliders)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x5677c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"ValidateOverlappingColliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoorTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GTDoorTrigger::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5678430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoorTrigger::*)(::UnityEngine::Collider*)>(&::GlobalNamespace::GTDoorTrigger::OnTriggerExit)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x56785cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTDoorTrigger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTDoorTrigger::*)()>(&::GlobalNamespace::GTDoorTrigger::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5678624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector>& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_timeline()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr ::UnityW<::UnityEngine::Playables::PlayableDirector> const& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_timeline() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeline;
}
constexpr void GlobalNamespace::GTDoorTrigger::__cordl_internal_set_timeline(::UnityW<::UnityEngine::Playables::PlayableDirector>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeline = value;
}
constexpr int32_t& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_lastTriggeredFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr int32_t const& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_lastTriggeredFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastTriggeredFrame;
}
constexpr void GlobalNamespace::GTDoorTrigger::__cordl_internal_set_lastTriggeredFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastTriggeredFrame = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_overlappingColliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappingColliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_overlappingColliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlappingColliders;
}
constexpr void GlobalNamespace::GTDoorTrigger::__cordl_internal_set_overlappingColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlappingColliders = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_TriggeredEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggeredEvent;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::GTDoorTrigger::__cordl_internal_get_TriggeredEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggeredEvent;
}
constexpr void GlobalNamespace::GTDoorTrigger::__cordl_internal_set_TriggeredEvent(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggeredEvent = value;
}
inline int32_t GlobalNamespace::GTDoorTrigger::get_overlapCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"get_overlapCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::GTDoorTrigger::get_TriggeredThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"get_TriggeredThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoorTrigger::ValidateOverlappingColliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"ValidateOverlappingColliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GTDoorTrigger::OnTriggerEnter(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GTDoorTrigger::OnTriggerExit(::UnityEngine::Collider*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void GlobalNamespace::GTDoorTrigger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTDoorTrigger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GTDoorTrigger* GlobalNamespace::GTDoorTrigger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GTDoorTrigger*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTDoorTrigger::GTDoorTrigger()   {
}

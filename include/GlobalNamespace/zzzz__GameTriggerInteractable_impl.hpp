#pragma once
// IWYU pragma private; include "GlobalNamespace/GameTriggerInteractable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameTriggerInteractable_def.hpp"
#include "GlobalNamespace/zzzz__GameEntity_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)()>(&::GlobalNamespace::GameTriggerInteractable::OnEnable)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0x5841f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.StartHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)()>(&::GlobalNamespace::GameTriggerInteractable::StartHolding)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58421f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"StartHolding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.StopHolding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)()>(&::GlobalNamespace::GameTriggerInteractable::StopHolding)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5842298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"StopHolding", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.PointWithinInteractableArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GameTriggerInteractable::*)(::UnityEngine::Vector3)>(&::GlobalNamespace::GameTriggerInteractable::PointWithinInteractableArea)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x583f334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"PointWithinInteractableArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.BeginTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)(int32_t)>(&::GlobalNamespace::GameTriggerInteractable::BeginTriggerInteraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x583f3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"BeginTriggerInteraction", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable.EndTriggerInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)()>(&::GlobalNamespace::GameTriggerInteractable::EndTriggerInteraction)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5840488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"EndTriggerInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameTriggerInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GameTriggerInteractable::*)()>(&::GlobalNamespace::GameTriggerInteractable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x584233c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::GameEntity>& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_gameEntity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr ::UnityW<::GlobalNamespace::GameEntity> const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_gameEntity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEntity;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEntity = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableCenter;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableCenter;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactableCenter(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableCenter = value;
}
constexpr float_t& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableRadius;
}
constexpr float_t const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableRadius;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactableRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableRadius = value;
}
constexpr bool& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableWhileGrabbed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableWhileGrabbed;
}
constexpr bool const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableWhileGrabbed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableWhileGrabbed;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactableWhileGrabbed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableWhileGrabbed = value;
}
constexpr bool& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableWhileSnapped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableWhileSnapped;
}
constexpr bool const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableWhileSnapped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableWhileSnapped;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactableWhileSnapped(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableWhileSnapped = value;
}
constexpr bool& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactablePermanently()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactablePermanently;
}
constexpr bool const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactablePermanently() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactablePermanently;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactablePermanently(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactablePermanently = value;
}
constexpr bool& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableOnOthers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableOnOthers;
}
constexpr bool const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_interactableOnOthers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___interactableOnOthers;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_interactableOnOthers(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___interactableOnOthers = value;
}
constexpr bool& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_triggerInteractionActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteractionActive;
}
constexpr bool const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_triggerInteractionActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___triggerInteractionActive;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_triggerInteractionActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___triggerInteractionActive = value;
}
constexpr int32_t& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_handIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIndex;
}
constexpr int32_t const& GlobalNamespace::GameTriggerInteractable::__cordl_internal_get_handIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handIndex;
}
constexpr void GlobalNamespace::GameTriggerInteractable::__cordl_internal_set_handIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handIndex = value;
}
inline void GlobalNamespace::GameTriggerInteractable::setStaticF_LocalInteractableTriggers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*, "LocalInteractableTriggers", ::GlobalNamespace::GameTriggerInteractable*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>* GlobalNamespace::GameTriggerInteractable::getStaticF_LocalInteractableTriggers()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GameTriggerInteractable>>*, "LocalInteractableTriggers", ::GlobalNamespace::GameTriggerInteractable*>();
}
inline void GlobalNamespace::GameTriggerInteractable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameTriggerInteractable::StartHolding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"StartHolding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameTriggerInteractable::StopHolding()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"StopHolding", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::GameTriggerInteractable::PointWithinInteractableArea(::UnityEngine::Vector3  point)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"PointWithinInteractableArea", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point);
}
inline void GlobalNamespace::GameTriggerInteractable::BeginTriggerInteraction(int32_t  _handIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"BeginTriggerInteraction", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _handIndex);
}
inline void GlobalNamespace::GameTriggerInteractable::EndTriggerInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {"EndTriggerInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GameTriggerInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GameTriggerInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GameTriggerInteractable* GlobalNamespace::GameTriggerInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GameTriggerInteractable*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameTriggerInteractable::GameTriggerInteractable()   {
}

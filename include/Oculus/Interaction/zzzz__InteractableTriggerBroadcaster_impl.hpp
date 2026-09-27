#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableTriggerBroadcaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableTriggerBroadcaster_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableTriggerBroadcaster_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::Start)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa418520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.OnTriggerStay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::InteractableTriggerBroadcaster::OnTriggerStay)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xa418610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::OnEnable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa418750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::FixedUpdate)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4187e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.UpdateTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::UpdateTriggers)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xa418858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"UpdateTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::OnDisable)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa418aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::OnDestroy)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa418cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                    {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.ForceGlobalUpdateTriggers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::ForceGlobalUpdateTriggers)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa418d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"ForceGlobalUpdateTriggers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.InjectAllInteractableTriggerBroadcaster
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)(::Oculus::Interaction::IInteractable*)>(&::Oculus::Interaction::InteractableTriggerBroadcaster::InjectAllInteractableTriggerBroadcaster)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa418e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"InjectAllInteractableTriggerBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster.InjectInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)(::Oculus::Interaction::IInteractable*)>(&::Oculus::Interaction::InteractableTriggerBroadcaster::InjectInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa418e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"InjectInteractable", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster::_ctor)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa418e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get_WhenTriggerEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTriggerEntered;
}
constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get_WhenTriggerEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTriggerEntered;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set_WhenTriggerEntered(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenTriggerEntered = value;
}
constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get_WhenTriggerExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTriggerExited;
}
constexpr ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get_WhenTriggerExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenTriggerExited;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set_WhenTriggerExited(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenTriggerExited = value;
}
constexpr ::Oculus::Interaction::IInteractable*& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr ::Oculus::Interaction::IInteractable* const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__interactable(::Oculus::Interaction::IInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactable = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__rigidbodyTriggers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyTriggers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>* const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__rigidbodyTriggers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyTriggers;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__rigidbodyTriggers(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodyTriggers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__rigidbodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__rigidbodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodies;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__rigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodies = value;
}
constexpr bool& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr bool& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__skippedPhysics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedPhysics;
}
constexpr bool const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__skippedPhysics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____skippedPhysics;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__skippedPhysics(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____skippedPhysics = value;
}
constexpr bool& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__forcedGlobalPhysicsUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedGlobalPhysicsUpdate;
}
constexpr bool const& Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_get__forcedGlobalPhysicsUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forcedGlobalPhysicsUpdate;
}
constexpr void Oculus::Interaction::InteractableTriggerBroadcaster::__cordl_internal_set__forcedGlobalPhysicsUpdate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forcedGlobalPhysicsUpdate = value;
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::setStaticF__broadcasters(::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*, "_broadcasters", ::Oculus::Interaction::InteractableTriggerBroadcaster*>(std::forward<::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*>(value));
}
inline ::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>* Oculus::Interaction::InteractableTriggerBroadcaster::getStaticF__broadcasters()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*, "_broadcasters", ::Oculus::Interaction::InteractableTriggerBroadcaster*>();
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::OnTriggerStay(::UnityEngine::Collider*  collider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::UpdateTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"UpdateTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::ForceGlobalUpdateTriggers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"ForceGlobalUpdateTriggers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::InjectAllInteractableTriggerBroadcaster(::Oculus::Interaction::IInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"InjectAllInteractableTriggerBroadcaster", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::InjectInteractable(::Oculus::Interaction::IInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {"InjectInteractable", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::InteractableTriggerBroadcaster* Oculus::Interaction::InteractableTriggerBroadcaster::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableTriggerBroadcaster*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableTriggerBroadcaster::InteractableTriggerBroadcaster()   {
}
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster___c::*)()>(&::Oculus::Interaction::InteractableTriggerBroadcaster___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa419124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster___c.__ctor_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster___c::*)(::Oculus::Interaction::IInteractable*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::InteractableTriggerBroadcaster___c::__ctor_b__19_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa41912c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::InteractableTriggerBroadcaster___c.__ctor_b__19_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::InteractableTriggerBroadcaster___c::*)(::Oculus::Interaction::IInteractable*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::InteractableTriggerBroadcaster___c::__ctor_b__19_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa419130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {"<.ctor>b__19_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::setStaticF___9(::Oculus::Interaction::InteractableTriggerBroadcaster___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractableTriggerBroadcaster___c*, "<>9", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(std::forward<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(value));
}
inline ::Oculus::Interaction::InteractableTriggerBroadcaster___c* Oculus::Interaction::InteractableTriggerBroadcaster___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractableTriggerBroadcaster___c*, "<>9", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>();
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::setStaticF___9__19_0(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*, "<>9__19_0", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(std::forward<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* Oculus::Interaction::InteractableTriggerBroadcaster___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*, "<>9__19_0", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>();
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::setStaticF___9__19_1(::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*, "<>9__19_1", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(std::forward<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*>(value));
}
inline ::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>* Oculus::Interaction::InteractableTriggerBroadcaster___c::getStaticF___9__19_1()  {
return ::cordl_internals::getStaticField<::System::Action_2<::Oculus::Interaction::IInteractable*,::UnityW<::UnityEngine::Rigidbody>>*, "<>9__19_1", ::Oculus::Interaction::InteractableTriggerBroadcaster___c*>();
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::__ctor_b__19_0(::Oculus::Interaction::IInteractable*  _p0_, ::UnityEngine::Rigidbody*  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {"<.ctor>b__19_0", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline void Oculus::Interaction::InteractableTriggerBroadcaster___c::__ctor_b__19_1(::Oculus::Interaction::IInteractable*  _p0_, ::UnityEngine::Rigidbody*  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>(),
                        {"<.ctor>b__19_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::InteractableTriggerBroadcaster___c* Oculus::Interaction::InteractableTriggerBroadcaster___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableTriggerBroadcaster___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::InteractableTriggerBroadcaster___c::InteractableTriggerBroadcaster___c()   {
}

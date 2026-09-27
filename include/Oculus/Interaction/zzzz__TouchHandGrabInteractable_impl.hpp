#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchHandGrabInteractable.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "Oculus/Interaction/zzzz__TouchHandGrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__ColliderGroup_def.hpp"
#include "Oculus/Interaction/zzzz__TouchHandGrabInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable.get_ColliderGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::ColliderGroup* (::Oculus::Interaction::TouchHandGrabInteractable::*)()>(&::Oculus::Interaction::TouchHandGrabInteractable::get_ColliderGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa465824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"get_ColliderGroup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractable::*)()>(&::Oculus::Interaction::TouchHandGrabInteractable::Start)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa46582c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable.InjectAllTouchHandGrabInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractable::*)(::UnityEngine::Collider*, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::Oculus::Interaction::TouchHandGrabInteractable::InjectAllTouchHandGrabInteractable)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4658c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectAllTouchHandGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable.InjectBoundsCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractable::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::TouchHandGrabInteractable::InjectBoundsCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4658f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectBoundsCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable.InjectColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractable::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*)>(&::Oculus::Interaction::TouchHandGrabInteractable::InjectColliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4658f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectColliders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TouchHandGrabInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TouchHandGrabInteractable::*)()>(&::Oculus::Interaction::TouchHandGrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa465900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__boundsCollider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsCollider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__boundsCollider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____boundsCollider;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_set__boundsCollider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____boundsCollider = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr ::Oculus::Interaction::ColliderGroup*& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__colliderGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderGroup;
}
constexpr ::Oculus::Interaction::ColliderGroup* const& Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_get__colliderGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliderGroup;
}
constexpr void Oculus::Interaction::TouchHandGrabInteractable::__cordl_internal_set__colliderGroup(::Oculus::Interaction::ColliderGroup*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliderGroup = value;
}
inline ::Oculus::Interaction::ColliderGroup* Oculus::Interaction::TouchHandGrabInteractable::get_ColliderGroup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"get_ColliderGroup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ColliderGroup*>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TouchHandGrabInteractable::InjectAllTouchHandGrabInteractable(::UnityEngine::Collider*  boundsCollider, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectAllTouchHandGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Collider*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundsCollider, colliders);
}
inline void Oculus::Interaction::TouchHandGrabInteractable::InjectBoundsCollider(::UnityEngine::Collider*  boundsCollider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectBoundsCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boundsCollider);
}
inline void Oculus::Interaction::TouchHandGrabInteractable::InjectColliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {"InjectColliders", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colliders);
}
inline void Oculus::Interaction::TouchHandGrabInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TouchHandGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::TouchHandGrabInteractable* Oculus::Interaction::TouchHandGrabInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TouchHandGrabInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TouchHandGrabInteractable::TouchHandGrabInteractable()   {
}

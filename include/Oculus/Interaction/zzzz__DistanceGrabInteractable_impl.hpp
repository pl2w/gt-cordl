#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceGrabInteractable.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "Oculus/Interaction/zzzz__DistanceGrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__DistanceGrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ICollidersRef_def.hpp"
#include "Oculus/Interaction/zzzz__IMovementProvider_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__IRelativeToRef_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__PhysicsGrabbable_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.get_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::get_Colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.get_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovementProvider* (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::get_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.set_MovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::DistanceGrabInteractable::set_MovementProvider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.get_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::get_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.set_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(bool)>(&::Oculus::Interaction::DistanceGrabInteractable::set_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.get_RelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::get_RelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44f738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa44f740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa44f798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::Start)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xa44f818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.GenerateMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IMovement* (::Oculus::Interaction::DistanceGrabInteractable::*)(::by_ref<::UnityEngine::Pose>)>(&::Oculus::Interaction::DistanceGrabInteractable::GenerateMovement)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0xa44fa5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.ApplyVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceGrabInteractable::ApplyVelocities)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa44fc48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.InjectAllGrabInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::DistanceGrabInteractable::InjectAllGrabInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44fd20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectAllGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::DistanceGrabInteractable::InjectRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44fd28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.InjectOptionalGrabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::DistanceGrabInteractable::InjectOptionalGrabSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44fd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalGrabSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.InjectOptionalPhysicsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::Oculus::Interaction::PhysicsGrabbable*)>(&::Oculus::Interaction::DistanceGrabInteractable::InjectOptionalPhysicsGrabbable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44fd38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable.InjectOptionalMovementProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)(::Oculus::Interaction::IMovementProvider*)>(&::Oculus::Interaction::DistanceGrabInteractable::InjectOptionalMovementProvider)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa44f98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa44fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceGrabInteractable._Start_b__21_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceGrabInteractable::*)()>(&::Oculus::Interaction::DistanceGrabInteractable::_Start_b__21_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa44fd90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__grabSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__grabSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSource;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__grabSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabSource = value;
}
constexpr bool& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr bool const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__resetGrabOnGrabsUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetGrabOnGrabsUpdated = value;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__physicsGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__physicsGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physicsGrabbable = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__movementProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__movementProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____movementProvider;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__movementProvider(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____movementProvider = value;
}
constexpr ::Oculus::Interaction::IMovementProvider*& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__MovementProvider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr ::Oculus::Interaction::IMovementProvider* const& Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_get__MovementProvider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____MovementProvider_k__BackingField;
}
constexpr void Oculus::Interaction::DistanceGrabInteractable::__cordl_internal_set__MovementProvider_k__BackingField(::Oculus::Interaction::IMovementProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____MovementProvider_k__BackingField = value;
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Oculus::Interaction::DistanceGrabInteractable::get_Colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::DistanceGrabInteractable::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovementProvider* Oculus::Interaction::DistanceGrabInteractable::get_MovementProvider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_MovementProvider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovementProvider*>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::set_MovementProvider(::Oculus::Interaction::IMovementProvider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"set_MovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::DistanceGrabInteractable::get_ResetGrabOnGrabsUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::set_ResetGrabOnGrabsUpdated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::DistanceGrabInteractable::get_RelativeTo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"get_RelativeTo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::IMovement* Oculus::Interaction::DistanceGrabInteractable::GenerateMovement(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"GenerateMovement", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IMovement*>(this, ___internal_method, to);
}
inline void Oculus::Interaction::DistanceGrabInteractable::ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::DistanceGrabInteractable::InjectAllGrabInteractable(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectAllGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::DistanceGrabInteractable::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::DistanceGrabInteractable::InjectOptionalGrabSource(::UnityEngine::Transform*  grabSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalGrabSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabSource);
}
inline void Oculus::Interaction::DistanceGrabInteractable::InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsGrabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, physicsGrabbable);
}
inline void Oculus::Interaction::DistanceGrabInteractable::InjectOptionalMovementProvider(::Oculus::Interaction::IMovementProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"InjectOptionalMovementProvider", {}, {::i2c::type_of<::Oculus::Interaction::IMovementProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline void Oculus::Interaction::DistanceGrabInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::DistanceGrabInteractable::_Start_b__21_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceGrabInteractable*>(),
                        {"<Start>b__21_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceGrabInteractable* Oculus::Interaction::DistanceGrabInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceGrabInteractable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::DistanceGrabInteractable::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::DistanceGrabInteractable::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IRelativeToRef"
constexpr  Oculus::Interaction::DistanceGrabInteractable::operator ::Oculus::Interaction::IRelativeToRef*() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRelativeToRef"
constexpr ::Oculus::Interaction::IRelativeToRef* Oculus::Interaction::DistanceGrabInteractable::i___Oculus__Interaction__IRelativeToRef() noexcept {
return static_cast<::Oculus::Interaction::IRelativeToRef*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr  Oculus::Interaction::DistanceGrabInteractable::operator ::Oculus::Interaction::ICollidersRef*() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* Oculus::Interaction::DistanceGrabInteractable::i___Oculus__Interaction__ICollidersRef() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceGrabInteractable::DistanceGrabInteractable()   {
}

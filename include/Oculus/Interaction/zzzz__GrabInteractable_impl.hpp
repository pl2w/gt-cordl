#pragma once
// IWYU pragma private; include "Oculus/Interaction/GrabInteractable.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__CollisionInteractionRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__GrabInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ICollidersRef_def.hpp"
#include "Oculus/Interaction/zzzz__IRigidbodyRef_def.hpp"
#include "Oculus/Interaction/zzzz__PhysicsGrabbable_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.get_Colliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Collider>> (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::get_Colliders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.get_Rigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::get_Rigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.get_UseClosestPointAsGrabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::get_UseClosestPointAsGrabSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_UseClosestPointAsGrabSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.set_UseClosestPointAsGrabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(bool)>(&::Oculus::Interaction::GrabInteractable::set_UseClosestPointAsGrabSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_UseClosestPointAsGrabSource", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.get_ReleaseDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::get_ReleaseDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_ReleaseDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.set_ReleaseDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(float_t)>(&::Oculus::Interaction::GrabInteractable::set_ReleaseDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_ReleaseDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.get_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::get_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.set_ResetGrabOnGrabsUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(bool)>(&::Oculus::Interaction::GrabInteractable::set_ResetGrabOnGrabsUpdated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa450e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::Awake)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa450e38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::Start)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa450e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.GetGrabSourceForTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::GrabInteractable::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::GrabInteractable::GetGrabSourceForTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa450fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"GetGrabSourceForTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.ApplyVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::GrabInteractable::ApplyVelocities)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xa4510ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.InjectAllGrabInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::GrabInteractable::InjectAllGrabInteractable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4511c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectAllGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::GrabInteractable::InjectRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4511cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.InjectOptionalGrabSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::GrabInteractable::InjectOptionalGrabSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4511d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalGrabSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.InjectOptionalReleaseDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(float_t)>(&::Oculus::Interaction::GrabInteractable::InjectOptionalReleaseDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4511dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalReleaseDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable.InjectOptionalPhysicsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)(::Oculus::Interaction::PhysicsGrabbable*)>(&::Oculus::Interaction::GrabInteractable::InjectOptionalPhysicsGrabbable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4511e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4511ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::GrabInteractable._Start_b__22_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::GrabInteractable::*)()>(&::Oculus::Interaction::GrabInteractable::_Start_b__22_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa45123c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"<Start>b__22_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Oculus::Interaction::GrabInteractable::__cordl_internal_get__colliders()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__colliders() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____colliders;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__colliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____colliders = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::GrabInteractable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::GrabInteractable::__cordl_internal_get__grabSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSource;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__grabSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabSource;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__grabSource(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabSource = value;
}
constexpr bool& Oculus::Interaction::GrabInteractable::__cordl_internal_get__useClosestPointAsGrabSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useClosestPointAsGrabSource;
}
constexpr bool const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__useClosestPointAsGrabSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useClosestPointAsGrabSource;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__useClosestPointAsGrabSource(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useClosestPointAsGrabSource = value;
}
constexpr float_t& Oculus::Interaction::GrabInteractable::__cordl_internal_get__releaseDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseDistance;
}
constexpr float_t const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__releaseDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____releaseDistance;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__releaseDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____releaseDistance = value;
}
constexpr bool& Oculus::Interaction::GrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr bool const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__resetGrabOnGrabsUpdated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resetGrabOnGrabsUpdated;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__resetGrabOnGrabsUpdated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resetGrabOnGrabsUpdated = value;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable>& Oculus::Interaction::GrabInteractable::__cordl_internal_get__physicsGrabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr ::UnityW<::Oculus::Interaction::PhysicsGrabbable> const& Oculus::Interaction::GrabInteractable::__cordl_internal_get__physicsGrabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physicsGrabbable;
}
constexpr void Oculus::Interaction::GrabInteractable::__cordl_internal_set__physicsGrabbable(::UnityW<::Oculus::Interaction::PhysicsGrabbable>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physicsGrabbable = value;
}
inline void Oculus::Interaction::GrabInteractable::setStaticF__grabRegistry(::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*, "_grabRegistry", ::Oculus::Interaction::GrabInteractable*>(std::forward<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*>(value));
}
inline ::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>* Oculus::Interaction::GrabInteractable::getStaticF__grabRegistry()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::CollisionInteractionRegistry_2<::UnityW<::Oculus::Interaction::GrabInteractor>,::UnityW<::Oculus::Interaction::GrabInteractable>>*, "_grabRegistry", ::Oculus::Interaction::GrabInteractable*>();
}
inline ::ArrayW<::UnityW<::UnityEngine::Collider>> Oculus::Interaction::GrabInteractable::get_Colliders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_Colliders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Collider>>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::GrabInteractable::get_Rigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_Rigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline bool Oculus::Interaction::GrabInteractable::get_UseClosestPointAsGrabSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_UseClosestPointAsGrabSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractable::set_UseClosestPointAsGrabSource(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_UseClosestPointAsGrabSource", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::GrabInteractable::get_ReleaseDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_ReleaseDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractable::set_ReleaseDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_ReleaseDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::GrabInteractable::get_ResetGrabOnGrabsUpdated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"get_ResetGrabOnGrabsUpdated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractable::set_ResetGrabOnGrabsUpdated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"set_ResetGrabOnGrabsUpdated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::GrabInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::GrabInteractable::GetGrabSourceForTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"GetGrabSourceForTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, target);
}
inline void Oculus::Interaction::GrabInteractable::ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::GrabInteractable::InjectAllGrabInteractable(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectAllGrabInteractable", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::GrabInteractable::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::GrabInteractable::InjectOptionalGrabSource(::UnityEngine::Transform*  grabSource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalGrabSource", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabSource);
}
inline void Oculus::Interaction::GrabInteractable::InjectOptionalReleaseDistance(float_t  releaseDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalReleaseDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, releaseDistance);
}
inline void Oculus::Interaction::GrabInteractable::InjectOptionalPhysicsGrabbable(::Oculus::Interaction::PhysicsGrabbable*  physicsGrabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"InjectOptionalPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::PhysicsGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, physicsGrabbable);
}
inline void Oculus::Interaction::GrabInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::GrabInteractable::_Start_b__22_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::GrabInteractable*>(),
                        {"<Start>b__22_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::GrabInteractable* Oculus::Interaction::GrabInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::GrabInteractable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IRigidbodyRef"
constexpr  Oculus::Interaction::GrabInteractable::operator ::Oculus::Interaction::IRigidbodyRef*() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IRigidbodyRef"
constexpr ::Oculus::Interaction::IRigidbodyRef* Oculus::Interaction::GrabInteractable::i___Oculus__Interaction__IRigidbodyRef() noexcept {
return static_cast<::Oculus::Interaction::IRigidbodyRef*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::ICollidersRef"
constexpr  Oculus::Interaction::GrabInteractable::operator ::Oculus::Interaction::ICollidersRef*() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICollidersRef"
constexpr ::Oculus::Interaction::ICollidersRef* Oculus::Interaction::GrabInteractable::i___Oculus__Interaction__ICollidersRef() noexcept {
return static_cast<::Oculus::Interaction::ICollidersRef*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::GrabInteractable::GrabInteractable()   {
}

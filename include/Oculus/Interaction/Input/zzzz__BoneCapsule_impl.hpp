#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/BoneCapsule.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__BoneCapsule_def.hpp"
#include "Oculus/Interaction/Input/zzzz__HandJointId_def.hpp"
#include "UnityEngine/zzzz__CapsuleCollider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.get_StartJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (::Oculus::Interaction::Input::BoneCapsule::*)()>(&::Oculus::Interaction::Input::BoneCapsule::get_StartJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_StartJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.set_StartJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::BoneCapsule::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::BoneCapsule::set_StartJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa51138c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_StartJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.get_EndJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::HandJointId (::Oculus::Interaction::Input::BoneCapsule::*)()>(&::Oculus::Interaction::Input::BoneCapsule::get_EndJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa511394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_EndJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.set_EndJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::BoneCapsule::*)(::Oculus::Interaction::Input::HandJointId)>(&::Oculus::Interaction::Input::BoneCapsule::set_EndJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa51139c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_EndJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.get_CapsuleRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::Input::BoneCapsule::*)()>(&::Oculus::Interaction::Input::BoneCapsule::get_CapsuleRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_CapsuleRigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.set_CapsuleRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::BoneCapsule::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::Input::BoneCapsule::set_CapsuleRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_CapsuleRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.get_CapsuleCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CapsuleCollider> (::Oculus::Interaction::Input::BoneCapsule::*)()>(&::Oculus::Interaction::Input::BoneCapsule::get_CapsuleCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_CapsuleCollider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule.set_CapsuleCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::BoneCapsule::*)(::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Input::BoneCapsule::set_CapsuleCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa5113bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_CapsuleCollider", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Input::BoneCapsule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Input::BoneCapsule::*)(::Oculus::Interaction::Input::HandJointId, ::Oculus::Interaction::Input::HandJointId, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*)>(&::Oculus::Interaction::Input::BoneCapsule::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa510b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__StartJoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartJoint_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__StartJoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____StartJoint_k__BackingField;
}
constexpr void Oculus::Interaction::Input::BoneCapsule::__cordl_internal_set__StartJoint_k__BackingField(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____StartJoint_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Input::HandJointId& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__EndJoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndJoint_k__BackingField;
}
constexpr ::Oculus::Interaction::Input::HandJointId const& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__EndJoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EndJoint_k__BackingField;
}
constexpr void Oculus::Interaction::Input::BoneCapsule::__cordl_internal_set__EndJoint_k__BackingField(::Oculus::Interaction::Input::HandJointId  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EndJoint_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__CapsuleRigidbody_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CapsuleRigidbody_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__CapsuleRigidbody_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CapsuleRigidbody_k__BackingField;
}
constexpr void Oculus::Interaction::Input::BoneCapsule::__cordl_internal_set__CapsuleRigidbody_k__BackingField(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CapsuleRigidbody_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider>& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__CapsuleCollider_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CapsuleCollider_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::CapsuleCollider> const& Oculus::Interaction::Input::BoneCapsule::__cordl_internal_get__CapsuleCollider_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CapsuleCollider_k__BackingField;
}
constexpr void Oculus::Interaction::Input::BoneCapsule::__cordl_internal_set__CapsuleCollider_k__BackingField(::UnityW<::UnityEngine::CapsuleCollider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CapsuleCollider_k__BackingField = value;
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::Input::BoneCapsule::get_StartJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_StartJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::BoneCapsule::set_StartJoint(::Oculus::Interaction::Input::HandJointId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_StartJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Input::HandJointId Oculus::Interaction::Input::BoneCapsule::get_EndJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_EndJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::HandJointId>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::BoneCapsule::set_EndJoint(::Oculus::Interaction::Input::HandJointId  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_EndJoint", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::Input::BoneCapsule::get_CapsuleRigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_CapsuleRigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::BoneCapsule::set_CapsuleRigidbody(::UnityEngine::Rigidbody*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_CapsuleRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::CapsuleCollider> Oculus::Interaction::Input::BoneCapsule::get_CapsuleCollider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"get_CapsuleCollider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CapsuleCollider>>(this, ___internal_method);
}
inline void Oculus::Interaction::Input::BoneCapsule::set_CapsuleCollider(::UnityEngine::CapsuleCollider*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {"set_CapsuleCollider", {}, {::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Input::BoneCapsule::_ctor(::Oculus::Interaction::Input::HandJointId  fromJoint, ::Oculus::Interaction::Input::HandJointId  toJoint, ::UnityEngine::Rigidbody*  body, ::UnityEngine::CapsuleCollider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Input::BoneCapsule*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::Oculus::Interaction::Input::HandJointId>(), ::i2c::type_of<::UnityEngine::Rigidbody*>(), ::i2c::type_of<::UnityEngine::CapsuleCollider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromJoint, toJoint, body, collider);
}
inline ::Oculus::Interaction::Input::BoneCapsule* Oculus::Interaction::Input::BoneCapsule::New_ctor(::Oculus::Interaction::Input::HandJointId  fromJoint, ::Oculus::Interaction::Input::HandJointId  toJoint, ::UnityEngine::Rigidbody*  body, ::UnityEngine::CapsuleCollider*  collider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Input::BoneCapsule*>(fromJoint, toJoint, body, collider));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Input::BoneCapsule::BoneCapsule()   {
}

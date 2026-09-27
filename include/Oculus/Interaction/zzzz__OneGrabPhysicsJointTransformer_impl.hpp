#pragma once
// IWYU pragma private; include "Oculus/Interaction/OneGrabPhysicsJointTransformer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__OneGrabPhysicsJointTransformer_def.hpp"
#include "Oculus/Interaction/zzzz__IGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__ITransformer_def.hpp"
#include "Oculus/Interaction/zzzz__OneGrabPhysicsJointTransformer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__ConfigurableJoint_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Joint_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.get_IsKinematicGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::get_IsKinematicGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44949c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"get_IsKinematicGrab", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.set_IsKinematicGrab
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(bool)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::set_IsKinematicGrab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4494a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"set_IsKinematicGrab", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::OnValidate)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0xa4494ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::Initialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa449c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.BeginTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::BeginTransform)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xa449c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.UpdateTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::UpdateTransform)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa44a220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::FixedUpdate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa44a35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.EndTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::EndTransform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa44a408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.AddJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Joint> (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::AddJoint)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa44a094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"AddJoint", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.RemoveCurrentJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentJoint)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa44a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"RemoveCurrentJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.GetGrabRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::GetGrabRigidbody)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa449e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"GetGrabRigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.RemoveCurrentGrabRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentGrabRigidbody)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa44a4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"RemoveCurrentGrabRigidbody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.CreateRigidBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Rigidbody> (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateRigidBody)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa44a5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateRigidBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.CreateDefaultJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Joint> (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateDefaultJoint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa44a568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateDefaultJoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.CreateJointHolder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateJointHolder)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xa449658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateJointHolder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.CloneJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ConfigurableJoint> (*)(::UnityEngine::ConfigurableJoint*, ::UnityEngine::GameObject*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::CloneJoint)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xa44974c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CloneJoint", {}, {::i2c::type_of<::UnityEngine::ConfigurableJoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.InjectOptionalCustomJoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::UnityEngine::ConfigurableJoint*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalCustomJoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a6e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"InjectOptionalCustomJoint", {}, {::i2c::type_of<::UnityEngine::ConfigurableJoint*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer.InjectOptionalRigidbodiesRoot
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalRigidbodiesRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"InjectOptionalRigidbodiesRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa44a6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::ConfigurableJoint>& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__customJoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customJoint;
}
constexpr ::UnityW<::UnityEngine::ConfigurableJoint> const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__customJoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____customJoint;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__customJoint(::UnityW<::UnityEngine::ConfigurableJoint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____customJoint = value;
}
constexpr bool& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__isKinematicGrab()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKinematicGrab;
}
constexpr bool const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__isKinematicGrab() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isKinematicGrab;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__isKinematicGrab(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isKinematicGrab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__rigidbodiesRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodiesRoot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__rigidbodiesRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodiesRoot;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__rigidbodiesRoot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodiesRoot = value;
}
constexpr ::UnityW<::UnityEngine::Joint>& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__joint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joint;
}
constexpr ::UnityW<::UnityEngine::Joint> const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__joint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____joint;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__joint(::UnityW<::UnityEngine::Joint>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____joint = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__grabbingRigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingRigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__grabbingRigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbingRigidbody;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__grabbingRigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbingRigidbody = value;
}
constexpr ::Oculus::Interaction::IGrabbable*& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__grabbable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr ::Oculus::Interaction::IGrabbable* const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__grabbable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____grabbable;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__grabbable(::Oculus::Interaction::IGrabbable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____grabbable = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__targetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__targetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPosition;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__targetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPosition = value;
}
constexpr ::UnityEngine::Quaternion& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__targetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRotation;
}
constexpr ::UnityEngine::Quaternion const& Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_get__targetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetRotation;
}
constexpr void Oculus::Interaction::OneGrabPhysicsJointTransformer::__cordl_internal_set__targetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetRotation = value;
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::setStaticF__cachedGrabbingRigidbodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*, "_cachedGrabbingRigidbodies", ::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* Oculus::Interaction::OneGrabPhysicsJointTransformer::getStaticF__cachedGrabbingRigidbodies()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*, "_cachedGrabbingRigidbodies", ::Oculus::Interaction::OneGrabPhysicsJointTransformer*>();
}
inline bool Oculus::Interaction::OneGrabPhysicsJointTransformer::get_IsKinematicGrab()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"get_IsKinematicGrab", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::set_IsKinematicGrab(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"set_IsKinematicGrab", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::Initialize(::Oculus::Interaction::IGrabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"Initialize", {}, {::i2c::type_of<::Oculus::Interaction::IGrabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::BeginTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"BeginTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::UpdateTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"UpdateTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::EndTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"EndTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Joint> Oculus::Interaction::OneGrabPhysicsJointTransformer::AddJoint(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"AddJoint", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Joint>>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"RemoveCurrentJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::OneGrabPhysicsJointTransformer::GetGrabRigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"GetGrabRigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::RemoveCurrentGrabRigidbody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"RemoveCurrentGrabRigidbody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Rigidbody> Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateRigidBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateRigidBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Rigidbody>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Joint> Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateDefaultJoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateDefaultJoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Joint>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::GameObject> Oculus::Interaction::OneGrabPhysicsJointTransformer::CreateJointHolder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CreateJointHolder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::ConfigurableJoint> Oculus::Interaction::OneGrabPhysicsJointTransformer::CloneJoint(::UnityEngine::ConfigurableJoint*  joint, ::UnityEngine::GameObject*  destination)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"CloneJoint", {}, {::i2c::type_of<::UnityEngine::ConfigurableJoint*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ConfigurableJoint>>(nullptr, ___internal_method, joint, destination);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalCustomJoint(::UnityEngine::ConfigurableJoint*  customJoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"InjectOptionalCustomJoint", {}, {::i2c::type_of<::UnityEngine::ConfigurableJoint*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customJoint);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::InjectOptionalRigidbodiesRoot(::UnityEngine::Transform*  rigidbodiesRoot)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {"InjectOptionalRigidbodiesRoot", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbodiesRoot);
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer* Oculus::Interaction::OneGrabPhysicsJointTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabPhysicsJointTransformer*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ITransformer"
constexpr  Oculus::Interaction::OneGrabPhysicsJointTransformer::operator ::Oculus::Interaction::ITransformer*() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ITransformer"
constexpr ::Oculus::Interaction::ITransformer* Oculus::Interaction::OneGrabPhysicsJointTransformer::i___Oculus__Interaction__ITransformer() noexcept {
return static_cast<::Oculus::Interaction::ITransformer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabPhysicsJointTransformer::OneGrabPhysicsJointTransformer()   {
}
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::OneGrabPhysicsJointTransformer___c::*)()>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa44a804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c._GetGrabRigidbody_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::OneGrabPhysicsJointTransformer___c::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::OneGrabPhysicsJointTransformer___c::_GetGrabRigidbody_b__20_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa44a80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(),
                        {"<GetGrabRigidbody>b__20_0", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer___c::setStaticF___9(::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*, "<>9", ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(std::forward<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(value));
}
inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c* Oculus::Interaction::OneGrabPhysicsJointTransformer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*, "<>9", ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>();
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer___c::setStaticF___9__20_0(::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*, "<>9__20_0", ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(std::forward<::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*>(value));
}
inline ::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>* Oculus::Interaction::OneGrabPhysicsJointTransformer___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::UnityW<::UnityEngine::Rigidbody>>*, "<>9__20_0", ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>();
}
inline void Oculus::Interaction::OneGrabPhysicsJointTransformer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::OneGrabPhysicsJointTransformer___c::_GetGrabRigidbody_b__20_0(::UnityEngine::Rigidbody*  rb)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>(),
                        {"<GetGrabRigidbody>b__20_0", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rb);
}
inline ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c* Oculus::Interaction::OneGrabPhysicsJointTransformer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::OneGrabPhysicsJointTransformer___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::OneGrabPhysicsJointTransformer___c::OneGrabPhysicsJointTransformer___c()   {
}

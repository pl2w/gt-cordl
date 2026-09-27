#pragma once
// IWYU pragma private; include "Oculus/Interaction/PhysicsGrabbable.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__PhysicsGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__Grabbable_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PhysicsGrabbable_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.get_Pointable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::IPointable* (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::get_Pointable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa484354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"get_Pointable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.set_Pointable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::IPointable*)>(&::Oculus::Interaction::PhysicsGrabbable::set_Pointable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"set_Pointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.add_WhenVelocitiesApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*)>(&::Oculus::Interaction::PhysicsGrabbable::add_WhenVelocitiesApplied)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa484364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"add_WhenVelocitiesApplied", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.remove_WhenVelocitiesApplied
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*)>(&::Oculus::Interaction::PhysicsGrabbable::remove_WhenVelocitiesApplied)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa484414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"remove_WhenVelocitiesApplied", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::Reset)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4844c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::Awake)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4845d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa48462c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::OnEnable)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa484658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::OnDisable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xa484754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.HandlePointerEventRaised
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::PointerEvent)>(&::Oculus::Interaction::PhysicsGrabbable::HandlePointerEventRaised)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa4848fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.AddSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::AddSelection)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa484958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"AddSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.RemoveSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::RemoveSelection)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa484984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"RemoveSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.DisablePhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::DisablePhysics)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4849b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"DisablePhysics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.ReenablePhysics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::ReenablePhysics)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa484868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"ReenablePhysics", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.ApplyVelocities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PhysicsGrabbable::ApplyVelocities)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa484b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::FixedUpdate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa484b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.CachePhysicsState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::CachePhysicsState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4849d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"CachePhysicsState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectAllPhysicsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::IPointable*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa484bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectAllPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectAllPhysicsGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::Grabbable*, ::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa484cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectAllPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::Grabbable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectGrabbable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::Grabbable*)>(&::Oculus::Interaction::PhysicsGrabbable::InjectGrabbable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa484d20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::Grabbable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectPointable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::Oculus::Interaction::IPointable*)>(&::Oculus::Interaction::PhysicsGrabbable::InjectPointable)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa484c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectPointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectRigidbody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::PhysicsGrabbable::InjectRigidbody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa484d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable.InjectOptionalScaleMassWithSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)(bool)>(&::Oculus::Interaction::PhysicsGrabbable::InjectOptionalScaleMassWithSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa484d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectOptionalScaleMassWithSize", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable::*)()>(&::Oculus::Interaction::PhysicsGrabbable::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa484d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__pointable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__pointable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointable;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__pointable(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointable = value;
}
constexpr ::Oculus::Interaction::IPointable*& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__Pointable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pointable_k__BackingField;
}
constexpr ::Oculus::Interaction::IPointable* const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__Pointable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pointable_k__BackingField;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__Pointable_k__BackingField(::Oculus::Interaction::IPointable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pointable_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__rigidbody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__rigidbody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbody;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__rigidbody(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbody = value;
}
constexpr bool& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__scaleMassWithSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleMassWithSize;
}
constexpr bool const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__scaleMassWithSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scaleMassWithSize;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__scaleMassWithSize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scaleMassWithSize = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__initialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialScale = value;
}
constexpr bool& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__hasPendingForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPendingForce;
}
constexpr bool const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__hasPendingForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hasPendingForce;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__hasPendingForce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hasPendingForce = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__linearVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__linearVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linearVelocity;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__linearVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linearVelocity = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocity;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____angularVelocity;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__angularVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____angularVelocity = value;
}
constexpr int32_t& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__selectorsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorsCount;
}
constexpr int32_t const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__selectorsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorsCount;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__selectorsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectorsCount = value;
}
constexpr bool& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get_WhenVelocitiesApplied()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenVelocitiesApplied;
}
constexpr ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* const& Oculus::Interaction::PhysicsGrabbable::__cordl_internal_get_WhenVelocitiesApplied() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenVelocitiesApplied;
}
constexpr void Oculus::Interaction::PhysicsGrabbable::__cordl_internal_set_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenVelocitiesApplied = value;
}
inline ::Oculus::Interaction::IPointable* Oculus::Interaction::PhysicsGrabbable::get_Pointable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"get_Pointable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPointable*>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::set_Pointable(::Oculus::Interaction::IPointable*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"set_Pointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PhysicsGrabbable::add_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"add_WhenVelocitiesApplied", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PhysicsGrabbable::remove_WhenVelocitiesApplied(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"remove_WhenVelocitiesApplied", {}, {::i2c::type_of<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::PhysicsGrabbable::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"HandlePointerEventRaised", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void Oculus::Interaction::PhysicsGrabbable::AddSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"AddSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::RemoveSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"RemoveSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::DisablePhysics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"DisablePhysics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::ReenablePhysics()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"ReenablePhysics", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::ApplyVelocities(::UnityEngine::Vector3  linearVelocity, ::UnityEngine::Vector3  angularVelocity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"ApplyVelocities", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, linearVelocity, angularVelocity);
}
inline void Oculus::Interaction::PhysicsGrabbable::FixedUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"FixedUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::CachePhysicsState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"CachePhysicsState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable(::Oculus::Interaction::IPointable*  pointable, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectAllPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointable, rigidbody);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectAllPhysicsGrabbable(::Oculus::Interaction::Grabbable*  grabbable, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectAllPhysicsGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::Grabbable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable, rigidbody);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectGrabbable(::Oculus::Interaction::Grabbable*  grabbable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectGrabbable", {}, {::i2c::type_of<::Oculus::Interaction::Grabbable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, grabbable);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectPointable(::Oculus::Interaction::IPointable*  pointable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectPointable", {}, {::i2c::type_of<::Oculus::Interaction::IPointable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointable);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectRigidbody(::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectRigidbody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rigidbody);
}
inline void Oculus::Interaction::PhysicsGrabbable::InjectOptionalScaleMassWithSize(bool  scaleMassWithSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {"InjectOptionalScaleMassWithSize", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, scaleMassWithSize);
}
inline void Oculus::Interaction::PhysicsGrabbable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PhysicsGrabbable* Oculus::Interaction::PhysicsGrabbable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PhysicsGrabbable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PhysicsGrabbable::PhysicsGrabbable()   {
}
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable___c::*)()>(&::Oculus::Interaction::PhysicsGrabbable___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa484e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PhysicsGrabbable___c.__ctor_b__35_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PhysicsGrabbable___c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::PhysicsGrabbable___c::__ctor_b__35_0)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa484e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable___c*>(),
                        {"<.ctor>b__35_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Interaction::PhysicsGrabbable___c::setStaticF___9(::Oculus::Interaction::PhysicsGrabbable___c*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PhysicsGrabbable___c*, "<>9", ::Oculus::Interaction::PhysicsGrabbable___c*>(std::forward<::Oculus::Interaction::PhysicsGrabbable___c*>(value));
}
inline ::Oculus::Interaction::PhysicsGrabbable___c* Oculus::Interaction::PhysicsGrabbable___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PhysicsGrabbable___c*, "<>9", ::Oculus::Interaction::PhysicsGrabbable___c*>();
}
inline void Oculus::Interaction::PhysicsGrabbable___c::setStaticF___9__35_0(::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*, "<>9__35_0", ::Oculus::Interaction::PhysicsGrabbable___c*>(std::forward<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*>(value));
}
inline ::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>* Oculus::Interaction::PhysicsGrabbable___c::getStaticF___9__35_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::Vector3,::UnityEngine::Vector3>*, "<>9__35_0", ::Oculus::Interaction::PhysicsGrabbable___c*>();
}
inline void Oculus::Interaction::PhysicsGrabbable___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PhysicsGrabbable___c::__ctor_b__35_0(::UnityEngine::Vector3  _p0_, ::UnityEngine::Vector3  _p1_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PhysicsGrabbable___c*>(),
                        {"<.ctor>b__35_0", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_, _p1_);
}
inline ::Oculus::Interaction::PhysicsGrabbable___c* Oculus::Interaction::PhysicsGrabbable___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PhysicsGrabbable___c*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PhysicsGrabbable___c::PhysicsGrabbable___c()   {
}

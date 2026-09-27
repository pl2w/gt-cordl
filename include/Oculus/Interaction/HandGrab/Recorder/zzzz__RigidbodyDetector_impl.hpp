#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/Recorder/RigidbodyDetector.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/HandGrab/Recorder/zzzz__RigidbodyDetector_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.get_IntersectingBodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)()>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::get_IntersectingBodies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4339a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"get_IntersectingBodies", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.set_IntersectingBodies
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*)>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::set_IntersectingBodies)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4339ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"set_IntersectingBodies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.IgnoreBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::IgnoreBody)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa4324b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"IgnoreBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.UnIgnoreBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Rigidbody*)>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::UnIgnoreBody)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa4339b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"UnIgnoreBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.OnTriggerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerEnter)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa433a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector.OnTriggerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerExit)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa433ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)()>(&::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa433c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*& Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_get__ignoredBodies()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoredBodies;
}
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>* const& Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_get__ignoredBodies() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoredBodies;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_set__ignoredBodies(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoredBodies = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*& Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_get__IntersectingBodies_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IntersectingBodies_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* const& Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_get__IntersectingBodies_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IntersectingBodies_k__BackingField;
}
constexpr void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::__cordl_internal_set__IntersectingBodies_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IntersectingBodies_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>* Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::get_IntersectingBodies()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"get_IntersectingBodies", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::set_IntersectingBodies(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"set_IntersectingBodies", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rigidbody>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::IgnoreBody(::UnityEngine::Rigidbody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"IgnoreBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::UnIgnoreBody(::UnityEngine::Rigidbody*  body)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"UnIgnoreBody", {}, {::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerEnter(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"OnTriggerEnter", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerExit(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {"OnTriggerExit", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector* Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::RigidbodyDetector()   {
}

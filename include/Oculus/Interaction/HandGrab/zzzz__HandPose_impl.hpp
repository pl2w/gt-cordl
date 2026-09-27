#pragma once
// IWYU pragma private; include "Oculus/Interaction/HandGrab/HandPose.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_impl.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__HandPose_def.hpp"
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "Oculus/Interaction/Input/zzzz__JointFreedom_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.get_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Input::Handedness (::Oculus::Interaction::HandGrab::HandPose::*)()>(&::Oculus::Interaction::HandGrab::HandPose::get_Handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e32f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_Handedness", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.set_Handedness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::HandPose::set_Handedness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"set_Handedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.get_JointRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Quaternion> (::Oculus::Interaction::HandGrab::HandPose::*)()>(&::Oculus::Interaction::HandGrab::HandPose::get_JointRotations)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa4e29cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_JointRotations", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.set_JointRotations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)(::ArrayW<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::HandGrab::HandPose::set_JointRotations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e3308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"set_JointRotations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.get_FingersFreedom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::Oculus::Interaction::Input::JointFreedom> (::Oculus::Interaction::HandGrab::HandPose::*)()>(&::Oculus::Interaction::HandGrab::HandPose::get_FingersFreedom)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4e3310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_FingersFreedom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)()>(&::Oculus::Interaction::HandGrab::HandPose::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4e1f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)(::Oculus::Interaction::Input::Handedness)>(&::Oculus::Interaction::HandGrab::HandPose::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa4e338c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)(::Oculus::Interaction::HandGrab::HandPose*)>(&::Oculus::Interaction::HandGrab::HandPose::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4e2bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.CopyFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::HandGrab::HandPose::*)(::Oculus::Interaction::HandGrab::HandPose*, bool)>(&::Oculus::Interaction::HandGrab::HandPose::CopyFrom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xa4dd640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::HandGrab::HandPose.Lerp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Oculus::Interaction::HandGrab::HandPose*>, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>, float_t, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>)>(&::Oculus::Interaction::HandGrab::HandPose::Lerp)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4dd720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Input::Handedness& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__handedness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr ::Oculus::Interaction::Input::Handedness const& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__handedness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handedness;
}
constexpr void Oculus::Interaction::HandGrab::HandPose::__cordl_internal_set__handedness(::Oculus::Interaction::Input::Handedness  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handedness = value;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom>& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__fingersFreedom()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersFreedom;
}
constexpr ::ArrayW<::Oculus::Interaction::Input::JointFreedom> const& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__fingersFreedom() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fingersFreedom;
}
constexpr void Oculus::Interaction::HandGrab::HandPose::__cordl_internal_set__fingersFreedom(::ArrayW<::Oculus::Interaction::Input::JointFreedom>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fingersFreedom = value;
}
constexpr ::ArrayW<::UnityEngine::Quaternion>& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__jointRotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointRotations;
}
constexpr ::ArrayW<::UnityEngine::Quaternion> const& Oculus::Interaction::HandGrab::HandPose::__cordl_internal_get__jointRotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____jointRotations;
}
constexpr void Oculus::Interaction::HandGrab::HandPose::__cordl_internal_set__jointRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____jointRotations = value;
}
inline ::Oculus::Interaction::Input::Handedness Oculus::Interaction::HandGrab::HandPose::get_Handedness()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_Handedness", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Input::Handedness>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandPose::set_Handedness(::Oculus::Interaction::Input::Handedness  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"set_Handedness", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Quaternion> Oculus::Interaction::HandGrab::HandPose::get_JointRotations()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_JointRotations", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Quaternion>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandPose::set_JointRotations(::ArrayW<::UnityEngine::Quaternion>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"set_JointRotations", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::Oculus::Interaction::Input::JointFreedom> Oculus::Interaction::HandGrab::HandPose::get_FingersFreedom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"get_FingersFreedom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Oculus::Interaction::Input::JointFreedom>>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandPose::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::HandGrab::HandPose::_ctor(::Oculus::Interaction::Input::Handedness  handedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::Input::Handedness>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handedness);
}
inline void Oculus::Interaction::HandGrab::HandPose::_ctor(::Oculus::Interaction::HandGrab::HandPose*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, other);
}
inline void Oculus::Interaction::HandGrab::HandPose::CopyFrom(::Oculus::Interaction::HandGrab::HandPose*  from, bool  mirrorHandedness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"CopyFrom", {}, {::i2c::type_of<::Oculus::Interaction::HandGrab::HandPose*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, mirrorHandedness);
}
inline void Oculus::Interaction::HandGrab::HandPose::Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  to, float_t  t, ::by_ref<::Oculus::Interaction::HandGrab::HandPose*>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::HandGrab::HandPose*>(),
                        {"Lerp", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::HandGrab::HandPose*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to, t, result);
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::HandPose::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandPose*>());
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::HandPose::New_ctor(::Oculus::Interaction::Input::Handedness  handedness)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandPose*>(handedness));
}
inline ::Oculus::Interaction::HandGrab::HandPose* Oculus::Interaction::HandGrab::HandPose::New_ctor(::Oculus::Interaction::HandGrab::HandPose*  other)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::HandGrab::HandPose*>(other));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::HandGrab::HandPose::HandPose()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/TransformExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__TransformExtensions_def.hpp"
#include "Oculus/Interaction/zzzz__TransformExtensions_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions.InverseTransformPointUnscaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TransformExtensions::InverseTransformPointUnscaled)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xa402884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"InverseTransformPointUnscaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions.TransformPointUnscaled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Oculus::Interaction::TransformExtensions::TransformPointUnscaled)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xa4029cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"TransformPointUnscaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions.TransformBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Bounds>)>(&::Oculus::Interaction::TransformExtensions::TransformBounds)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa402adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"TransformBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions.FindChildRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::StringW)>(&::Oculus::Interaction::TransformExtensions::FindChildRecursive)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa402d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"FindChildRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions.FindChildRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (*)(::UnityEngine::Transform*, ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*)>(&::Oculus::Interaction::TransformExtensions::FindChildRecursive)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0xa402dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"FindChildRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformExtensions::InverseTransformPointUnscaled(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"InverseTransformPointUnscaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transform, position);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::TransformExtensions::TransformPointUnscaled(::UnityEngine::Transform*  transform, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"TransformPointUnscaled", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, transform, position);
}
inline ::UnityEngine::Bounds Oculus::Interaction::TransformExtensions::TransformBounds(::UnityEngine::Transform*  transform, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"TransformBounds", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, transform, bounds);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::TransformExtensions::FindChildRecursive(::UnityEngine::Transform*  parent, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"FindChildRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, parent, name);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::TransformExtensions::FindChildRecursive(::UnityEngine::Transform*  parent, ::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions*>(),
                        {"FindChildRecursive", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::System::Predicate_1<::UnityW<::UnityEngine::Transform>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(nullptr, ___internal_method, parent, predicate);
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformExtensions::TransformExtensions()   {
}
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::*)()>(&::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa402dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0._FindChildRecursive_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::_FindChildRecursive_b__0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa403100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*>(),
                        {"<FindChildRecursive>b__0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___name = value;
}
inline void Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::_FindChildRecursive_b__0(::UnityEngine::Transform*  child)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*>(),
                        {"<FindChildRecursive>b__0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, child);
}
inline ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0* Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TransformExtensions___c__DisplayClass3_0::TransformExtensions___c__DisplayClass3_0()   {
}

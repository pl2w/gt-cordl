#pragma once
// IWYU pragma private; include "Oculus/Interaction/PressureSquishable.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/zzzz__PressureSquishable_def.hpp"
#include "Oculus/Interaction/HandGrab/zzzz__IHandGrabUseDelegate_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PressureSquishable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureSquishable::*)()>(&::Oculus::Interaction::PressureSquishable::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa42c8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                    {::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureSquishable.BeginUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureSquishable::*)()>(&::Oculus::Interaction::PressureSquishable::BeginUse)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42c8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"BeginUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureSquishable.EndUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureSquishable::*)()>(&::Oculus::Interaction::PressureSquishable::EndUse)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa42c8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"EndUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureSquishable.ComputeUseStrength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::PressureSquishable::*)(float_t)>(&::Oculus::Interaction::PressureSquishable::ComputeUseStrength)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa42c930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PressureSquishable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PressureSquishable::*)()>(&::Oculus::Interaction::PressureSquishable::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa42c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& Oculus::Interaction::PressureSquishable::__cordl_internal_get__squishableObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squishableObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Oculus::Interaction::PressureSquishable::__cordl_internal_get__squishableObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____squishableObject;
}
constexpr void Oculus::Interaction::PressureSquishable::__cordl_internal_set__squishableObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____squishableObject = value;
}
constexpr float_t& Oculus::Interaction::PressureSquishable::__cordl_internal_get__maxSquish()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSquish;
}
constexpr float_t const& Oculus::Interaction::PressureSquishable::__cordl_internal_get__maxSquish() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSquish;
}
constexpr void Oculus::Interaction::PressureSquishable::__cordl_internal_set__maxSquish(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSquish = value;
}
constexpr float_t& Oculus::Interaction::PressureSquishable::__cordl_internal_get__maxStretch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStretch;
}
constexpr float_t const& Oculus::Interaction::PressureSquishable::__cordl_internal_get__maxStretch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxStretch;
}
constexpr void Oculus::Interaction::PressureSquishable::__cordl_internal_set__maxStretch(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxStretch = value;
}
constexpr bool& Oculus::Interaction::PressureSquishable::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::PressureSquishable::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::PressureSquishable::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PressureSquishable::__cordl_internal_get__initialScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PressureSquishable::__cordl_internal_get__initialScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialScale;
}
constexpr void Oculus::Interaction::PressureSquishable::__cordl_internal_set__initialScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialScale = value;
}
inline void Oculus::Interaction::PressureSquishable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureSquishable::BeginUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"BeginUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::PressureSquishable::EndUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"EndUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Oculus::Interaction::PressureSquishable::ComputeUseStrength(float_t  strength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {"ComputeUseStrength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, strength);
}
inline void Oculus::Interaction::PressureSquishable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PressureSquishable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::PressureSquishable* Oculus::Interaction::PressureSquishable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PressureSquishable*>());
}
/// @brief Convert operator to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr  Oculus::Interaction::PressureSquishable::operator ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::HandGrab::IHandGrabUseDelegate"
constexpr ::Oculus::Interaction::HandGrab::IHandGrabUseDelegate* Oculus::Interaction::PressureSquishable::i___Oculus__Interaction__HandGrab__IHandGrabUseDelegate() noexcept {
return static_cast<::Oculus::Interaction::HandGrab::IHandGrabUseDelegate*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PressureSquishable::PressureSquishable()   {
}

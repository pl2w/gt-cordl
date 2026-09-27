#pragma once
// IWYU pragma private; include "Oculus/Interaction/Utils/FilteredTransform.hpp"
#include "Oculus/Interaction/Input/zzzz__OneEuroFilterPropertyBlock_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Utils/zzzz__FilteredTransform_def.hpp"
#include "Oculus/Interaction/Input/zzzz__IOneEuroFilter_1_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Utils::FilteredTransform.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Utils::FilteredTransform::*)()>(&::Oculus::Interaction::Utils::FilteredTransform::Start)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4d7bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                    {::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Utils::FilteredTransform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Utils::FilteredTransform::*)()>(&::Oculus::Interaction::Utils::FilteredTransform::Update)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa4d7c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                    {::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Utils::FilteredTransform.InjectAllFilteredTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Utils::FilteredTransform::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Utils::FilteredTransform::InjectAllFilteredTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {"InjectAllFilteredTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Utils::FilteredTransform.InjectSourceTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Utils::FilteredTransform::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Utils::FilteredTransform::InjectSourceTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4d7f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {"InjectSourceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Utils::FilteredTransform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Utils::FilteredTransform::*)()>(&::Oculus::Interaction::Utils::FilteredTransform::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4d7f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__sourceTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__sourceTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sourceTransform;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__sourceTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sourceTransform = value;
}
constexpr bool& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__filterPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterPosition;
}
constexpr bool const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__filterPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterPosition;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__filterPosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterPosition = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__positionFilterProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilterProperties;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__positionFilterProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilterProperties;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__positionFilterProperties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFilterProperties = value;
}
constexpr bool& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__filterRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterRotation;
}
constexpr bool const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__filterRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterRotation;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__filterRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterRotation = value;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__rotationFilterProperties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilterProperties;
}
constexpr ::Oculus::Interaction::Input::OneEuroFilterPropertyBlock const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__rotationFilterProperties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilterProperties;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__rotationFilterProperties(::Oculus::Interaction::Input::OneEuroFilterPropertyBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationFilterProperties = value;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__positionFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>* const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__positionFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____positionFilter;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__positionFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____positionFilter = value;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__rotationFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr ::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>* const& Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_get__rotationFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationFilter;
}
constexpr void Oculus::Interaction::Utils::FilteredTransform::__cordl_internal_set__rotationFilter(::Oculus::Interaction::Input::IOneEuroFilter_1<::UnityEngine::Quaternion>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationFilter = value;
}
inline void Oculus::Interaction::Utils::FilteredTransform::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Utils::FilteredTransform::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Utils::FilteredTransform::InjectAllFilteredTransform(::UnityEngine::Transform*  sourceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {"InjectAllFilteredTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceTransform);
}
inline void Oculus::Interaction::Utils::FilteredTransform::InjectSourceTransform(::UnityEngine::Transform*  sourceTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {"InjectSourceTransform", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceTransform);
}
inline void Oculus::Interaction::Utils::FilteredTransform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Utils::FilteredTransform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Utils::FilteredTransform* Oculus::Interaction::Utils::FilteredTransform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Utils::FilteredTransform*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Utils::FilteredTransform::FilteredTransform()   {
}

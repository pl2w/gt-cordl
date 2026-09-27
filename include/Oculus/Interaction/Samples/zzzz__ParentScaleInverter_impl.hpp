#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/ParentScaleInverter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Samples/zzzz__ParentScaleInverter_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Samples::ParentScaleInverter.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ParentScaleInverter::*)()>(&::Oculus::Interaction::Samples::ParentScaleInverter::Start)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa43d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ParentScaleInverter.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ParentScaleInverter::*)()>(&::Oculus::Interaction::Samples::ParentScaleInverter::LateUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa43d528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Samples::ParentScaleInverter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Samples::ParentScaleInverter::*)()>(&::Oculus::Interaction::Samples::ParentScaleInverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa43d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_get__initialLocalScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLocalScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_get__initialLocalScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialLocalScale;
}
constexpr void Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_set__initialLocalScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialLocalScale = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_get__initialParentScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialParentScale;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_get__initialParentScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initialParentScale;
}
constexpr void Oculus::Interaction::Samples::ParentScaleInverter::__cordl_internal_set__initialParentScale(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initialParentScale = value;
}
inline void Oculus::Interaction::Samples::ParentScaleInverter::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ParentScaleInverter::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Samples::ParentScaleInverter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Samples::ParentScaleInverter*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Samples::ParentScaleInverter* Oculus::Interaction::Samples::ParentScaleInverter::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Samples::ParentScaleInverter*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Samples::ParentScaleInverter::ParentScaleInverter()   {
}

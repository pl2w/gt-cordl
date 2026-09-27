#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XROriginUpAlignment.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginUpAlignment_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment.get_targetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::get_targetUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb449a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {"get_targetUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment.set_targetUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::set_targetUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb449a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {"set_targetUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::Apply)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb449a78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::__cordl_internal_get__targetUp_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetUp_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::__cordl_internal_get__targetUp_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetUp_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::__cordl_internal_set__targetUp_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetUp_k__BackingField = value;
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::get_targetUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {"get_targetUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::set_targetUp(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {"set_targetUp", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment* UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginUpAlignment::XROriginUpAlignment()   {
}

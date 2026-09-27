#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XROriginMovement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XROriginMovement_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement.get_motion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::get_motion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb44983c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"get_motion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement.set_motion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)(::UnityEngine::Vector3)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::set_motion)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb449848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"set_motion", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement.get_forceUnconstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::get_forceUnconstrained)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"get_forceUnconstrained", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement.set_forceUnconstrained
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::set_forceUnconstrained)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44985c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"set_forceUnconstrained", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement.Apply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::Apply)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb449864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4499a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_get__motion_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motion_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_get__motion_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____motion_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_set__motion_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____motion_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_get__forceUnconstrained_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceUnconstrained_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_get__forceUnconstrained_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____forceUnconstrained_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::__cordl_internal_set__forceUnconstrained_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____forceUnconstrained_k__BackingField = value;
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::get_motion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"get_motion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::set_motion(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"set_motion", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::get_forceUnconstrained()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"get_forceUnconstrained", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::set_forceUnconstrained(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {"set_forceUnconstrained", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::Apply(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  body)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, body);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement* UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr  UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::operator ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation* UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::i___UnityEngine__XR__Interaction__Toolkit__Locomotion__IXRBodyTransformation() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XROriginMovement::XROriginMovement()   {
}

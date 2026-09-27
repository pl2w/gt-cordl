#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRMovableBody.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IConstrainedXRBodyManipulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyPositionEvaluator_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.get_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::XROrigin> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.set_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.get_originTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_originTransform)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb449984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_originTransform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.get_bodyPositionEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_bodyPositionEvaluator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_bodyPositionEvaluator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.set_bodyPositionEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_bodyPositionEvaluator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_bodyPositionEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.get_constrainedManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_constrainedManipulator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_constrainedManipulator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.set_constrainedManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_constrainedManipulator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44b170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_constrainedManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)(::Unity::XR::CoreUtils::XROrigin*, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb44aca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.GetBodyGroundLocalPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::GetBodyGroundLocalPosition)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb44b178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"GetBodyGroundLocalPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.GetBodyGroundWorldPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::GetBodyGroundWorldPosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb449a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"GetBodyGroundWorldPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.LinkConstrainedManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::LinkConstrainedManipulator)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb44a290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"LinkConstrainedManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody.UnlinkConstrainedManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::UnlinkConstrainedManipulator)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44a1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"UnlinkConstrainedManipulator", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__xrOrigin_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrOrigin_k__BackingField;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__xrOrigin_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____xrOrigin_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_set__xrOrigin_k__BackingField(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____xrOrigin_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__bodyPositionEvaluator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPositionEvaluator_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__bodyPositionEvaluator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyPositionEvaluator_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_set__bodyPositionEvaluator_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyPositionEvaluator_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__constrainedManipulator_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedManipulator_k__BackingField;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_get__constrainedManipulator_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constrainedManipulator_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::__cordl_internal_set__constrainedManipulator_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____constrainedManipulator_k__BackingField = value;
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_xrOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_originTransform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_originTransform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_bodyPositionEvaluator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_bodyPositionEvaluator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_bodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_bodyPositionEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::get_constrainedManipulator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"get_constrainedManipulator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::set_constrainedManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"set_constrainedManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::_ctor(::Unity::XR::CoreUtils::XROrigin*  xrOrigin, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xrOrigin, bodyPositionEvaluator);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::GetBodyGroundLocalPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"GetBodyGroundLocalPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::GetBodyGroundWorldPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"GetBodyGroundWorldPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::LinkConstrainedManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  manipulator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"LinkConstrainedManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manipulator);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::UnlinkConstrainedManipulator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(),
                        {"UnlinkConstrainedManipulator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::New_ctor(::Unity::XR::CoreUtils::XROrigin*  xrOrigin, ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  bodyPositionEvaluator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*>(xrOrigin, bodyPositionEvaluator));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody::XRMovableBody()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/XRBodyTransformer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__XROrigin_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__ApplyBodyTransformationsEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IConstrainedXRBodyManipulator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyPositionEvaluator_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__IXRBodyTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_OrderedTransformation_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRMovableBody_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.get_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Unity::XR::CoreUtils::XROrigin> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_xrOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.set_xrOrigin
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::Unity::XR::CoreUtils::XROrigin*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_xrOrigin)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb449fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.get_bodyPositionEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_bodyPositionEvaluator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44a0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_bodyPositionEvaluator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.set_bodyPositionEvaluator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_bodyPositionEvaluator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb44a0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_bodyPositionEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.get_constrainedBodyManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_constrainedBodyManipulator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44a184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_constrainedBodyManipulator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.set_constrainedBodyManipulator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_constrainedBodyManipulator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb44a18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_constrainedBodyManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.get_useCharacterControllerIfExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_useCharacterControllerIfExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44a420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_useCharacterControllerIfExists", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.set_useCharacterControllerIfExists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_useCharacterControllerIfExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb44a428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_useCharacterControllerIfExists", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.add_beforeApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::add_beforeApplyTransformations)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44a430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"add_beforeApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.remove_beforeApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::remove_beforeApplyTransformations)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44a4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"remove_beforeApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.add_afterApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::add_afterApplyTransformations)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"add_afterApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.remove_afterApplyTransformations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::remove_afterApplyTransformations)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb44a640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"remove_afterApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::Reset)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb44a6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnEnable)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xb44a768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb44aa34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::Update)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb44ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.InitializeMovableBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::InitializeMovableBody)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb44a054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"InitializeMovableBody", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.QueueTransformation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*, int32_t)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::QueueTransformation)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb44acec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"QueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xb44ae34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb44b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin>& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_XROrigin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr ::UnityW<::Unity::XR::CoreUtils::XROrigin> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_XROrigin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_XROrigin;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_XROrigin(::UnityW<::Unity::XR::CoreUtils::XROrigin>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_XROrigin = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_BodyPositionEvaluatorObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyPositionEvaluatorObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_BodyPositionEvaluatorObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyPositionEvaluatorObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_BodyPositionEvaluatorObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BodyPositionEvaluatorObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_BodyPositionEvaluator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyPositionEvaluator;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_BodyPositionEvaluator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BodyPositionEvaluator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_BodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BodyPositionEvaluator = value;
}
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ConstrainedBodyManipulatorObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedBodyManipulatorObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ConstrainedBodyManipulatorObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedBodyManipulatorObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_ConstrainedBodyManipulatorObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConstrainedBodyManipulatorObject = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ConstrainedBodyManipulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedBodyManipulator;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ConstrainedBodyManipulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConstrainedBodyManipulator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_ConstrainedBodyManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConstrainedBodyManipulator = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UseCharacterControllerIfExists()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCharacterControllerIfExists;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UseCharacterControllerIfExists() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UseCharacterControllerIfExists;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_UseCharacterControllerIfExists(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UseCharacterControllerIfExists = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_beforeApplyTransformations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeApplyTransformations;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_beforeApplyTransformations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___beforeApplyTransformations;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___beforeApplyTransformations = value;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_afterApplyTransformations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterApplyTransformations;
}
constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_afterApplyTransformations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___afterApplyTransformations;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___afterApplyTransformations = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UsingDynamicBodyPositionEvaluator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingDynamicBodyPositionEvaluator;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UsingDynamicBodyPositionEvaluator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingDynamicBodyPositionEvaluator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_UsingDynamicBodyPositionEvaluator(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsingDynamicBodyPositionEvaluator = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UsingDynamicConstrainedBodyManipulator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingDynamicConstrainedBodyManipulator;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_UsingDynamicConstrainedBodyManipulator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_UsingDynamicConstrainedBodyManipulator;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_UsingDynamicConstrainedBodyManipulator(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_UsingDynamicConstrainedBodyManipulator = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_MovableBody()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovableBody;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_MovableBody() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MovableBody;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_MovableBody(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRMovableBody*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MovableBody = value;
}
constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_TransformationsQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformationsQueue;
}
constexpr ::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_TransformationsQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TransformationsQueue;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_TransformationsQueue(::System::Collections::Generic::LinkedList_1<::GlobalNamespace::XRBodyTransformer_OrderedTransformation>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TransformationsQueue = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ApplyTransformationsEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyTransformationsEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs* const& UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_get_m_ApplyTransformationsEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ApplyTransformationsEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::__cordl_internal_set_m_ApplyTransformationsEventArgs(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ApplyTransformationsEventArgs = value;
}
inline ::UnityW<::Unity::XR::CoreUtils::XROrigin> UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_xrOrigin()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_xrOrigin", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Unity::XR::CoreUtils::XROrigin>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_xrOrigin(::Unity::XR::CoreUtils::XROrigin*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_xrOrigin", {}, {::i2c::type_of<::Unity::XR::CoreUtils::XROrigin*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_bodyPositionEvaluator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_bodyPositionEvaluator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_bodyPositionEvaluator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_bodyPositionEvaluator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyPositionEvaluator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_constrainedBodyManipulator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_constrainedBodyManipulator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_constrainedBodyManipulator(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_constrainedBodyManipulator", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IConstrainedXRBodyManipulator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::get_useCharacterControllerIfExists()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"get_useCharacterControllerIfExists", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::set_useCharacterControllerIfExists(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"set_useCharacterControllerIfExists", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::add_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"add_beforeApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::remove_beforeApplyTransformations(::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"remove_beforeApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::add_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"add_afterApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::remove_afterApplyTransformations(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"remove_afterApplyTransformations", {}, {::i2c::type_of<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::InitializeMovableBody()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"InitializeMovableBody", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::QueueTransformation(::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*  transformation, int32_t  priority)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {"QueueTransformation", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::IXRBodyTransformation*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transformation, priority);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer* UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer::XRBodyTransformer()   {
}

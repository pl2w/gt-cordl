#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/ApplyBodyTransformationsEventArgs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__ApplyBodyTransformationsEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Locomotion/zzzz__XRBodyTransformer_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs.get_bodyTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> (::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::get_bodyTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {"get_bodyTransformer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs.set_bodyTransformer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::*)(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*)>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::set_bodyTransformer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {"set_bodyTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb449fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::__cordl_internal_get__bodyTransformer_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyTransformer_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::__cordl_internal_get__bodyTransformer_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bodyTransformer_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::__cordl_internal_set__bodyTransformer_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bodyTransformer_k__BackingField = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::get_bodyTransformer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {"get_bodyTransformer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::set_bodyTransformer(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {"set_bodyTransformer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs* UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs::ApplyBodyTransformationsEventArgs()   {
}

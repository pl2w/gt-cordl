#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformConfig.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__UpVectorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformConfig_def.hpp"
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeatureStateThresholds_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformConfig::*)()>(&::Oculus::Interaction::PoseDetection::TransformConfig::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4a68e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformConfig.get_InstanceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::PoseDetection::TransformConfig::*)()>(&::Oculus::Interaction::PoseDetection::TransformConfig::get_InstanceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4a6974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {"get_InstanceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::PoseDetection::TransformConfig.set_InstanceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::PoseDetection::TransformConfig::*)(int32_t)>(&::Oculus::Interaction::PoseDetection::TransformConfig::set_InstanceId)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0xa4a697c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {"set_InstanceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_PositionOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_PositionOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionOffset;
}
constexpr void Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_set_PositionOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionOffset = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_RotationOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationOffset;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_RotationOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationOffset;
}
constexpr void Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_set_RotationOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationOffset = value;
}
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_UpVectorType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpVectorType;
}
constexpr ::Oculus::Interaction::PoseDetection::UpVectorType const& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_UpVectorType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpVectorType;
}
constexpr void Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_set_UpVectorType(::Oculus::Interaction::PoseDetection::UpVectorType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpVectorType = value;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_FeatureThresholds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FeatureThresholds;
}
constexpr ::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds> const& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get_FeatureThresholds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FeatureThresholds;
}
constexpr void Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_set_FeatureThresholds(::UnityW<::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FeatureThresholds = value;
}
constexpr int32_t& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get__InstanceId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstanceId_k__BackingField;
}
constexpr int32_t const& Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_get__InstanceId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____InstanceId_k__BackingField;
}
constexpr void Oculus::Interaction::PoseDetection::TransformConfig::__cordl_internal_set__InstanceId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____InstanceId_k__BackingField = value;
}
inline void Oculus::Interaction::PoseDetection::TransformConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Oculus::Interaction::PoseDetection::TransformConfig::get_InstanceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {"get_InstanceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::PoseDetection::TransformConfig::set_InstanceId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PoseDetection::TransformConfig*>(),
                        {"set_InstanceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::PoseDetection::TransformConfig* Oculus::Interaction::PoseDetection::TransformConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PoseDetection::TransformConfig*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::PoseDetection::TransformConfig::TransformConfig()   {
}

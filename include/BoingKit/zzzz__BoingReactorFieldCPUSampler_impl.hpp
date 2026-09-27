#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorFieldCPUSampler.hpp"
#include "BoingKit/zzzz__BoingManager_UpdateMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BoingKit/zzzz__BoingReactorFieldCPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingReactorFieldCPUSampler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldCPUSampler::*)()>(&::BoingKit::BoingReactorFieldCPUSampler::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e20cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldCPUSampler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldCPUSampler::*)()>(&::BoingKit::BoingReactorFieldCPUSampler::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e20d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldCPUSampler.SampleFromField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldCPUSampler::*)()>(&::BoingKit::BoingReactorFieldCPUSampler::SampleFromField)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5e20d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"SampleFromField", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldCPUSampler.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldCPUSampler::*)()>(&::BoingKit::BoingReactorFieldCPUSampler::Restore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e21144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"Restore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldCPUSampler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldCPUSampler::*)()>(&::BoingKit::BoingReactorFieldCPUSampler::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e21190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BoingKit::BoingReactorField>& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_ReactorField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr ::UnityW<::BoingKit::BoingReactorField> const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_ReactorField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactorField = value;
}
constexpr ::GlobalNamespace::BoingManager_UpdateMode& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_UpdateMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMode;
}
constexpr ::GlobalNamespace::BoingManager_UpdateMode const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_UpdateMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UpdateMode;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_UpdateMode(::GlobalNamespace::BoingManager_UpdateMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UpdateMode = value;
}
constexpr float_t& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_PositionSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr float_t const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_PositionSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_PositionSampleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionSampleMultiplier = value;
}
constexpr float_t& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_RotationSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr float_t const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_RotationSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_RotationSampleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationSampleMultiplier = value;
}
constexpr ::UnityEngine::Vector3& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_m_objPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_objPosition;
}
constexpr ::UnityEngine::Vector3 const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_m_objPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_objPosition;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_m_objPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_objPosition = value;
}
constexpr ::UnityEngine::Quaternion& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_m_objRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_objRotation;
}
constexpr ::UnityEngine::Quaternion const& BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_get_m_objRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_objRotation;
}
constexpr void BoingKit::BoingReactorFieldCPUSampler::__cordl_internal_set_m_objRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_objRotation = value;
}
inline void BoingKit::BoingReactorFieldCPUSampler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldCPUSampler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldCPUSampler::SampleFromField()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"SampleFromField", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldCPUSampler::Restore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {"Restore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldCPUSampler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldCPUSampler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingReactorFieldCPUSampler* BoingKit::BoingReactorFieldCPUSampler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactorFieldCPUSampler*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactorFieldCPUSampler::BoingReactorFieldCPUSampler()   {
}

#pragma once
// IWYU pragma private; include "BoingKit/BoingReactorFieldGPUSampler.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BoingKit/zzzz__BoingReactorFieldGPUSampler_def.hpp"
#include "BoingKit/zzzz__BoingReactorField_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::BoingKit::BoingReactorFieldGPUSampler.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldGPUSampler::*)()>(&::BoingKit::BoingReactorFieldGPUSampler::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e211a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldGPUSampler.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldGPUSampler::*)()>(&::BoingKit::BoingReactorFieldGPUSampler::OnDisable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e21200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldGPUSampler.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldGPUSampler::*)()>(&::BoingKit::BoingReactorFieldGPUSampler::Update)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5e21258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BoingKit::BoingReactorFieldGPUSampler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BoingKit::BoingReactorFieldGPUSampler::*)()>(&::BoingKit::BoingReactorFieldGPUSampler::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e214c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BoingKit::BoingReactorField>& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_ReactorField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr ::UnityW<::BoingKit::BoingReactorField> const& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_ReactorField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ReactorField;
}
constexpr void BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_set_ReactorField(::UnityW<::BoingKit::BoingReactorField>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ReactorField = value;
}
constexpr float_t& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_PositionSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr float_t const& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_PositionSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PositionSampleMultiplier;
}
constexpr void BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_set_PositionSampleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PositionSampleMultiplier = value;
}
constexpr float_t& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_RotationSampleMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr float_t const& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_RotationSampleMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotationSampleMultiplier;
}
constexpr void BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_set_RotationSampleMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotationSampleMultiplier = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_m_matProps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_matProps;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_m_matProps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_matProps;
}
constexpr void BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_set_m_matProps(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_matProps = value;
}
constexpr int32_t& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_m_fieldResourceSetId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldResourceSetId;
}
constexpr int32_t const& BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_get_m_fieldResourceSetId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_fieldResourceSetId;
}
constexpr void BoingKit::BoingReactorFieldGPUSampler::__cordl_internal_set_m_fieldResourceSetId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_fieldResourceSetId = value;
}
inline void BoingKit::BoingReactorFieldGPUSampler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldGPUSampler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldGPUSampler::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BoingKit::BoingReactorFieldGPUSampler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::BoingKit::BoingReactorFieldGPUSampler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BoingKit::BoingReactorFieldGPUSampler* BoingKit::BoingReactorFieldGPUSampler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BoingKit::BoingReactorFieldGPUSampler*>());
}
// Ctor Parameters []
constexpr ::BoingKit::BoingReactorFieldGPUSampler::BoingReactorFieldGPUSampler()   {
}

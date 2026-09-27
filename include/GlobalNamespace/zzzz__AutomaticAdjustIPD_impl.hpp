#pragma once
// IWYU pragma private; include "GlobalNamespace/AutomaticAdjustIPD.hpp"
#include "UnityEngine/XR/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__AutomaticAdjustIPD_def.hpp"
#include "GlobalNamespace/zzzz__IGorillaSliceableSimple_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AutomaticAdjustIPD.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticAdjustIPD::*)()>(&::GlobalNamespace::AutomaticAdjustIPD::OnEnable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a0848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticAdjustIPD.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticAdjustIPD::*)()>(&::GlobalNamespace::AutomaticAdjustIPD::OnDisable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57a0854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticAdjustIPD.SliceUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticAdjustIPD::*)()>(&::GlobalNamespace::AutomaticAdjustIPD::SliceUpdate)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x57a0860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"SliceUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AutomaticAdjustIPD._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AutomaticAdjustIPD::*)()>(&::GlobalNamespace::AutomaticAdjustIPD::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x57a0a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::InputDevice& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_headset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headset;
}
constexpr ::UnityEngine::XR::InputDevice const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_headset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___headset;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_headset(::UnityEngine::XR::InputDevice  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___headset = value;
}
constexpr float_t& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_currentIPD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIPD;
}
constexpr float_t const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_currentIPD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIPD;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_currentIPD(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIPD = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_leftEyePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEyePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_leftEyePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___leftEyePosition;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_leftEyePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___leftEyePosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_rightEyePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEyePosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_rightEyePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rightEyePosition;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_rightEyePosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rightEyePosition = value;
}
constexpr bool& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_testOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testOverride;
}
constexpr bool const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_testOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testOverride;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_testOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testOverride = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_adjustXScaleObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustXScaleObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_adjustXScaleObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___adjustXScaleObjects;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_adjustXScaleObjects(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___adjustXScaleObjects = value;
}
constexpr float_t& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_sizeAt58mm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeAt58mm;
}
constexpr float_t const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_sizeAt58mm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeAt58mm;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_sizeAt58mm(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeAt58mm = value;
}
constexpr float_t& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_sizeAt63mm()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeAt63mm;
}
constexpr float_t const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_sizeAt63mm() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sizeAt63mm;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_sizeAt63mm(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sizeAt63mm = value;
}
constexpr float_t& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_lastIPD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIPD;
}
constexpr float_t const& GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_get_lastIPD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastIPD;
}
constexpr void GlobalNamespace::AutomaticAdjustIPD::__cordl_internal_set_lastIPD(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastIPD = value;
}
inline void GlobalNamespace::AutomaticAdjustIPD::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticAdjustIPD::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticAdjustIPD::SliceUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {"SliceUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::AutomaticAdjustIPD::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AutomaticAdjustIPD*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::AutomaticAdjustIPD* GlobalNamespace::AutomaticAdjustIPD::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::AutomaticAdjustIPD*>());
}
/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr  GlobalNamespace::AutomaticAdjustIPD::operator ::GlobalNamespace::IGorillaSliceableSimple*() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* GlobalNamespace::AutomaticAdjustIPD::i___GlobalNamespace__IGorillaSliceableSimple() noexcept {
return static_cast<::GlobalNamespace::IGorillaSliceableSimple*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AutomaticAdjustIPD::AutomaticAdjustIPD()   {
}

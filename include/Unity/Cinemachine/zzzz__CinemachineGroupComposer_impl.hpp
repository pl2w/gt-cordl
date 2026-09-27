#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupComposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_AdjustmentMode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_FramingMode_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_AdjustmentMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupComposer_FramingMode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::OnValidate)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xaed25f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::Reset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaed2690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.get_LastBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::get_LastBounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed26cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"get_LastBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.set_LastBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)(::UnityEngine::Bounds)>(&::Unity::Cinemachine::CinemachineGroupComposer::set_LastBounds)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed26e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"set_LastBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.get_LastBoundsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::get_LastBoundsMatrix)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed26fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"get_LastBoundsMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.set_LastBoundsMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)(::UnityEngine::Matrix4x4)>(&::Unity::Cinemachine::CinemachineGroupComposer::set_LastBoundsMatrix)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaed2714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"set_LastBoundsMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xaed272c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineGroupComposer::MutateCameraState)> {
  constexpr static std::size_t size = 0x968;
  constexpr static std::size_t addrs = 0xaed2750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.GetTargetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineGroupComposer::*)(::UnityEngine::Vector2)>(&::Unity::Cinemachine::CinemachineGroupComposer::GetTargetHeight)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaed3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"GetTargetHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.GetScreenSpaceGroupBoundingBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (*)(::Unity::Cinemachine::ICinemachineTargetGroup*, ::UnityEngine::Matrix4x4, ::by_ref<::UnityEngine::Vector3>)>(&::Unity::Cinemachine::CinemachineGroupComposer::GetScreenSpaceGroupBoundingBox)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0xaed30b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"GetScreenSpaceGroupBoundingBox", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)(::Unity::Cinemachine::CinemachineGroupFraming*)>(&::Unity::Cinemachine::CinemachineGroupComposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaed3488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupComposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupComposer::*)()>(&::Unity::Cinemachine::CinemachineGroupComposer::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaed34e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_GroupFramingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_GroupFramingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_GroupFramingSize;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_GroupFramingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_GroupFramingSize = value;
}
constexpr ::GlobalNamespace::CinemachineGroupComposer_FramingMode& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_FramingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FramingMode;
}
constexpr ::GlobalNamespace::CinemachineGroupComposer_FramingMode const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_FramingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FramingMode;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_FramingMode(::GlobalNamespace::CinemachineGroupComposer_FramingMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FramingMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_FrameDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_FrameDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FrameDamping;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_FrameDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FrameDamping = value;
}
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_AdjustmentMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdjustmentMode;
}
constexpr ::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_AdjustmentMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AdjustmentMode;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_AdjustmentMode(::GlobalNamespace::CinemachineGroupComposer_AdjustmentMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AdjustmentMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaxDollyIn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyIn;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaxDollyIn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyIn;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MaxDollyIn(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDollyIn = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaxDollyOut()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyOut;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaxDollyOut() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaxDollyOut;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MaxDollyOut(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaxDollyOut = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumDistance;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MinimumDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumDistance;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MaximumDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumFOV;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MinimumFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumFOV = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumFOV;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MaximumFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumFOV = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumOrthoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOrthoSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MinimumOrthoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MinimumOrthoSize;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MinimumOrthoSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MinimumOrthoSize = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumOrthoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumOrthoSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_MaximumOrthoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MaximumOrthoSize;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_MaximumOrthoSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MaximumOrthoSize = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_prevFramingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFramingDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_prevFramingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFramingDistance;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_prevFramingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevFramingDistance = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_prevFOV()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFOV;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get_m_prevFOV() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_prevFOV;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set_m_prevFOV(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_prevFOV = value;
}
constexpr ::UnityEngine::Bounds& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get__LastBounds_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBounds_k__BackingField;
}
constexpr ::UnityEngine::Bounds const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get__LastBounds_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBounds_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set__LastBounds_k__BackingField(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBounds_k__BackingField = value;
}
constexpr ::UnityEngine::Matrix4x4& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get__LastBoundsMatrix_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBoundsMatrix_k__BackingField;
}
constexpr ::UnityEngine::Matrix4x4 const& Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_get__LastBoundsMatrix_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastBoundsMatrix_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineGroupComposer::__cordl_internal_set__LastBoundsMatrix_k__BackingField(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastBoundsMatrix_k__BackingField = value;
}
inline void Unity::Cinemachine::CinemachineGroupComposer::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineGroupComposer::get_LastBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"get_LastBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::set_LastBounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"set_LastBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 Unity::Cinemachine::CinemachineGroupComposer::get_LastBoundsMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"get_LastBoundsMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::set_LastBoundsMatrix(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"set_LastBoundsMatrix", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Unity::Cinemachine::CinemachineGroupComposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline float_t Unity::Cinemachine::CinemachineGroupComposer::GetTargetHeight(::UnityEngine::Vector2  boundsSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"GetTargetHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, boundsSize);
}
inline ::UnityEngine::Bounds Unity::Cinemachine::CinemachineGroupComposer::GetScreenSpaceGroupBoundingBox(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::UnityEngine::Matrix4x4  observer, ::by_ref<::UnityEngine::Vector3>  newFwd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"GetScreenSpaceGroupBoundingBox", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(nullptr, ___internal_method, group, observer, newFwd);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::UpgradeToCm3(::Unity::Cinemachine::CinemachineGroupFraming*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineGroupComposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupComposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineGroupComposer* Unity::Cinemachine::CinemachineGroupComposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineGroupComposer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineGroupComposer::CinemachineGroupComposer()   {
}

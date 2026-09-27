#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineGroupFraming.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_FramingModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_LateralAdjustmentModes_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_SizeAdjustmentModes_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_FramingModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_LateralAdjustmentModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_SizeAdjustmentModes_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineGroupFraming_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ICinemachineTargetGroup_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming::OnValidate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xae94044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming::Reset)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae940d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineGroupFraming::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae94164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineGroupFraming::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xae9416c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.OrthoFraming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::Unity::Cinemachine::ICinemachineTargetGroup*, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineGroupFraming::OrthoFraming)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0xae944f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"OrthoFraming", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.PerspectiveFraming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::Unity::Cinemachine::ICinemachineTargetGroup*, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineGroupFraming::PerspectiveFraming)> {
  constexpr static std::size_t size = 0x9ec;
  constexpr static std::size_t addrs = 0xae948cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"PerspectiveFraming", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.AdjustSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)(::Unity::Cinemachine::ICinemachineTargetGroup*, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::Unity::Cinemachine::CinemachineGroupFraming::AdjustSize)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xae95c6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"AdjustSize", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.ComputeCameraViewGroupBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)(::Unity::Cinemachine::ICinemachineTargetGroup*, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>, bool)>(&::Unity::Cinemachine::CinemachineGroupFraming::ComputeCameraViewGroupBounds)> {
  constexpr static std::size_t size = 0x944;
  constexpr static std::size_t addrs = 0xae95328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"ComputeCameraViewGroupBounds", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming.GetFrameHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineGroupFraming::*)(::UnityEngine::Vector2, float_t)>(&::Unity::Cinemachine::CinemachineGroupFraming::GetFrameHeight)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae952b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"GetFrameHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xae95e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineGroupFraming_FramingModes& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FramingMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramingMode;
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_FramingModes const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FramingMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramingMode;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_FramingMode(::GlobalNamespace::CinemachineGroupFraming_FramingModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FramingMode = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FramingSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramingSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FramingSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FramingSize;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_FramingSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FramingSize = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_CenterOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOffset;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_CenterOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CenterOffset;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_CenterOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CenterOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_SizeAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SizeAdjustment;
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_SizeAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SizeAdjustment;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_SizeAdjustment(::GlobalNamespace::CinemachineGroupFraming_SizeAdjustmentModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SizeAdjustment = value;
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_LateralAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LateralAdjustment;
}
constexpr ::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_LateralAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LateralAdjustment;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_LateralAdjustment(::GlobalNamespace::CinemachineGroupFraming_LateralAdjustmentModes  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LateralAdjustment = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FovRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovRange;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_FovRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovRange;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_FovRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FovRange = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_DollyRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DollyRange;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_DollyRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DollyRange;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_DollyRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DollyRange = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_OrthoSizeRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrthoSizeRange;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_OrthoSizeRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OrthoSizeRange;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_OrthoSizeRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OrthoSizeRange = value;
}
constexpr ::UnityEngine::Bounds& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_GroupBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupBounds;
}
constexpr ::UnityEngine::Bounds const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_GroupBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupBounds;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_GroupBounds(::UnityEngine::Bounds  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupBounds = value;
}
constexpr ::UnityEngine::Matrix4x4& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_GroupBoundsMatrix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupBoundsMatrix;
}
constexpr ::UnityEngine::Matrix4x4 const& Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_get_GroupBoundsMatrix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GroupBoundsMatrix;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming::__cordl_internal_set_GroupBoundsMatrix(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GroupBoundsMatrix = value;
}
inline void Unity::Cinemachine::CinemachineGroupFraming::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineGroupFraming::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::OrthoFraming(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*  extra, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"OrthoFraming", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, group, extra, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::PerspectiveFraming(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*  extra, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"PerspectiveFraming", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(), ::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, group, extra, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::AdjustSize(::Unity::Cinemachine::ICinemachineTargetGroup*  group, float_t  aspect, ::by_ref<::UnityEngine::Vector3>  camPos, ::by_ref<::UnityEngine::Quaternion>  camRot, ::by_ref<float_t>  fov, ::by_ref<float_t>  dollyAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"AdjustSize", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, aspect, camPos, camRot, fov, dollyAmount);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::ComputeCameraViewGroupBounds(::Unity::Cinemachine::ICinemachineTargetGroup*  group, ::by_ref<::UnityEngine::Vector3>  camPos, ::by_ref<::UnityEngine::Quaternion>  camRot, bool  moveCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"ComputeCameraViewGroupBounds", {}, {::i2c::type_of<::Unity::Cinemachine::ICinemachineTargetGroup*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, group, camPos, camRot, moveCamera);
}
inline float_t Unity::Cinemachine::CinemachineGroupFraming::GetFrameHeight(::UnityEngine::Vector2  boundsSize, float_t  aspect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {"GetFrameHeight", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, boundsSize, aspect);
}
inline void Unity::Cinemachine::CinemachineGroupFraming::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineGroupFraming* Unity::Cinemachine::CinemachineGroupFraming::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineGroupFraming*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineGroupFraming::CinemachineGroupFraming()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::Reset)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xae94458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae95eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_PosAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosAdjustment;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_PosAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PosAdjustment;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_PosAdjustment(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PosAdjustment = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_RotAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotAdjustment;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_RotAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RotAdjustment;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_RotAdjustment(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RotAdjustment = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_FovAdjustment()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovAdjustment;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_FovAdjustment() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FovAdjustment;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_FovAdjustment(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FovAdjustment = value;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_Stage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stage;
}
constexpr ::GlobalNamespace::CinemachineCore_Stage const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_Stage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stage;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_Stage(::GlobalNamespace::CinemachineCore_Stage  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stage = value;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_Confiner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Confiner;
}
constexpr ::UnityW<::Unity::Cinemachine::CinemachineConfiner2D> const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_Confiner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Confiner;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_Confiner(::UnityW<::Unity::Cinemachine::CinemachineConfiner2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Confiner = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_PreviousOrthoSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousOrthoSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_get_PreviousOrthoSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousOrthoSize;
}
constexpr void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::__cordl_internal_set_PreviousOrthoSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousOrthoSize = value;
}
inline void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState* Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineGroupFraming_VcamExtraState::CinemachineGroupFraming_VcamExtraState()   {
}

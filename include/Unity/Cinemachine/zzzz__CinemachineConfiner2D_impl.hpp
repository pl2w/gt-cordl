#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner2D.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_ShapeCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_OversizeWindowSettings_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_ShapeCache_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "Unity/Cinemachine/zzzz__ConfinerOven_def.hpp"
#include "Unity/Cinemachine/zzzz__LensSettings_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::OnValidate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae89b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae89bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae89be8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner2D::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xae89c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.InvalidateLensCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::InvalidateLensCache)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xae89d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateLensCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.InvalidateBoundingShapeCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::InvalidateBoundingShapeCache)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae89e68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateBoundingShapeCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.InvalidateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::InvalidateCache)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xae89f34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.get_BoundingShapeIsBaked
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::get_BoundingShapeIsBaked)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xae89f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"get_BoundingShapeIsBaked", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.BakeBoundingShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner2D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, float_t)>(&::Unity::Cinemachine::CinemachineConfiner2D::BakeBoundingShape)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xae89f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"BakeBoundingShape", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineConfiner2D::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x608;
  constexpr static std::size_t addrs = 0xae8aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.ConfinePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineConfiner2D::*)(::UnityEngine::Vector3, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner2D::ConfinePoint)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xae8b0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.GetDistanceFromEdge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner2D::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner2D::GetDistanceFromEdge)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xae8b1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"GetDistanceFromEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D.CalculateHalfFrustumHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::Unity::Cinemachine::LensSettings>, ::by_ref<float_t>)>(&::Unity::Cinemachine::CinemachineConfiner2D::CalculateHalfFrustumHeight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae8b068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"CalculateHalfFrustumHeight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae8b27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider2D>& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_BoundingShape2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingShape2D;
}
constexpr ::UnityW<::UnityEngine::Collider2D> const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_BoundingShape2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BoundingShape2D;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_BoundingShape2D(::UnityW<::UnityEngine::Collider2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BoundingShape2D = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Damping;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Damping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_SlowingDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlowingDistance;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_SlowingDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SlowingDistance;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_SlowingDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SlowingDistance = value;
}
constexpr ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_OversizeWindow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OversizeWindow;
}
constexpr ::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_OversizeWindow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OversizeWindow;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_OversizeWindow(::GlobalNamespace::CinemachineConfiner2D_OversizeWindowSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OversizeWindow = value;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_ExtraStateCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraStateCache;
}
constexpr ::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>* const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_ExtraStateCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ExtraStateCache;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_m_ExtraStateCache(::System::Collections::Generic::List_1<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ExtraStateCache = value;
}
constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_ShapeCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShapeCache;
}
constexpr ::GlobalNamespace::CinemachineConfiner2D_ShapeCache const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_ShapeCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ShapeCache;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_m_ShapeCache(::GlobalNamespace::CinemachineConfiner2D_ShapeCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ShapeCache = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_LegacyMaxWindowSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyMaxWindowSize;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_get_m_LegacyMaxWindowSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LegacyMaxWindowSize;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D::__cordl_internal_set_m_LegacyMaxWindowSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LegacyMaxWindowSize = value;
}
inline void Unity::Cinemachine::CinemachineConfiner2D::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineConfiner2D::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::OnTargetObjectWarped(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::InvalidateLensCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateLensCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::InvalidateBoundingShapeCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateBoundingShapeCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::InvalidateCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"InvalidateCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineConfiner2D::get_BoundingShapeIsBaked()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"get_BoundingShapeIsBaked", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineConfiner2D::BakeBoundingShape(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, float_t  maxTimeInSeconds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"BakeBoundingShape", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam, maxTimeInSeconds);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineConfiner2D::ConfinePoint(::UnityEngine::Vector3  pos, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*  extra, ::UnityEngine::Vector3  fwd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, pos, extra, fwd);
}
inline float_t Unity::Cinemachine::CinemachineConfiner2D::GetDistanceFromEdge(::UnityEngine::Vector3  p, ::UnityEngine::Vector3  dirUnit, float_t  max, ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*  extra, ::UnityEngine::Vector3  fwd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"GetDistanceFromEdge", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, p, dirUnit, max, extra, fwd);
}
inline float_t Unity::Cinemachine::CinemachineConfiner2D::CalculateHalfFrustumHeight(/* [IsReadOnly] */ ::by_ref<::Unity::Cinemachine::LensSettings>  lens, /* [IsReadOnly] */ ::by_ref<float_t>  cameraPosLocalZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {"CalculateHalfFrustumHeight", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::LensSettings>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, lens, cameraPosLocalZ);
}
inline void Unity::Cinemachine::CinemachineConfiner2D::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner2D* Unity::Cinemachine::CinemachineConfiner2D::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner2D*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner2D::CinemachineConfiner2D()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae8b28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Cinemachine::ConfinerOven_BakedSolution*& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_BakedSolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BakedSolution;
}
constexpr ::Unity::Cinemachine::ConfinerOven_BakedSolution* const& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_BakedSolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BakedSolution;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_set_BakedSolution(::Unity::Cinemachine::ConfinerOven_BakedSolution*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BakedSolution = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_PreviousDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_PreviousDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDisplacement = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_DampedDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampedDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_DampedDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DampedDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_set_DampedDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DampedDisplacement = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_PreviousCameraPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_PreviousCameraPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousCameraPosition;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_set_PreviousCameraPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousCameraPosition = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_FrustumHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrustumHeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_get_FrustumHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FrustumHeight;
}
constexpr void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::__cordl_internal_set_FrustumHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FrustumHeight = value;
}
inline void Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState* Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner2D_VcamExtraState::CinemachineConfiner2D_VcamExtraState()   {
}

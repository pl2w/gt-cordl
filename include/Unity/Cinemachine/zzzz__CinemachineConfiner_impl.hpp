#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineConfiner.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_Mode_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineExtension_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner2D_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner3D_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_Mode_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineConfiner_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineVirtualCameraBase_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.CameraWasDisplaced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineConfiner::CameraWasDisplaced)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeca918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.GetCameraDisplacementDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*)>(&::Unity::Cinemachine::CinemachineConfiner::GetCameraDisplacementDistance)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaeca930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::Reset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeca998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::OnValidate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaeca9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.ConnectToVcam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)(bool)>(&::Unity::Cinemachine::CinemachineConfiner::ConnectToVcam)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaeca9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::get_IsValid)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xaeca9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecab1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.PostPipelineStageCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)(::Unity::Cinemachine::CinemachineVirtualCameraBase*, ::GlobalNamespace::CinemachineCore_Stage, ::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineConfiner::PostPipelineStageCallback)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xaecab24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.InvalidatePathCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::InvalidatePathCache)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaecb45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"InvalidatePathCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.InvalidateCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::InvalidateCache)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xaecb460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"InvalidateCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.ValidatePathCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::ValidatePathCache)> {
  constexpr static std::size_t size = 0x734;
  constexpr static std::size_t addrs = 0xaecb488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ValidatePathCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.ConfinePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineConfiner::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineConfiner::ConfinePoint)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0xaecb0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.ConfineOrthoCameraToScreenEdges
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineConfiner::*)(::by_ref<::Unity::Cinemachine::CameraState>)>(&::Unity::Cinemachine::CinemachineConfiner::ConfineOrthoCameraToScreenEdges)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xaecad08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ConfineOrthoCameraToScreenEdges", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.UpgradeToCm3_GetTargetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3_GetTargetType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xaecbbbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3_GetTargetType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)(::Unity::Cinemachine::CinemachineConfiner3D*)>(&::Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xaecbc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner3D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)(::Unity::Cinemachine::CinemachineConfiner2D*)>(&::Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xaecbc64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner::*)()>(&::Unity::Cinemachine::CinemachineConfiner::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaecbca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::CinemachineConfiner_Mode& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_ConfineMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfineMode;
}
constexpr ::GlobalNamespace::CinemachineConfiner_Mode const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_ConfineMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfineMode;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_ConfineMode(::GlobalNamespace::CinemachineConfiner_Mode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConfineMode = value;
}
constexpr ::UnityW<::UnityEngine::Collider>& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingVolume;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingVolume;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_BoundingVolume(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundingVolume = value;
}
constexpr ::UnityW<::UnityEngine::Collider2D>& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingShape2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingShape2D;
}
constexpr ::UnityW<::UnityEngine::Collider2D> const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingShape2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingShape2D;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_BoundingShape2D(::UnityW<::UnityEngine::Collider2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundingShape2D = value;
}
constexpr ::UnityW<::UnityEngine::Collider2D>& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingShape2DCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingShape2DCache;
}
constexpr ::UnityW<::UnityEngine::Collider2D> const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_BoundingShape2DCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BoundingShape2DCache;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_BoundingShape2DCache(::UnityW<::UnityEngine::Collider2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BoundingShape2DCache = value;
}
constexpr bool& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_ConfineScreenEdges()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfineScreenEdges;
}
constexpr bool const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_ConfineScreenEdges() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConfineScreenEdges;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_ConfineScreenEdges(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConfineScreenEdges = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_Damping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Damping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_Damping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Damping;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_Damping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Damping = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_PathCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathCache;
}
constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>* const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_PathCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathCache;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_PathCache(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PathCache = value;
}
constexpr int32_t& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_PathTotalPointCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathTotalPointCount;
}
constexpr int32_t const& Unity::Cinemachine::CinemachineConfiner::__cordl_internal_get_m_PathTotalPointCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PathTotalPointCount;
}
constexpr void Unity::Cinemachine::CinemachineConfiner::__cordl_internal_set_m_PathTotalPointCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PathTotalPointCount = value;
}
inline bool Unity::Cinemachine::CinemachineConfiner::CameraWasDisplaced(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"CameraWasDisplaced", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, vcam);
}
inline float_t Unity::Cinemachine::CinemachineConfiner::GetCameraDisplacementDistance(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"GetCameraDisplacementDistance", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineVirtualCameraBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, vcam);
}
inline void Unity::Cinemachine::CinemachineConfiner::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner::ConnectToVcam(bool  connect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connect);
}
inline bool Unity::Cinemachine::CinemachineConfiner::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Unity::Cinemachine::CinemachineConfiner::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner::PostPipelineStageCallback(::Unity::Cinemachine::CinemachineVirtualCameraBase*  vcam, ::GlobalNamespace::CinemachineCore_Stage  stage, ::by_ref<::Unity::Cinemachine::CameraState>  state, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, vcam, stage, state, deltaTime);
}
inline void Unity::Cinemachine::CinemachineConfiner::InvalidatePathCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"InvalidatePathCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner::InvalidateCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"InvalidateCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Unity::Cinemachine::CinemachineConfiner::ValidatePathCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ValidatePathCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineConfiner::ConfinePoint(::UnityEngine::Vector3  camPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ConfinePoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, camPos);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineConfiner::ConfineOrthoCameraToScreenEdges(::by_ref<::Unity::Cinemachine::CameraState>  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"ConfineOrthoCameraToScreenEdges", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, state);
}
inline ::System::Type* Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3_GetTargetType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3_GetTargetType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3(::Unity::Cinemachine::CinemachineConfiner3D*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner3D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineConfiner::UpgradeToCm3(::Unity::Cinemachine::CinemachineConfiner2D*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineConfiner2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineConfiner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner* Unity::Cinemachine::CinemachineConfiner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner::CinemachineConfiner()   {
}
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineConfiner_VcamExtraState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineConfiner_VcamExtraState::*)()>(&::Unity::Cinemachine::CinemachineConfiner_VcamExtraState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaecbcb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_get_PreviousDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_get_PreviousDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreviousDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_set_PreviousDisplacement(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreviousDisplacement = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_get_ConfinerDisplacement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfinerDisplacement;
}
constexpr float_t const& Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_get_ConfinerDisplacement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConfinerDisplacement;
}
constexpr void Unity::Cinemachine::CinemachineConfiner_VcamExtraState::__cordl_internal_set_ConfinerDisplacement(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConfinerDisplacement = value;
}
inline void Unity::Cinemachine::CinemachineConfiner_VcamExtraState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineConfiner_VcamExtraState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineConfiner_VcamExtraState* Unity::Cinemachine::CinemachineConfiner_VcamExtraState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineConfiner_VcamExtraState*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineConfiner_VcamExtraState::CinemachineConfiner_VcamExtraState()   {
}

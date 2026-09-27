#pragma once
// IWYU pragma private; include "Unity/Cinemachine/CinemachineComposer.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComponentBase_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_FovCache_impl.hpp"
#include "Unity/Cinemachine/zzzz__PositionPredictor_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__CameraState_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineComposer_FovCache_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineCore_Stage_def.hpp"
#include "Unity/Cinemachine/zzzz__CinemachineRotationComposer_def.hpp"
#include "Unity/Cinemachine/zzzz__ScreenComposerSettings_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_IsValid)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec90a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_Stage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CinemachineCore_Stage (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_Stage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaec9130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec9138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.set_TrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineComposer::set_TrackedPoint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaec9144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.GetLookAtPointAndSetTrackedPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineComposer::GetLookAtPointAndSetTrackedPoint)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xaec9150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.OnTargetObjectWarped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Transform*, ::UnityEngine::Vector3)>(&::Unity::Cinemachine::CinemachineComposer::OnTargetObjectWarped)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xaec9324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.ForceCameraPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Unity::Cinemachine::CinemachineComposer::ForceCameraPosition)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaec9424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.GetMaxDampTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::GetMaxDampTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaec9488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.PrePipelineMutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineComposer::PrePipelineMutateCameraState)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xaec9498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.MutateCameraState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, float_t)>(&::Unity::Cinemachine::CinemachineComposer::MutateCameraState)> {
  constexpr static std::size_t size = 0x738;
  constexpr static std::size_t addrs = 0xaec9528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                    {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_SoftGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_SoftGuideRect)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xaec9c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_SoftGuideRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.set_SoftGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachineComposer::set_SoftGuideRect)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xaeca164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_SoftGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_HardGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_HardGuideRect)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xaec9c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_HardGuideRect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.set_HardGuideRect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::UnityEngine::Rect)>(&::Unity::Cinemachine::CinemachineComposer::set_HardGuideRect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xaeca1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_HardGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.RotateToScreenBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::by_ref<::Unity::Cinemachine::CameraState>, ::UnityEngine::Rect, ::UnityEngine::Vector3, ::by_ref<::UnityEngine::Quaternion>, float_t, float_t, float_t)>(&::Unity::Cinemachine::CinemachineComposer::RotateToScreenBounds)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xaec9f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"RotateToScreenBounds", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.ClampVerticalBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Cinemachine::CinemachineComposer::*)(::by_ref<::UnityEngine::Rect>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Unity::Cinemachine::CinemachineComposer::ClampVerticalBounds)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xaeca1ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"ClampVerticalBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.get_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Cinemachine::ScreenComposerSettings (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::get_Composition)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xaeca2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_Composition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.set_Composition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::Unity::Cinemachine::ScreenComposerSettings)>(&::Unity::Cinemachine::CinemachineComposer::set_Composition)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xaeca310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer.UpgradeToCm3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)(::Unity::Cinemachine::CinemachineRotationComposer*)>(&::Unity::Cinemachine::CinemachineComposer::UpgradeToCm3)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaeca368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineRotationComposer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Cinemachine::CinemachineComposer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Cinemachine::CinemachineComposer::*)()>(&::Unity::Cinemachine::CinemachineComposer::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xaeca400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_TrackedObjectOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjectOffset;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_TrackedObjectOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TrackedObjectOffset;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_TrackedObjectOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TrackedObjectOffset = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadTime;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadTime;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_LookaheadTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadTime = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadSmoothing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadSmoothing;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadSmoothing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadSmoothing;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_LookaheadSmoothing(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadSmoothing = value;
}
constexpr bool& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadIgnoreY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadIgnoreY;
}
constexpr bool const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookaheadIgnoreY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookaheadIgnoreY;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_LookaheadIgnoreY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookaheadIgnoreY = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_HorizontalDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_HorizontalDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalDamping;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_HorizontalDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HorizontalDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_VerticalDamping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalDamping;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_VerticalDamping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalDamping;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_VerticalDamping(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_VerticalDamping = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenX;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenX;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_ScreenX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenX = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenY;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenY;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_ScreenY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenY = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_DeadZoneWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneWidth;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_DeadZoneWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneWidth;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_DeadZoneWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZoneWidth = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_DeadZoneHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneHeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_DeadZoneHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeadZoneHeight;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_DeadZoneHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeadZoneHeight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_SoftZoneWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneWidth;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_SoftZoneWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneWidth;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_SoftZoneWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SoftZoneWidth = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_SoftZoneHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneHeight;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_SoftZoneHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SoftZoneHeight;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_SoftZoneHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SoftZoneHeight = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_BiasX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasX;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_BiasX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasX;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_BiasX(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BiasX = value;
}
constexpr float_t& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_BiasY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasY;
}
constexpr float_t const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_BiasY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_BiasY;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_BiasY(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_BiasY = value;
}
constexpr bool& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CenterOnActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterOnActivate;
}
constexpr bool const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CenterOnActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CenterOnActivate;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_CenterOnActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CenterOnActivate = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get__TrackedPoint_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get__TrackedPoint_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TrackedPoint_k__BackingField;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set__TrackedPoint_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TrackedPoint_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CameraPosPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraPosPrevFrame;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CameraPosPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraPosPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_CameraPosPrevFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraPosPrevFrame = value;
}
constexpr ::UnityEngine::Vector3& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookAtPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAtPrevFrame;
}
constexpr ::UnityEngine::Vector3 const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_LookAtPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LookAtPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_LookAtPrevFrame(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LookAtPrevFrame = value;
}
constexpr ::UnityEngine::Vector2& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenOffsetPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenOffsetPrevFrame;
}
constexpr ::UnityEngine::Vector2 const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_ScreenOffsetPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ScreenOffsetPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_ScreenOffsetPrevFrame(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ScreenOffsetPrevFrame = value;
}
constexpr ::UnityEngine::Quaternion& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CameraOrientationPrevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraOrientationPrevFrame;
}
constexpr ::UnityEngine::Quaternion const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_CameraOrientationPrevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraOrientationPrevFrame;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_CameraOrientationPrevFrame(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraOrientationPrevFrame = value;
}
constexpr ::Unity::Cinemachine::PositionPredictor& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_Predictor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr ::Unity::Cinemachine::PositionPredictor const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_m_Predictor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Predictor;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_m_Predictor(::Unity::Cinemachine::PositionPredictor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Predictor = value;
}
constexpr ::GlobalNamespace::CinemachineComposer_FovCache& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_mCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCache;
}
constexpr ::GlobalNamespace::CinemachineComposer_FovCache const& Unity::Cinemachine::CinemachineComposer::__cordl_internal_get_mCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mCache;
}
constexpr void Unity::Cinemachine::CinemachineComposer::__cordl_internal_set_mCache(::GlobalNamespace::CinemachineComposer_FovCache  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mCache = value;
}
inline bool Unity::Cinemachine::CinemachineComposer::get_IsValid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::GlobalNamespace::CinemachineCore_Stage Unity::Cinemachine::CinemachineComposer::get_Stage()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CinemachineCore_Stage>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineComposer::get_TrackedPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_TrackedPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComposer::set_TrackedPoint(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_TrackedPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Unity::Cinemachine::CinemachineComposer::GetLookAtPointAndSetTrackedPoint(::UnityEngine::Vector3  lookAt, ::UnityEngine::Vector3  up, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, lookAt, up, deltaTime);
}
inline void Unity::Cinemachine::CinemachineComposer::OnTargetObjectWarped(::UnityEngine::Transform*  target, ::UnityEngine::Vector3  positionDelta)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, positionDelta);
}
inline void Unity::Cinemachine::CinemachineComposer::ForceCameraPosition(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pos, rot);
}
inline float_t Unity::Cinemachine::CinemachineComposer::GetMaxDampTime()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComposer::PrePipelineMutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline void Unity::Cinemachine::CinemachineComposer::MutateCameraState(::by_ref<::Unity::Cinemachine::CameraState>  curState, float_t  deltaTime)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curState, deltaTime);
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachineComposer::get_SoftGuideRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_SoftGuideRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComposer::set_SoftGuideRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_SoftGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect Unity::Cinemachine::CinemachineComposer::get_HardGuideRect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_HardGuideRect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComposer::set_HardGuideRect(::UnityEngine::Rect  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_HardGuideRect", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineComposer::RotateToScreenBounds(::by_ref<::Unity::Cinemachine::CameraState>  state, ::UnityEngine::Rect  screenRect, ::UnityEngine::Vector3  trackedPoint, ::by_ref<::UnityEngine::Quaternion>  rigOrientation, float_t  fov, float_t  fovH, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"RotateToScreenBounds", {}, {::i2c::type_of<::by_ref<::Unity::Cinemachine::CameraState>>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, screenRect, trackedPoint, rigOrientation, fov, fovH, deltaTime);
}
inline bool Unity::Cinemachine::CinemachineComposer::ClampVerticalBounds(::by_ref<::UnityEngine::Rect>  r, ::UnityEngine::Vector3  dir, ::UnityEngine::Vector3  up, float_t  fov)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"ClampVerticalBounds", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, r, dir, up, fov);
}
inline ::Unity::Cinemachine::ScreenComposerSettings Unity::Cinemachine::CinemachineComposer::get_Composition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"get_Composition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Cinemachine::ScreenComposerSettings>(this, ___internal_method);
}
inline void Unity::Cinemachine::CinemachineComposer::set_Composition(::Unity::Cinemachine::ScreenComposerSettings  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"set_Composition", {}, {::i2c::type_of<::Unity::Cinemachine::ScreenComposerSettings>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Unity::Cinemachine::CinemachineComposer::UpgradeToCm3(::Unity::Cinemachine::CinemachineRotationComposer*  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {"UpgradeToCm3", {}, {::i2c::type_of<::Unity::Cinemachine::CinemachineRotationComposer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, c);
}
inline void Unity::Cinemachine::CinemachineComposer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Cinemachine::CinemachineComposer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Unity::Cinemachine::CinemachineComposer* Unity::Cinemachine::CinemachineComposer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::Cinemachine::CinemachineComposer*>());
}
// Ctor Parameters []
constexpr ::Unity::Cinemachine::CinemachineComposer::CinemachineComposer()   {
}

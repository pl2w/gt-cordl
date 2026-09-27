#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/HandExpressionCapture.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionCapture_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.get_icon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_icon", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.set_icon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)(::UnityEngine::Sprite*)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_icon", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.get_leftHandCapturedPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_leftHandCapturedPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_leftHandCapturedPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.set_leftHandCapturedPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)(::ArrayW<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_leftHandCapturedPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_leftHandCapturedPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.get_rightHandCapturedPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Pose> (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_rightHandCapturedPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_rightHandCapturedPoses", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture.set_rightHandCapturedPoses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)(::ArrayW<::UnityEngine::Pose>)>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_rightHandCapturedPoses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c8998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_rightHandCapturedPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4c89a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_Icon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Icon;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_Icon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Icon;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_set_m_Icon(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Icon = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_LeftCapturedPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftCapturedPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_LeftCapturedPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LeftCapturedPoses;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_set_m_LeftCapturedPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LeftCapturedPoses = value;
}
constexpr ::ArrayW<::UnityEngine::Pose>& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_RightCapturedPoses()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightCapturedPoses;
}
constexpr ::ArrayW<::UnityEngine::Pose> const& UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_get_m_RightCapturedPoses() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RightCapturedPoses;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::__cordl_internal_set_m_RightCapturedPoses(::ArrayW<::UnityEngine::Pose>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RightCapturedPoses = value;
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_icon()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_icon", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_icon(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_icon", {}, {::i2c::type_of<::UnityEngine::Sprite*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Pose> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_leftHandCapturedPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_leftHandCapturedPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_leftHandCapturedPoses(::ArrayW<::UnityEngine::Pose>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_leftHandCapturedPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Pose> UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::get_rightHandCapturedPoses()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"get_rightHandCapturedPoses", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Pose>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::set_rightHandCapturedPoses(::ArrayW<::UnityEngine::Pose>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {"set_rightHandCapturedPoses", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Pose>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture* UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture::HandExpressionCapture()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/MovingPlatform.hpp"
#include "GlobalNamespace/zzzz__BasePlatform_impl.hpp"
#include "GlobalNamespace/zzzz__MovingPlatform_PlatformType_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MovingPlatform_def.hpp"
#include "GTMathUtil/zzzz__CriticalSpringDamper_def.hpp"
#include "GlobalNamespace/zzzz__MovingPlatform_PlatformType_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.InitTimeOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::InitTimeOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595af58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"InitTimeOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.InitTimeOffsetMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::InitTimeOffsetMs)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x595af68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"InitTimeOffsetMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.NetworkTimeMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::NetworkTimeMs)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x595af9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.CycleLengthMs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::CycleLengthMs)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x595b078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleLengthMs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.PlatformTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::PlatformTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x595b0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"PlatformTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.CycleCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::CycleCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x595b0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.CycleCompletionPercent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::CycleCompletionPercent)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x595b138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleCompletionPercent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.CycleForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::CycleForward)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x595b1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::Awake)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x595b230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::OnEnable)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x595b3e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.UpdatePointToPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::UpdatePointToPoint)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x595b4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdatePointToPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.UpdateArc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::UpdateArc)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x595b4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateArc", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.UpdateRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::UpdateRotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x595b5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.UpdateContinuousRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::UpdateContinuousRotation)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x595b610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateContinuousRotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.SetupContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::SetupContext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x595b730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"SetupContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::Update)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x595b860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform.ThisFrameMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::ThisFrameMovement)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x595bad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"ThisFrameMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MovingPlatform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MovingPlatform::*)()>(&::GlobalNamespace::MovingPlatform::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x595bae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MovingPlatform_PlatformType& GlobalNamespace::MovingPlatform::__cordl_internal_get_platformType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformType;
}
constexpr ::GlobalNamespace::MovingPlatform_PlatformType const& GlobalNamespace::MovingPlatform::__cordl_internal_get_platformType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformType;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_platformType(::GlobalNamespace::MovingPlatform_PlatformType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformType = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_cycleLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleLength;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_cycleLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cycleLength;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_cycleLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cycleLength = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_smoothingHalflife()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothingHalflife;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_smoothingHalflife() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothingHalflife;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_smoothingHalflife(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothingHalflife = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotateStartAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotateStartAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateStartAmt;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_rotateStartAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateStartAmt = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotateAmt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotateAmt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotateAmt;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_rotateAmt(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotateAmt = value;
}
constexpr bool& GlobalNamespace::MovingPlatform::__cordl_internal_get_reverseDirOnCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDirOnCycle;
}
constexpr bool const& GlobalNamespace::MovingPlatform::__cordl_internal_get_reverseDirOnCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDirOnCycle;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_reverseDirOnCycle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseDirOnCycle = value;
}
constexpr bool& GlobalNamespace::MovingPlatform::__cordl_internal_get_reverseDir()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDir;
}
constexpr bool const& GlobalNamespace::MovingPlatform::__cordl_internal_get_reverseDir() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverseDir;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_reverseDir(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverseDir = value;
}
constexpr ::GTMathUtil::CriticalSpringDamper*& GlobalNamespace::MovingPlatform::__cordl_internal_get_springCD()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springCD;
}
constexpr ::GTMathUtil::CriticalSpringDamper* const& GlobalNamespace::MovingPlatform::__cordl_internal_get_springCD() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___springCD;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_springCD(::GTMathUtil::CriticalSpringDamper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___springCD = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& GlobalNamespace::MovingPlatform::__cordl_internal_get_rb()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& GlobalNamespace::MovingPlatform::__cordl_internal_get_rb() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rb;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rb = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MovingPlatform::__cordl_internal_get_startXf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startXf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startXf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startXf;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startXf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startXf = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MovingPlatform::__cordl_internal_get_endXf()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endXf;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MovingPlatform::__cordl_internal_get_endXf() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endXf;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_endXf(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endXf = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_platformInitLocalPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInitLocalPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_platformInitLocalPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___platformInitLocalPos;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_platformInitLocalPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___platformInitLocalPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_startPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPos;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_endPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_endPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endPos;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_endPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MovingPlatform::__cordl_internal_get_startRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startRot;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startRot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MovingPlatform::__cordl_internal_get_endRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MovingPlatform::__cordl_internal_get_endRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endRot;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_endRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endRot = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_startPercentage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentage;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startPercentage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startPercentage;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startPercentage(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startPercentage = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_startDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDelay;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startDelay;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startDelay = value;
}
constexpr bool& GlobalNamespace::MovingPlatform::__cordl_internal_get_startNextCycle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNextCycle;
}
constexpr bool const& GlobalNamespace::MovingPlatform::__cordl_internal_get_startNextCycle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startNextCycle;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_startNextCycle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startNextCycle = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MovingPlatform::__cordl_internal_get_pivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MovingPlatform::__cordl_internal_get_pivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pivot;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_pivot(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pivot = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MovingPlatform::__cordl_internal_get_initLocalRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initLocalRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MovingPlatform::__cordl_internal_get_initLocalRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initLocalRotation;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_initLocalRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initLocalRotation = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_initOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_initOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initOffset;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_initOffset(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initOffset = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_currT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_currT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currT;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_currT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currT = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_percent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percent;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_percent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___percent;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_percent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___percent = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_smoothedPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedPercent;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_smoothedPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smoothedPercent;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_smoothedPercent(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smoothedPercent = value;
}
constexpr bool& GlobalNamespace::MovingPlatform::__cordl_internal_get_currForward()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr bool const& GlobalNamespace::MovingPlatform::__cordl_internal_get_currForward() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currForward;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_currForward(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currForward = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_dtSinceServerUpdate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_dtSinceServerUpdate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dtSinceServerUpdate;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_dtSinceServerUpdate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dtSinceServerUpdate = value;
}
constexpr double_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastServerTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTime;
}
constexpr double_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastServerTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastServerTime;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_lastServerTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastServerTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_currentVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_currentVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentVelocity;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotationalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalAxis;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotationalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationalAxis;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_rotationalAxis(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationalAxis = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_angularVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_angularVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___angularVelocity;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_angularVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___angularVelocity = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotationPivot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationPivot;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_rotationPivot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationPivot;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_rotationPivot(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationPivot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPos;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_lastPos(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPos = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastRot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRot;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastRot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastRot;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_lastRot(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastRot = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MovingPlatform::__cordl_internal_get_deltaPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MovingPlatform::__cordl_internal_get_deltaPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___deltaPosition;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_deltaPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___deltaPosition = value;
}
constexpr bool& GlobalNamespace::MovingPlatform::__cordl_internal_get_debugMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMovement;
}
constexpr bool const& GlobalNamespace::MovingPlatform::__cordl_internal_get_debugMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___debugMovement;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_debugMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___debugMovement = value;
}
constexpr double_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastNT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastNT;
}
constexpr double_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastNT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastNT;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_lastNT(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastNT = value;
}
constexpr float_t& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastT;
}
constexpr float_t const& GlobalNamespace::MovingPlatform::__cordl_internal_get_lastT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastT;
}
constexpr void GlobalNamespace::MovingPlatform::__cordl_internal_set_lastT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastT = value;
}
inline float_t GlobalNamespace::MovingPlatform::InitTimeOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"InitTimeOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MovingPlatform::InitTimeOffsetMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"InitTimeOffsetMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MovingPlatform::NetworkTimeMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"NetworkTimeMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t GlobalNamespace::MovingPlatform::CycleLengthMs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleLengthMs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline double_t GlobalNamespace::MovingPlatform::PlatformTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"PlatformTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MovingPlatform::CycleCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::MovingPlatform::CycleCompletionPercent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleCompletionPercent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MovingPlatform::CycleForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"CycleForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MovingPlatform::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovingPlatform::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MovingPlatform::UpdatePointToPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdatePointToPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MovingPlatform::UpdateArc()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateArc", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MovingPlatform::UpdateRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion GlobalNamespace::MovingPlatform::UpdateContinuousRotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"UpdateContinuousRotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void GlobalNamespace::MovingPlatform::SetupContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"SetupContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MovingPlatform::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MovingPlatform::ThisFrameMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {"ThisFrameMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::MovingPlatform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MovingPlatform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MovingPlatform* GlobalNamespace::MovingPlatform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MovingPlatform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MovingPlatform::MovingPlatform()   {
}

#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveTowardsTarget.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__MoveTowardsTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "Oculus/Interaction/zzzz__PoseTravelData_def.hpp"
#include "Oculus/Interaction/zzzz__Tween_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::MoveTowardsTarget::*)()>(&::Oculus::Interaction::MoveTowardsTarget::get_Pose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4750e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::MoveTowardsTarget::*)()>(&::Oculus::Interaction::MoveTowardsTarget::get_Stopped)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa475104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTarget::*)(::Oculus::Interaction::PoseTravelData)>(&::Oculus::Interaction::MoveTowardsTarget::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa474ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveTowardsTarget::MoveTo)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa475118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveTowardsTarget::UpdateTarget)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa47515c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveTowardsTarget::StopAndSetPose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa475258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveTowardsTarget.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveTowardsTarget::*)()>(&::Oculus::Interaction::MoveTowardsTarget::Tick)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4752ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::PoseTravelData& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__travellingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr ::Oculus::Interaction::PoseTravelData const& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__travellingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____travellingData;
}
constexpr void Oculus::Interaction::MoveTowardsTarget::__cordl_internal_set__travellingData(::Oculus::Interaction::PoseTravelData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____travellingData = value;
}
constexpr ::Oculus::Interaction::Tween*& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__tween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr ::Oculus::Interaction::Tween* const& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__tween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tween;
}
constexpr void Oculus::Interaction::MoveTowardsTarget::__cordl_internal_set__tween(::Oculus::Interaction::Tween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tween = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____source;
}
constexpr void Oculus::Interaction::MoveTowardsTarget::__cordl_internal_set__source(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____source = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::MoveTowardsTarget::__cordl_internal_get__target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____target;
}
constexpr void Oculus::Interaction::MoveTowardsTarget::__cordl_internal_set__target(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____target = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::MoveTowardsTarget::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool Oculus::Interaction::MoveTowardsTarget::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveTowardsTarget::_ctor(::Oculus::Interaction::PoseTravelData  travellingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::PoseTravelData>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, travellingData);
}
inline void Oculus::Interaction::MoveTowardsTarget::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::MoveTowardsTarget::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::MoveTowardsTarget::StopAndSetPose(::UnityEngine::Pose  pose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose);
}
inline void Oculus::Interaction::MoveTowardsTarget::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveTowardsTarget*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::MoveTowardsTarget* Oculus::Interaction::MoveTowardsTarget::New_ctor(::Oculus::Interaction::PoseTravelData  travellingData)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::MoveTowardsTarget*>(travellingData));
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::MoveTowardsTarget::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::MoveTowardsTarget::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MoveTowardsTarget::MoveTowardsTarget()   {
}

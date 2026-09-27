#pragma once
// IWYU pragma private; include "Oculus/Interaction/MoveFromTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "Oculus/Interaction/zzzz__MoveFromTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::MoveFromTarget::*)()>(&::Oculus::Interaction::MoveFromTarget::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa474ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.set_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveFromTarget::set_Pose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa474ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"set_Pose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::MoveFromTarget::*)()>(&::Oculus::Interaction::MoveFromTarget::get_Stopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa474f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.StopMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)()>(&::Oculus::Interaction::MoveFromTarget::StopMovement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa474f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"StopMovement", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveFromTarget::MoveTo)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa474f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveFromTarget::UpdateTarget)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa474f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::MoveFromTarget::StopAndSetPose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa474f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)()>(&::Oculus::Interaction::MoveFromTarget::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa474f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::MoveFromTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::MoveFromTarget::*)()>(&::Oculus::Interaction::MoveFromTarget::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa474e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::MoveFromTarget::__cordl_internal_get__Pose_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pose_k__BackingField;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::MoveFromTarget::__cordl_internal_get__Pose_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pose_k__BackingField;
}
constexpr void Oculus::Interaction::MoveFromTarget::__cordl_internal_set__Pose_k__BackingField(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pose_k__BackingField = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::MoveFromTarget::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveFromTarget::set_Pose(::UnityEngine::Pose  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"set_Pose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::MoveFromTarget::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveFromTarget::StopMovement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"StopMovement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveFromTarget::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::MoveFromTarget::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Oculus::Interaction::MoveFromTarget::StopAndSetPose(::UnityEngine::Pose  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void Oculus::Interaction::MoveFromTarget::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::MoveFromTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MoveFromTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::MoveFromTarget* Oculus::Interaction::MoveFromTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::MoveFromTarget*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  Oculus::Interaction::MoveFromTarget::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* Oculus::Interaction::MoveFromTarget::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::MoveFromTarget::MoveFromTarget()   {
}

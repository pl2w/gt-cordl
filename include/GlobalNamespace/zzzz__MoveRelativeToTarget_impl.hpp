#pragma once
// IWYU pragma private; include "GlobalNamespace/MoveRelativeToTarget.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__MoveRelativeToTarget_def.hpp"
#include "Oculus/Interaction/zzzz__IMovement_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.get_Pose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::MoveRelativeToTarget::*)()>(&::GlobalNamespace::MoveRelativeToTarget::get_Pose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa427780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.get_Stopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MoveRelativeToTarget::*)()>(&::GlobalNamespace::MoveRelativeToTarget::get_Stopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa427794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.MoveTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTarget::*)(::UnityEngine::Pose)>(&::GlobalNamespace::MoveRelativeToTarget::MoveTo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa42779c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTarget::*)(::UnityEngine::Pose)>(&::GlobalNamespace::MoveRelativeToTarget::UpdateTarget)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa4277f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.StopAndSetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTarget::*)(::UnityEngine::Pose)>(&::GlobalNamespace::MoveRelativeToTarget::StopAndSetPose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa427830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTarget::*)()>(&::GlobalNamespace::MoveRelativeToTarget::Tick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa42786c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MoveRelativeToTarget._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MoveRelativeToTarget::*)()>(&::GlobalNamespace::MoveRelativeToTarget::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4276dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____current;
}
constexpr void GlobalNamespace::MoveRelativeToTarget::__cordl_internal_set__current(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____current = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__originalTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalTarget;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__originalTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalTarget;
}
constexpr void GlobalNamespace::MoveRelativeToTarget::__cordl_internal_set__originalTarget(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalTarget = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__originalSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalSource;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__originalSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____originalSource;
}
constexpr void GlobalNamespace::MoveRelativeToTarget::__cordl_internal_set__originalSource(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____originalSource = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MoveRelativeToTarget::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::MoveRelativeToTarget::__cordl_internal_set__offset(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
inline ::UnityEngine::Pose GlobalNamespace::MoveRelativeToTarget::get_Pose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"get_Pose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline bool GlobalNamespace::MoveRelativeToTarget::get_Stopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"get_Stopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MoveRelativeToTarget::MoveTo(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"MoveTo", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::MoveRelativeToTarget::UpdateTarget(::UnityEngine::Pose  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"UpdateTarget", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void GlobalNamespace::MoveRelativeToTarget::StopAndSetPose(::UnityEngine::Pose  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"StopAndSetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
inline void GlobalNamespace::MoveRelativeToTarget::Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {"Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MoveRelativeToTarget::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MoveRelativeToTarget*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MoveRelativeToTarget* GlobalNamespace::MoveRelativeToTarget::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MoveRelativeToTarget*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IMovement"
constexpr  GlobalNamespace::MoveRelativeToTarget::operator ::Oculus::Interaction::IMovement*() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IMovement"
constexpr ::Oculus::Interaction::IMovement* GlobalNamespace::MoveRelativeToTarget::i___Oculus__Interaction__IMovement() noexcept {
return static_cast<::Oculus::Interaction::IMovement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MoveRelativeToTarget::MoveRelativeToTarget()   {
}

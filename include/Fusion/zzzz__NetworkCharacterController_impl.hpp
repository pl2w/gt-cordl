#pragma once
// IWYU pragma private; include "Fusion/NetworkCharacterController.hpp"
#include "Fusion/zzzz__NetworkTRSP_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__NetworkCharacterController_def.hpp"
#include "Fusion/zzzz__IAfterAllTicks_def.hpp"
#include "Fusion/zzzz__IBeforeAllTicks_def.hpp"
#include "Fusion/zzzz__IBeforeCopyPreviousState_def.hpp"
#include "Fusion/zzzz__INetworkTRSPTeleport_def.hpp"
#include "Fusion/zzzz__IPublicFacingInterface_def.hpp"
#include "Fusion/zzzz__NetworkCCData_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkCharacterController.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Fusion::NetworkCCData> (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::get_Data)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60ee074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::get_Velocity)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60ee0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.set_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(::UnityEngine::Vector3)>(&::Fusion::NetworkCharacterController::set_Velocity)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60ee0e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.get_Grounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::get_Grounded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60ee12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Grounded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.set_Grounded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(bool)>(&::Fusion::NetworkCharacterController::set_Grounded)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60ee148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"set_Grounded", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Nullable_1<::UnityEngine::Quaternion>)>(&::Fusion::NetworkCharacterController::Teleport)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x60ee164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Teleport", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Jump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(bool, ::System::Nullable_1<float_t>)>(&::Fusion::NetworkCharacterController::Jump)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x60ee1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Jump", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(::UnityEngine::Vector3)>(&::Fusion::NetworkCharacterController::Move)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x60ee2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Spawned
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::Spawned)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x60ee704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                    {::i2c::class_of<::Fusion::NetworkCharacterController*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Render
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::Render)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60ee7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                    {::i2c::class_of<::Fusion::NetworkCharacterController*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Fusion_IBeforeAllTicks_BeforeAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(bool, int32_t)>(&::Fusion::NetworkCharacterController::Fusion_IBeforeAllTicks_BeforeAllTicks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ee82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IBeforeAllTicks.BeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Fusion_IAfterAllTicks_AfterAllTicks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)(bool, int32_t)>(&::Fusion::NetworkCharacterController::Fusion_IAfterAllTicks_AfterAllTicks)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ee8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x60ee8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::Awake)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x60ee8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.CopyToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::CopyToBuffer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x60ee788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"CopyToBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController.CopyToEngine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::CopyToEngine)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x60ee830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"CopyToEngine", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkCharacterController._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkCharacterController::*)()>(&::Fusion::NetworkCharacterController::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60ee920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_gravity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_jumpImpulse()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpImpulse;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_jumpImpulse() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jumpImpulse;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_jumpImpulse(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jumpImpulse = value;
}
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_braking()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braking;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_braking() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___braking;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_braking(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___braking = value;
}
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr float_t& Fusion::NetworkCharacterController::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Fusion::NetworkCharacterController::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr ::Fusion::Tick& Fusion::NetworkCharacterController::__cordl_internal_get__initial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initial;
}
constexpr ::Fusion::Tick const& Fusion::NetworkCharacterController::__cordl_internal_get__initial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initial;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set__initial(::Fusion::Tick  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initial = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& Fusion::NetworkCharacterController::__cordl_internal_get__controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& Fusion::NetworkCharacterController::__cordl_internal_get__controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controller;
}
constexpr void Fusion::NetworkCharacterController::__cordl_internal_set__controller(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controller = value;
}
inline ::by_ref<::Fusion::NetworkCCData> Fusion::NetworkCharacterController::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Fusion::NetworkCCData>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Fusion::NetworkCharacterController::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::set_Velocity(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"set_Velocity", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Fusion::NetworkCharacterController::get_Grounded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"get_Grounded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::set_Grounded(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"set_Grounded", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::NetworkCharacterController::Teleport(::System::Nullable_1<::UnityEngine::Vector3>  position, ::System::Nullable_1<::UnityEngine::Quaternion>  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Teleport", {}, {::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector3>>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline void Fusion::NetworkCharacterController::Jump(bool  ignoreGrounded, ::System::Nullable_1<float_t>  overrideImpulse)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Jump", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreGrounded, overrideImpulse);
}
inline void Fusion::NetworkCharacterController::Move(::UnityEngine::Vector3  direction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Move", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, direction);
}
inline void Fusion::NetworkCharacterController::Spawned()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkCharacterController*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::Render()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkCharacterController*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::Fusion_IBeforeAllTicks_BeforeAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IBeforeAllTicks.BeforeAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkCharacterController::Fusion_IAfterAllTicks_AfterAllTicks(bool  resimulation, int32_t  tickCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IAfterAllTicks.AfterAllTicks", {}, {::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resimulation, tickCount);
}
inline void Fusion::NetworkCharacterController::Fusion_IBeforeCopyPreviousState_BeforeCopyPreviousState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Fusion.IBeforeCopyPreviousState.BeforeCopyPreviousState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::CopyToBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"CopyToBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::CopyToEngine()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {"CopyToEngine", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::NetworkCharacterController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkCharacterController*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkCharacterController* Fusion::NetworkCharacterController::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkCharacterController*>());
}
/// @brief Convert operator to "::Fusion::INetworkTRSPTeleport"
constexpr  Fusion::NetworkCharacterController::operator ::Fusion::INetworkTRSPTeleport*() noexcept {
return static_cast<::Fusion::INetworkTRSPTeleport*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::INetworkTRSPTeleport"
constexpr ::Fusion::INetworkTRSPTeleport* Fusion::NetworkCharacterController::i___Fusion__INetworkTRSPTeleport() noexcept {
return static_cast<::Fusion::INetworkTRSPTeleport*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IBeforeAllTicks"
constexpr  Fusion::NetworkCharacterController::operator ::Fusion::IBeforeAllTicks*() noexcept {
return static_cast<::Fusion::IBeforeAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IBeforeAllTicks"
constexpr ::Fusion::IBeforeAllTicks* Fusion::NetworkCharacterController::i___Fusion__IBeforeAllTicks() noexcept {
return static_cast<::Fusion::IBeforeAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr  Fusion::NetworkCharacterController::operator ::Fusion::IPublicFacingInterface*() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* Fusion::NetworkCharacterController::i___Fusion__IPublicFacingInterface() noexcept {
return static_cast<::Fusion::IPublicFacingInterface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IAfterAllTicks"
constexpr  Fusion::NetworkCharacterController::operator ::Fusion::IAfterAllTicks*() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IAfterAllTicks"
constexpr ::Fusion::IAfterAllTicks* Fusion::NetworkCharacterController::i___Fusion__IAfterAllTicks() noexcept {
return static_cast<::Fusion::IAfterAllTicks*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Fusion::IBeforeCopyPreviousState"
constexpr  Fusion::NetworkCharacterController::operator ::Fusion::IBeforeCopyPreviousState*() noexcept {
return static_cast<::Fusion::IBeforeCopyPreviousState*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::IBeforeCopyPreviousState"
constexpr ::Fusion::IBeforeCopyPreviousState* Fusion::NetworkCharacterController::i___Fusion__IBeforeCopyPreviousState() noexcept {
return static_cast<::Fusion::IBeforeCopyPreviousState*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkCharacterController::NetworkCharacterController()   {
}

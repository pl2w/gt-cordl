#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/DroneMovement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Liv/Lck/GorillaTag/zzzz__DroneMovement_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.get_PositionSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::get_PositionSpeed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d1fc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_PositionSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.get_RotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::get_RotationSpeed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d1fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.get_SmoothPositionSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::get_SmoothPositionSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d1fc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_SmoothPositionSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.get_SmoothRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::get_SmoothRotationSpeed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d1fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_SmoothRotationSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::Liv::Lck::GorillaTag::DroneMovement::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9d164a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.Run
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::Run)> {
  constexpr static std::size_t size = 0x444;
  constexpr static std::size_t addrs = 0x9d1c7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"Run", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveForward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveForward)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1fcc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveForward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveBackward
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveBackward)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveBackward", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveLeft)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1fdbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveRight)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1fe38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveUp)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1feb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::MoveDown)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d1ff30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.RotateLeft
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::RotateLeft)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d1ffac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"RotateLeft", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.RotateRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::RotateRight)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d200b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"RotateRight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.TiltUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::TiltUp)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d201bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltUp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.TiltDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::TiltDown)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d2027c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltDown", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.ProcessTilt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::ProcessTilt)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9d201f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessTilt", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.ProcessRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::ProcessRoll)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d202b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessRoll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.ProcessMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2, float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::ProcessMovement)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d20324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessMovement", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.ResetTillAndRoll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)()>(&::Liv::Lck::GorillaTag::DroneMovement::ResetTillAndRoll)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9d20414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ResetTillAndRoll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveForwardBackwardLeftRight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2)>(&::Liv::Lck::GorillaTag::DroneMovement::MoveForwardBackwardLeftRight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d20430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveForwardBackwardLeftRight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveUpAndDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::MoveUpAndDown)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d20460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveUpAndDown", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.TiltAndRotateGamePad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2)>(&::Liv::Lck::GorillaTag::DroneMovement::TiltAndRotateGamePad)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d204c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotateGamePad", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.TiltAndRotateMouse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2)>(&::Liv::Lck::GorillaTag::DroneMovement::TiltAndRotateMouse)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9d20628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotateMouse", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.TiltAndRotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2)>(&::Liv::Lck::GorillaTag::DroneMovement::TiltAndRotate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9d204c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotate", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.Roll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector2)>(&::Liv::Lck::GorillaTag::DroneMovement::Roll)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9d20654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"Roll", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetMoveSpeedChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::SetMoveSpeedChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetMoveSpeedChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetMoveSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::SetMoveSmoothness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetMoveSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetRotationSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::SetRotationSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetRotationSmoothness
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(float_t)>(&::Liv::Lck::GorillaTag::DroneMovement::SetRotationSmoothness)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetRotationSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetSnapAxis
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(bool)>(&::Liv::Lck::GorillaTag::DroneMovement::SetSnapAxis)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetSnapAxis", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetIsSmoothMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(bool)>(&::Liv::Lck::GorillaTag::DroneMovement::SetIsSmoothMovement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsSmoothMovement", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetIsSmoothRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(bool)>(&::Liv::Lck::GorillaTag::DroneMovement::SetIsSmoothRotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsSmoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetUseTiltAsDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(bool)>(&::Liv::Lck::GorillaTag::DroneMovement::SetUseTiltAsDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetUseTiltAsDirection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.SetIsMouseInverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(bool)>(&::Liv::Lck::GorillaTag::DroneMovement::SetIsMouseInverted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d206e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsMouseInverted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::GorillaTag::DroneMovement.MoveAndRotateDroneInstantly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::GorillaTag::DroneMovement::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Liv::Lck::GorillaTag::DroneMovement::MoveAndRotateDroneInstantly)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d1cc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveAndRotateDroneInstantly", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__moveSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSpeed;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__moveSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSpeed;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__moveSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveSpeed = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSpeed;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSpeed = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltUpAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltUpAngle;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltUpAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltUpAngle;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__tiltUpAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltUpAngle = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltDownAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltDownAngle;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltDownAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltDownAngle;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__tiltDownAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltDownAngle = value;
}
constexpr bool& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__smoothMovement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothMovement;
}
constexpr bool const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__smoothMovement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothMovement;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__smoothMovement(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothMovement = value;
}
constexpr bool& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__smoothRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotation;
}
constexpr bool const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__smoothRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____smoothRotation;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__smoothRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____smoothRotation = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__moveSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSmoothness;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__moveSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____moveSmoothness;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__moveSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____moveSmoothness = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rotationSmoothness()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSmoothness;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rotationSmoothness() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationSmoothness;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__rotationSmoothness(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rotationSmoothness = value;
}
constexpr bool& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__snapAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapAxis;
}
constexpr bool const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__snapAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____snapAxis;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__snapAxis(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____snapAxis = value;
}
constexpr bool& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__useTiltAsDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTiltAsDirection;
}
constexpr bool const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__useTiltAsDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTiltAsDirection;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__useTiltAsDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTiltAsDirection = value;
}
constexpr bool& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__isMouseInverted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMouseInverted;
}
constexpr bool const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__isMouseInverted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isMouseInverted;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__isMouseInverted(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isMouseInverted = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__gimbalTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gimbalTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__gimbalTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gimbalTransform;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__gimbalTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gimbalTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__droneTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__droneTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____droneTransform;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__droneTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____droneTransform = value;
}
constexpr ::UnityEngine::Vector3& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__localTargetPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTargetPosition;
}
constexpr ::UnityEngine::Vector3 const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__localTargetPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTargetPosition;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__localTargetPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localTargetPosition = value;
}
constexpr ::UnityEngine::Quaternion& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__localTargetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__localTargetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____localTargetRotation;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__localTargetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____localTargetRotation = value;
}
constexpr ::UnityEngine::Quaternion& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltTargetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltTargetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltTargetRotation;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__tiltTargetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltTargetRotation = value;
}
constexpr ::UnityEngine::Quaternion& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rollTargetRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollTargetRotation;
}
constexpr ::UnityEngine::Quaternion const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rollTargetRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollTargetRotation;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__rollTargetRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rollTargetRotation = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAngle;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__tiltAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tiltAngle;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__tiltAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tiltAngle = value;
}
constexpr float_t& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rollAngle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollAngle;
}
constexpr float_t const& Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_get__rollAngle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rollAngle;
}
constexpr void Liv::Lck::GorillaTag::DroneMovement::__cordl_internal_set__rollAngle(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rollAngle = value;
}
inline float_t Liv::Lck::GorillaTag::DroneMovement::get_PositionSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_PositionSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::GorillaTag::DroneMovement::get_RotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_RotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::GorillaTag::DroneMovement::get_SmoothPositionSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_SmoothPositionSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t Liv::Lck::GorillaTag::DroneMovement::get_SmoothRotationSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"get_SmoothRotationSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::_ctor(::UnityEngine::Transform*  droneTransform, ::UnityEngine::Transform*  gimbalTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, droneTransform, gimbalTransform);
}
inline void Liv::Lck::GorillaTag::DroneMovement::Run()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"Run", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveForward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveForward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveBackward()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveBackward", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::RotateLeft()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"RotateLeft", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::RotateRight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"RotateRight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::TiltUp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltUp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::TiltDown()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltDown", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::ProcessTilt()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessTilt", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::ProcessRoll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessRoll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::ProcessMovement(::UnityEngine::Vector2  stick, float_t  trigger)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ProcessMovement", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stick, trigger);
}
inline void Liv::Lck::GorillaTag::DroneMovement::ResetTillAndRoll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"ResetTillAndRoll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveForwardBackwardLeftRight(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveForwardBackwardLeftRight", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveUpAndDown(float_t  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveUpAndDown", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, f);
}
inline void Liv::Lck::GorillaTag::DroneMovement::TiltAndRotateGamePad(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotateGamePad", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Liv::Lck::GorillaTag::DroneMovement::TiltAndRotateMouse(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotateMouse", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Liv::Lck::GorillaTag::DroneMovement::TiltAndRotate(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"TiltAndRotate", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Liv::Lck::GorillaTag::DroneMovement::Roll(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"Roll", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetMoveSpeedChanged(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetMoveSpeedChanged", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetMoveSmoothness(float_t  smoothness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetMoveSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothness);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetRotationSpeed(float_t  speed)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetRotationSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, speed);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetRotationSmoothness(float_t  smoothness)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetRotationSmoothness", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smoothness);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetSnapAxis(bool  snap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetSnapAxis", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snap);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetIsSmoothMovement(bool  smooth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsSmoothMovement", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smooth);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetIsSmoothRotation(bool  smooth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsSmoothRotation", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, smooth);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetUseTiltAsDirection(bool  use)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetUseTiltAsDirection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, use);
}
inline void Liv::Lck::GorillaTag::DroneMovement::SetIsMouseInverted(bool  inverted)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"SetIsMouseInverted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, inverted);
}
inline void Liv::Lck::GorillaTag::DroneMovement::MoveAndRotateDroneInstantly(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::GorillaTag::DroneMovement*>(),
                        {"MoveAndRotateDroneInstantly", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, rotation);
}
inline ::Liv::Lck::GorillaTag::DroneMovement* Liv::Lck::GorillaTag::DroneMovement::New_ctor(::UnityEngine::Transform*  droneTransform, ::UnityEngine::Transform*  gimbalTransform)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::GorillaTag::DroneMovement*>(droneTransform, gimbalTransform));
}
// Ctor Parameters []
constexpr ::Liv::Lck::GorillaTag::DroneMovement::DroneMovement()   {
}

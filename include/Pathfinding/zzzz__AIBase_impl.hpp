#pragma once
// IWYU pragma private; include "Pathfinding/AIBase.hpp"
#include "Pathfinding/zzzz__OrientationMode_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__AIBase_def.hpp"
#include "Pathfinding/RVO/zzzz__RVOController_def.hpp"
#include "Pathfinding/Util/zzzz__IMovementPlane_def.hpp"
#include "Pathfinding/zzzz__AutoRepathPolicy_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__CharacterController_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rigidbody2D_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::AIBase.get_repathRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_repathRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e38480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_repathRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_repathRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(float_t)>(&::Pathfinding::AIBase::set_repathRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e38498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_repathRate", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_canSearch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e384b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_canSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(bool)>(&::Pathfinding::AIBase::set_canSearch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e384d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_centerOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_centerOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e38508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_centerOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_centerOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(float_t)>(&::Pathfinding::AIBase::set_centerOffset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e38518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_centerOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_rotationIn2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_rotationIn2D)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e38524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_rotationIn2D", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_rotationIn2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(bool)>(&::Pathfinding::AIBase::set_rotationIn2D)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e38534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_rotationIn2D", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_position
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_position)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e3854c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_position", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_rotation)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5e38580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Quaternion)>(&::Pathfinding::AIBase::set_rotation)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e385b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_usingGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_usingGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e385e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_usingGravity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_usingGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(bool)>(&::Pathfinding::AIBase::set_usingGravity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e385e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_usingGravity", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_target)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e385f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_target", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_target
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Transform*)>(&::Pathfinding::AIBase::set_target)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e38698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_destination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e387dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_destination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_destination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Vector3)>(&::Pathfinding::AIBase::set_destination)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e387ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_velocity)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e387fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_desiredVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_desiredVelocity)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e38880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_desiredVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_isStopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e389b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_isStopped", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_isStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(bool)>(&::Pathfinding::AIBase::set_isStopped)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e389b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_onSearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_onSearchPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e389c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_onSearchPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.set_onSearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::System::Action*)>(&::Pathfinding::AIBase::set_onSearchPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e389c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_onSearchPath", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.get_shouldRecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::get_shouldRecalculatePath)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e389d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::_ctor)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5e38a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.FindComponents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::FindComponents)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e38b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::OnEnable)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e38cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::Start)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e38e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::Init)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e38da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"Init", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Vector3, bool)>(&::Pathfinding::AIBase::Teleport)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e38e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.CancelCurrentPathRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::CancelCurrentPathRequest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e38f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"CancelCurrentPathRequest", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::OnDisable)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e390b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::Update)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x5e391e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.FixedUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::FixedUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5e3942c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.MovementUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::AIBase::MovementUpdate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5e39418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"MovementUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.MovementUpdateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::AIBase::MovementUpdateInternal)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.CalculatePathRequestEndpoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Pathfinding::AIBase::CalculatePathRequestEndpoints)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5e39524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.SearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::SearchPath)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5e39574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.GetFeetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::GetFeetPosition)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e39880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::Pathfinding::Path*)>(&::Pathfinding::AIBase::OnPathComplete)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.ClearPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::ClearPath)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.SetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::Pathfinding::Path*, bool)>(&::Pathfinding::AIBase::SetPath)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x5e39680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SetPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.ApplyGravity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(float_t)>(&::Pathfinding::AIBase::ApplyGravity)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5e398c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"ApplyGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.CalculateDeltaToMoveThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::AIBase::*)(::UnityEngine::Vector2, float_t, float_t)>(&::Pathfinding::AIBase::CalculateDeltaToMoveThisFrame)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x5e39a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"CalculateDeltaToMoveThisFrame", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.SimulateRotationTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::AIBase::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::AIBase::SimulateRotationTowards)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e39c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.SimulateRotationTowards
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Pathfinding::AIBase::*)(::UnityEngine::Vector2, float_t)>(&::Pathfinding::AIBase::SimulateRotationTowards)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x5e39d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Vector3)>(&::Pathfinding::AIBase::Move)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3a0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.FinalizeMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Pathfinding::AIBase::FinalizeMovement)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5e3a0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.FinalizeRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Quaternion)>(&::Pathfinding::AIBase::FinalizeRotation)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e3a124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"FinalizeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.FinalizePosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)(::UnityEngine::Vector3)>(&::Pathfinding::AIBase::FinalizePosition)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x5e3a2a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"FinalizePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.UpdateVelocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::UpdateVelocity)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5e3a8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.ClampToNavmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)(::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::AIBase::ClampToNavmesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3a934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.RaycastPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::AIBase::*)(::UnityEngine::Vector3, float_t)>(&::Pathfinding::AIBase::RaycastPosition)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x5e3a5fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"RaycastPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5e3a93c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5e3a9b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::Reset)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e3ad80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.ResetShape
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::AIBase::*)()>(&::Pathfinding::AIBase::ResetShape)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e3ad9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"ResetShape", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::AIBase.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::AIBase::*)(int32_t, bool)>(&::Pathfinding::AIBase::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e3ae70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::AIBase*>(),
                    {::i2c::class_of<::Pathfinding::AIBase*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___radius;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___radius = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_canMove()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canMove;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_canMove() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canMove;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_canMove(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canMove = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_maxSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_maxSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSpeed;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_maxSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSpeed = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get_gravity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get_gravity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gravity;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_gravity(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gravity = value;
}
constexpr ::UnityEngine::LayerMask& Pathfinding::AIBase::__cordl_internal_get_groundMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundMask;
}
constexpr ::UnityEngine::LayerMask const& Pathfinding::AIBase::__cordl_internal_get_groundMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groundMask;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_groundMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groundMask = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_centerOffsetCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOffsetCompatibility;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_centerOffsetCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___centerOffsetCompatibility;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_centerOffsetCompatibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___centerOffsetCompatibility = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_repathRateCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRateCompatibility;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_repathRateCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___repathRateCompatibility;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_repathRateCompatibility(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___repathRateCompatibility = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_canSearchCompability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchCompability;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_canSearchCompability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___canSearchCompability;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_canSearchCompability(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___canSearchCompability = value;
}
constexpr ::Pathfinding::OrientationMode& Pathfinding::AIBase::__cordl_internal_get_orientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr ::Pathfinding::OrientationMode const& Pathfinding::AIBase::__cordl_internal_get_orientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___orientation;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_orientation(::Pathfinding::OrientationMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___orientation = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_enableRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_enableRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enableRotation;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_enableRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enableRotation = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get_simulatedPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedPosition;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get_simulatedPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedPosition;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_simulatedPosition(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatedPosition = value;
}
constexpr ::UnityEngine::Quaternion& Pathfinding::AIBase::__cordl_internal_get_simulatedRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedRotation;
}
constexpr ::UnityEngine::Quaternion const& Pathfinding::AIBase::__cordl_internal_get_simulatedRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___simulatedRotation;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_simulatedRotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___simulatedRotation = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get_accumulatedMovementDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumulatedMovementDelta;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get_accumulatedMovementDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___accumulatedMovementDelta;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_accumulatedMovementDelta(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___accumulatedMovementDelta = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::AIBase::__cordl_internal_get_velocity2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity2D;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::AIBase::__cordl_internal_get_velocity2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity2D;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_velocity2D(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity2D = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_verticalVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalVelocity;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_verticalVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___verticalVelocity;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_verticalVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___verticalVelocity = value;
}
constexpr ::UnityW<::Pathfinding::Seeker>& Pathfinding::AIBase::__cordl_internal_get_seeker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr ::UnityW<::Pathfinding::Seeker> const& Pathfinding::AIBase::__cordl_internal_get_seeker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___seeker;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_seeker(::UnityW<::Pathfinding::Seeker>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___seeker = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::AIBase::__cordl_internal_get_tr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::AIBase::__cordl_internal_get_tr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tr;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_tr(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tr = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody>& Pathfinding::AIBase::__cordl_internal_get_rigid()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigid;
}
constexpr ::UnityW<::UnityEngine::Rigidbody> const& Pathfinding::AIBase::__cordl_internal_get_rigid() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigid;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_rigid(::UnityW<::UnityEngine::Rigidbody>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigid = value;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D>& Pathfinding::AIBase::__cordl_internal_get_rigid2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigid2D;
}
constexpr ::UnityW<::UnityEngine::Rigidbody2D> const& Pathfinding::AIBase::__cordl_internal_get_rigid2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rigid2D;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_rigid2D(::UnityW<::UnityEngine::Rigidbody2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rigid2D = value;
}
constexpr ::UnityW<::UnityEngine::CharacterController>& Pathfinding::AIBase::__cordl_internal_get_controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr ::UnityW<::UnityEngine::CharacterController> const& Pathfinding::AIBase::__cordl_internal_get_controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controller;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_controller(::UnityW<::UnityEngine::CharacterController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controller = value;
}
constexpr ::UnityW<::Pathfinding::RVO::RVOController>& Pathfinding::AIBase::__cordl_internal_get_rvoController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvoController;
}
constexpr ::UnityW<::Pathfinding::RVO::RVOController> const& Pathfinding::AIBase::__cordl_internal_get_rvoController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rvoController;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_rvoController(::UnityW<::Pathfinding::RVO::RVOController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rvoController = value;
}
constexpr ::Pathfinding::Util::IMovementPlane*& Pathfinding::AIBase::__cordl_internal_get_movementPlane()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr ::Pathfinding::Util::IMovementPlane* const& Pathfinding::AIBase::__cordl_internal_get_movementPlane() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___movementPlane;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_movementPlane(::Pathfinding::Util::IMovementPlane*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___movementPlane = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_updatePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePosition;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_updatePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updatePosition;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_updatePosition(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updatePosition = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_updateRotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotation;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_updateRotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___updateRotation;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_updateRotation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___updateRotation = value;
}
constexpr ::Pathfinding::AutoRepathPolicy*& Pathfinding::AIBase::__cordl_internal_get_autoRepath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRepath;
}
constexpr ::Pathfinding::AutoRepathPolicy* const& Pathfinding::AIBase::__cordl_internal_get_autoRepath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRepath;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_autoRepath(::Pathfinding::AutoRepathPolicy*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRepath = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get__usingGravity_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usingGravity_k__BackingField;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get__usingGravity_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____usingGravity_k__BackingField;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set__usingGravity_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____usingGravity_k__BackingField = value;
}
constexpr float_t& Pathfinding::AIBase::__cordl_internal_get_lastDeltaTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaTime;
}
constexpr float_t const& Pathfinding::AIBase::__cordl_internal_get_lastDeltaTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaTime;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_lastDeltaTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDeltaTime = value;
}
constexpr int32_t& Pathfinding::AIBase::__cordl_internal_get_prevFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFrame;
}
constexpr int32_t const& Pathfinding::AIBase::__cordl_internal_get_prevFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevFrame;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_prevFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevFrame = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get_prevPosition1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition1;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get_prevPosition1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition1;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_prevPosition1(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPosition1 = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get_prevPosition2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition2;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get_prevPosition2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPosition2;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_prevPosition2(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPosition2 = value;
}
constexpr ::UnityEngine::Vector2& Pathfinding::AIBase::__cordl_internal_get_lastDeltaPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaPosition;
}
constexpr ::UnityEngine::Vector2 const& Pathfinding::AIBase::__cordl_internal_get_lastDeltaPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDeltaPosition;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_lastDeltaPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDeltaPosition = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_waitingForPathCalculation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPathCalculation;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_waitingForPathCalculation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPathCalculation;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_waitingForPathCalculation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForPathCalculation = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Pathfinding::AIBase::__cordl_internal_get_targetCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCompatibility;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Pathfinding::AIBase::__cordl_internal_get_targetCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetCompatibility;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_targetCompatibility(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetCompatibility = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get_startHasRun()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHasRun;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get_startHasRun() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startHasRun;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set_startHasRun(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startHasRun = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::AIBase::__cordl_internal_get__destination_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::AIBase::__cordl_internal_get__destination_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____destination_k__BackingField;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set__destination_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____destination_k__BackingField = value;
}
constexpr bool& Pathfinding::AIBase::__cordl_internal_get__isStopped_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStopped_k__BackingField;
}
constexpr bool const& Pathfinding::AIBase::__cordl_internal_get__isStopped_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isStopped_k__BackingField;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set__isStopped_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isStopped_k__BackingField = value;
}
constexpr ::System::Action*& Pathfinding::AIBase::__cordl_internal_get__onSearchPath_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSearchPath_k__BackingField;
}
constexpr ::System::Action* const& Pathfinding::AIBase::__cordl_internal_get__onSearchPath_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onSearchPath_k__BackingField;
}
constexpr void Pathfinding::AIBase::__cordl_internal_set__onSearchPath_k__BackingField(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onSearchPath_k__BackingField = value;
}
inline void Pathfinding::AIBase::setStaticF_ShapeGizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "ShapeGizmoColor", ::Pathfinding::AIBase*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::AIBase::getStaticF_ShapeGizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "ShapeGizmoColor", ::Pathfinding::AIBase*>();
}
inline float_t Pathfinding::AIBase::get_repathRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_repathRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_repathRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_repathRate", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIBase::get_canSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_canSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_canSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::AIBase::get_centerOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_centerOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_centerOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_centerOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIBase::get_rotationIn2D()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_rotationIn2D", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_rotationIn2D(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_rotationIn2D", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::get_position()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_position", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Quaternion Pathfinding::AIBase::get_rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_rotation(::UnityEngine::Quaternion  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_rotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIBase::get_usingGravity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_usingGravity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_usingGravity(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_usingGravity", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Transform> Pathfinding::AIBase::get_target()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_target", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_target(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_target", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::get_destination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_destination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_destination(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_destination", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::get_desiredVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_desiredVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Pathfinding::AIBase::get_isStopped()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_isStopped", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_isStopped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_isStopped", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Action* Pathfinding::AIBase::get_onSearchPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"get_onSearchPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void Pathfinding::AIBase::set_onSearchPath(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"set_onSearchPath", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::AIBase::get_shouldRecalculatePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::AIBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::FindComponents()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::Init()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"Init", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition, clearPath);
}
inline void Pathfinding::AIBase::CancelCurrentPathRequest()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"CancelCurrentPathRequest", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::FixedUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::MovementUpdate(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"MovementUpdate", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::AIBase::MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::AIBase::CalculatePathRequestEndpoints(::by_ref<::UnityEngine::Vector3>  start, ::by_ref<::UnityEngine::Vector3>  end)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, end);
}
inline void Pathfinding::AIBase::SearchPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::GetFeetPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::AIBase::OnPathComplete(::Pathfinding::Path*  newPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPath);
}
inline void Pathfinding::AIBase::ClearPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::SetPath(::Pathfinding::Path*  path, bool  updateDestinationFromPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SetPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, updateDestinationFromPath);
}
inline void Pathfinding::AIBase::ApplyGravity(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"ApplyGravity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime);
}
inline ::UnityEngine::Vector2 Pathfinding::AIBase::CalculateDeltaToMoveThisFrame(::UnityEngine::Vector2  position, float_t  distanceToEndOfPath, float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"CalculateDeltaToMoveThisFrame", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, position, distanceToEndOfPath, deltaTime);
}
inline ::UnityEngine::Quaternion Pathfinding::AIBase::SimulateRotationTowards(::UnityEngine::Vector3  direction, float_t  maxDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, direction, maxDegrees);
}
inline ::UnityEngine::Quaternion Pathfinding::AIBase::SimulateRotationTowards(::UnityEngine::Vector2  direction, float_t  maxDegrees)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"SimulateRotationTowards", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, direction, maxDegrees);
}
inline void Pathfinding::AIBase::Move(::UnityEngine::Vector3  deltaPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaPosition);
}
inline void Pathfinding::AIBase::FinalizeMovement(::UnityEngine::Vector3  nextPosition, ::UnityEngine::Quaternion  nextRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPosition, nextRotation);
}
inline void Pathfinding::AIBase::FinalizeRotation(::UnityEngine::Quaternion  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"FinalizeRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextRotation);
}
inline void Pathfinding::AIBase::FinalizePosition(::UnityEngine::Vector3  nextPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"FinalizePosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nextPosition);
}
inline void Pathfinding::AIBase::UpdateVelocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"UpdateVelocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, positionChanged);
}
inline ::UnityEngine::Vector3 Pathfinding::AIBase::RaycastPosition(::UnityEngine::Vector3  position, float_t  lastElevation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"RaycastPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, lastElevation);
}
inline void Pathfinding::AIBase::OnDrawGizmosSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::OnDrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::AIBase::ResetShape()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::AIBase*>(),
                        {"ResetShape", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::AIBase::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::AIBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline ::Pathfinding::AIBase* Pathfinding::AIBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::AIBase*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::AIBase::AIBase()   {
}

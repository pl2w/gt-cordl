#pragma once
// IWYU pragma private; include "Pathfinding/RichAI.hpp"
#include "Pathfinding/zzzz__AIBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__RichAI_def.hpp"
#include "Pathfinding/zzzz__IAstarAI_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__RichAI_def.hpp"
#include "Pathfinding/zzzz__RichFunnel_def.hpp"
#include "Pathfinding/zzzz__RichPath_def.hpp"
#include "Pathfinding/zzzz__RichSpecial_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::RichAI.get_traversingOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_traversingOffMeshLink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3ecc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_traversingOffMeshLink", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.set_traversingOffMeshLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(bool)>(&::Pathfinding::RichAI::set_traversingOffMeshLink)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3ecc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_traversingOffMeshLink", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_remainingDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_remainingDistance)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e3ecd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_reachedEndOfPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_reachedEndOfPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_reachedDestination
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_reachedDestination)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5e3edd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_hasPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_hasPath)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e3f048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_hasPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_pathPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_pathPending)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3f0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_pathPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_steeringTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_steeringTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e3f110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_steeringTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.set_steeringTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::UnityEngine::Vector3)>(&::Pathfinding::RichAI::set_steeringTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e3f120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_steeringTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_get_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_set_radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(float_t)>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_get_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_set_height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(float_t)>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_set_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_get_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_get_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_set_maxSpeed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(float_t)>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_set_maxSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_get_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_get_canSearch)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3f160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_set_canSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(bool)>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_set_canSearch)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e3f180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_get_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_get_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Pathfinding_IAstarAI_set_canMove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(bool)>(&::Pathfinding::RichAI::Pathfinding_IAstarAI_set_canMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e3f18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_approachingPartEndpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_approachingPartEndpoint)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e3f194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_approachingPartEndpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_approachingPathEndpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_approachingPathEndpoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e3eda0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_approachingPathEndpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.Teleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::UnityEngine::Vector3, bool)>(&::Pathfinding::RichAI::Teleport)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x5e3f24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::OnDisable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e3f504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_shouldRecalculatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_shouldRecalculatePath)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e3f524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.SearchPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::SearchPath)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e3f550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::Pathfinding::Path*)>(&::Pathfinding::RichAI::OnPathComplete)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5e3f568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.ClearPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::ClearPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e402f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.NextPart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::NextPart)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e4028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"NextPart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.GetRemainingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::by_ref<bool>)>(&::Pathfinding::RichAI::GetRemainingPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e40454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.OnTargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::OnTargetReached)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4069c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.UpdateTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)(::Pathfinding::RichFunnel*)>(&::Pathfinding::RichAI::UpdateTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e406a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.MovementUpdateInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::RichAI::MovementUpdateInternal)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5e40bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.TraverseFunnel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::Pathfinding::RichFunnel*, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::RichAI::TraverseFunnel)> {
  constexpr static std::size_t size = 0x724;
  constexpr static std::size_t addrs = 0x5e40e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"TraverseFunnel", {}, {::i2c::type_of<::Pathfinding::RichFunnel*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.FinalMovement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::UnityEngine::Vector3, float_t, float_t, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Quaternion>)>(&::Pathfinding::RichAI::FinalMovement)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x5e41594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"FinalMovement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.ClampToNavmesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)(::UnityEngine::Vector3, ::by_ref<bool>)>(&::Pathfinding::RichAI::ClampToNavmesh)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x5e41f54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.CalculateWallForce
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Pathfinding::RichAI::*)(::UnityEngine::Vector2, float_t, ::UnityEngine::Vector2)>(&::Pathfinding::RichAI::CalculateWallForce)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5e41af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"CalculateWallForce", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.TraverseSpecial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::RichAI::*)(::Pathfinding::RichSpecial*)>(&::Pathfinding::RichAI::TraverseSpecial)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e4238c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.TraverseOffMeshLinkFallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::RichAI::*)(::Pathfinding::RichSpecial*)>(&::Pathfinding::RichAI::TraverseOffMeshLinkFallback)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e4243c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"TraverseOffMeshLinkFallback", {}, {::i2c::type_of<::Pathfinding::RichSpecial*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5e424ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::RichAI::*)(int32_t, bool)>(&::Pathfinding::RichAI::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e42650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::RichAI*>(),
                    {::i2c::class_of<::Pathfinding::RichAI*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.UpdatePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::UpdatePath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e427d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"UpdatePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_Velocity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_Velocity)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e427e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_Velocity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_NextWaypoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_NextWaypoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e427ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_NextWaypoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_DistanceToNextWaypoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_DistanceToNextWaypoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e427fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_DistanceToNextWaypoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_repeatedlySearchPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_repeatedlySearchPaths)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_repeatedlySearchPaths", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.set_repeatedlySearchPaths
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(bool)>(&::Pathfinding::RichAI::set_repeatedlySearchPaths)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e42824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_repeatedlySearchPaths", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_TargetReached
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_TargetReached)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e42828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TargetReached", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_PathPending
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_PathPending)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e42858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_PathPending", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_ApproachingPartEndpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_ApproachingPartEndpoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e42878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_ApproachingPartEndpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_ApproachingPathEndpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_ApproachingPathEndpoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e4287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_ApproachingPathEndpoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_TraversingSpecial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_TraversingSpecial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e42880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TraversingSpecial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_TargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_TargetPoint)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e42888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TargetPoint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.get_anim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Animation> (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::get_anim)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e42898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_anim", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI.set_anim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)(::UnityEngine::Animation*)>(&::Pathfinding::RichAI::set_anim)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5e426ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_anim", {}, {::i2c::type_of<::UnityEngine::Animation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI::*)()>(&::Pathfinding::RichAI::_ctor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5e42940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_acceleration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_acceleration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acceleration;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_acceleration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acceleration = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_rotationSpeed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_rotationSpeed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationSpeed;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_rotationSpeed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationSpeed = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_slowdownTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownTime;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_slowdownTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowdownTime;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_slowdownTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowdownTime = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_endReachedDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endReachedDistance;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_endReachedDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___endReachedDistance;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_endReachedDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___endReachedDistance = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_wallForce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallForce;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_wallForce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallForce;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_wallForce(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallForce = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_wallDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallDist;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_wallDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallDist;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_wallDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallDist = value;
}
constexpr bool& Pathfinding::RichAI::__cordl_internal_get_funnelSimplification()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funnelSimplification;
}
constexpr bool const& Pathfinding::RichAI::__cordl_internal_get_funnelSimplification() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___funnelSimplification;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_funnelSimplification(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___funnelSimplification = value;
}
constexpr bool& Pathfinding::RichAI::__cordl_internal_get_slowWhenNotFacingTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowWhenNotFacingTarget;
}
constexpr bool const& Pathfinding::RichAI::__cordl_internal_get_slowWhenNotFacingTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___slowWhenNotFacingTarget;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_slowWhenNotFacingTarget(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___slowWhenNotFacingTarget = value;
}
constexpr ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*& Pathfinding::RichAI::__cordl_internal_get_onTraverseOffMeshLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTraverseOffMeshLink;
}
constexpr ::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>* const& Pathfinding::RichAI::__cordl_internal_get_onTraverseOffMeshLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onTraverseOffMeshLink;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_onTraverseOffMeshLink(::System::Func_2<::Pathfinding::RichSpecial*,::System::Collections::IEnumerator*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onTraverseOffMeshLink = value;
}
constexpr ::Pathfinding::RichPath*& Pathfinding::RichAI::__cordl_internal_get_richPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___richPath;
}
constexpr ::Pathfinding::RichPath* const& Pathfinding::RichAI::__cordl_internal_get_richPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___richPath;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_richPath(::Pathfinding::RichPath*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___richPath = value;
}
constexpr bool& Pathfinding::RichAI::__cordl_internal_get_delayUpdatePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayUpdatePath;
}
constexpr bool const& Pathfinding::RichAI::__cordl_internal_get_delayUpdatePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___delayUpdatePath;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_delayUpdatePath(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___delayUpdatePath = value;
}
constexpr bool& Pathfinding::RichAI::__cordl_internal_get_lastCorner()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCorner;
}
constexpr bool const& Pathfinding::RichAI::__cordl_internal_get_lastCorner() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCorner;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_lastCorner(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCorner = value;
}
constexpr float_t& Pathfinding::RichAI::__cordl_internal_get_distanceToSteeringTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToSteeringTarget;
}
constexpr float_t const& Pathfinding::RichAI::__cordl_internal_get_distanceToSteeringTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___distanceToSteeringTarget;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_distanceToSteeringTarget(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___distanceToSteeringTarget = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::RichAI::__cordl_internal_get_nextCorners()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextCorners;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::RichAI::__cordl_internal_get_nextCorners() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextCorners;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_nextCorners(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextCorners = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::RichAI::__cordl_internal_get_wallBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallBuffer;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::RichAI::__cordl_internal_get_wallBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wallBuffer;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_wallBuffer(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wallBuffer = value;
}
constexpr bool& Pathfinding::RichAI::__cordl_internal_get__traversingOffMeshLink_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traversingOffMeshLink_k__BackingField;
}
constexpr bool const& Pathfinding::RichAI::__cordl_internal_get__traversingOffMeshLink_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____traversingOffMeshLink_k__BackingField;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set__traversingOffMeshLink_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____traversingOffMeshLink_k__BackingField = value;
}
constexpr ::UnityEngine::Vector3& Pathfinding::RichAI::__cordl_internal_get__steeringTarget_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steeringTarget_k__BackingField;
}
constexpr ::UnityEngine::Vector3 const& Pathfinding::RichAI::__cordl_internal_get__steeringTarget_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____steeringTarget_k__BackingField;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set__steeringTarget_k__BackingField(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____steeringTarget_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Animation>& Pathfinding::RichAI::__cordl_internal_get_animCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animCompatibility;
}
constexpr ::UnityW<::UnityEngine::Animation> const& Pathfinding::RichAI::__cordl_internal_get_animCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___animCompatibility;
}
constexpr void Pathfinding::RichAI::__cordl_internal_set_animCompatibility(::UnityW<::UnityEngine::Animation>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___animCompatibility = value;
}
inline void Pathfinding::RichAI::setStaticF_GizmoColorPath(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "GizmoColorPath", ::Pathfinding::RichAI*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color Pathfinding::RichAI::getStaticF_GizmoColorPath()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "GizmoColorPath", ::Pathfinding::RichAI*>();
}
inline bool Pathfinding::RichAI::get_traversingOffMeshLink()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_traversingOffMeshLink", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::set_traversingOffMeshLink(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_traversingOffMeshLink", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RichAI::get_remainingDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_remainingDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_reachedEndOfPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_reachedEndOfPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_reachedDestination()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_reachedDestination", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_hasPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_hasPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_pathPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_pathPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::get_steeringTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_steeringTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void Pathfinding::RichAI::set_steeringTarget(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_steeringTarget", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RichAI::Pathfinding_IAstarAI_get_radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Pathfinding_IAstarAI_set_radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RichAI::Pathfinding_IAstarAI_get_height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Pathfinding_IAstarAI_set_height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Pathfinding::RichAI::Pathfinding_IAstarAI_get_maxSpeed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_maxSpeed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Pathfinding_IAstarAI_set_maxSpeed(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_maxSpeed", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RichAI::Pathfinding_IAstarAI_get_canSearch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_canSearch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Pathfinding_IAstarAI_set_canSearch(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_canSearch", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RichAI::Pathfinding_IAstarAI_get_canMove()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.get_canMove", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Pathfinding_IAstarAI_set_canMove(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"Pathfinding.IAstarAI.set_canMove", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RichAI::get_approachingPartEndpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_approachingPartEndpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_approachingPathEndpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_approachingPathEndpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::Teleport(::UnityEngine::Vector3  newPosition, bool  clearPath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newPosition, clearPath);
}
inline void Pathfinding::RichAI::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_shouldRecalculatePath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::SearchPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichAI::OnPathComplete(::Pathfinding::Path*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::RichAI::ClearPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichAI::NextPart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"NextPart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::RichAI::GetRemainingPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  buffer, ::by_ref<bool>  stale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"GetRemainingPath", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, buffer, stale);
}
inline void Pathfinding::RichAI::OnTargetReached()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::UpdateTarget(::Pathfinding::RichFunnel*  fn)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, fn);
}
inline void Pathfinding::RichAI::MovementUpdateInternal(float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::RichAI::TraverseFunnel(::Pathfinding::RichFunnel*  fn, float_t  deltaTime, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"TraverseFunnel", {}, {::i2c::type_of<::Pathfinding::RichFunnel*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fn, deltaTime, nextPosition, nextRotation);
}
inline void Pathfinding::RichAI::FinalMovement(::UnityEngine::Vector3  position3D, float_t  deltaTime, float_t  distanceToEndOfPath, float_t  slowdownFactor, ::by_ref<::UnityEngine::Vector3>  nextPosition, ::by_ref<::UnityEngine::Quaternion>  nextRotation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"FinalMovement", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position3D, deltaTime, distanceToEndOfPath, slowdownFactor, nextPosition, nextRotation);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::ClampToNavmesh(::UnityEngine::Vector3  position, ::by_ref<bool>  positionChanged)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, position, positionChanged);
}
inline ::UnityEngine::Vector2 Pathfinding::RichAI::CalculateWallForce(::UnityEngine::Vector2  position, float_t  elevation, ::UnityEngine::Vector2  directionToTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"CalculateWallForce", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, position, elevation, directionToTarget);
}
inline ::System::Collections::IEnumerator* Pathfinding::RichAI::TraverseSpecial(::Pathfinding::RichSpecial*  link)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, link);
}
inline ::System::Collections::IEnumerator* Pathfinding::RichAI::TraverseOffMeshLinkFallback(::Pathfinding::RichSpecial*  link)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"TraverseOffMeshLinkFallback", {}, {::i2c::type_of<::Pathfinding::RichSpecial*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, link);
}
inline void Pathfinding::RichAI::OnDrawGizmos()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::RichAI::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::RichAI*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline void Pathfinding::RichAI::UpdatePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"UpdatePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::get_Velocity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_Velocity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::get_NextWaypoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_NextWaypoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline float_t Pathfinding::RichAI::get_DistanceToNextWaypoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_DistanceToNextWaypoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_repeatedlySearchPaths()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_repeatedlySearchPaths", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::RichAI::set_repeatedlySearchPaths(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_repeatedlySearchPaths", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::RichAI::get_TargetReached()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TargetReached", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_PathPending()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_PathPending", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_ApproachingPartEndpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_ApproachingPartEndpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_ApproachingPathEndpoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_ApproachingPathEndpoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Pathfinding::RichAI::get_TraversingSpecial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TraversingSpecial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Pathfinding::RichAI::get_TargetPoint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_TargetPoint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Animation> Pathfinding::RichAI::get_anim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"get_anim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Animation>>(this, ___internal_method);
}
inline void Pathfinding::RichAI::set_anim(::UnityEngine::Animation*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {"set_anim", {}, {::i2c::type_of<::UnityEngine::Animation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::RichAI::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::RichAI* Pathfinding::RichAI::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichAI*>());
}
/// @brief Convert operator to "::Pathfinding::IAstarAI"
constexpr  Pathfinding::RichAI::operator ::Pathfinding::IAstarAI*() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IAstarAI"
constexpr ::Pathfinding::IAstarAI* Pathfinding::RichAI::i___Pathfinding__IAstarAI() noexcept {
return static_cast<::Pathfinding::IAstarAI*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RichAI::RichAI()   {
}
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseSpecial_d__68::*)(int32_t)>(&::Pathfinding::RichAI__TraverseSpecial_d__68::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e42414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseSpecial_d__68::*)()>(&::Pathfinding::RichAI__TraverseSpecial_d__68::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e42de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI__TraverseSpecial_d__68::*)()>(&::Pathfinding::RichAI__TraverseSpecial_d__68::MoveNext)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5e42de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RichAI__TraverseSpecial_d__68::*)()>(&::Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e42f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseSpecial_d__68::*)()>(&::Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e42f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseSpecial_d__68.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RichAI__TraverseSpecial_d__68::*)()>(&::Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e42f4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::RichAI>& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::RichAI> const& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_set___4__this(::UnityW<::Pathfinding::RichAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::RichSpecial*& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get_link()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr ::Pathfinding::RichSpecial* const& Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_get_link() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr void Pathfinding::RichAI__TraverseSpecial_d__68::__cordl_internal_set_link(::Pathfinding::RichSpecial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___link = value;
}
inline void Pathfinding::RichAI__TraverseSpecial_d__68::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::RichAI__TraverseSpecial_d__68::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RichAI__TraverseSpecial_d__68::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RichAI__TraverseSpecial_d__68::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseSpecial_d__68*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::RichAI__TraverseSpecial_d__68* Pathfinding::RichAI__TraverseSpecial_d__68::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichAI__TraverseSpecial_d__68*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::RichAI__TraverseSpecial_d__68::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::RichAI__TraverseSpecial_d__68::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::RichAI__TraverseSpecial_d__68::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::RichAI__TraverseSpecial_d__68::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::RichAI__TraverseSpecial_d__68::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::RichAI__TraverseSpecial_d__68::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RichAI__TraverseSpecial_d__68::RichAI__TraverseSpecial_d__68()   {
}
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)(int32_t)>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e424c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)()>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e42b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)()>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::MoveNext)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5e42b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)()>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e42d9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)()>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e42da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::*)()>(&::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e42ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::Pathfinding::RichAI>& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::Pathfinding::RichAI> const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set___4__this(::UnityW<::Pathfinding::RichAI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::Pathfinding::RichSpecial*& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get_link()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr ::Pathfinding::RichSpecial* const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get_link() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___link;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set_link(::Pathfinding::RichSpecial*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___link = value;
}
constexpr float_t& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get__duration_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration_5__2;
}
constexpr float_t const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get__duration_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____duration_5__2;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set__duration_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____duration_5__2 = value;
}
constexpr float_t& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get__startTime_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr float_t const& Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_get__startTime_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime_5__3;
}
constexpr void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::__cordl_internal_set__startTime_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime_5__3 = value;
}
inline void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::RichAI__TraverseOffMeshLinkFallback_d__69::RichAI__TraverseOffMeshLinkFallback_d__69()   {
}

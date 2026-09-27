#pragma once
// IWYU pragma private; include "Pathfinding/Seeker.hpp"
#include "Pathfinding/zzzz__GraphMask_impl.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "Pathfinding/zzzz__ABPath_def.hpp"
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IPathModifier_def.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__Seeker_ModifierPass_def.hpp"
#include "Pathfinding/zzzz__Seeker_def.hpp"
#include "Pathfinding/zzzz__StartEndModifier_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Seeker._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::_ctor)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5e46490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::Awake)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e46644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Seeker*>(),
                    {::i2c::class_of<::Pathfinding::Seeker*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.GetCurrentPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::GetCurrentPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e46670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"GetCurrentPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.CancelCurrentPathRequest
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(bool)>(&::Pathfinding::Seeker::CancelCurrentPathRequest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e39018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"CancelCurrentPathRequest", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::OnDestroy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e46698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.ReleaseClaimedPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::ReleaseClaimedPath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5e466c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"ReleaseClaimedPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.RegisterModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::IPathModifier*)>(&::Pathfinding::Seeker::RegisterModifier)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5e4670c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"RegisterModifier", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.DeregisterModifier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::IPathModifier*)>(&::Pathfinding::Seeker::DeregisterModifier)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e4688c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"DeregisterModifier", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.PostProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*)>(&::Pathfinding::Seeker::PostProcess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e468e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"PostProcess", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.RunModifiers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::GlobalNamespace::Seeker_ModifierPass, ::Pathfinding::Path*)>(&::Pathfinding::Seeker::RunModifiers)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e468f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"RunModifiers", {}, {::i2c::type_of<::GlobalNamespace::Seeker_ModifierPass>(), ::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::IsDone)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e46678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*)>(&::Pathfinding::Seeker::OnPathComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e46af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*, bool, bool)>(&::Pathfinding::Seeker::OnPathComplete)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e46b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnPartialPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*)>(&::Pathfinding::Seeker::OnPartialPathComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e46c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPartialPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnMultiPathComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*)>(&::Pathfinding::Seeker::OnMultiPathComplete)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e46c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnMultiPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.GetNewPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::ABPath* (::Pathfinding::Seeker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Seeker::GetNewPath)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e46c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Pathfinding::Seeker::StartPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e46d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::Seeker::StartPath)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e46d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Pathfinding::OnPathDelegate*, ::Pathfinding::GraphMask)>(&::Pathfinding::Seeker::StartPath)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e46de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)(::Pathfinding::Path*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::Seeker::StartPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e39884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Path* (::Pathfinding::Seeker::*)(::Pathfinding::Path*, ::Pathfinding::OnPathDelegate*, ::Pathfinding::GraphMask)>(&::Pathfinding::Seeker::StartPath)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e46ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartPathInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)(::Pathfinding::Path*, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::Seeker::StartPathInternal)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x5e46ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPathInternal", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartMultiTargetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::MultiTargetPath* (::Pathfinding::Seeker::*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, bool, ::Pathfinding::OnPathDelegate*, int32_t)>(&::Pathfinding::Seeker::StartMultiTargetPath)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e4716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartMultiTargetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::MultiTargetPath* (::Pathfinding::Seeker::*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Vector3, bool, ::Pathfinding::OnPathDelegate*, int32_t)>(&::Pathfinding::Seeker::StartMultiTargetPath)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5e471e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.StartMultiTargetPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::MultiTargetPath* (::Pathfinding::Seeker::*)(::Pathfinding::MultiTargetPath*, ::Pathfinding::OnPathDelegate*, int32_t)>(&::Pathfinding::Seeker::StartMultiTargetPath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5e47254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::Pathfinding::MultiTargetPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnDrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker::*)()>(&::Pathfinding::Seeker::OnDrawGizmos)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x5e47294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker.OnUpgradeSerializedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Seeker::*)(int32_t, bool)>(&::Pathfinding::Seeker::OnUpgradeSerializedData)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5e47498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Seeker*>(),
                    {::i2c::class_of<::Pathfinding::Seeker*>(), 9}
                ));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::Seeker::__cordl_internal_get_drawGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr bool const& Pathfinding::Seeker::__cordl_internal_get_drawGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___drawGizmos;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_drawGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___drawGizmos = value;
}
constexpr bool& Pathfinding::Seeker::__cordl_internal_get_detailedGizmos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailedGizmos;
}
constexpr bool const& Pathfinding::Seeker::__cordl_internal_get_detailedGizmos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___detailedGizmos;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_detailedGizmos(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___detailedGizmos = value;
}
constexpr ::Pathfinding::StartEndModifier*& Pathfinding::Seeker::__cordl_internal_get_startEndModifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEndModifier;
}
constexpr ::Pathfinding::StartEndModifier* const& Pathfinding::Seeker::__cordl_internal_get_startEndModifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startEndModifier;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_startEndModifier(::Pathfinding::StartEndModifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startEndModifier = value;
}
constexpr int32_t& Pathfinding::Seeker::__cordl_internal_get_traversableTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversableTags;
}
constexpr int32_t const& Pathfinding::Seeker::__cordl_internal_get_traversableTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversableTags;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_traversableTags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traversableTags = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Seeker::__cordl_internal_get_tagPenalties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagPenalties;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Seeker::__cordl_internal_get_tagPenalties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tagPenalties;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_tagPenalties(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tagPenalties = value;
}
constexpr ::Pathfinding::GraphMask& Pathfinding::Seeker::__cordl_internal_get_graphMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr ::Pathfinding::GraphMask const& Pathfinding::Seeker::__cordl_internal_get_graphMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMask;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_graphMask(::Pathfinding::GraphMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphMask = value;
}
constexpr int32_t& Pathfinding::Seeker::__cordl_internal_get_graphMaskCompatibility()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMaskCompatibility;
}
constexpr int32_t const& Pathfinding::Seeker::__cordl_internal_get_graphMaskCompatibility() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___graphMaskCompatibility;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_graphMaskCompatibility(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___graphMaskCompatibility = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_pathCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathCallback;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_pathCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathCallback;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_pathCallback(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathCallback = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_preProcessPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preProcessPath;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_preProcessPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preProcessPath;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_preProcessPath(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preProcessPath = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_postProcessPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessPath;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_postProcessPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postProcessPath;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_postProcessPath(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postProcessPath = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Seeker::__cordl_internal_get_lastCompletedVectorPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCompletedVectorPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Seeker::__cordl_internal_get_lastCompletedVectorPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCompletedVectorPath;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_lastCompletedVectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCompletedVectorPath = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::Seeker::__cordl_internal_get_lastCompletedNodePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCompletedNodePath;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::Seeker::__cordl_internal_get_lastCompletedNodePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastCompletedNodePath;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_lastCompletedNodePath(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastCompletedNodePath = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Seeker::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Seeker::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_path(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Seeker::__cordl_internal_get_prevPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPath;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Seeker::__cordl_internal_get_prevPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___prevPath;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_prevPath(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___prevPath = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_onPathDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPathDelegate;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_onPathDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPathDelegate;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_onPathDelegate(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPathDelegate = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_onPartialPathDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialPathDelegate;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_onPartialPathDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onPartialPathDelegate;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_onPartialPathDelegate(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onPartialPathDelegate = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Seeker::__cordl_internal_get_tmpPathCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpPathCallback;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Seeker::__cordl_internal_get_tmpPathCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tmpPathCallback;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_tmpPathCallback(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tmpPathCallback = value;
}
constexpr uint32_t& Pathfinding::Seeker::__cordl_internal_get_lastPathID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPathID;
}
constexpr uint32_t const& Pathfinding::Seeker::__cordl_internal_get_lastPathID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastPathID;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_lastPathID(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastPathID = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*& Pathfinding::Seeker::__cordl_internal_get_modifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiers;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>* const& Pathfinding::Seeker::__cordl_internal_get_modifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___modifiers;
}
constexpr void Pathfinding::Seeker::__cordl_internal_set_modifiers(::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___modifiers = value;
}
inline void Pathfinding::Seeker::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Seeker::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Seeker*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::GetCurrentPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"GetCurrentPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method);
}
inline void Pathfinding::Seeker::CancelCurrentPathRequest(bool  pool)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"CancelCurrentPathRequest", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pool);
}
inline void Pathfinding::Seeker::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Seeker::ReleaseClaimedPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"ReleaseClaimedPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Seeker::RegisterModifier(::Pathfinding::IPathModifier*  modifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"RegisterModifier", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifier);
}
inline void Pathfinding::Seeker::DeregisterModifier(::Pathfinding::IPathModifier*  modifier)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"DeregisterModifier", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modifier);
}
inline void Pathfinding::Seeker::PostProcess(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"PostProcess", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Seeker::RunModifiers(::GlobalNamespace::Seeker_ModifierPass  pass, ::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"RunModifiers", {}, {::i2c::type_of<::GlobalNamespace::Seeker_ModifierPass>(), ::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass, path);
}
inline bool Pathfinding::Seeker::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Seeker::OnPathComplete(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void Pathfinding::Seeker::OnPathComplete(::Pathfinding::Path*  p, bool  runModifiers, bool  sendCallbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, runModifiers, sendCallbacks);
}
inline void Pathfinding::Seeker::OnPartialPathComplete(::Pathfinding::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnPartialPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline void Pathfinding::Seeker::OnMultiPathComplete(::Pathfinding::Path*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnMultiPathComplete", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p);
}
inline ::Pathfinding::ABPath* Pathfinding::Seeker::GetNewPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"GetNewPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::ABPath*>(this, ___internal_method, start, end);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, start, end);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, start, end, callback);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback, ::Pathfinding::GraphMask  graphMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, start, end, callback, graphMask);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::StartPath(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, p, callback);
}
inline ::Pathfinding::Path* Pathfinding::Seeker::StartPath(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback, ::Pathfinding::GraphMask  graphMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPath", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<::Pathfinding::GraphMask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Path*>(this, ___internal_method, p, callback, graphMask);
}
inline void Pathfinding::Seeker::StartPathInternal(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartPathInternal", {}, {::i2c::type_of<::Pathfinding::Path*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, p, callback);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::Seeker::StartMultiTargetPath(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  endPoints, bool  pathsForAll, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::MultiTargetPath*>(this, ___internal_method, start, endPoints, pathsForAll, callback, graphMask);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::Seeker::StartMultiTargetPath(::ArrayW<::UnityEngine::Vector3>  startPoints, ::UnityEngine::Vector3  end, bool  pathsForAll, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<bool>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::MultiTargetPath*>(this, ___internal_method, startPoints, end, pathsForAll, callback, graphMask);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::Seeker::StartMultiTargetPath(::Pathfinding::MultiTargetPath*  p, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"StartMultiTargetPath", {}, {::i2c::type_of<::Pathfinding::MultiTargetPath*>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::MultiTargetPath*>(this, ___internal_method, p, callback, graphMask);
}
inline void Pathfinding::Seeker::OnDrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker*>(),
                        {"OnDrawGizmos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Seeker::OnUpgradeSerializedData(int32_t  version, bool  unityThread)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Seeker*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, version, unityThread);
}
inline ::Pathfinding::Seeker* Pathfinding::Seeker::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Seeker*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Seeker::Seeker()   {
}
//  Writing Method size for method: ::Pathfinding::Seeker___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Seeker___c::*)()>(&::Pathfinding::Seeker___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e4761c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Seeker___c._RegisterModifier_b__26_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Seeker___c::*)(::Pathfinding::IPathModifier*, ::Pathfinding::IPathModifier*)>(&::Pathfinding::Seeker___c::_RegisterModifier_b__26_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e47624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker___c*>(),
                        {"<RegisterModifier>b__26_0", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>(), ::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::Seeker___c::setStaticF___9(::Pathfinding::Seeker___c*  value)  {
::cordl_internals::setStaticField<::Pathfinding::Seeker___c*, "<>9", ::Pathfinding::Seeker___c*>(std::forward<::Pathfinding::Seeker___c*>(value));
}
inline ::Pathfinding::Seeker___c* Pathfinding::Seeker___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Pathfinding::Seeker___c*, "<>9", ::Pathfinding::Seeker___c*>();
}
inline void Pathfinding::Seeker___c::setStaticF___9__26_0(::System::Comparison_1<::Pathfinding::IPathModifier*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Pathfinding::IPathModifier*>*, "<>9__26_0", ::Pathfinding::Seeker___c*>(std::forward<::System::Comparison_1<::Pathfinding::IPathModifier*>*>(value));
}
inline ::System::Comparison_1<::Pathfinding::IPathModifier*>* Pathfinding::Seeker___c::getStaticF___9__26_0()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Pathfinding::IPathModifier*>*, "<>9__26_0", ::Pathfinding::Seeker___c*>();
}
inline void Pathfinding::Seeker___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Pathfinding::Seeker___c::_RegisterModifier_b__26_0(::Pathfinding::IPathModifier*  a, ::Pathfinding::IPathModifier*  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Seeker___c*>(),
                        {"<RegisterModifier>b__26_0", {}, {::i2c::type_of<::Pathfinding::IPathModifier*>(), ::i2c::type_of<::Pathfinding::IPathModifier*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::Pathfinding::Seeker___c* Pathfinding::Seeker___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Seeker___c*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Seeker___c::Seeker___c()   {
}

#pragma once
// IWYU pragma private; include "Pathfinding/Path.hpp"
#include "Pathfinding/zzzz__Heuristic_impl.hpp"
#include "Pathfinding/zzzz__Int3_impl.hpp"
#include "Pathfinding/zzzz__PathCompleteState_impl.hpp"
#include "Pathfinding/zzzz__PathState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__IPathInternals_def.hpp"
#include "Pathfinding/zzzz__ITraversalProvider_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__NNConstraint_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__PathCompleteState_def.hpp"
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "Pathfinding/zzzz__PathLog_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "Pathfinding/zzzz__PathState_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::Path.get_PipelineState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathState (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_PipelineState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68d90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_PipelineState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_PipelineState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathState)>(&::Pathfinding::Path::set_PipelineState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68d98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_PipelineState", {}, {::i2c::type_of<::Pathfinding::PathState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_CompleteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathCompleteState (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_CompleteState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_CompleteState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_CompleteState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathCompleteState)>(&::Pathfinding::Path::set_CompleteState)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e68da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_CompleteState", {}, {::i2c::type_of<::Pathfinding::PathCompleteState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_error)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e68e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_errorLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_errorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_errorLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_errorLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::StringW)>(&::Pathfinding::Path::set_errorLog)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_errorLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_searchedNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_searchedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_searchedNodes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_searchedNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(int32_t)>(&::Pathfinding::Path::set_searchedNodes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_searchedNodes", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_get_Pooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_get_Pooled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.get_Pooled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_set_Pooled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(bool)>(&::Pathfinding::Path::Pathfinding_IPathInternals_set_Pooled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.set_Pooled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_recycled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_recycled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_recycled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_pathID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_pathID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_pathID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_pathID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(uint16_t)>(&::Pathfinding::Path::set_pathID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_pathID", {}, {::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_tagPenalties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<int32_t> (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_tagPenalties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_tagPenalties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.set_tagPenalties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::ArrayW<int32_t>)>(&::Pathfinding::Path::set_tagPenalties)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5e68edc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_tagPenalties", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.get_FloodingPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)()>(&::Pathfinding::Path::get_FloodingPath)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e68f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetTotalLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Pathfinding::Path::*)()>(&::Pathfinding::Path::GetTotalLength)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5e68f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTotalLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.WaitForPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Pathfinding::Path::*)()>(&::Pathfinding::Path::WaitForPath)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e690d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"WaitForPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.BlockUntilCalculated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::BlockUntilCalculated)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5e6916c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"BlockUntilCalculated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.CalculateHScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Path::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Path::CalculateHScore)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x5e691c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"CalculateHScore", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetTagPenalty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Path::*)(int32_t)>(&::Pathfinding::Path::GetTagPenalty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5e68d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTagPenalty", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetHTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::Int3 (::Pathfinding::Path::*)()>(&::Pathfinding::Path::GetHTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e69548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetHTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.CanTraverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Path::CanTraverse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e69558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetTraversalCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Path::*)(::Pathfinding::GraphNode*)>(&::Pathfinding::Path::GetTraversalCost)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5e69634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetConnectionSpecialCost
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Pathfinding::Path::*)(::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, uint32_t)>(&::Pathfinding::Path::GetConnectionSpecialCost)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6970c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.IsDone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path::*)()>(&::Pathfinding::Path::IsDone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e69714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"IsDone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_AdvanceState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathState)>(&::Pathfinding::Path::Pathfinding_IPathInternals_AdvanceState)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e69724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.AdvanceState", {}, {::i2c::type_of<::Pathfinding::PathState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.GetState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathState (::Pathfinding::Path::*)()>(&::Pathfinding::Path::GetState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e69838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.FailWithError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::StringW)>(&::Pathfinding::Path::FailWithError)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e65ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"FailWithError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.LogError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::StringW)>(&::Pathfinding::Path::LogError)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e69848;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::StringW)>(&::Pathfinding::Path::Log)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e69870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Error)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e69840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.ErrorCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::ErrorCheck)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e69898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"ErrorCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::OnEnterPool)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e699dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Reset)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5e69ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Claim
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::System::Object*)>(&::Pathfinding::Path::Claim)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x5e69d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Claim", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.ReleaseSilent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::System::Object*)>(&::Pathfinding::Path::ReleaseSilent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e69f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"ReleaseSilent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::System::Object*, bool)>(&::Pathfinding::Path::Release)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x5e66ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Release", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathNode*)>(&::Pathfinding::Path::Trace)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x5e69f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.DebugStringPrefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathLog, ::System::Text::StringBuilder*)>(&::Pathfinding::Path::DebugStringPrefix)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e6a2ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"DebugStringPrefix", {}, {::i2c::type_of<::Pathfinding::PathLog>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.DebugStringSuffix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathLog, ::System::Text::StringBuilder*)>(&::Pathfinding::Path::DebugStringSuffix)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x5e6a474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"DebugStringSuffix", {}, {::i2c::type_of<::Pathfinding::PathLog>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.DebugString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Path::*)(::Pathfinding::PathLog)>(&::Pathfinding::Path::DebugString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e6a634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.ReturnPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::ReturnPath)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e6a6f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.PrepareBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathHandler*)>(&::Pathfinding::Path::PrepareBase)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e6a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"PrepareBase", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Prepare)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Cleanup)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6a8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(int64_t)>(&::Pathfinding::Path::CalculateStep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::Path*>(),
                    {::i2c::class_of<::Pathfinding::Path*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_get_PathHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::PathHandler* (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_get_PathHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6a8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.get_PathHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_OnEnterPool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.OnEnterPool", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_ReturnPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_ReturnPath)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a91c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.ReturnPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_PrepareBase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(::Pathfinding::PathHandler*)>(&::Pathfinding::Path::Pathfinding_IPathInternals_PrepareBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6a92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.PrepareBase", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_Prepare)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Prepare", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_Cleanup)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::Pathfinding_IPathInternals_Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)(int64_t)>(&::Pathfinding::Path::Pathfinding_IPathInternals_CalculateStep)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.CalculateStep", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path.Pathfinding_IPathInternals_DebugString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::Path::*)(::Pathfinding::PathLog)>(&::Pathfinding::Path::Pathfinding_IPathInternals_DebugString)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e6a970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.DebugString", {}, {::i2c::type_of<::Pathfinding::PathLog>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path::*)()>(&::Pathfinding::Path::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5e6a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::PathHandler*& Pathfinding::Path::__cordl_internal_get_pathHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr ::Pathfinding::PathHandler* const& Pathfinding::Path::__cordl_internal_get_pathHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathHandler;
}
constexpr void Pathfinding::Path::__cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathHandler = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Path::__cordl_internal_get_callback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Path::__cordl_internal_get_callback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callback;
}
constexpr void Pathfinding::Path::__cordl_internal_set_callback(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callback = value;
}
constexpr ::Pathfinding::OnPathDelegate*& Pathfinding::Path::__cordl_internal_get_immediateCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediateCallback;
}
constexpr ::Pathfinding::OnPathDelegate* const& Pathfinding::Path::__cordl_internal_get_immediateCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___immediateCallback;
}
constexpr void Pathfinding::Path::__cordl_internal_set_immediateCallback(::Pathfinding::OnPathDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___immediateCallback = value;
}
constexpr ::Pathfinding::PathState& Pathfinding::Path::__cordl_internal_get__PipelineState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PipelineState_k__BackingField;
}
constexpr ::Pathfinding::PathState const& Pathfinding::Path::__cordl_internal_get__PipelineState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PipelineState_k__BackingField;
}
constexpr void Pathfinding::Path::__cordl_internal_set__PipelineState_k__BackingField(::Pathfinding::PathState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PipelineState_k__BackingField = value;
}
constexpr ::System::Object*& Pathfinding::Path::__cordl_internal_get_stateLock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateLock;
}
constexpr ::System::Object* const& Pathfinding::Path::__cordl_internal_get_stateLock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stateLock;
}
constexpr void Pathfinding::Path::__cordl_internal_set_stateLock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stateLock = value;
}
constexpr ::Pathfinding::ITraversalProvider*& Pathfinding::Path::__cordl_internal_get_traversalProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversalProvider;
}
constexpr ::Pathfinding::ITraversalProvider* const& Pathfinding::Path::__cordl_internal_get_traversalProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___traversalProvider;
}
constexpr void Pathfinding::Path::__cordl_internal_set_traversalProvider(::Pathfinding::ITraversalProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___traversalProvider = value;
}
constexpr ::Pathfinding::PathCompleteState& Pathfinding::Path::__cordl_internal_get_completeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeState;
}
constexpr ::Pathfinding::PathCompleteState const& Pathfinding::Path::__cordl_internal_get_completeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completeState;
}
constexpr void Pathfinding::Path::__cordl_internal_set_completeState(::Pathfinding::PathCompleteState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completeState = value;
}
constexpr ::StringW& Pathfinding::Path::__cordl_internal_get__errorLog_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorLog_k__BackingField;
}
constexpr ::StringW const& Pathfinding::Path::__cordl_internal_get__errorLog_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____errorLog_k__BackingField;
}
constexpr void Pathfinding::Path::__cordl_internal_set__errorLog_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____errorLog_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& Pathfinding::Path::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& Pathfinding::Path::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Pathfinding::Path::__cordl_internal_set_path(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& Pathfinding::Path::__cordl_internal_get_vectorPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPath;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& Pathfinding::Path::__cordl_internal_get_vectorPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPath;
}
constexpr void Pathfinding::Path::__cordl_internal_set_vectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorPath = value;
}
constexpr ::Pathfinding::PathNode*& Pathfinding::Path::__cordl_internal_get_currentR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentR;
}
constexpr ::Pathfinding::PathNode* const& Pathfinding::Path::__cordl_internal_get_currentR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentR;
}
constexpr void Pathfinding::Path::__cordl_internal_set_currentR(::Pathfinding::PathNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentR = value;
}
constexpr float_t& Pathfinding::Path::__cordl_internal_get_duration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr float_t const& Pathfinding::Path::__cordl_internal_get_duration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___duration;
}
constexpr void Pathfinding::Path::__cordl_internal_set_duration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___duration = value;
}
constexpr int32_t& Pathfinding::Path::__cordl_internal_get__searchedNodes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchedNodes_k__BackingField;
}
constexpr int32_t const& Pathfinding::Path::__cordl_internal_get__searchedNodes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____searchedNodes_k__BackingField;
}
constexpr void Pathfinding::Path::__cordl_internal_set__searchedNodes_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____searchedNodes_k__BackingField = value;
}
constexpr bool& Pathfinding::Path::__cordl_internal_get__Pathfinding_IPathInternals_Pooled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pathfinding_IPathInternals_Pooled_k__BackingField;
}
constexpr bool const& Pathfinding::Path::__cordl_internal_get__Pathfinding_IPathInternals_Pooled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Pathfinding_IPathInternals_Pooled_k__BackingField;
}
constexpr void Pathfinding::Path::__cordl_internal_set__Pathfinding_IPathInternals_Pooled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Pathfinding_IPathInternals_Pooled_k__BackingField = value;
}
constexpr bool& Pathfinding::Path::__cordl_internal_get_hasBeenReset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenReset;
}
constexpr bool const& Pathfinding::Path::__cordl_internal_get_hasBeenReset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasBeenReset;
}
constexpr void Pathfinding::Path::__cordl_internal_set_hasBeenReset(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasBeenReset = value;
}
constexpr ::Pathfinding::NNConstraint*& Pathfinding::Path::__cordl_internal_get_nnConstraint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nnConstraint;
}
constexpr ::Pathfinding::NNConstraint* const& Pathfinding::Path::__cordl_internal_get_nnConstraint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nnConstraint;
}
constexpr void Pathfinding::Path::__cordl_internal_set_nnConstraint(::Pathfinding::NNConstraint*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nnConstraint = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Path::__cordl_internal_get_next()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Path::__cordl_internal_get_next() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___next;
}
constexpr void Pathfinding::Path::__cordl_internal_set_next(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___next = value;
}
constexpr ::Pathfinding::Heuristic& Pathfinding::Path::__cordl_internal_get_heuristic()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristic;
}
constexpr ::Pathfinding::Heuristic const& Pathfinding::Path::__cordl_internal_get_heuristic() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristic;
}
constexpr void Pathfinding::Path::__cordl_internal_set_heuristic(::Pathfinding::Heuristic  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heuristic = value;
}
constexpr float_t& Pathfinding::Path::__cordl_internal_get_heuristicScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicScale;
}
constexpr float_t const& Pathfinding::Path::__cordl_internal_get_heuristicScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicScale;
}
constexpr void Pathfinding::Path::__cordl_internal_set_heuristicScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heuristicScale = value;
}
constexpr uint16_t& Pathfinding::Path::__cordl_internal_get__pathID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathID_k__BackingField;
}
constexpr uint16_t const& Pathfinding::Path::__cordl_internal_get__pathID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pathID_k__BackingField;
}
constexpr void Pathfinding::Path::__cordl_internal_set__pathID_k__BackingField(uint16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pathID_k__BackingField = value;
}
constexpr ::Pathfinding::GraphNode*& Pathfinding::Path::__cordl_internal_get_hTargetNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hTargetNode;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::Path::__cordl_internal_get_hTargetNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hTargetNode;
}
constexpr void Pathfinding::Path::__cordl_internal_set_hTargetNode(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hTargetNode = value;
}
constexpr ::Pathfinding::Int3& Pathfinding::Path::__cordl_internal_get_hTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hTarget;
}
constexpr ::Pathfinding::Int3 const& Pathfinding::Path::__cordl_internal_get_hTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hTarget;
}
constexpr void Pathfinding::Path::__cordl_internal_set_hTarget(::Pathfinding::Int3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hTarget = value;
}
constexpr int32_t& Pathfinding::Path::__cordl_internal_get_enabledTags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTags;
}
constexpr int32_t const& Pathfinding::Path::__cordl_internal_get_enabledTags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enabledTags;
}
constexpr void Pathfinding::Path::__cordl_internal_set_enabledTags(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enabledTags = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Path::__cordl_internal_get_internalTagPenalties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalTagPenalties;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Path::__cordl_internal_get_internalTagPenalties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___internalTagPenalties;
}
constexpr void Pathfinding::Path::__cordl_internal_set_internalTagPenalties(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___internalTagPenalties = value;
}
constexpr ::ArrayW<int32_t>& Pathfinding::Path::__cordl_internal_get_manualTagPenalties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualTagPenalties;
}
constexpr ::ArrayW<int32_t> const& Pathfinding::Path::__cordl_internal_get_manualTagPenalties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualTagPenalties;
}
constexpr void Pathfinding::Path::__cordl_internal_set_manualTagPenalties(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualTagPenalties = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>*& Pathfinding::Path::__cordl_internal_get_claimed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claimed;
}
constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& Pathfinding::Path::__cordl_internal_get_claimed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___claimed;
}
constexpr void Pathfinding::Path::__cordl_internal_set_claimed(::System::Collections::Generic::List_1<::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___claimed = value;
}
constexpr bool& Pathfinding::Path::__cordl_internal_get_releasedNotSilent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasedNotSilent;
}
constexpr bool const& Pathfinding::Path::__cordl_internal_get_releasedNotSilent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___releasedNotSilent;
}
constexpr void Pathfinding::Path::__cordl_internal_set_releasedNotSilent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___releasedNotSilent = value;
}
inline void Pathfinding::Path::setStaticF_ZeroTagPenalties(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "ZeroTagPenalties", ::Pathfinding::Path*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> Pathfinding::Path::getStaticF_ZeroTagPenalties()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "ZeroTagPenalties", ::Pathfinding::Path*>();
}
inline ::Pathfinding::PathState Pathfinding::Path::get_PipelineState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_PipelineState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathState>(this, ___internal_method);
}
inline void Pathfinding::Path::set_PipelineState(::Pathfinding::PathState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_PipelineState", {}, {::i2c::type_of<::Pathfinding::PathState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Pathfinding::PathCompleteState Pathfinding::Path::get_CompleteState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_CompleteState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathCompleteState>(this, ___internal_method);
}
inline void Pathfinding::Path::set_CompleteState(::Pathfinding::PathCompleteState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_CompleteState", {}, {::i2c::type_of<::Pathfinding::PathCompleteState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Path::get_error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW Pathfinding::Path::get_errorLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_errorLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Pathfinding::Path::set_errorLog(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_errorLog", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Pathfinding::Path::get_searchedNodes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_searchedNodes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Pathfinding::Path::set_searchedNodes(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_searchedNodes", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Path::Pathfinding_IPathInternals_get_Pooled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.get_Pooled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_set_Pooled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.set_Pooled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Path::get_recycled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_recycled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline uint16_t Pathfinding::Path::get_pathID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_pathID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void Pathfinding::Path::set_pathID(uint16_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_pathID", {}, {::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<int32_t> Pathfinding::Path::get_tagPenalties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"get_tagPenalties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t>>(this, ___internal_method);
}
inline void Pathfinding::Path::set_tagPenalties(::ArrayW<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"set_tagPenalties", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Pathfinding::Path::get_FloodingPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Pathfinding::Path::GetTotalLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTotalLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Pathfinding::Path::WaitForPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"WaitForPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Pathfinding::Path::BlockUntilCalculated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"BlockUntilCalculated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint32_t Pathfinding::Path::CalculateHScore(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"CalculateHScore", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, node);
}
inline uint32_t Pathfinding::Path::GetTagPenalty(int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTagPenalty", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, tag);
}
inline ::Pathfinding::Int3 Pathfinding::Path::GetHTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetHTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::Int3>(this, ___internal_method);
}
inline bool Pathfinding::Path::CanTraverse(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"CanTraverse", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, node);
}
inline uint32_t Pathfinding::Path::GetTraversalCost(::Pathfinding::GraphNode*  node)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetTraversalCost", {}, {::i2c::type_of<::Pathfinding::GraphNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, node);
}
inline uint32_t Pathfinding::Path::GetConnectionSpecialCost(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, uint32_t  currentCost)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, a, b, currentCost);
}
inline bool Pathfinding::Path::IsDone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"IsDone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_AdvanceState(::Pathfinding::PathState  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.AdvanceState", {}, {::i2c::type_of<::Pathfinding::PathState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, s);
}
inline ::Pathfinding::PathState Pathfinding::Path::GetState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"GetState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathState>(this, ___internal_method);
}
inline void Pathfinding::Path::FailWithError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"FailWithError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Pathfinding::Path::LogError(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"LogError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Pathfinding::Path::Log(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void Pathfinding::Path::Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::ErrorCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"ErrorCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::OnEnterPool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Claim(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Claim", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::Path::ReleaseSilent(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"ReleaseSilent", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void Pathfinding::Path::Release(::System::Object*  o, bool  silent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Release", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o, silent);
}
inline void Pathfinding::Path::Trace(::Pathfinding::PathNode*  from)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from);
}
inline void Pathfinding::Path::DebugStringPrefix(::Pathfinding::PathLog  logMode, ::System::Text::StringBuilder*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"DebugStringPrefix", {}, {::i2c::type_of<::Pathfinding::PathLog>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logMode, text);
}
inline void Pathfinding::Path::DebugStringSuffix(::Pathfinding::PathLog  logMode, ::System::Text::StringBuilder*  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"DebugStringSuffix", {}, {::i2c::type_of<::Pathfinding::PathLog>(), ::i2c::type_of<::System::Text::StringBuilder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logMode, text);
}
inline ::StringW Pathfinding::Path::DebugString(::Pathfinding::PathLog  logMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, logMode);
}
inline void Pathfinding::Path::ReturnPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::PrepareBase(::Pathfinding::PathHandler*  pathHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"PrepareBase", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathHandler);
}
inline void Pathfinding::Path::Prepare()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::Path*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::Pathfinding::PathHandler* Pathfinding::Path::Pathfinding_IPathInternals_get_PathHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.get_PathHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::PathHandler*>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_OnEnterPool()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.OnEnterPool", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_ReturnPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.ReturnPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_PrepareBase(::Pathfinding::PathHandler*  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.PrepareBase", {}, {::i2c::type_of<::Pathfinding::PathHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_Prepare()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Prepare", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Path::Pathfinding_IPathInternals_CalculateStep(int64_t  targetTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.CalculateStep", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline ::StringW Pathfinding::Path::Pathfinding_IPathInternals_DebugString(::Pathfinding::PathLog  logMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {"Pathfinding.IPathInternals.DebugString", {}, {::i2c::type_of<::Pathfinding::PathLog>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, logMode);
}
inline void Pathfinding::Path::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Path* Pathfinding::Path::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Path*>());
}
/// @brief Convert operator to "::Pathfinding::IPathInternals"
constexpr  Pathfinding::Path::operator ::Pathfinding::IPathInternals*() noexcept {
return static_cast<::Pathfinding::IPathInternals*>(static_cast<void*>(this));
}
/// @brief Convert to "::Pathfinding::IPathInternals"
constexpr ::Pathfinding::IPathInternals* Pathfinding::Path::i___Pathfinding__IPathInternals() noexcept {
return static_cast<::Pathfinding::IPathInternals*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Path::Path()   {
}
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path__WaitForPath_d__54::*)(int32_t)>(&::Pathfinding::Path__WaitForPath_d__54::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5e69144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path__WaitForPath_d__54::*)()>(&::Pathfinding::Path__WaitForPath_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e6aadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::Path__WaitForPath_d__54::*)()>(&::Pathfinding::Path__WaitForPath_d__54::MoveNext)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e6aae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Path__WaitForPath_d__54::*)()>(&::Pathfinding::Path__WaitForPath_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6ab9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Path__WaitForPath_d__54::*)()>(&::Pathfinding::Path__WaitForPath_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5e6aba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Path__WaitForPath_d__54.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Pathfinding::Path__WaitForPath_d__54::*)()>(&::Pathfinding::Path__WaitForPath_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e6abdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Pathfinding::Path__WaitForPath_d__54::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Pathfinding::Path__WaitForPath_d__54::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Pathfinding::Path*& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Pathfinding::Path* const& Pathfinding::Path__WaitForPath_d__54::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Pathfinding::Path__WaitForPath_d__54::__cordl_internal_set___4__this(::Pathfinding::Path*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Pathfinding::Path__WaitForPath_d__54::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Pathfinding::Path__WaitForPath_d__54::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Pathfinding::Path__WaitForPath_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Path__WaitForPath_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Pathfinding::Path__WaitForPath_d__54::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Pathfinding::Path__WaitForPath_d__54::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Path__WaitForPath_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Pathfinding::Path__WaitForPath_d__54* Pathfinding::Path__WaitForPath_d__54::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Path__WaitForPath_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Pathfinding::Path__WaitForPath_d__54::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Pathfinding::Path__WaitForPath_d__54::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Pathfinding::Path__WaitForPath_d__54::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Pathfinding::Path__WaitForPath_d__54::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Pathfinding::Path__WaitForPath_d__54::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Pathfinding::Path__WaitForPath_d__54::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Pathfinding::Path__WaitForPath_d__54::Path__WaitForPath_d__54()   {
}

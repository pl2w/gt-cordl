#pragma once
// IWYU pragma private; include "Pathfinding/MultiTargetPath.hpp"
#include "Pathfinding/zzzz__ABPath_impl.hpp"
#include "Pathfinding/zzzz__GraphNode_impl.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_HeuristicMode_impl.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__MultiTargetPath_HeuristicMode_def.hpp"
#include "Pathfinding/zzzz__OnPathDelegate_def.hpp"
#include "Pathfinding/zzzz__PathLog_def.hpp"
#include "Pathfinding/zzzz__PathNode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.get_inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::get_inverted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eaf2bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"get_inverted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.set_inverted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(bool)>(&::Pathfinding::MultiTargetPath::set_inverted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5eaf2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"set_inverted", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5eaf2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::MultiTargetPath* (*)(::ArrayW<::UnityEngine::Vector3>, ::UnityEngine::Vector3, ::ArrayW<::Pathfinding::OnPathDelegate*>, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::MultiTargetPath::Construct)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5eaf33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Construct", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Construct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Pathfinding::MultiTargetPath* (*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::Pathfinding::OnPathDelegate*>, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::MultiTargetPath::Construct)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5eaf35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(::UnityEngine::Vector3, ::ArrayW<::UnityEngine::Vector3>, ::ArrayW<::Pathfinding::OnPathDelegate*>, ::Pathfinding::OnPathDelegate*)>(&::Pathfinding::MultiTargetPath::Setup)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5eaf420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5eaf640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.OnEnterPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::OnEnterPool)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5eaf678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.ChooseShortestPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::ChooseShortestPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5eaf854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"ChooseShortestPath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.SetPathParametersForReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(int32_t)>(&::Pathfinding::MultiTargetPath::SetPathParametersForReturn)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5eaf950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"SetPathParametersForReturn", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.ReturnPath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::ReturnPath)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5eafaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.FoundTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(::Pathfinding::PathNode*, int32_t)>(&::Pathfinding::MultiTargetPath::FoundTarget)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5eafd0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"FoundTarget", {}, {::i2c::type_of<::Pathfinding::PathNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.RebuildOpenList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::RebuildOpenList)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5eb0474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"RebuildOpenList", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Prepare
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::Prepare)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5eb0528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.RecalculateHTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(bool)>(&::Pathfinding::MultiTargetPath::RecalculateHTarget)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5eaff54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"RecalculateHTarget", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::Initialize)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x5eb0a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::Cleanup)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5eb0c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.ResetFlags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)()>(&::Pathfinding::MultiTargetPath::ResetFlags)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5eb0c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"ResetFlags", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.CalculateStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(int64_t)>(&::Pathfinding::MultiTargetPath::CalculateStep)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x5eb0cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::MultiTargetPath::*)(::Pathfinding::PathNode*)>(&::Pathfinding::MultiTargetPath::Trace)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5eb0eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::MultiTargetPath.DebugString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Pathfinding::MultiTargetPath::*)(::Pathfinding::PathLog)>(&::Pathfinding::MultiTargetPath::DebugString)> {
  constexpr static std::size_t size = 0x674;
  constexpr static std::size_t addrs = 0x5eb10c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                    {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 22}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::Pathfinding::OnPathDelegate*>& Pathfinding::MultiTargetPath::__cordl_internal_get_callbacks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr ::ArrayW<::Pathfinding::OnPathDelegate*> const& Pathfinding::MultiTargetPath::__cordl_internal_get_callbacks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___callbacks;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_callbacks(::ArrayW<::Pathfinding::OnPathDelegate*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___callbacks = value;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*>& Pathfinding::MultiTargetPath::__cordl_internal_get_targetNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNodes;
}
constexpr ::ArrayW<::Pathfinding::GraphNode*> const& Pathfinding::MultiTargetPath::__cordl_internal_get_targetNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNodes;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_targetNodes(::ArrayW<::Pathfinding::GraphNode*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetNodes = value;
}
constexpr int32_t& Pathfinding::MultiTargetPath::__cordl_internal_get_targetNodeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNodeCount;
}
constexpr int32_t const& Pathfinding::MultiTargetPath::__cordl_internal_get_targetNodeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetNodeCount;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_targetNodeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetNodeCount = value;
}
constexpr ::ArrayW<bool>& Pathfinding::MultiTargetPath::__cordl_internal_get_targetsFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetsFound;
}
constexpr ::ArrayW<bool> const& Pathfinding::MultiTargetPath::__cordl_internal_get_targetsFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetsFound;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_targetsFound(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetsFound = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::MultiTargetPath::__cordl_internal_get_targetPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::MultiTargetPath::__cordl_internal_get_targetPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetPoints;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_targetPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetPoints = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& Pathfinding::MultiTargetPath::__cordl_internal_get_originalTargetPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalTargetPoints;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& Pathfinding::MultiTargetPath::__cordl_internal_get_originalTargetPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___originalTargetPoints;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_originalTargetPoints(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___originalTargetPoints = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>& Pathfinding::MultiTargetPath::__cordl_internal_get_vectorPaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPaths;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& Pathfinding::MultiTargetPath::__cordl_internal_get_vectorPaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vectorPaths;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_vectorPaths(::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vectorPaths = value;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>& Pathfinding::MultiTargetPath::__cordl_internal_get_nodePaths()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePaths;
}
constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*> const& Pathfinding::MultiTargetPath::__cordl_internal_get_nodePaths() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nodePaths;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_nodePaths(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nodePaths = value;
}
constexpr bool& Pathfinding::MultiTargetPath::__cordl_internal_get_pathsForAll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathsForAll;
}
constexpr bool const& Pathfinding::MultiTargetPath::__cordl_internal_get_pathsForAll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pathsForAll;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_pathsForAll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pathsForAll = value;
}
constexpr int32_t& Pathfinding::MultiTargetPath::__cordl_internal_get_chosenTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenTarget;
}
constexpr int32_t const& Pathfinding::MultiTargetPath::__cordl_internal_get_chosenTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___chosenTarget;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_chosenTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___chosenTarget = value;
}
constexpr int32_t& Pathfinding::MultiTargetPath::__cordl_internal_get_sequentialTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequentialTarget;
}
constexpr int32_t const& Pathfinding::MultiTargetPath::__cordl_internal_get_sequentialTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sequentialTarget;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_sequentialTarget(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sequentialTarget = value;
}
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode& Pathfinding::MultiTargetPath::__cordl_internal_get_heuristicMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicMode;
}
constexpr ::GlobalNamespace::MultiTargetPath_HeuristicMode const& Pathfinding::MultiTargetPath::__cordl_internal_get_heuristicMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___heuristicMode;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set_heuristicMode(::GlobalNamespace::MultiTargetPath_HeuristicMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___heuristicMode = value;
}
constexpr bool& Pathfinding::MultiTargetPath::__cordl_internal_get__inverted_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inverted_k__BackingField;
}
constexpr bool const& Pathfinding::MultiTargetPath::__cordl_internal_get__inverted_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inverted_k__BackingField;
}
constexpr void Pathfinding::MultiTargetPath::__cordl_internal_set__inverted_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inverted_k__BackingField = value;
}
inline bool Pathfinding::MultiTargetPath::get_inverted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"get_inverted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::set_inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"set_inverted", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Pathfinding::MultiTargetPath::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::MultiTargetPath::Construct(::ArrayW<::UnityEngine::Vector3>  startPoints, ::UnityEngine::Vector3  target, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Construct", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::MultiTargetPath*>(nullptr, ___internal_method, startPoints, target, callbackDelegates, callback);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::MultiTargetPath::Construct(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  targets, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Construct", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Pathfinding::MultiTargetPath*>(nullptr, ___internal_method, start, targets, callbackDelegates, callback);
}
inline void Pathfinding::MultiTargetPath::Setup(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  targets, ::ArrayW<::Pathfinding::OnPathDelegate*>  callbackDelegates, ::Pathfinding::OnPathDelegate*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"Setup", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>(), ::i2c::type_of<::ArrayW<::Pathfinding::OnPathDelegate*>>(), ::i2c::type_of<::Pathfinding::OnPathDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, start, targets, callbackDelegates, callback);
}
inline void Pathfinding::MultiTargetPath::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::OnEnterPool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::ChooseShortestPath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"ChooseShortestPath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::SetPathParametersForReturn(int32_t  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"SetPathParametersForReturn", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target);
}
inline void Pathfinding::MultiTargetPath::ReturnPath()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::FoundTarget(::Pathfinding::PathNode*  nodeR, int32_t  i)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"FoundTarget", {}, {::i2c::type_of<::Pathfinding::PathNode*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nodeR, i);
}
inline void Pathfinding::MultiTargetPath::RebuildOpenList()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"RebuildOpenList", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::Prepare()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::RecalculateHTarget(bool  firstTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"RecalculateHTarget", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstTime);
}
inline void Pathfinding::MultiTargetPath::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::Cleanup()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::ResetFlags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::MultiTargetPath*>(),
                        {"ResetFlags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::MultiTargetPath::CalculateStep(int64_t  targetTick)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetTick);
}
inline void Pathfinding::MultiTargetPath::Trace(::Pathfinding::PathNode*  node)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline ::StringW Pathfinding::MultiTargetPath::DebugString(::Pathfinding::PathLog  logMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::MultiTargetPath*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, logMode);
}
inline ::Pathfinding::MultiTargetPath* Pathfinding::MultiTargetPath::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::MultiTargetPath*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::MultiTargetPath::MultiTargetPath()   {
}

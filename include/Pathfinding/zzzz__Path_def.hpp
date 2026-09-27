#pragma once
// IWYU pragma private; include "Pathfinding/Path.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Heuristic_def.hpp"
#include "Pathfinding/zzzz__Int3_def.hpp"
#include "Pathfinding/zzzz__PathCompleteState_def.hpp"
#include "Pathfinding/zzzz__PathState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IPathInternals;
}
namespace Pathfinding {
class ITraversalProvider;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
struct PathCompleteState;
}
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
struct PathLog;
}
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
struct PathState;
}
namespace Pathfinding {
class Path__WaitForPath_d__54;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Path__WaitForPath_d__54;
}
// Write type traits
MARK_REF_T(::Pathfinding::Path*);
MARK_REF_T(::Pathfinding::Path__WaitForPath_d__54*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Path*, "Pathfinding", "Path");
DEFINE_IL2CPP_CLASS(::Pathfinding::Path__WaitForPath_d__54*, "Pathfinding", "Path/<WaitForPath>d__54");
// Dependencies Pathfinding.Heuristic, Pathfinding.Int3, Pathfinding.PathCompleteState, Pathfinding.PathState, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Path
class CORDL_TYPE Path : public ::System::Object {
public:
// Declarations
using _WaitForPath_d__54 = ::Pathfinding::Path__WaitForPath_d__54;

 __declspec(property(get=get_CompleteState, put=set_CompleteState)) ::Pathfinding::PathCompleteState  CompleteState;

 __declspec(property(get=get_FloodingPath)) bool  FloodingPath;

 __declspec(property(get=Pathfinding_IPathInternals_get_PathHandler)) ::Pathfinding::PathHandler*  Pathfinding_IPathInternals_PathHandler;

 __declspec(property(get=Pathfinding_IPathInternals_get_Pooled, put=Pathfinding_IPathInternals_set_Pooled)) bool  Pathfinding_IPathInternals_Pooled;

 __declspec(property(get=get_PipelineState, put=set_PipelineState)) ::Pathfinding::PathState  PipelineState;

/// @brief Field ZeroTagPenalties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZeroTagPenalties, put=setStaticF_ZeroTagPenalties)) ::ArrayW<int32_t>  ZeroTagPenalties;

/// @brief Field <Pathfinding.IPathInternals.Pooled>k__BackingField, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__Pathfinding_IPathInternals_Pooled_k__BackingField, put=__cordl_internal_set__Pathfinding_IPathInternals_Pooled_k__BackingField)) bool  _Pathfinding_IPathInternals_Pooled_k__BackingField;

/// @brief Field <PipelineState>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PipelineState_k__BackingField, put=__cordl_internal_set__PipelineState_k__BackingField)) ::Pathfinding::PathState  _PipelineState_k__BackingField;

/// @brief Field <errorLog>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__errorLog_k__BackingField, put=__cordl_internal_set__errorLog_k__BackingField)) ::StringW  _errorLog_k__BackingField;

/// @brief Field <pathID>k__BackingField, offset 0x90, size 0x2 
 __declspec(property(get=__cordl_internal_get__pathID_k__BackingField, put=__cordl_internal_set__pathID_k__BackingField)) uint16_t  _pathID_k__BackingField;

/// @brief Field <searchedNodes>k__BackingField, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__searchedNodes_k__BackingField, put=__cordl_internal_set__searchedNodes_k__BackingField)) int32_t  _searchedNodes_k__BackingField;

/// @brief Field callback, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Pathfinding::OnPathDelegate*  callback;

/// @brief Field claimed, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_claimed, put=__cordl_internal_set_claimed)) ::System::Collections::Generic::List_1<::System::Object*>*  claimed;

/// @brief Field completeState, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeState, put=__cordl_internal_set_completeState)) ::Pathfinding::PathCompleteState  completeState;

/// @brief Field currentR, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentR, put=__cordl_internal_set_currentR)) ::Pathfinding::PathNode*  currentR;

/// @brief Field duration, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field enabledTags, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_enabledTags, put=__cordl_internal_set_enabledTags)) int32_t  enabledTags;

 __declspec(property(get=get_error)) bool  error;

 __declspec(property(get=get_errorLog, put=set_errorLog)) ::StringW  errorLog;

/// @brief Field hTarget, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_hTarget, put=__cordl_internal_set_hTarget)) ::Pathfinding::Int3  hTarget;

/// @brief Field hTargetNode, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_hTargetNode, put=__cordl_internal_set_hTargetNode)) ::Pathfinding::GraphNode*  hTargetNode;

/// @brief Field hasBeenReset, offset 0x71, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBeenReset, put=__cordl_internal_set_hasBeenReset)) bool  hasBeenReset;

/// @brief Field heuristic, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_heuristic, put=__cordl_internal_set_heuristic)) ::Pathfinding::Heuristic  heuristic;

/// @brief Field heuristicScale, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heuristicScale, put=__cordl_internal_set_heuristicScale)) float_t  heuristicScale;

/// @brief Field immediateCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_immediateCallback, put=__cordl_internal_set_immediateCallback)) ::Pathfinding::OnPathDelegate*  immediateCallback;

/// @brief Field internalTagPenalties, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_internalTagPenalties, put=__cordl_internal_set_internalTagPenalties)) ::ArrayW<int32_t>  internalTagPenalties;

/// @brief Field manualTagPenalties, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_manualTagPenalties, put=__cordl_internal_set_manualTagPenalties)) ::ArrayW<int32_t>  manualTagPenalties;

/// @brief Field next, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_next, put=__cordl_internal_set_next)) ::Pathfinding::Path*  next;

/// @brief Field nnConstraint, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_nnConstraint, put=__cordl_internal_set_nnConstraint)) ::Pathfinding::NNConstraint*  nnConstraint;

/// @brief Field path, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  path;

/// @brief Field pathHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathHandler, put=__cordl_internal_set_pathHandler)) ::Pathfinding::PathHandler*  pathHandler;

 __declspec(property(get=get_pathID, put=set_pathID)) uint16_t  pathID;

/// @brief [Obsolete("Has been renamed to \'Pooled\' to use more widely underestood terminology", true)]
 __declspec(property(get=get_recycled)) bool  recycled;

/// @brief Field releasedNotSilent, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_releasedNotSilent, put=__cordl_internal_set_releasedNotSilent)) bool  releasedNotSilent;

 __declspec(property(get=get_searchedNodes, put=set_searchedNodes)) int32_t  searchedNodes;

/// @brief Field stateLock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateLock, put=__cordl_internal_set_stateLock)) ::System::Object*  stateLock;

 __declspec(property(get=get_tagPenalties, put=set_tagPenalties)) ::ArrayW<int32_t>  tagPenalties;

/// @brief Field traversalProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_traversalProvider, put=__cordl_internal_set_traversalProvider)) ::Pathfinding::ITraversalProvider*  traversalProvider;

/// @brief Field vectorPath, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_vectorPath, put=__cordl_internal_set_vectorPath)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  vectorPath;

/// @brief Convert operator to "::Pathfinding::IPathInternals"
constexpr operator  ::Pathfinding::IPathInternals*() noexcept;

/// @brief Method BlockUntilCalculated, addr 0x5e6916c, size 0x58, virtual false, abstract: false, final false
inline void BlockUntilCalculated() ;

/// @brief Method CalculateHScore, addr 0x5e691c4, size 0x384, virtual false, abstract: false, final false
inline uint32_t CalculateHScore(::Pathfinding::GraphNode*  node) ;

/// @brief Method CalculateStep, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void CalculateStep(int64_t  targetTick) ;

/// @brief Method CanTraverse, addr 0x5e69558, size 0xdc, virtual false, abstract: false, final false
inline bool CanTraverse(::Pathfinding::GraphNode*  node) ;

/// @brief Method Claim, addr 0x5e69d6c, size 0x1d4, virtual false, abstract: false, final false
inline void Claim(::System::Object*  o) ;

/// @brief Method Cleanup, addr 0x5e6a8f0, size 0x4, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method DebugString, addr 0x5e6a634, size 0xbc, virtual true, abstract: false, final false
inline ::StringW DebugString(::Pathfinding::PathLog  logMode) ;

/// @brief Method DebugStringPrefix, addr 0x5e6a2ac, size 0x1c8, virtual false, abstract: false, final false
inline void DebugStringPrefix(::Pathfinding::PathLog  logMode, ::System::Text::StringBuilder*  text) ;

/// @brief Method DebugStringSuffix, addr 0x5e6a474, size 0x1c0, virtual false, abstract: false, final false
inline void DebugStringSuffix(::Pathfinding::PathLog  logMode, ::System::Text::StringBuilder*  text) ;

/// @brief Method Error, addr 0x5e69840, size 0x8, virtual false, abstract: false, final false
inline void Error() ;

/// @brief Method ErrorCheck, addr 0x5e69898, size 0x144, virtual false, abstract: false, final false
inline void ErrorCheck() ;

/// @brief Method FailWithError, addr 0x5e65ac8, size 0xa4, virtual false, abstract: false, final false
inline void FailWithError(::StringW  msg) ;

/// @brief Method GetConnectionSpecialCost, addr 0x5e6970c, size 0x8, virtual true, abstract: false, final false
inline uint32_t GetConnectionSpecialCost(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, uint32_t  currentCost) ;

/// @brief Method GetHTarget, addr 0x5e69548, size 0x10, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 GetHTarget() ;

/// [Obsolete("Use the \'PipelineState\' property instead")]
/// @brief Method GetState, addr 0x5e69838, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PathState GetState() ;

/// @brief Method GetTagPenalty, addr 0x5e68d60, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetTagPenalty(int32_t  tag) ;

/// @brief Method GetTotalLength, addr 0x5e68f8c, size 0x14c, virtual false, abstract: false, final false
inline float_t GetTotalLength() ;

/// @brief Method GetTraversalCost, addr 0x5e69634, size 0xd8, virtual false, abstract: false, final false
inline uint32_t GetTraversalCost(::Pathfinding::GraphNode*  node) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Initialize() ;

/// @brief Method IsDone, addr 0x5e69714, size 0x10, virtual false, abstract: false, final false
inline bool IsDone() ;

/// [Obsolete("Use FailWithError instead")]
/// @brief Method Log, addr 0x5e69870, size 0x28, virtual false, abstract: false, final false
inline void Log(::StringW  msg) ;

/// [Obsolete("Use FailWithError instead")]
/// @brief Method LogError, addr 0x5e69848, size 0x28, virtual false, abstract: false, final false
inline void LogError(::StringW  msg) ;

static inline ::Pathfinding::Path* New_ctor() ;

/// @brief Method OnEnterPool, addr 0x5e699dc, size 0x108, virtual true, abstract: false, final false
inline void OnEnterPool() ;

/// @brief Method Pathfinding.IPathInternals.AdvanceState, addr 0x5e69724, size 0x114, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_AdvanceState(::Pathfinding::PathState  s) ;

/// @brief Method Pathfinding.IPathInternals.CalculateStep, addr 0x5e6a960, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_CalculateStep(int64_t  targetTick) ;

/// @brief Method Pathfinding.IPathInternals.Cleanup, addr 0x5e6a940, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_Cleanup() ;

/// @brief Method Pathfinding.IPathInternals.DebugString, addr 0x5e6a970, size 0x10, virtual true, abstract: false, final true
inline ::StringW Pathfinding_IPathInternals_DebugString(::Pathfinding::PathLog  logMode) ;

/// @brief Method Pathfinding.IPathInternals.Initialize, addr 0x5e6a950, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_Initialize() ;

/// @brief Method Pathfinding.IPathInternals.OnEnterPool, addr 0x5e6a8fc, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_OnEnterPool() ;

/// @brief Method Pathfinding.IPathInternals.Prepare, addr 0x5e6a930, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_Prepare() ;

/// @brief Method Pathfinding.IPathInternals.PrepareBase, addr 0x5e6a92c, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_PrepareBase(::Pathfinding::PathHandler*  handler) ;

/// @brief Method Pathfinding.IPathInternals.Reset, addr 0x5e6a90c, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_Reset() ;

/// @brief Method Pathfinding.IPathInternals.ReturnPath, addr 0x5e6a91c, size 0x10, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_ReturnPath() ;

/// @brief Method Pathfinding.IPathInternals.get_PathHandler, addr 0x5e6a8f4, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::PathHandler* Pathfinding_IPathInternals_get_PathHandler() ;

/// [CompilerGenerated]
/// @brief Method Pathfinding.IPathInternals.get_Pooled, addr 0x5e68eac, size 0x8, virtual true, abstract: false, final true
inline bool Pathfinding_IPathInternals_get_Pooled() ;

/// [CompilerGenerated]
/// @brief Method Pathfinding.IPathInternals.set_Pooled, addr 0x5e68eb4, size 0x8, virtual true, abstract: false, final true
inline void Pathfinding_IPathInternals_set_Pooled(bool  value) ;

/// @brief Method Prepare, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Prepare() ;

/// @brief Method PrepareBase, addr 0x5e6a710, size 0x160, virtual false, abstract: false, final false
inline void PrepareBase(::Pathfinding::PathHandler*  pathHandler) ;

/// @brief Method Release, addr 0x5e66ac0, size 0x240, virtual false, abstract: false, final false
inline void Release(::System::Object*  o, bool  silent) ;

/// [Obsolete("Use Release(o, true) instead")]
/// @brief Method ReleaseSilent, addr 0x5e69f40, size 0x8, virtual false, abstract: false, final false
inline void ReleaseSilent(::System::Object*  o) ;

/// @brief Method Reset, addr 0x5e69ae4, size 0x288, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ReturnPath, addr 0x5e6a6f0, size 0x20, virtual true, abstract: false, final false
inline void ReturnPath() ;

/// @brief Method Trace, addr 0x5e69f48, size 0x364, virtual true, abstract: false, final false
inline void Trace(::Pathfinding::PathNode*  from) ;

/// [IteratorStateMachine(typeof(Pathfinding.Path::<WaitForPath>d__54))]
/// @brief Method WaitForPath, addr 0x5e690d8, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForPath() ;

constexpr bool const& __cordl_internal_get__Pathfinding_IPathInternals_Pooled_k__BackingField() const;

constexpr bool& __cordl_internal_get__Pathfinding_IPathInternals_Pooled_k__BackingField() ;

constexpr ::Pathfinding::PathState const& __cordl_internal_get__PipelineState_k__BackingField() const;

constexpr ::Pathfinding::PathState& __cordl_internal_get__PipelineState_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__errorLog_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__errorLog_k__BackingField() ;

constexpr uint16_t const& __cordl_internal_get__pathID_k__BackingField() const;

constexpr uint16_t& __cordl_internal_get__pathID_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__searchedNodes_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__searchedNodes_k__BackingField() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_callback() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_callback() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get_claimed() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get_claimed() ;

constexpr ::Pathfinding::PathCompleteState const& __cordl_internal_get_completeState() const;

constexpr ::Pathfinding::PathCompleteState& __cordl_internal_get_completeState() ;

constexpr ::Pathfinding::PathNode* const& __cordl_internal_get_currentR() const;

constexpr ::Pathfinding::PathNode*& __cordl_internal_get_currentR() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr int32_t const& __cordl_internal_get_enabledTags() const;

constexpr int32_t& __cordl_internal_get_enabledTags() ;

constexpr ::Pathfinding::Int3 const& __cordl_internal_get_hTarget() const;

constexpr ::Pathfinding::Int3& __cordl_internal_get_hTarget() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_hTargetNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_hTargetNode() ;

constexpr bool const& __cordl_internal_get_hasBeenReset() const;

constexpr bool& __cordl_internal_get_hasBeenReset() ;

constexpr ::Pathfinding::Heuristic const& __cordl_internal_get_heuristic() const;

constexpr ::Pathfinding::Heuristic& __cordl_internal_get_heuristic() ;

constexpr float_t const& __cordl_internal_get_heuristicScale() const;

constexpr float_t& __cordl_internal_get_heuristicScale() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_immediateCallback() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_immediateCallback() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_internalTagPenalties() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_internalTagPenalties() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_manualTagPenalties() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_manualTagPenalties() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_next() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_next() ;

constexpr ::Pathfinding::NNConstraint* const& __cordl_internal_get_nnConstraint() const;

constexpr ::Pathfinding::NNConstraint*& __cordl_internal_get_nnConstraint() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_path() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_path() ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_pathHandler() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_pathHandler() ;

constexpr bool const& __cordl_internal_get_releasedNotSilent() const;

constexpr bool& __cordl_internal_get_releasedNotSilent() ;

constexpr ::System::Object* const& __cordl_internal_get_stateLock() const;

constexpr ::System::Object*& __cordl_internal_get_stateLock() ;

constexpr ::Pathfinding::ITraversalProvider* const& __cordl_internal_get_traversalProvider() const;

constexpr ::Pathfinding::ITraversalProvider*& __cordl_internal_get_traversalProvider() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_vectorPath() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_vectorPath() ;

constexpr void __cordl_internal_set__Pathfinding_IPathInternals_Pooled_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PipelineState_k__BackingField(::Pathfinding::PathState  value) ;

constexpr void __cordl_internal_set__errorLog_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__pathID_k__BackingField(uint16_t  value) ;

constexpr void __cordl_internal_set__searchedNodes_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_callback(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_claimed(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set_completeState(::Pathfinding::PathCompleteState  value) ;

constexpr void __cordl_internal_set_currentR(::Pathfinding::PathNode*  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_enabledTags(int32_t  value) ;

constexpr void __cordl_internal_set_hTarget(::Pathfinding::Int3  value) ;

constexpr void __cordl_internal_set_hTargetNode(::Pathfinding::GraphNode*  value) ;

constexpr void __cordl_internal_set_hasBeenReset(bool  value) ;

constexpr void __cordl_internal_set_heuristic(::Pathfinding::Heuristic  value) ;

constexpr void __cordl_internal_set_heuristicScale(float_t  value) ;

constexpr void __cordl_internal_set_immediateCallback(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_internalTagPenalties(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_manualTagPenalties(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_next(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_nnConstraint(::Pathfinding::NNConstraint*  value) ;

constexpr void __cordl_internal_set_path(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value) ;

constexpr void __cordl_internal_set_releasedNotSilent(bool  value) ;

constexpr void __cordl_internal_set_stateLock(::System::Object*  value) ;

constexpr void __cordl_internal_set_traversalProvider(::Pathfinding::ITraversalProvider*  value) ;

constexpr void __cordl_internal_set_vectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

/// @brief Method .ctor, addr 0x5e6a980, size 0xe8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF_ZeroTagPenalties() ;

/// @brief Method get_CompleteState, addr 0x5e68da0, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PathCompleteState get_CompleteState() ;

/// @brief Method get_FloodingPath, addr 0x5e68f84, size 0x8, virtual true, abstract: false, final false
inline bool get_FloodingPath() ;

/// [CompilerGenerated]
/// @brief Method get_PipelineState, addr 0x5e68d90, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::PathState get_PipelineState() ;

/// @brief Method get_error, addr 0x5e68e7c, size 0x10, virtual false, abstract: false, final false
inline bool get_error() ;

/// [CompilerGenerated]
/// @brief Method get_errorLog, addr 0x5e68e8c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_errorLog() ;

/// [CompilerGenerated]
/// @brief Method get_pathID, addr 0x5e68ec4, size 0x8, virtual false, abstract: false, final false
inline uint16_t get_pathID() ;

/// @brief Method get_recycled, addr 0x5e68ebc, size 0x8, virtual false, abstract: false, final false
inline bool get_recycled() ;

/// [CompilerGenerated]
/// @brief Method get_searchedNodes, addr 0x5e68e9c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_searchedNodes() ;

/// @brief Method get_tagPenalties, addr 0x5e68ed4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int32_t> get_tagPenalties() ;

/// @brief Convert to "::Pathfinding::IPathInternals"
constexpr ::Pathfinding::IPathInternals* i___Pathfinding__IPathInternals() noexcept;

static inline void setStaticF_ZeroTagPenalties(::ArrayW<int32_t>  value) ;

/// @brief Method set_CompleteState, addr 0x5e68da8, size 0xd4, virtual false, abstract: false, final false
inline void set_CompleteState(::Pathfinding::PathCompleteState  value) ;

/// [CompilerGenerated]
/// @brief Method set_PipelineState, addr 0x5e68d98, size 0x8, virtual false, abstract: false, final false
inline void set_PipelineState(::Pathfinding::PathState  value) ;

/// [CompilerGenerated]
/// @brief Method set_errorLog, addr 0x5e68e94, size 0x8, virtual false, abstract: false, final false
inline void set_errorLog(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_pathID, addr 0x5e68ecc, size 0x8, virtual false, abstract: false, final false
inline void set_pathID(uint16_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_searchedNodes, addr 0x5e68ea4, size 0x8, virtual false, abstract: false, final false
inline void set_searchedNodes(int32_t  value) ;

/// @brief Method set_tagPenalties, addr 0x5e68edc, size 0xa8, virtual false, abstract: false, final false
inline void set_tagPenalties(::ArrayW<int32_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Path(Path && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path(Path const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21279};

/// @brief Field pathHandler, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___pathHandler;

/// @brief Field callback, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___callback;

/// @brief Field immediateCallback, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___immediateCallback;

/// [CompilerGenerated]
/// @brief Field <PipelineState>k__BackingField, offset: 0x28, size: 0x4, def value: None
 ::Pathfinding::PathState  ____PipelineState_k__BackingField;

/// @brief Field stateLock, offset: 0x30, size: 0x8, def value: None
 ::System::Object*  ___stateLock;

/// @brief Field traversalProvider, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::ITraversalProvider*  ___traversalProvider;

/// @brief Field completeState, offset: 0x40, size: 0x4, def value: None
 ::Pathfinding::PathCompleteState  ___completeState;

/// [CompilerGenerated]
/// @brief Field <errorLog>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____errorLog_k__BackingField;

/// @brief Field path, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___path;

/// @brief Field vectorPath, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___vectorPath;

/// @brief Field currentR, offset: 0x60, size: 0x8, def value: None
 ::Pathfinding::PathNode*  ___currentR;

/// @brief Field duration, offset: 0x68, size: 0x4, def value: None
 float_t  ___duration;

/// [CompilerGenerated]
/// @brief Field <searchedNodes>k__BackingField, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____searchedNodes_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Pathfinding.IPathInternals.Pooled>k__BackingField, offset: 0x70, size: 0x1, def value: None
 bool  ____Pathfinding_IPathInternals_Pooled_k__BackingField;

/// @brief Field hasBeenReset, offset: 0x71, size: 0x1, def value: None
 bool  ___hasBeenReset;

/// @brief Field nnConstraint, offset: 0x78, size: 0x8, def value: None
 ::Pathfinding::NNConstraint*  ___nnConstraint;

/// @brief Field next, offset: 0x80, size: 0x8, def value: None
 ::Pathfinding::Path*  ___next;

/// @brief Field heuristic, offset: 0x88, size: 0x4, def value: None
 ::Pathfinding::Heuristic  ___heuristic;

/// @brief Field heuristicScale, offset: 0x8c, size: 0x4, def value: None
 float_t  ___heuristicScale;

/// [CompilerGenerated]
/// @brief Field <pathID>k__BackingField, offset: 0x90, size: 0x2, def value: None
 uint16_t  ____pathID_k__BackingField;

/// @brief Field hTargetNode, offset: 0x98, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___hTargetNode;

/// @brief Field hTarget, offset: 0xa0, size: 0xc, def value: None
 ::Pathfinding::Int3  ___hTarget;

/// @brief Field enabledTags, offset: 0xac, size: 0x4, def value: None
 int32_t  ___enabledTags;

/// @brief Field internalTagPenalties, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___internalTagPenalties;

/// @brief Field manualTagPenalties, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___manualTagPenalties;

/// @brief Field claimed, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ___claimed;

/// @brief Field releasedNotSilent, offset: 0xc8, size: 0x1, def value: None
 bool  ___releasedNotSilent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Path, ___pathHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___callback) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___immediateCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ____PipelineState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___stateLock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___traversalProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___completeState) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ____errorLog_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___path) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___vectorPath) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___currentR) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___duration) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ____searchedNodes_k__BackingField) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ____Pathfinding_IPathInternals_Pooled_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___hasBeenReset) == 0x71, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___nnConstraint) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___next) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___heuristic) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___heuristicScale) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ____pathID_k__BackingField) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___hTargetNode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___hTarget) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___enabledTags) == 0xac, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___internalTagPenalties) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___manualTagPenalties) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___claimed) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path, ___releasedNotSilent) == 0xc8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Path) == 0xd0, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Path/<WaitForPath>d__54
class CORDL_TYPE Path__WaitForPath_d__54 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::Path*  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e6aae0, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::Path__WaitForPath_d__54* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e6ab9c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e6aba4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e6abdc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e6aadc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::Path*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e69144, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path__WaitForPath_d__54() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path__WaitForPath_d__54", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Path__WaitForPath_d__54(Path__WaitForPath_d__54 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path__WaitForPath_d__54", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path__WaitForPath_d__54(Path__WaitForPath_d__54 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21278};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::Path*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Path__WaitForPath_d__54, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path__WaitForPath_d__54, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Path__WaitForPath_d__54, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Path__WaitForPath_d__54) == 0x28, "Size mismatch!");

} // namespace end def Pathfinding

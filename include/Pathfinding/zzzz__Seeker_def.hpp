#pragma once
// IWYU pragma private; include "Pathfinding/Seeker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphMask_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Seeker)
namespace GlobalNamespace {
struct Seeker_ModifierPass;
}
namespace Pathfinding {
class ABPath;
}
namespace Pathfinding {
struct GraphMask;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IPathModifier;
}
namespace Pathfinding {
class MultiTargetPath;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class Seeker___c;
}
namespace Pathfinding {
class StartEndModifier;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class Seeker;
}
namespace Pathfinding {
class Seeker___c;
}
// Write type traits
MARK_REF_T(::Pathfinding::Seeker*);
MARK_REF_T(::Pathfinding::Seeker___c*);
DEFINE_IL2CPP_CLASS(::Pathfinding::Seeker*, "Pathfinding", "Seeker");
DEFINE_IL2CPP_CLASS(::Pathfinding::Seeker___c*, "Pathfinding", "Seeker/<>c");
// [AddComponentMenu("Pathfinding/Seeker")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_seeker.php")]
// Dependencies Pathfinding.GraphMask, Pathfinding.VersionedMonoBehaviour
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Seeker
class CORDL_TYPE Seeker : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using ModifierPass = ::GlobalNamespace::Seeker_ModifierPass;

using __c = ::Pathfinding::Seeker___c;

/// @brief Field detailedGizmos, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_detailedGizmos, put=__cordl_internal_set_detailedGizmos)) bool  detailedGizmos;

/// @brief Field drawGizmos, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_drawGizmos, put=__cordl_internal_set_drawGizmos)) bool  drawGizmos;

/// @brief Field graphMask, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphMask, put=__cordl_internal_set_graphMask)) ::Pathfinding::GraphMask  graphMask;

/// @brief Field graphMaskCompatibility, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphMaskCompatibility, put=__cordl_internal_set_graphMaskCompatibility)) int32_t  graphMaskCompatibility;

/// @brief Field lastCompletedNodePath, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastCompletedNodePath, put=__cordl_internal_set_lastCompletedNodePath)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  lastCompletedNodePath;

/// @brief Field lastCompletedVectorPath, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastCompletedVectorPath, put=__cordl_internal_set_lastCompletedVectorPath)) ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  lastCompletedVectorPath;

/// @brief Field lastPathID, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPathID, put=__cordl_internal_set_lastPathID)) uint32_t  lastPathID;

/// @brief Field modifiers, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_modifiers, put=__cordl_internal_set_modifiers)) ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*  modifiers;

/// @brief Field onPartialPathDelegate, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPartialPathDelegate, put=__cordl_internal_set_onPartialPathDelegate)) ::Pathfinding::OnPathDelegate*  onPartialPathDelegate;

/// @brief Field onPathDelegate, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_onPathDelegate, put=__cordl_internal_set_onPathDelegate)) ::Pathfinding::OnPathDelegate*  onPathDelegate;

/// @brief Field path, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::Pathfinding::Path*  path;

/// @brief Field pathCallback, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathCallback, put=__cordl_internal_set_pathCallback)) ::Pathfinding::OnPathDelegate*  pathCallback;

/// @brief Field postProcessPath, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_postProcessPath, put=__cordl_internal_set_postProcessPath)) ::Pathfinding::OnPathDelegate*  postProcessPath;

/// @brief Field preProcessPath, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_preProcessPath, put=__cordl_internal_set_preProcessPath)) ::Pathfinding::OnPathDelegate*  preProcessPath;

/// @brief Field prevPath, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevPath, put=__cordl_internal_set_prevPath)) ::Pathfinding::Path*  prevPath;

/// @brief Field startEndModifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_startEndModifier, put=__cordl_internal_set_startEndModifier)) ::Pathfinding::StartEndModifier*  startEndModifier;

/// @brief Field tagPenalties, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagPenalties, put=__cordl_internal_set_tagPenalties)) ::ArrayW<int32_t>  tagPenalties;

/// @brief Field tmpPathCallback, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_tmpPathCallback, put=__cordl_internal_set_tmpPathCallback)) ::Pathfinding::OnPathDelegate*  tmpPathCallback;

/// @brief Field traversableTags, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_traversableTags, put=__cordl_internal_set_traversableTags)) int32_t  traversableTags;

/// @brief Method Awake, addr 0x5e46644, size 0x2c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CancelCurrentPathRequest, addr 0x5e39018, size 0xa0, virtual false, abstract: false, final false
inline void CancelCurrentPathRequest(bool  pool) ;

/// @brief Method DeregisterModifier, addr 0x5e4688c, size 0x58, virtual false, abstract: false, final false
inline void DeregisterModifier(::Pathfinding::IPathModifier*  modifier) ;

/// @brief Method GetCurrentPath, addr 0x5e46670, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Path* GetCurrentPath() ;

/// [Obsolete("Use ABPath.Construct(start, end, null) instead")]
/// @brief Method GetNewPath, addr 0x5e46c80, size 0x9c, virtual false, abstract: false, final false
inline ::Pathfinding::ABPath* GetNewPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method IsDone, addr 0x5e46678, size 0x20, virtual false, abstract: false, final false
inline bool IsDone() ;

static inline ::Pathfinding::Seeker* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e46698, size 0x28, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x5e47294, size 0x204, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method OnMultiPathComplete, addr 0x5e46c74, size 0xc, virtual false, abstract: false, final false
inline void OnMultiPathComplete(::Pathfinding::Path*  p) ;

/// @brief Method OnPartialPathComplete, addr 0x5e46c68, size 0xc, virtual false, abstract: false, final false
inline void OnPartialPathComplete(::Pathfinding::Path*  p) ;

/// @brief Method OnPathComplete, addr 0x5e46b00, size 0x168, virtual false, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  p, bool  runModifiers, bool  sendCallbacks) ;

/// @brief Method OnPathComplete, addr 0x5e46af4, size 0xc, virtual false, abstract: false, final false
inline void OnPathComplete(::Pathfinding::Path*  path) ;

/// @brief Method OnUpgradeSerializedData, addr 0x5e47498, size 0x11c, virtual true, abstract: false, final false
inline int32_t OnUpgradeSerializedData(int32_t  version, bool  unityThread) ;

/// @brief Method PostProcess, addr 0x5e468e4, size 0xc, virtual false, abstract: false, final false
inline void PostProcess(::Pathfinding::Path*  path) ;

/// @brief Method RegisterModifier, addr 0x5e4670c, size 0x180, virtual false, abstract: false, final false
inline void RegisterModifier(::Pathfinding::IPathModifier*  modifier) ;

/// @brief Method ReleaseClaimedPath, addr 0x5e466c0, size 0x4c, virtual false, abstract: false, final false
inline void ReleaseClaimedPath() ;

/// @brief Method RunModifiers, addr 0x5e468f0, size 0x204, virtual false, abstract: false, final false
inline void RunModifiers(::GlobalNamespace::Seeker_ModifierPass  pass, ::Pathfinding::Path*  path) ;

/// [Obsolete("You can use StartPath instead of this method now. It will behave identically.")]
/// @brief Method StartMultiTargetPath, addr 0x5e47254, size 0x40, virtual false, abstract: false, final false
inline ::Pathfinding::MultiTargetPath* StartMultiTargetPath(::Pathfinding::MultiTargetPath*  p, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask) ;

/// @brief Method StartMultiTargetPath, addr 0x5e4716c, size 0x74, virtual false, abstract: false, final false
inline ::Pathfinding::MultiTargetPath* StartMultiTargetPath(::UnityEngine::Vector3  start, ::ArrayW<::UnityEngine::Vector3>  endPoints, bool  pathsForAll, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask) ;

/// @brief Method StartMultiTargetPath, addr 0x5e471e0, size 0x74, virtual false, abstract: false, final false
inline ::Pathfinding::MultiTargetPath* StartMultiTargetPath(::ArrayW<::UnityEngine::Vector3>  startPoints, ::UnityEngine::Vector3  end, bool  pathsForAll, ::Pathfinding::OnPathDelegate*  callback, int32_t  graphMask) ;

/// @brief Method StartPath, addr 0x5e39884, size 0x40, virtual false, abstract: false, final false
inline ::Pathfinding::Path* StartPath(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method StartPath, addr 0x5e46ea4, size 0x30, virtual false, abstract: false, final false
inline ::Pathfinding::Path* StartPath(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback, ::Pathfinding::GraphMask  graphMask) ;

/// @brief Method StartPath, addr 0x5e46d1c, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::Path* StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end) ;

/// @brief Method StartPath, addr 0x5e46d24, size 0xbc, virtual false, abstract: false, final false
inline ::Pathfinding::Path* StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback) ;

/// @brief Method StartPath, addr 0x5e46de0, size 0xc4, virtual false, abstract: false, final false
inline ::Pathfinding::Path* StartPath(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::Pathfinding::OnPathDelegate*  callback, ::Pathfinding::GraphMask  graphMask) ;

/// @brief Method StartPathInternal, addr 0x5e46ed4, size 0x298, virtual false, abstract: false, final false
inline void StartPathInternal(::Pathfinding::Path*  p, ::Pathfinding::OnPathDelegate*  callback) ;

constexpr bool const& __cordl_internal_get_detailedGizmos() const;

constexpr bool& __cordl_internal_get_detailedGizmos() ;

constexpr bool const& __cordl_internal_get_drawGizmos() const;

constexpr bool& __cordl_internal_get_drawGizmos() ;

constexpr ::Pathfinding::GraphMask const& __cordl_internal_get_graphMask() const;

constexpr ::Pathfinding::GraphMask& __cordl_internal_get_graphMask() ;

constexpr int32_t const& __cordl_internal_get_graphMaskCompatibility() const;

constexpr int32_t& __cordl_internal_get_graphMaskCompatibility() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_lastCompletedNodePath() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_lastCompletedNodePath() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* const& __cordl_internal_get_lastCompletedVectorPath() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& __cordl_internal_get_lastCompletedVectorPath() ;

constexpr uint32_t const& __cordl_internal_get_lastPathID() const;

constexpr uint32_t& __cordl_internal_get_lastPathID() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>* const& __cordl_internal_get_modifiers() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*& __cordl_internal_get_modifiers() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_onPartialPathDelegate() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_onPartialPathDelegate() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_onPathDelegate() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_onPathDelegate() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_path() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_path() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_pathCallback() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_pathCallback() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_postProcessPath() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_postProcessPath() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_preProcessPath() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_preProcessPath() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get_prevPath() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get_prevPath() ;

constexpr ::Pathfinding::StartEndModifier* const& __cordl_internal_get_startEndModifier() const;

constexpr ::Pathfinding::StartEndModifier*& __cordl_internal_get_startEndModifier() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_tagPenalties() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_tagPenalties() ;

constexpr ::Pathfinding::OnPathDelegate* const& __cordl_internal_get_tmpPathCallback() const;

constexpr ::Pathfinding::OnPathDelegate*& __cordl_internal_get_tmpPathCallback() ;

constexpr int32_t const& __cordl_internal_get_traversableTags() const;

constexpr int32_t& __cordl_internal_get_traversableTags() ;

constexpr void __cordl_internal_set_detailedGizmos(bool  value) ;

constexpr void __cordl_internal_set_drawGizmos(bool  value) ;

constexpr void __cordl_internal_set_graphMask(::Pathfinding::GraphMask  value) ;

constexpr void __cordl_internal_set_graphMaskCompatibility(int32_t  value) ;

constexpr void __cordl_internal_set_lastCompletedNodePath(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_lastCompletedVectorPath(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_lastPathID(uint32_t  value) ;

constexpr void __cordl_internal_set_modifiers(::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*  value) ;

constexpr void __cordl_internal_set_onPartialPathDelegate(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_onPathDelegate(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_path(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_pathCallback(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_postProcessPath(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_preProcessPath(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_prevPath(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set_startEndModifier(::Pathfinding::StartEndModifier*  value) ;

constexpr void __cordl_internal_set_tagPenalties(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_tmpPathCallback(::Pathfinding::OnPathDelegate*  value) ;

constexpr void __cordl_internal_set_traversableTags(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e46490, size 0x1b4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Seeker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Seeker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Seeker(Seeker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Seeker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Seeker(Seeker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21188};

/// @brief Field drawGizmos, offset: 0x24, size: 0x1, def value: None
 bool  ___drawGizmos;

/// @brief Field detailedGizmos, offset: 0x25, size: 0x1, def value: None
 bool  ___detailedGizmos;

/// [HideInInspector]
/// @brief Field startEndModifier, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::StartEndModifier*  ___startEndModifier;

/// [HideInInspector]
/// @brief Field traversableTags, offset: 0x30, size: 0x4, def value: None
 int32_t  ___traversableTags;

/// [HideInInspector]
/// @brief Field tagPenalties, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___tagPenalties;

/// [HideInInspector]
/// @brief Field graphMask, offset: 0x40, size: 0x4, def value: None
 ::Pathfinding::GraphMask  ___graphMask;

/// [FormerlySerializedAs("graphMask")]
/// @brief Field graphMaskCompatibility, offset: 0x44, size: 0x4, def value: None
 int32_t  ___graphMaskCompatibility;

/// @brief Field pathCallback, offset: 0x48, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___pathCallback;

/// @brief Field preProcessPath, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___preProcessPath;

/// @brief Field postProcessPath, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___postProcessPath;

/// @brief Field lastCompletedVectorPath, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  ___lastCompletedVectorPath;

/// @brief Field lastCompletedNodePath, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___lastCompletedNodePath;

/// @brief Field path, offset: 0x70, size: 0x8, def value: None
 ::Pathfinding::Path*  ___path;

/// @brief Field prevPath, offset: 0x78, size: 0x8, def value: None
 ::Pathfinding::Path*  ___prevPath;

/// @brief Field onPathDelegate, offset: 0x80, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___onPathDelegate;

/// @brief Field onPartialPathDelegate, offset: 0x88, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___onPartialPathDelegate;

/// @brief Field tmpPathCallback, offset: 0x90, size: 0x8, def value: None
 ::Pathfinding::OnPathDelegate*  ___tmpPathCallback;

/// @brief Field lastPathID, offset: 0x98, size: 0x4, def value: None
 uint32_t  ___lastPathID;

/// @brief Field modifiers, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::IPathModifier*>*  ___modifiers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Seeker, ___drawGizmos) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___detailedGizmos) == 0x25, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___startEndModifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___traversableTags) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___tagPenalties) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___graphMask) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___graphMaskCompatibility) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___pathCallback) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___preProcessPath) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___postProcessPath) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___lastCompletedVectorPath) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___lastCompletedNodePath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___path) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___prevPath) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___onPathDelegate) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___onPartialPathDelegate) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___tmpPathCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___lastPathID) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::Seeker, ___modifiers) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Seeker) == 0xa8, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.Seeker/<>c
class CORDL_TYPE Seeker___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Pathfinding::Seeker___c*  __9;

/// @brief Field <>9__26_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__26_0, put=setStaticF___9__26_0)) ::System::Comparison_1<::Pathfinding::IPathModifier*>*  __9__26_0;

static inline ::Pathfinding::Seeker___c* New_ctor() ;

/// @brief Method <RegisterModifier>b__26_0, addr 0x5e47624, size 0x120, virtual false, abstract: false, final false
inline int32_t _RegisterModifier_b__26_0(::Pathfinding::IPathModifier*  a, ::Pathfinding::IPathModifier*  b) ;

/// @brief Method .ctor, addr 0x5e4761c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::Seeker___c* getStaticF___9() ;

static inline ::System::Comparison_1<::Pathfinding::IPathModifier*>* getStaticF___9__26_0() ;

static inline void setStaticF___9(::Pathfinding::Seeker___c*  value) ;

static inline void setStaticF___9__26_0(::System::Comparison_1<::Pathfinding::IPathModifier*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Seeker___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Seeker___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Seeker___c(Seeker___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Seeker___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Seeker___c(Seeker___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21187};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::Seeker___c) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding

#pragma once
// IWYU pragma private; include "GorillaNetworking/GhostReactorProgression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GhostReactorProgression)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GRProgressionScriptableObject;
}
namespace GlobalNamespace {
struct GhostReactorProgression__GetStartingProgression_d__6;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
// Forward declare root types
namespace GorillaNetworking {
class GhostReactorProgression;
}
// Write type traits
MARK_REF_T(::GorillaNetworking::GhostReactorProgression*);
DEFINE_IL2CPP_CLASS(::GorillaNetworking::GhostReactorProgression*, "GorillaNetworking", "GhostReactorProgression");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaNetworking {
// Is value type: false
// CS Name: GorillaNetworking.GhostReactorProgression
class CORDL_TYPE GhostReactorProgression : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetStartingProgression_d__6 = ::GlobalNamespace::GhostReactorProgression__GetStartingProgression_d__6;

/// @brief Field _grPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__grPlayer, put=__cordl_internal_set__grPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  _grPlayer;

/// @brief Field _reactor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__reactor, put=__cordl_internal_set__reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  _reactor;

/// @brief Field grPSO, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_grPSO, put=setStaticF_grPSO)) ::UnityW<::GlobalNamespace::GRProgressionScriptableObject>  grPSO;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaNetworking::GhostReactorProgression>  instance;

/// @brief Field progressionTrackId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressionTrackId, put=__cordl_internal_set_progressionTrackId)) ::StringW  progressionTrackId;

/// @brief Method Awake, addr 0x5c8840c, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetGrade, addr 0x5c89298, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t GetGrade(int32_t  points) ;

/// @brief Method GetGradePointDetails, addr 0x5c88b60, size 0x1bc, virtual false, abstract: false, final false
static inline ::System::ValueTuple_4<int32_t,int32_t,int32_t,int32_t> GetGradePointDetails(int32_t  points) ;

/// [AsyncStateMachine(typeof(GorillaNetworking.GhostReactorProgression::<GetStartingProgression>d__6))]
/// @brief Method GetStartingProgression, addr 0x5c886cc, size 0xc0, virtual false, abstract: false, final false
inline void GetStartingProgression(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method GetTitleLevel, addr 0x5c89458, size 0x140, virtual false, abstract: false, final false
static inline int32_t GetTitleLevel(int32_t  points) ;

/// @brief Method GetTitleName, addr 0x5c8902c, size 0x154, virtual false, abstract: false, final false
static inline ::StringW GetTitleName(int32_t  points) ;

/// @brief Method GetTitleNameAndGrade, addr 0x5c88df0, size 0x23c, virtual false, abstract: false, final false
static inline ::StringW GetTitleNameAndGrade(int32_t  points) ;

/// @brief Method GetTitleNameFromLevel, addr 0x5c89180, size 0x118, virtual false, abstract: false, final false
static inline ::StringW GetTitleNameFromLevel(int32_t  level) ;

/// @brief Method LoadGRPSO, addr 0x5c88d1c, size 0xd4, virtual false, abstract: false, final false
static inline void LoadGRPSO() ;

static inline ::GorillaNetworking::GhostReactorProgression* New_ctor() ;

/// @brief Method OnNodeUnlocked, addr 0x5c88aac, size 0xb4, virtual false, abstract: false, final false
inline void OnNodeUnlocked() ;

/// @brief Method OnTrackRead, addr 0x5c8886c, size 0x188, virtual false, abstract: false, final false
inline void OnTrackRead(::StringW  trackId, int32_t  progress) ;

/// @brief Method OnTrackSet, addr 0x5c889f4, size 0xb8, virtual false, abstract: false, final false
inline void OnTrackSet(::StringW  trackId, int32_t  progress) ;

/// @brief Method SetProgression, addr 0x5c8878c, size 0x70, virtual false, abstract: false, final false
inline void SetProgression(int32_t  progressionAmountToAdd, ::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method Start, addr 0x5c88464, size 0x268, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnlockProgressionTreeNode, addr 0x5c887fc, size 0x70, virtual false, abstract: false, final false
inline void UnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::GlobalNamespace::GhostReactor*  reactor) ;

/// [CompilerGenerated]
/// @brief Method <Start>b__5_0, addr 0x5c895f0, size 0x4, virtual false, abstract: false, final false
inline void _Start_b__5_0(::StringW  a, ::StringW  b) ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get__grPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get__grPlayer() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get__reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get__reactor() ;

constexpr ::StringW const& __cordl_internal_get_progressionTrackId() const;

constexpr ::StringW& __cordl_internal_get_progressionTrackId() ;

constexpr void __cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set__reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_progressionTrackId(::StringW  value) ;

/// @brief Method .ctor, addr 0x5c89598, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GRProgressionScriptableObject> getStaticF_grPSO() ;

static inline ::UnityW<::GorillaNetworking::GhostReactorProgression> getStaticF_instance() ;

static inline void setStaticF_grPSO(::UnityW<::GlobalNamespace::GRProgressionScriptableObject>  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaNetworking::GhostReactorProgression>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GhostReactorProgression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorProgression", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GhostReactorProgression(GhostReactorProgression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GhostReactorProgression", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GhostReactorProgression(GhostReactorProgression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4341};

/// @brief Field grPSODirectory offset 0xffffffff size 0x8
static constexpr ::ConstString  grPSODirectory{u"ProgressionTiersData"};

/// @brief Field progressionTrackId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___progressionTrackId;

/// @brief Field _grPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ____grPlayer;

/// @brief Field _reactor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ____reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaNetworking::GhostReactorProgression, ___progressionTrackId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GhostReactorProgression, ____grPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaNetworking::GhostReactorProgression, ____reactor) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaNetworking::GhostReactorProgression) == 0x38, "Size mismatch!");

} // namespace end def GorillaNetworking

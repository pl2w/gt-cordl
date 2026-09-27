#pragma once
// IWYU pragma private; include "Fusion/RunnerLagCompensationGizmos.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__Behaviour_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(RunnerLagCompensationGizmos)
namespace Fusion {
class NetworkRunner;
}
// Forward declare root types
namespace Fusion {
class RunnerLagCompensationGizmos;
}
// Write type traits
MARK_REF_T(::Fusion::RunnerLagCompensationGizmos*);
DEFINE_IL2CPP_CLASS(::Fusion::RunnerLagCompensationGizmos*, "Fusion", "RunnerLagCompensationGizmos");
// [ScriptHelp(BackColor = (Fusion.ScriptHeaderBackColor)8)]
// [DisallowMultipleComponent]
// Dependencies Fusion.Behaviour, UnityEngine.Color
namespace Fusion {
// Is value type: false
// CS Name: Fusion.RunnerLagCompensationGizmos
class CORDL_TYPE RunnerLagCompensationGizmos : public ::Fusion::Behaviour {
public:
// Declarations
/// @brief Field DrawBroadphaseNodes, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_DrawBroadphaseNodes, put=__cordl_internal_set_DrawBroadphaseNodes)) bool  DrawBroadphaseNodes;

/// @brief Field DrawSnapshotHistory, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_DrawSnapshotHistory, put=__cordl_internal_set_DrawSnapshotHistory)) bool  DrawSnapshotHistory;

/// @brief Field NonStateAuthHitboxCollor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_NonStateAuthHitboxCollor, put=__cordl_internal_set_NonStateAuthHitboxCollor)) ::UnityEngine::Color  NonStateAuthHitboxCollor;

/// @brief Field StateAuthHitboxCollor, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_StateAuthHitboxCollor, put=__cordl_internal_set_StateAuthHitboxCollor)) ::UnityEngine::Color  StateAuthHitboxCollor;

/// @brief Field _runner, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__runner, put=__cordl_internal_set__runner)) ::UnityW<::Fusion::NetworkRunner>  _runner;

/// @brief Method Awake, addr 0x60f515c, size 0x128, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::Fusion::RunnerLagCompensationGizmos* New_ctor() ;

/// @brief Method OnDrawGizmos, addr 0x60f5284, size 0xf8, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method RenderBHVBroadphase, addr 0x60f537c, size 0x328, virtual false, abstract: false, final false
inline void RenderBHVBroadphase() ;

/// @brief Method RenderHitboxHistory, addr 0x60f56a4, size 0x728, virtual false, abstract: false, final false
inline void RenderHitboxHistory() ;

constexpr bool const& __cordl_internal_get_DrawBroadphaseNodes() const;

constexpr bool& __cordl_internal_get_DrawBroadphaseNodes() ;

constexpr bool const& __cordl_internal_get_DrawSnapshotHistory() const;

constexpr bool& __cordl_internal_get_DrawSnapshotHistory() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_NonStateAuthHitboxCollor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_NonStateAuthHitboxCollor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_StateAuthHitboxCollor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_StateAuthHitboxCollor() ;

constexpr ::UnityW<::Fusion::NetworkRunner> const& __cordl_internal_get__runner() const;

constexpr ::UnityW<::Fusion::NetworkRunner>& __cordl_internal_get__runner() ;

constexpr void __cordl_internal_set_DrawBroadphaseNodes(bool  value) ;

constexpr void __cordl_internal_set_DrawSnapshotHistory(bool  value) ;

constexpr void __cordl_internal_set_NonStateAuthHitboxCollor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_StateAuthHitboxCollor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__runner(::UnityW<::Fusion::NetworkRunner>  value) ;

/// @brief Method .ctor, addr 0x60f5dcc, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RunnerLagCompensationGizmos() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RunnerLagCompensationGizmos", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RunnerLagCompensationGizmos(RunnerLagCompensationGizmos && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RunnerLagCompensationGizmos", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RunnerLagCompensationGizmos(RunnerLagCompensationGizmos const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23483};

/// @brief Field DrawSnapshotHistory, offset: 0x20, size: 0x1, def value: None
 bool  ___DrawSnapshotHistory;

/// @brief Field DrawBroadphaseNodes, offset: 0x21, size: 0x1, def value: None
 bool  ___DrawBroadphaseNodes;

/// @brief Field StateAuthHitboxCollor, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Color  ___StateAuthHitboxCollor;

/// @brief Field NonStateAuthHitboxCollor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___NonStateAuthHitboxCollor;

/// @brief Field _runner, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkRunner>  ____runner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::RunnerLagCompensationGizmos, ___DrawSnapshotHistory) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerLagCompensationGizmos, ___DrawBroadphaseNodes) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerLagCompensationGizmos, ___StateAuthHitboxCollor) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerLagCompensationGizmos, ___NonStateAuthHitboxCollor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Fusion::RunnerLagCompensationGizmos, ____runner) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Fusion::RunnerLagCompensationGizmos) == 0x50, "Size mismatch!");

} // namespace end def Fusion

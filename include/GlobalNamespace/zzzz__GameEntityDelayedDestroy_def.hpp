#pragma once
// IWYU pragma private; include "GlobalNamespace/GameEntityDelayedDestroy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityDelayedDestroy_Options_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameEntityDelayedDestroy)
namespace GlobalNamespace {
struct GameEntityDelayedDestroy_BeepPhase;
}
namespace GlobalNamespace {
struct GameEntityDelayedDestroy_Options;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IDelayedExecListener;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEntityDelayedDestroy;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameEntityDelayedDestroy*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameEntityDelayedDestroy*, "", "GameEntityDelayedDestroy");
// Dependencies GameEntityDelayedDestroy::Options, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameEntityDelayedDestroy
class CORDL_TYPE GameEntityDelayedDestroy : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BeepPhase = ::GlobalNamespace::GameEntityDelayedDestroy_BeepPhase;

using Options = ::GlobalNamespace::GameEntityDelayedDestroy_Options;

/// @brief Field _callGenerationId, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__callGenerationId, put=__cordl_internal_set__callGenerationId)) int32_t  _callGenerationId;

/// @brief Field _delayedExplosionAudioIndex, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedExplosionAudioIndex, put=__cordl_internal_set__delayedExplosionAudioIndex)) int32_t  _delayedExplosionAudioIndex;

/// @brief Field _delayedExplosionPoolIndex, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__delayedExplosionPoolIndex, put=__cordl_internal_set__delayedExplosionPoolIndex)) int32_t  _delayedExplosionPoolIndex;

/// @brief Field _entity, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__entity, put=__cordl_internal_set__entity)) ::UnityW<::GlobalNamespace::GameEntity>  _entity;

/// @brief Field m_options, offset 0x20, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_options, put=__cordl_internal_set_m_options)) ::GlobalNamespace::GameEntityDelayedDestroy_Options  m_options;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method Configure, addr 0x58141ec, size 0x11c, virtual false, abstract: false, final false
inline void Configure(::GlobalNamespace::GameEntityDelayedDestroy_Options  options) ;

/// @brief Method IDelayedExecListener.OnDelayedAction, addr 0x58147fc, size 0x344, virtual true, abstract: false, final true
inline void IDelayedExecListener_OnDelayedAction(int32_t  contextId) ;

static inline ::GlobalNamespace::GameEntityDelayedDestroy* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5814308, size 0xac, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method ResetTimer, addr 0x58144dc, size 0x320, virtual false, abstract: false, final false
inline void ResetTimer() ;

/// @brief Method Start, addr 0x58143b4, size 0x128, virtual false, abstract: false, final false
inline void Start() ;

constexpr int32_t const& __cordl_internal_get__callGenerationId() const;

constexpr int32_t& __cordl_internal_get__callGenerationId() ;

constexpr int32_t const& __cordl_internal_get__delayedExplosionAudioIndex() const;

constexpr int32_t& __cordl_internal_get__delayedExplosionAudioIndex() ;

constexpr int32_t const& __cordl_internal_get__delayedExplosionPoolIndex() const;

constexpr int32_t& __cordl_internal_get__delayedExplosionPoolIndex() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get__entity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get__entity() ;

constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options const& __cordl_internal_get_m_options() const;

constexpr ::GlobalNamespace::GameEntityDelayedDestroy_Options& __cordl_internal_get_m_options() ;

constexpr void __cordl_internal_set__callGenerationId(int32_t  value) ;

constexpr void __cordl_internal_set__delayedExplosionAudioIndex(int32_t  value) ;

constexpr void __cordl_internal_set__delayedExplosionPoolIndex(int32_t  value) ;

constexpr void __cordl_internal_set__entity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_m_options(::GlobalNamespace::GameEntityDelayedDestroy_Options  value) ;

/// @brief Method .ctor, addr 0x5814b40, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameEntityDelayedDestroy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameEntityDelayedDestroy", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameEntityDelayedDestroy(GameEntityDelayedDestroy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameEntityDelayedDestroy", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameEntityDelayedDestroy(GameEntityDelayedDestroy const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1737};

/// @brief Field k_contextId_deferredStart offset 0xffffffff size 0x4
static constexpr int32_t  k_contextId_deferredStart{static_cast<int32_t>(0x0)};

/// [SerializeField]
/// @brief Field m_options, offset: 0x20, size: 0x40, def value: None
 ::GlobalNamespace::GameEntityDelayedDestroy_Options  ___m_options;

/// @brief Field _entity, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ____entity;

/// @brief Field _callGenerationId, offset: 0x68, size: 0x4, def value: None
 int32_t  ____callGenerationId;

/// @brief Field _delayedExplosionAudioIndex, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____delayedExplosionAudioIndex;

/// @brief Field _delayedExplosionPoolIndex, offset: 0x70, size: 0x4, def value: None
 int32_t  ____delayedExplosionPoolIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy, ___m_options) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy, ____entity) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy, ____callGenerationId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy, ____delayedExplosionAudioIndex) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameEntityDelayedDestroy, ____delayedExplosionPoolIndex) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameEntityDelayedDestroy) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace

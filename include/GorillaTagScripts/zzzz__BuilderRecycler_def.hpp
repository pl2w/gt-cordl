#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderRecycler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderRecycler)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderResourceColors;
}
namespace GlobalNamespace {
class BuilderResources;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaTagScripts {
class BuilderTable;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderRecycler;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderRecycler*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderRecycler*, "GorillaTagScripts", "BuilderRecycler");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderRecycler
class CORDL_TYPE BuilderRecycler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field bladeSoundPlayer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_bladeSoundPlayer, put=__cordl_internal_set_bladeSoundPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  bladeSoundPlayer;

/// @brief Field builderResourceColors, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderResourceColors, put=__cordl_internal_set_builderResourceColors)) ::UnityW<::GlobalNamespace::BuilderResourceColors>  builderResourceColors;

/// @brief Field currentChainCost, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChainCost, put=__cordl_internal_set_currentChainCost)) ::ArrayW<int32_t>  currentChainCost;

/// @brief Field effectBehaviors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_effectBehaviors, put=__cordl_internal_set_effectBehaviors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  effectBehaviors;

/// @brief Field hasFans, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFans, put=__cordl_internal_set_hasFans)) bool  hasFans;

/// @brief Field hasPipes, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasPipes, put=__cordl_internal_set_hasPipes)) bool  hasPipes;

/// @brief Field inBuilderZone, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field numPipes, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_numPipes, put=__cordl_internal_set_numPipes)) int32_t  numPipes;

/// @brief Field outputPipes, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_outputPipes, put=__cordl_internal_set_outputPipes)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  outputPipes;

/// @brief Field playingBladeEffect, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingBladeEffect, put=__cordl_internal_set_playingBladeEffect)) bool  playingBladeEffect;

/// @brief Field playingPipeEffect, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_playingPipeEffect, put=__cordl_internal_set_playingPipeEffect)) bool  playingPipeEffect;

/// @brief Field props, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_props, put=__cordl_internal_set_props)) ::UnityEngine::MaterialPropertyBlock*  props;

/// @brief Field recycleEffectDuration, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_recycleEffectDuration, put=__cordl_internal_set_recycleEffectDuration)) float_t  recycleEffectDuration;

/// @brief Field recycleParticles, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_recycleParticles, put=__cordl_internal_set_recycleParticles)) ::UnityW<::UnityEngine::GameObject>  recycleParticles;

/// @brief Field recyclerID, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_recyclerID, put=__cordl_internal_set_recyclerID)) int32_t  recyclerID;

/// @brief Field table, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_table, put=__cordl_internal_set_table)) ::UnityW<::GorillaTagScripts::BuilderTable>  table;

/// @brief Field timeToCheckPipes, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeToCheckPipes, put=__cordl_internal_set_timeToCheckPipes)) double_t  timeToCheckPipes;

/// @brief Field timeToStopBlades, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeToStopBlades, put=__cordl_internal_set_timeToStopBlades)) double_t  timeToStopBlades;

/// @brief Field totalRecycledCost, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalRecycledCost, put=__cordl_internal_set_totalRecycledCost)) ::ArrayW<int32_t>  totalRecycledCost;

/// @brief Field zoneRenderers, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneRenderers, put=__cordl_internal_set_zoneRenderers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  zoneRenderers;

/// @brief Method AddPieceCost, addr 0x5b8a6fc, size 0x178, virtual false, abstract: false, final false
inline void AddPieceCost(::GlobalNamespace::BuilderResources*  cost) ;

/// @brief Method Awake, addr 0x5b899d4, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetUVShiftOffset, addr 0x5b8ab80, size 0xa8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetUVShiftOffset() ;

static inline ::GorillaTagScripts::BuilderRecycler* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5b8a32c, size 0x144, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnRecycleRequestedAtRecycler, addr 0x5b8a558, size 0x1a4, virtual false, abstract: false, final false
inline void OnRecycleRequestedAtRecycler(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method OnTriggerEnter, addr 0x5b8a470, size 0xe8, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnZoneChanged, addr 0x5b8a108, size 0x224, virtual false, abstract: false, final false
inline void OnZoneChanged() ;

/// @brief Method ResetOutputPipes, addr 0x5b89f40, size 0x1c8, virtual false, abstract: false, final false
inline void ResetOutputPipes() ;

/// @brief Method Start, addr 0x5b89ab8, size 0x488, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdatePipeLoop, addr 0x5b8a874, size 0x30c, virtual false, abstract: false, final false
inline void UpdatePipeLoop() ;

/// @brief Method UpdateRecycler, addr 0x5b8ac28, size 0x1a4, virtual false, abstract: false, final false
inline void UpdateRecycler() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_bladeSoundPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_bladeSoundPlayer() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors> const& __cordl_internal_get_builderResourceColors() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResourceColors>& __cordl_internal_get_builderResourceColors() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_currentChainCost() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_currentChainCost() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* const& __cordl_internal_get_effectBehaviors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*& __cordl_internal_get_effectBehaviors() ;

constexpr bool const& __cordl_internal_get_hasFans() const;

constexpr bool& __cordl_internal_get_hasFans() ;

constexpr bool const& __cordl_internal_get_hasPipes() const;

constexpr bool& __cordl_internal_get_hasPipes() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr int32_t const& __cordl_internal_get_numPipes() const;

constexpr int32_t& __cordl_internal_get_numPipes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>* const& __cordl_internal_get_outputPipes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*& __cordl_internal_get_outputPipes() ;

constexpr bool const& __cordl_internal_get_playingBladeEffect() const;

constexpr bool& __cordl_internal_get_playingBladeEffect() ;

constexpr bool const& __cordl_internal_get_playingPipeEffect() const;

constexpr bool& __cordl_internal_get_playingPipeEffect() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_props() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_props() ;

constexpr float_t const& __cordl_internal_get_recycleEffectDuration() const;

constexpr float_t& __cordl_internal_get_recycleEffectDuration() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_recycleParticles() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_recycleParticles() ;

constexpr int32_t const& __cordl_internal_get_recyclerID() const;

constexpr int32_t& __cordl_internal_get_recyclerID() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get_table() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get_table() ;

constexpr double_t const& __cordl_internal_get_timeToCheckPipes() const;

constexpr double_t& __cordl_internal_get_timeToCheckPipes() ;

constexpr double_t const& __cordl_internal_get_timeToStopBlades() const;

constexpr double_t& __cordl_internal_get_timeToStopBlades() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_totalRecycledCost() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_totalRecycledCost() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& __cordl_internal_get_zoneRenderers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& __cordl_internal_get_zoneRenderers() ;

constexpr void __cordl_internal_set_bladeSoundPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_builderResourceColors(::UnityW<::GlobalNamespace::BuilderResourceColors>  value) ;

constexpr void __cordl_internal_set_currentChainCost(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_effectBehaviors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  value) ;

constexpr void __cordl_internal_set_hasFans(bool  value) ;

constexpr void __cordl_internal_set_hasPipes(bool  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_numPipes(int32_t  value) ;

constexpr void __cordl_internal_set_outputPipes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  value) ;

constexpr void __cordl_internal_set_playingBladeEffect(bool  value) ;

constexpr void __cordl_internal_set_playingPipeEffect(bool  value) ;

constexpr void __cordl_internal_set_props(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_recycleEffectDuration(float_t  value) ;

constexpr void __cordl_internal_set_recycleParticles(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_recyclerID(int32_t  value) ;

constexpr void __cordl_internal_set_table(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

constexpr void __cordl_internal_set_timeToCheckPipes(double_t  value) ;

constexpr void __cordl_internal_set_timeToStopBlades(double_t  value) ;

constexpr void __cordl_internal_set_totalRecycledCost(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_zoneRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value) ;

/// @brief Method .ctor, addr 0x5b8adcc, size 0x2c4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderRecycler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderRecycler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderRecycler(BuilderRecycler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderRecycler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderRecycler(BuilderRecycler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3935};

/// @brief Field recycleEffectDuration, offset: 0x20, size: 0x4, def value: None
 float_t  ___recycleEffectDuration;

/// @brief Field timeToStopBlades, offset: 0x28, size: 0x8, def value: None
 double_t  ___timeToStopBlades;

/// @brief Field playingBladeEffect, offset: 0x30, size: 0x1, def value: None
 bool  ___playingBladeEffect;

/// @brief Field playingPipeEffect, offset: 0x31, size: 0x1, def value: None
 bool  ___playingPipeEffect;

/// @brief Field timeToCheckPipes, offset: 0x38, size: 0x8, def value: None
 double_t  ___timeToCheckPipes;

/// @brief Field effectBehaviors, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*  ___effectBehaviors;

/// @brief Field recycleParticles, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___recycleParticles;

/// @brief Field bladeSoundPlayer, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___bladeSoundPlayer;

/// @brief Field outputPipes, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MeshRenderer>>*  ___outputPipes;

/// @brief Field builderResourceColors, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResourceColors>  ___builderResourceColors;

/// @brief Field hasFans, offset: 0x68, size: 0x1, def value: None
 bool  ___hasFans;

/// @brief Field hasPipes, offset: 0x69, size: 0x1, def value: None
 bool  ___hasPipes;

/// @brief Field props, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___props;

/// @brief Field totalRecycledCost, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___totalRecycledCost;

/// @brief Field currentChainCost, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___currentChainCost;

/// @brief Field numPipes, offset: 0x88, size: 0x4, def value: None
 int32_t  ___numPipes;

/// @brief Field recyclerID, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___recyclerID;

/// @brief Field table, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  ___table;

/// @brief Field zoneRenderers, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  ___zoneRenderers;

/// @brief Field inBuilderZone, offset: 0xa0, size: 0x1, def value: None
 bool  ___inBuilderZone;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___recycleEffectDuration) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___timeToStopBlades) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___playingBladeEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___playingPipeEffect) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___timeToCheckPipes) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___effectBehaviors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___recycleParticles) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___bladeSoundPlayer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___outputPipes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___builderResourceColors) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___hasFans) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___hasPipes) == 0x69, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___props) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___totalRecycledCost) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___currentChainCost) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___numPipes) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___recyclerID) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___table) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___zoneRenderers) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderRecycler, ___inBuilderZone) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderRecycler) == 0xa8, "Size mismatch!");

} // namespace end def GorillaTagScripts

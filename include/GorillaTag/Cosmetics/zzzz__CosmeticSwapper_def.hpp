#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/CosmeticSwapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__CosmeticSwapper_SwapMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticSwapper)
namespace GlobalNamespace {
struct CosmeticSwapper_CosmeticState;
}
namespace GlobalNamespace {
struct CosmeticSwapper_SwapMode;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticSlots;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaNetworking {
class CosmeticsController;
}
namespace GorillaNetworking {
class SubCosmeticCycleController;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class CosmeticSwapper;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::CosmeticSwapper*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::CosmeticSwapper*, "GorillaTag.Cosmetics", "CosmeticSwapper");
// Dependencies GorillaTag.Cosmetics.CosmeticSwapper::SwapMode, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.CosmeticSwapper
class CORDL_TYPE CosmeticSwapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CosmeticState = ::GlobalNamespace::CosmeticSwapper_CosmeticState;

using SwapMode = ::GlobalNamespace::CosmeticSwapper_SwapMode;

 __declspec(property(get=get_CosmeticStepIndex)) int32_t  CosmeticStepIndex;

/// @brief Field OnSwappingSequenceCompleted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSwappingSequenceCompleted, put=__cordl_internal_set_OnSwappingSequenceCompleted)) ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  OnSwappingSequenceCompleted;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field controller, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_controller, put=__cordl_internal_set_controller)) ::UnityW<::GorillaNetworking::CosmeticsController>  controller;

/// @brief Field cosmeticIDs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticIDs, put=__cordl_internal_set_cosmeticIDs)) ::System::Collections::Generic::List_1<::StringW>*  cosmeticIDs;

/// @brief Field cycleController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cycleController, put=__cordl_internal_set_cycleController)) ::UnityW<::GorillaNetworking::SubCosmeticCycleController>  cycleController;

/// @brief Field gameModeExclusion, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameModeExclusion, put=__cordl_internal_set_gameModeExclusion)) ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  gameModeExclusion;

/// @brief Field holdFinalStep, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_holdFinalStep, put=__cordl_internal_set_holdFinalStep)) bool  holdFinalStep;

/// @brief Field isAtFinalCosmeticStep, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAtFinalCosmeticStep, put=__cordl_internal_set_isAtFinalCosmeticStep)) bool  isAtFinalCosmeticStep;

/// @brief Field lastCosmeticSwapTime, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastCosmeticSwapTime, put=__cordl_internal_set_lastCosmeticSwapTime)) float_t  lastCosmeticSwapTime;

/// @brief Field newSwappedCosmetics, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_newSwappedCosmetics, put=__cordl_internal_set_newSwappedCosmetics)) ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*  newSwappedCosmetics;

/// @brief Field stepTimeout, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_stepTimeout, put=__cordl_internal_set_stepTimeout)) float_t  stepTimeout;

/// @brief Field swapMode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_swapMode, put=__cordl_internal_set_swapMode)) ::GlobalNamespace::CosmeticSwapper_SwapMode  swapMode;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddNewSwappedCosmetic, addr 0x5d8b918, size 0x8c, virtual false, abstract: false, final false
inline void AddNewSwappedCosmetic(::GlobalNamespace::CosmeticSwapper_CosmeticState  state) ;

/// @brief Method Awake, addr 0x5d8ac2c, size 0x6c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FindItem, addr 0x5d8b9d0, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticItem FindItem(::StringW  nameOrId) ;

/// @brief Method GetCosmeticSlot, addr 0x5d8badc, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticsController_CosmeticSlots GetCosmeticSlot(::GlobalNamespace::CosmeticsController_CosmeticItem  item, ::by_ref<bool>  isLeftHand) ;

/// @brief Method GetCurrentMode, addr 0x5d8b380, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CosmeticSwapper_SwapMode GetCurrentMode() ;

/// @brief Method GetCurrentStepIndex, addr 0x5d8b390, size 0x88, virtual false, abstract: false, final false
inline int32_t GetCurrentStepIndex(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method GetNumberOfSteps, addr 0x5d8b418, size 0x9c, virtual false, abstract: false, final false
inline int32_t GetNumberOfSteps() ;

/// @brief Method MarkFinalCosmeticStep, addr 0x5d8b9a4, size 0x24, virtual false, abstract: false, final false
inline void MarkFinalCosmeticStep() ;

static inline ::GorillaTag::Cosmetics::CosmeticSwapper* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d8ad38, size 0xa8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d8ac98, size 0xa0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RestorePreviousCosmetic, addr 0x5d8bbe4, size 0x128, virtual false, abstract: false, final false
inline void RestorePreviousCosmetic(::GlobalNamespace::CosmeticSwapper_CosmeticState  state) ;

/// @brief Method ShouldHoldFinalStep, addr 0x5d8b388, size 0x8, virtual false, abstract: false, final false
inline bool ShouldHoldFinalStep() ;

/// @brief Method SwapInCosmetic, addr 0x5d8ade0, size 0x4, virtual false, abstract: false, final false
inline void SwapInCosmetic(::GlobalNamespace::VRRig*  vrRig) ;

/// @brief Method SwapInCosmeticWithReturn, addr 0x5d8b4b4, size 0x464, virtual false, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::CosmeticSwapper_CosmeticState> SwapInCosmeticWithReturn(::StringW  nameOrId, ::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Tick, addr 0x5d8bd1c, size 0x184, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TriggerSwap, addr 0x5d8ade4, size 0x59c, virtual false, abstract: false, final false
inline void TriggerSwap(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method UnmarkFinalCosmeticStep, addr 0x5d8b9c8, size 0x8, virtual false, abstract: false, final false
inline void UnmarkFinalCosmeticStep() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_OnSwappingSequenceCompleted() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_OnSwappingSequenceCompleted() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get_controller() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get_controller() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_cosmeticIDs() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_cosmeticIDs() ;

constexpr ::UnityW<::GorillaNetworking::SubCosmeticCycleController> const& __cordl_internal_get_cycleController() const;

constexpr ::UnityW<::GorillaNetworking::SubCosmeticCycleController>& __cordl_internal_get_cycleController() ;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_gameModeExclusion() const;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_gameModeExclusion() ;

constexpr bool const& __cordl_internal_get_holdFinalStep() const;

constexpr bool& __cordl_internal_get_holdFinalStep() ;

constexpr bool const& __cordl_internal_get_isAtFinalCosmeticStep() const;

constexpr bool& __cordl_internal_get_isAtFinalCosmeticStep() ;

constexpr float_t const& __cordl_internal_get_lastCosmeticSwapTime() const;

constexpr float_t& __cordl_internal_get_lastCosmeticSwapTime() ;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>* const& __cordl_internal_get_newSwappedCosmetics() const;

constexpr ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*& __cordl_internal_get_newSwappedCosmetics() ;

constexpr float_t const& __cordl_internal_get_stepTimeout() const;

constexpr float_t& __cordl_internal_get_stepTimeout() ;

constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode const& __cordl_internal_get_swapMode() const;

constexpr ::GlobalNamespace::CosmeticSwapper_SwapMode& __cordl_internal_get_swapMode() ;

constexpr void __cordl_internal_set_OnSwappingSequenceCompleted(::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_controller(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set_cosmeticIDs(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_cycleController(::UnityW<::GorillaNetworking::SubCosmeticCycleController>  value) ;

constexpr void __cordl_internal_set_gameModeExclusion(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_holdFinalStep(bool  value) ;

constexpr void __cordl_internal_set_isAtFinalCosmeticStep(bool  value) ;

constexpr void __cordl_internal_set_lastCosmeticSwapTime(float_t  value) ;

constexpr void __cordl_internal_set_newSwappedCosmetics(::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*  value) ;

constexpr void __cordl_internal_set_stepTimeout(float_t  value) ;

constexpr void __cordl_internal_set_swapMode(::GlobalNamespace::CosmeticSwapper_SwapMode  value) ;

/// @brief Method .ctor, addr 0x5d8bea0, size 0x14c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CosmeticStepIndex, addr 0x5d8abe4, size 0x48, virtual false, abstract: false, final false
inline int32_t get_CosmeticStepIndex() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d8bd0c, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d8bd14, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticSwapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSwapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticSwapper(CosmeticSwapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticSwapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticSwapper(CosmeticSwapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4910};

/// [SerializeField]
/// @brief Field cosmeticIDs, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___cosmeticIDs;

/// [SerializeField]
/// @brief Field swapMode, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticSwapper_SwapMode  ___swapMode;

/// [Tooltip("Optional. When assigned, TriggerSwap sources the cosmetic ID from the cycle controller\'s active sub-item instead of the cosmeticIDs list. Use SwapMode.Random to call CycleRandom() automatically on each hit before reading the active sub-item.")]
/// [SerializeField]
/// @brief Field cycleController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::SubCosmeticCycleController>  ___cycleController;

/// [SerializeField]
/// @brief Field stepTimeout, offset: 0x38, size: 0x4, def value: None
 float_t  ___stepTimeout;

/// [Tooltip("Hold final step as long as the swapper is being called within the timeframe")]
/// [SerializeField]
/// @brief Field holdFinalStep, offset: 0x3c, size: 0x1, def value: None
 bool  ___holdFinalStep;

/// [SerializeField]
/// @brief Field OnSwappingSequenceCompleted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::UnityW<::GlobalNamespace::VRRig>>*  ___OnSwappingSequenceCompleted;

/// [SerializeField]
/// @brief Field gameModeExclusion, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  ___gameModeExclusion;

/// @brief Field controller, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  ___controller;

/// @brief Field newSwappedCosmetics, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::GlobalNamespace::CosmeticSwapper_CosmeticState>*  ___newSwappedCosmetics;

/// @brief Field lastCosmeticSwapTime, offset: 0x60, size: 0x4, def value: None
 float_t  ___lastCosmeticSwapTime;

/// @brief Field isAtFinalCosmeticStep, offset: 0x64, size: 0x1, def value: None
 bool  ___isAtFinalCosmeticStep;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x65, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___cosmeticIDs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___swapMode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___cycleController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___stepTimeout) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___holdFinalStep) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___OnSwappingSequenceCompleted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___gameModeExclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___controller) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___newSwappedCosmetics) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___lastCosmeticSwapTime) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ___isAtFinalCosmeticStep) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::CosmeticSwapper, ____TickRunning_k__BackingField) == 0x65, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::CosmeticSwapper) == 0x68, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics

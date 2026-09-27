#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskDepositCollectibles.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoakTaskDepositCollectibles)
namespace GlobalNamespace {
class GRCurrencyDepositor;
}
namespace GlobalNamespace {
class GRPlayer;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class IGhostReactorSoakTask;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class SoakTaskDepositCollectibles;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles*, "GorillaTagScripts.GhostReactor.SoakTasks", "SoakTaskDepositCollectibles");
// Dependencies System.Nullable`1<T>, System.Object, UnityEngine.Vector3
namespace GorillaTagScripts::GhostReactor::SoakTasks {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.SoakTasks.SoakTaskDepositCollectibles
class CORDL_TYPE SoakTaskDepositCollectibles : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Complete, put=set_Complete)) bool  Complete;

/// @brief Field <Complete>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Complete_k__BackingField, put=__cordl_internal_set__Complete_k__BackingField)) bool  _Complete_k__BackingField;

/// @brief Field _coreDepositor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__coreDepositor, put=__cordl_internal_set__coreDepositor)) ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  _coreDepositor;

/// @brief Field _depositCollectibleTime, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get__depositCollectibleTime, put=__cordl_internal_set__depositCollectibleTime)) ::System::Nullable_1<float_t>  _depositCollectibleTime;

/// @brief Field _grPlayer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__grPlayer, put=__cordl_internal_set__grPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  _grPlayer;

/// @brief Field _heldEntity, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__heldEntity, put=__cordl_internal_set__heldEntity)) ::UnityW<::GlobalNamespace::GameEntity>  _heldEntity;

/// @brief Field _seedExtractorTriggerLocation, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__seedExtractorTriggerLocation, put=__cordl_internal_set__seedExtractorTriggerLocation)) ::System::Nullable_1<::UnityEngine::Vector3>  _seedExtractorTriggerLocation;

/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr operator  ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept;

static inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles* New_ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method Reset, addr 0x5c1dbf8, size 0x28, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x5c1d3d8, size 0x820, virtual true, abstract: false, final true
inline bool Update() ;

constexpr bool const& __cordl_internal_get__Complete_k__BackingField() const;

constexpr bool& __cordl_internal_get__Complete_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor> const& __cordl_internal_get__coreDepositor() const;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor>& __cordl_internal_get__coreDepositor() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__depositCollectibleTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__depositCollectibleTime() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get__grPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get__grPlayer() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get__heldEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get__heldEntity() ;

constexpr ::System::Nullable_1<::UnityEngine::Vector3> const& __cordl_internal_get__seedExtractorTriggerLocation() const;

constexpr ::System::Nullable_1<::UnityEngine::Vector3>& __cordl_internal_get__seedExtractorTriggerLocation() ;

constexpr void __cordl_internal_set__Complete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__coreDepositor(::UnityW<::GlobalNamespace::GRCurrencyDepositor>  value) ;

constexpr void __cordl_internal_set__depositCollectibleTime(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set__heldEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set__seedExtractorTriggerLocation(::System::Nullable_1<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x5c1d3a8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// [CompilerGenerated]
/// @brief Method get_Complete, addr 0x5c1d398, size 0x8, virtual true, abstract: false, final true
inline bool get_Complete() ;

/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Complete, addr 0x5c1d3a0, size 0x8, virtual false, abstract: false, final false
inline void set_Complete(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoakTaskDepositCollectibles() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskDepositCollectibles", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoakTaskDepositCollectibles(SoakTaskDepositCollectibles && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskDepositCollectibles", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoakTaskDepositCollectibles(SoakTaskDepositCollectibles const& ) = delete;

/// @brief Field TIME_TO_HOLD_COLLECTIBLE offset 0xffffffff size 0x4
static constexpr float_t  TIME_TO_HOLD_COLLECTIBLE{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4140};

/// [CompilerGenerated]
/// @brief Field <Complete>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Complete_k__BackingField;

/// @brief Field _grPlayer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ____grPlayer;

/// @brief Field _coreDepositor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  ____coreDepositor;

/// @brief Field _seedExtractorTriggerLocation, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::UnityEngine::Vector3>  ____seedExtractorTriggerLocation;

/// @brief Field _heldEntity, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ____heldEntity;

/// @brief Field _depositCollectibleTime, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____depositCollectibleTime;

/// @brief Size padding 0x48 - 0x50 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____Complete_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____grPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____coreDepositor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____seedExtractorTriggerLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____heldEntity) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles, ____depositCollectibleTime) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskDepositCollectibles) == 0x48, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor::SoakTasks

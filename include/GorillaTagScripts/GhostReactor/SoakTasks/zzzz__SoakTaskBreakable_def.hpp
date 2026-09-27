#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskBreakable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoakTaskBreakable)
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
class SoakTaskBreakable;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable*, "GorillaTagScripts.GhostReactor.SoakTasks", "SoakTaskBreakable");
// Dependencies System.Nullable`1<T>, System.Object
namespace GorillaTagScripts::GhostReactor::SoakTasks {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.SoakTasks.SoakTaskBreakable
class CORDL_TYPE SoakTaskBreakable : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Complete, put=set_Complete)) bool  Complete;

/// @brief Field <Complete>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Complete_k__BackingField, put=__cordl_internal_set__Complete_k__BackingField)) bool  _Complete_k__BackingField;

/// @brief Field _breakable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__breakable, put=__cordl_internal_set__breakable)) ::UnityW<::GlobalNamespace::GameEntity>  _breakable;

/// @brief Field _grPlayer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__grPlayer, put=__cordl_internal_set__grPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  _grPlayer;

/// @brief Field _nextHitTime, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get__nextHitTime, put=__cordl_internal_set__nextHitTime)) ::System::Nullable_1<float_t>  _nextHitTime;

/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr operator  ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept;

static inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable* New_ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method Reset, addr 0x5c1d370, size 0x28, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x5c1cde0, size 0x590, virtual true, abstract: false, final true
inline bool Update() ;

constexpr bool const& __cordl_internal_get__Complete_k__BackingField() const;

constexpr bool& __cordl_internal_get__Complete_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get__breakable() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get__breakable() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get__grPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get__grPlayer() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__nextHitTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__nextHitTime() ;

constexpr void __cordl_internal_set__Complete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__breakable(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set__nextHitTime(::System::Nullable_1<float_t>  value) ;

/// @brief Method .ctor, addr 0x5c1cdb0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// [CompilerGenerated]
/// @brief Method get_Complete, addr 0x5c1cda0, size 0x8, virtual true, abstract: false, final true
inline bool get_Complete() ;

/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Complete, addr 0x5c1cda8, size 0x8, virtual false, abstract: false, final false
inline void set_Complete(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoakTaskBreakable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskBreakable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoakTaskBreakable(SoakTaskBreakable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskBreakable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoakTaskBreakable(SoakTaskBreakable const& ) = delete;

/// @brief Field TIME_BETWEEN_HITS offset 0xffffffff size 0x4
static constexpr float_t  TIME_BETWEEN_HITS{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4139};

/// [CompilerGenerated]
/// @brief Field <Complete>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Complete_k__BackingField;

/// @brief Field _grPlayer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ____grPlayer;

/// @brief Field _breakable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ____breakable;

/// @brief Field _nextHitTime, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____nextHitTime;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable, ____Complete_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable, ____grPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable, ____breakable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable, ____nextHitTime) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskBreakable) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor::SoakTasks

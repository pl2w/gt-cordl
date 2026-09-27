#pragma once
// IWYU pragma private; include "GorillaTagScripts/GhostReactor/SoakTasks/SoakTaskGrabThrow.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameEntityId_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SoakTaskGrabThrow)
namespace GlobalNamespace {
class GRPlayer;
}
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class IGhostReactorSoakTask;
}
// Forward declare root types
namespace GorillaTagScripts::GhostReactor::SoakTasks {
class SoakTaskGrabThrow;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow*, "GorillaTagScripts.GhostReactor.SoakTasks", "SoakTaskGrabThrow");
// Dependencies GameEntityId, System.Nullable`1<T>, System.Object
namespace GorillaTagScripts::GhostReactor::SoakTasks {
// Is value type: false
// CS Name: GorillaTagScripts.GhostReactor.SoakTasks.SoakTaskGrabThrow
class CORDL_TYPE SoakTaskGrabThrow : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Complete, put=set_Complete)) bool  Complete;

/// @brief Field <Complete>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__Complete_k__BackingField, put=__cordl_internal_set__Complete_k__BackingField)) bool  _Complete_k__BackingField;

/// @brief Field _dropEntityTime, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get__dropEntityTime, put=__cordl_internal_set__dropEntityTime)) ::System::Nullable_1<float_t>  _dropEntityTime;

/// @brief Field _grPlayer, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__grPlayer, put=__cordl_internal_set__grPlayer)) ::UnityW<::GlobalNamespace::GRPlayer>  _grPlayer;

/// @brief Field _heldEntityId, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get__heldEntityId, put=__cordl_internal_set__heldEntityId)) ::System::Nullable_1<::GlobalNamespace::GameEntityId>  _heldEntityId;

/// @brief Convert operator to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr operator  ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask*() noexcept;

static inline ::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow* New_ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// @brief Method Reset, addr 0x5c1e264, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method Update, addr 0x5c1dc60, size 0x604, virtual true, abstract: false, final true
inline bool Update() ;

constexpr bool const& __cordl_internal_get__Complete_k__BackingField() const;

constexpr bool& __cordl_internal_get__Complete_k__BackingField() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__dropEntityTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__dropEntityTime() ;

constexpr ::UnityW<::GlobalNamespace::GRPlayer> const& __cordl_internal_get__grPlayer() const;

constexpr ::UnityW<::GlobalNamespace::GRPlayer>& __cordl_internal_get__grPlayer() ;

constexpr ::System::Nullable_1<::GlobalNamespace::GameEntityId> const& __cordl_internal_get__heldEntityId() const;

constexpr ::System::Nullable_1<::GlobalNamespace::GameEntityId>& __cordl_internal_get__heldEntityId() ;

constexpr void __cordl_internal_set__Complete_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__dropEntityTime(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__grPlayer(::UnityW<::GlobalNamespace::GRPlayer>  value) ;

constexpr void __cordl_internal_set__heldEntityId(::System::Nullable_1<::GlobalNamespace::GameEntityId>  value) ;

/// @brief Method .ctor, addr 0x5c1dc30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GRPlayer*  grPlayer) ;

/// [CompilerGenerated]
/// @brief Method get_Complete, addr 0x5c1dc20, size 0x8, virtual true, abstract: false, final true
inline bool get_Complete() ;

/// @brief Convert to "::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask"
constexpr ::GorillaTagScripts::GhostReactor::SoakTasks::IGhostReactorSoakTask* i___GorillaTagScripts__GhostReactor__SoakTasks__IGhostReactorSoakTask() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Complete, addr 0x5c1dc28, size 0x8, virtual false, abstract: false, final false
inline void set_Complete(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SoakTaskGrabThrow() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskGrabThrow", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SoakTaskGrabThrow(SoakTaskGrabThrow && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SoakTaskGrabThrow", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SoakTaskGrabThrow(SoakTaskGrabThrow const& ) = delete;

/// @brief Field TIME_TO_HOLD_ENTITY offset 0xffffffff size 0x4
static constexpr float_t  TIME_TO_HOLD_ENTITY{static_cast<float_t>(0.1f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4141};

/// [CompilerGenerated]
/// @brief Field <Complete>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____Complete_k__BackingField;

/// @brief Field _grPlayer, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRPlayer>  ____grPlayer;

/// @brief Field _heldEntityId, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<::GlobalNamespace::GameEntityId>  ____heldEntityId;

/// @brief Field _dropEntityTime, offset: 0x30, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____dropEntityTime;

/// @brief Size padding 0x30 - 0x40 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow, ____Complete_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow, ____grPlayer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow, ____heldEntityId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow, ____dropEntityTime) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::GhostReactor::SoakTasks::SoakTaskGrabThrow) == 0x30, "Size mismatch!");

} // namespace end def GorillaTagScripts::GhostReactor::SoakTasks

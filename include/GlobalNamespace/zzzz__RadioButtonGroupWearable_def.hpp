#pragma once
// IWYU pragma private; include "GlobalNamespace/RadioButtonGroupWearable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTBitOps_BitWriteInfo_def.hpp"
#include "GlobalNamespace/zzzz__GorillaPressableButton_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_WearablePackedStateSlots_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RadioButtonGroupWearable)
namespace GlobalNamespace {
class GorillaPressableButton;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag {
class ISpawnable;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RadioButtonGroupWearable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RadioButtonGroupWearable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RadioButtonGroupWearable*, "", "RadioButtonGroupWearable");
// Dependencies GTBitOps::BitWriteInfo, GorillaPressableButton, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, VRRig::WearablePackedStateSlots
namespace GlobalNamespace {
// Is value type: false
// CS Name: RadioButtonGroupWearable
class CORDL_TYPE RadioButtonGroupWearable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AllowSelectNone, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_AllowSelectNone, put=__cordl_internal_set_AllowSelectNone)) bool  AllowSelectNone;

 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field OnSelectionChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSelectionChanged, put=__cordl_internal_set_OnSelectionChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  OnSelectionChanged;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field assignedSlot, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_assignedSlot, put=__cordl_internal_set_assignedSlot)) ::GlobalNamespace::VRRig_WearablePackedStateSlots  assignedSlot;

/// @brief Field buttons, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttons, put=__cordl_internal_set_buttons)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  buttons;

/// @brief Field lastReportedState, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReportedState, put=__cordl_internal_set_lastReportedState)) int32_t  lastReportedState;

/// @brief Field ownerRig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ownerRig, put=__cordl_internal_set_ownerRig)) ::UnityW<::GlobalNamespace::VRRig>  ownerRig;

/// @brief Field stateBitsWriteInfo, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_stateBitsWriteInfo, put=__cordl_internal_set_stateBitsWriteInfo)) ::GlobalNamespace::GTBitOps_BitWriteInfo  stateBitsWriteInfo;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GetCurrentState, addr 0x565a7dc, size 0x30, virtual false, abstract: false, final false
inline int32_t GetCurrentState() ;

static inline ::GlobalNamespace::RadioButtonGroupWearable* New_ctor() ;

/// @brief Method OnDespawn, addr 0x565a928, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnEnable, addr 0x565a6f0, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPress, addr 0x565a860, size 0xc0, virtual false, abstract: false, final false
inline void OnPress(::GlobalNamespace::GorillaPressableButton*  button) ;

/// @brief Method OnSpawn, addr 0x565a920, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method SharedRefreshState, addr 0x565a6f4, size 0xe8, virtual false, abstract: false, final false
inline void SharedRefreshState() ;

/// @brief Method Start, addr 0x565a594, size 0x15c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x565a80c, size 0x54, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_AllowSelectNone() const;

constexpr bool& __cordl_internal_get_AllowSelectNone() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_OnSelectionChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_OnSelectionChanged() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots const& __cordl_internal_get_assignedSlot() const;

constexpr ::GlobalNamespace::VRRig_WearablePackedStateSlots& __cordl_internal_get_assignedSlot() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>> const& __cordl_internal_get_buttons() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>& __cordl_internal_get_buttons() ;

constexpr int32_t const& __cordl_internal_get_lastReportedState() const;

constexpr int32_t& __cordl_internal_get_lastReportedState() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_ownerRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_ownerRig() ;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo const& __cordl_internal_get_stateBitsWriteInfo() const;

constexpr ::GlobalNamespace::GTBitOps_BitWriteInfo& __cordl_internal_get_stateBitsWriteInfo() ;

constexpr void __cordl_internal_set_AllowSelectNone(bool  value) ;

constexpr void __cordl_internal_set_OnSelectionChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_assignedSlot(::GlobalNamespace::VRRig_WearablePackedStateSlots  value) ;

constexpr void __cordl_internal_set_buttons(::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  value) ;

constexpr void __cordl_internal_set_lastReportedState(int32_t  value) ;

constexpr void __cordl_internal_set_ownerRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_stateBitsWriteInfo(::GlobalNamespace::GTBitOps_BitWriteInfo  value) ;

/// @brief Method .ctor, addr 0x565a92c, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x565a584, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x565a574, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x565a58c, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x565a57c, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RadioButtonGroupWearable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroupWearable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RadioButtonGroupWearable(RadioButtonGroupWearable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RadioButtonGroupWearable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RadioButtonGroupWearable(RadioButtonGroupWearable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{761};

/// [SerializeField]
/// @brief Field AllowSelectNone, offset: 0x20, size: 0x1, def value: None
 bool  ___AllowSelectNone;

/// [SerializeField]
/// @brief Field buttons, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaPressableButton>>  ___buttons;

/// [SerializeField]
/// @brief Field OnSelectionChanged, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___OnSelectionChanged;

/// [Tooltip("This is to determine what bit to change in VRRig.WearablesPackedStates.")]
/// [SerializeField]
/// @brief Field assignedSlot, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::VRRig_WearablePackedStateSlots  ___assignedSlot;

/// @brief Field lastReportedState, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___lastReportedState;

/// @brief Field ownerRig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___ownerRig;

/// @brief Field stateBitsWriteInfo, offset: 0x48, size: 0xc, def value: None
 ::GlobalNamespace::GTBitOps_BitWriteInfo  ___stateBitsWriteInfo;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0x54, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0x58, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___AllowSelectNone) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___buttons) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___OnSelectionChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___assignedSlot) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___lastReportedState) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___ownerRig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ___stateBitsWriteInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ____IsSpawned_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RadioButtonGroupWearable, ____CosmeticSelectedSide_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RadioButtonGroupWearable) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

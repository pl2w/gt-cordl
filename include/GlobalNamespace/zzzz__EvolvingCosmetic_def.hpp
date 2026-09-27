#pragma once
// IWYU pragma private; include "GlobalNamespace/EvolvingCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EvolvingCosmetic_AgeAwareGameObject_def.hpp"
#include "GlobalNamespace/zzzz__EvolvingCosmetic_SubscriptionAgeRule_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmetic)
namespace GlobalNamespace {
struct EvolvingCosmetic_AgeAwareGameObject;
}
namespace GlobalNamespace {
struct EvolvingCosmetic_SubscriptionAgeRule;
}
namespace GlobalNamespace {
class ICosmeticStateSync;
}
namespace GlobalNamespace {
struct VRRigReliableState_StateSyncSlots;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EvolvingCosmetic;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EvolvingCosmetic*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EvolvingCosmetic*, "", "EvolvingCosmetic");
// Dependencies EvolvingCosmetic::AgeAwareGameObject, EvolvingCosmetic::SubscriptionAgeRule, System.Nullable`1<T>, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: EvolvingCosmetic
class CORDL_TYPE EvolvingCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AgeAwareGameObject = ::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject;

using SubscriptionAgeRule = ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule;

/// @brief Field DispatchDaysOnEnable, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_DispatchDaysOnEnable, put=__cordl_internal_set_DispatchDaysOnEnable)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  DispatchDaysOnEnable;

/// @brief Field DispatchDaysOnEnableNormalized, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_DispatchDaysOnEnableNormalized, put=__cordl_internal_set_DispatchDaysOnEnableNormalized)) ::UnityEngine::Events::UnityEvent_1<float_t>*  DispatchDaysOnEnableNormalized;

 __declspec(property(get=get_PlayfabId)) ::StringW  PlayfabId;

 __declspec(property(get=get_SelectedObjectIndex, put=set_SelectedObjectIndex)) int32_t  SelectedObjectIndex;

 __declspec(property(get=get_StateValue)) int32_t  StateValue;

/// @brief Field <SelectedObjectIndex>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__SelectedObjectIndex_k__BackingField, put=__cordl_internal_set__SelectedObjectIndex_k__BackingField)) int32_t  _SelectedObjectIndex_k__BackingField;

/// @brief Field _daysAccrued, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__daysAccrued, put=__cordl_internal_set__daysAccrued)) ::System::Nullable_1<int32_t>  _daysAccrued;

/// @brief Field ageAwareGameObjects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ageAwareGameObjects, put=__cordl_internal_set_ageAwareGameObjects)) ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>  ageAwareGameObjects;

/// @brief Field ageRule, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_ageRule, put=__cordl_internal_set_ageRule)) ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule  ageRule;

/// @brief Field capDays, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_capDays, put=__cordl_internal_set_capDays)) int32_t  capDays;

/// @brief Field m_parentRig, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_parentRig, put=__cordl_internal_set_m_parentRig)) ::UnityW<::GlobalNamespace::VRRig>  m_parentRig;

/// @brief Field maxDays, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDays, put=__cordl_internal_set_maxDays)) int32_t  maxDays;

/// @brief Field multiplier, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_multiplier, put=__cordl_internal_set_multiplier)) int32_t  multiplier;

/// @brief Convert operator to "::GlobalNamespace::ICosmeticStateSync"
constexpr operator  ::GlobalNamespace::ICosmeticStateSync*() noexcept;

/// @brief Method ActivateSelectedIndex, addr 0x5704ddc, size 0x90, virtual false, abstract: false, final false
inline void ActivateSelectedIndex() ;

/// @brief Method Awake, addr 0x5704cc8, size 0x9c, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CanGoBack, addr 0x5705870, size 0xc, virtual false, abstract: false, final false
inline bool CanGoBack() ;

/// @brief Method CanGoForward, addr 0x57058b4, size 0xc, virtual false, abstract: false, final false
inline bool CanGoForward() ;

/// @brief Method FindAgeAwareIndex, addr 0x570563c, size 0x68, virtual false, abstract: false, final false
inline int32_t FindAgeAwareIndex(int32_t  daysAccrued) ;

/// @brief Method GetStateSyncSlot, addr 0x570525c, size 0x16c, virtual false, abstract: false, final false
inline ::GlobalNamespace::VRRigReliableState_StateSyncSlots GetStateSyncSlot() ;

/// @brief Method GoBack, addr 0x5705838, size 0x38, virtual false, abstract: false, final false
inline void GoBack() ;

/// @brief Method GoForward, addr 0x570587c, size 0x38, virtual false, abstract: false, final false
inline void GoForward() ;

/// @brief Method IsIndexAvailable, addr 0x5704d64, size 0x78, virtual false, abstract: false, final false
inline bool IsIndexAvailable(int32_t  index) ;

/// @brief Method IsSelectedIndexAvailable, addr 0x5705830, size 0x8, virtual false, abstract: false, final false
inline bool IsSelectedIndexAvailable() ;

/// @brief Method MatchStage, addr 0x57058c0, size 0x84, virtual false, abstract: false, final false
inline void MatchStage(::GlobalNamespace::EvolvingCosmetic*  other) ;

static inline ::GlobalNamespace::EvolvingCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x57056a4, size 0x18c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5704e6c, size 0x380, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnStateUpdate, addr 0x5705944, size 0x38, virtual true, abstract: false, final true
inline void OnStateUpdate(int32_t  state) ;

/// @brief Method UnselectAll, addr 0x57051ec, size 0x70, virtual false, abstract: false, final false
inline void UnselectAll() ;

/// @brief Method UpdateDaysAccrued, addr 0x57053c8, size 0x274, virtual false, abstract: false, final false
inline void UpdateDaysAccrued() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_DispatchDaysOnEnable() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_DispatchDaysOnEnable() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_DispatchDaysOnEnableNormalized() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_DispatchDaysOnEnableNormalized() ;

constexpr int32_t const& __cordl_internal_get__SelectedObjectIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__SelectedObjectIndex_k__BackingField() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__daysAccrued() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__daysAccrued() ;

constexpr ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject> const& __cordl_internal_get_ageAwareGameObjects() const;

constexpr ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>& __cordl_internal_get_ageAwareGameObjects() ;

constexpr ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule const& __cordl_internal_get_ageRule() const;

constexpr ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule& __cordl_internal_get_ageRule() ;

constexpr int32_t const& __cordl_internal_get_capDays() const;

constexpr int32_t& __cordl_internal_get_capDays() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_m_parentRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_m_parentRig() ;

constexpr int32_t const& __cordl_internal_get_maxDays() const;

constexpr int32_t& __cordl_internal_get_maxDays() ;

constexpr int32_t const& __cordl_internal_get_multiplier() const;

constexpr int32_t& __cordl_internal_get_multiplier() ;

constexpr void __cordl_internal_set_DispatchDaysOnEnable(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_DispatchDaysOnEnableNormalized(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set__SelectedObjectIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__daysAccrued(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ageAwareGameObjects(::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>  value) ;

constexpr void __cordl_internal_set_ageRule(::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule  value) ;

constexpr void __cordl_internal_set_capDays(int32_t  value) ;

constexpr void __cordl_internal_set_m_parentRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_maxDays(int32_t  value) ;

constexpr void __cordl_internal_set_multiplier(int32_t  value) ;

/// @brief Method .ctor, addr 0x570597c, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PlayfabId, addr 0x5704ca8, size 0x20, virtual false, abstract: false, final false
inline ::StringW get_PlayfabId() ;

/// [CompilerGenerated]
/// @brief Method get_SelectedObjectIndex, addr 0x5704c98, size 0x8, virtual false, abstract: false, final false
inline int32_t get_SelectedObjectIndex() ;

/// @brief Method get_StateValue, addr 0x5704c90, size 0x8, virtual true, abstract: false, final true
inline int32_t get_StateValue() ;

/// @brief Convert to "::GlobalNamespace::ICosmeticStateSync"
constexpr ::GlobalNamespace::ICosmeticStateSync* i___GlobalNamespace__ICosmeticStateSync() noexcept;

/// [CompilerGenerated]
/// @brief Method set_SelectedObjectIndex, addr 0x5704ca0, size 0x8, virtual false, abstract: false, final false
inline void set_SelectedObjectIndex(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmetic(EvolvingCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmetic(EvolvingCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{160};

/// [SerializeField]
/// @brief Field ageRule, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::EvolvingCosmetic_SubscriptionAgeRule  ___ageRule;

/// [SerializeField]
/// @brief Field ageAwareGameObjects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::EvolvingCosmetic_AgeAwareGameObject>  ___ageAwareGameObjects;

/// [SerializeField]
/// @brief Field capDays, offset: 0x30, size: 0x4, def value: None
 int32_t  ___capDays;

/// [SerializeField]
/// @brief Field DispatchDaysOnEnable, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___DispatchDaysOnEnable;

/// [SerializeField]
/// @brief Field maxDays, offset: 0x40, size: 0x4, def value: None
 int32_t  ___maxDays;

/// [SerializeField]
/// @brief Field multiplier, offset: 0x44, size: 0x4, def value: None
 int32_t  ___multiplier;

/// [SerializeField]
/// @brief Field DispatchDaysOnEnableNormalized, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___DispatchDaysOnEnableNormalized;

/// [CompilerGenerated]
/// @brief Field <SelectedObjectIndex>k__BackingField, offset: 0x50, size: 0x4, def value: None
 int32_t  ____SelectedObjectIndex_k__BackingField;

/// @brief Field _daysAccrued, offset: 0x58, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ____daysAccrued;

/// @brief Field m_parentRig, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___m_parentRig;

/// @brief Size padding 0x68 - 0x70 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___ageRule) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___ageAwareGameObjects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___capDays) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___DispatchDaysOnEnable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___maxDays) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___multiplier) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___DispatchDaysOnEnableNormalized) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ____SelectedObjectIndex_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ____daysAccrued) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::EvolvingCosmetic, ___m_parentRig) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::EvolvingCosmetic) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/SlingshotLifeIndicator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SlingshotLifeIndicator)
namespace GlobalNamespace {
class GorillaPaintbrawlManager;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
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
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SlingshotLifeIndicator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SlingshotLifeIndicator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SlingshotLifeIndicator*, "", "SlingshotLifeIndicator");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SlingshotLifeIndicator
class CORDL_TYPE SlingshotLifeIndicator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field bMgr, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_bMgr, put=__cordl_internal_set_bMgr)) ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  bMgr;

/// @brief Field checkedBattle, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_checkedBattle, put=__cordl_internal_set_checkedBattle)) bool  checkedBattle;

/// @brief Field inBattle, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBattle, put=__cordl_internal_set_inBattle)) bool  inBattle;

/// @brief Field indicator1, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_indicator1, put=__cordl_internal_set_indicator1)) ::UnityW<::UnityEngine::GameObject>  indicator1;

/// @brief Field indicator2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_indicator2, put=__cordl_internal_set_indicator2)) ::UnityW<::UnityEngine::GameObject>  indicator2;

/// @brief Field indicator3, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_indicator3, put=__cordl_internal_set_indicator3)) ::UnityW<::UnityEngine::GameObject>  indicator3;

/// @brief Field myRig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5738cbc, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5738cb4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5738ca4, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5738c94, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5738cac, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5738c9c, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::SlingshotLifeIndicator* New_ctor() ;

/// @brief Method OnDisable, addr 0x5738db8, size 0x110, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5738cc0, size 0xf8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x57391c4, size 0x24, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method Reset, addr 0x5738ec8, size 0x24, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetActive, addr 0x5738eec, size 0x74, virtual false, abstract: false, final false
inline void SetActive(::UnityEngine::GameObject*  obj, bool  active) ;

/// @brief Method SliceUpdate, addr 0x5738f60, size 0x264, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager> const& __cordl_internal_get_bMgr() const;

constexpr ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>& __cordl_internal_get_bMgr() ;

constexpr bool const& __cordl_internal_get_checkedBattle() const;

constexpr bool& __cordl_internal_get_checkedBattle() ;

constexpr bool const& __cordl_internal_get_inBattle() const;

constexpr bool& __cordl_internal_get_inBattle() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_indicator1() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_indicator1() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_indicator2() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_indicator2() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_indicator3() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_indicator3() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_bMgr(::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  value) ;

constexpr void __cordl_internal_set_checkedBattle(bool  value) ;

constexpr void __cordl_internal_set_inBattle(bool  value) ;

constexpr void __cordl_internal_set_indicator1(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_indicator2(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_indicator3(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

/// @brief Method .ctor, addr 0x57391e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlingshotLifeIndicator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlingshotLifeIndicator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SlingshotLifeIndicator(SlingshotLifeIndicator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlingshotLifeIndicator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlingshotLifeIndicator(SlingshotLifeIndicator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1215};

/// @brief Field myRig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field bMgr, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaPaintbrawlManager>  ___bMgr;

/// @brief Field checkedBattle, offset: 0x30, size: 0x1, def value: None
 bool  ___checkedBattle;

/// @brief Field inBattle, offset: 0x31, size: 0x1, def value: None
 bool  ___inBattle;

/// @brief Field indicator1, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___indicator1;

/// @brief Field indicator2, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___indicator2;

/// @brief Field indicator3, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___indicator3;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x50, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x54, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___myRig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___bMgr) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___checkedBattle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___inBattle) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___indicator1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___indicator2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ___indicator3) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SlingshotLifeIndicator, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SlingshotLifeIndicator) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace

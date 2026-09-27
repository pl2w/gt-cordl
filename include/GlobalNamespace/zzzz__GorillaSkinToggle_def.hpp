#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaSkinToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaSkinToggle_ColoringRule_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(GorillaSkinToggle)
namespace GlobalNamespace {
struct GorillaSkinToggle_ColoringRule;
}
namespace GlobalNamespace {
class GorillaSkin;
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
struct Color;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaSkinToggle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaSkinToggle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaSkinToggle*, "", "GorillaSkinToggle");
// Dependencies GorillaSkinToggle::ColoringRule, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaSkinToggle
class CORDL_TYPE GorillaSkinToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ColoringRule = ::GlobalNamespace::GorillaSkinToggle_ColoringRule;

 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field _activeSkin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeSkin, put=__cordl_internal_set__activeSkin)) ::UnityW<::GlobalNamespace::GorillaSkin>  _activeSkin;

/// @brief Field _applied, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__applied, put=__cordl_internal_set__applied)) bool  _applied;

/// @brief Field _rig, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field _skin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__skin, put=__cordl_internal_set__skin)) ::UnityW<::GlobalNamespace::GorillaSkin>  _skin;

 __declspec(property(get=get_applied)) bool  applied;

/// @brief Field coloringRules, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_coloringRules, put=__cordl_internal_set_coloringRules)) ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>  coloringRules;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method Apply, addr 0x56526f0, size 0x70, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method ApplyToMannequin, addr 0x56529c0, size 0x130, virtual false, abstract: false, final false
inline void ApplyToMannequin(::UnityEngine::GameObject*  mannequin, bool  swapMesh) ;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5652498, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x56522ec, size 0x118, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x56522dc, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x56522cc, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x56522e4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x56522d4, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

static inline ::GlobalNamespace::GorillaSkinToggle* New_ctor() ;

/// @brief Method OnDisable, addr 0x5652760, size 0xe4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5652630, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPlayerColorChanged, addr 0x565249c, size 0xb4, virtual false, abstract: false, final false
inline void OnPlayerColorChanged(::UnityEngine::Color  playerColor) ;

/// @brief Method Remove, addr 0x5652844, size 0x17c, virtual false, abstract: false, final false
inline void Remove() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get__activeSkin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get__activeSkin() ;

constexpr bool const& __cordl_internal_get__applied() const;

constexpr bool& __cordl_internal_get__applied() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin> const& __cordl_internal_get__skin() const;

constexpr ::UnityW<::GlobalNamespace::GorillaSkin>& __cordl_internal_get__skin() ;

constexpr ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule> const& __cordl_internal_get_coloringRules() const;

constexpr ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>& __cordl_internal_get_coloringRules() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeSkin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set__applied(bool  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__skin(::UnityW<::GlobalNamespace::GorillaSkin>  value) ;

constexpr void __cordl_internal_set_coloringRules(::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>  value) ;

/// @brief Method .ctor, addr 0x5652af0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_applied, addr 0x56522c4, size 0x8, virtual false, abstract: false, final false
inline bool get_applied() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaSkinToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkinToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaSkinToggle(GorillaSkinToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaSkinToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaSkinToggle(GorillaSkinToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{733};

/// @brief Field _rig, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// [SerializeField]
/// @brief Field _skin, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ____skin;

/// @brief Field _activeSkin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaSkin>  ____activeSkin;

/// [SerializeField]
/// @brief Field coloringRules, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GorillaSkinToggle_ColoringRule>  ___coloringRules;

/// [Space]
/// [SerializeField]
/// @brief Field _applied, offset: 0x40, size: 0x1, def value: None
 bool  ____applied;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0x41, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0x44, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____rig) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____skin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____activeSkin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ___coloringRules) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____applied) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaSkinToggle, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaSkinToggle) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace

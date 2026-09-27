#pragma once
// IWYU pragma private; include "GlobalNamespace/HoseSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticRefID_def.hpp"
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HoseSimulator)
namespace GlobalNamespace {
class HoseSimulatorAnchors;
}
namespace GlobalNamespace {
class TransferrableObject;
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
class SkinnedMeshRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HoseSimulator;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HoseSimulator*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HoseSimulator*, "", "HoseSimulator");
// Dependencies CosmeticRefID, GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Transform, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HoseSimulator
class CORDL_TYPE HoseSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=GorillaTag_ISpawnable_get_CosmeticSelectedSide, put=GorillaTag_ISpawnable_set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  GorillaTag_ISpawnable_CosmeticSelectedSide;

 __declspec(property(get=GorillaTag_ISpawnable_get_IsSpawned, put=GorillaTag_ISpawnable_set_IsSpawned)) bool  GorillaTag_ISpawnable_IsSpawned;

/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField, put=__cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField)) bool  _GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// @brief Field anchors, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_anchors, put=__cordl_internal_set_anchors)) ::UnityW<::GlobalNamespace::HoseSimulatorAnchors>  anchors;

/// @brief Field damping, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_damping, put=__cordl_internal_set_damping)) float_t  damping;

/// @brief Field endAnchor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_endAnchor, put=__cordl_internal_set_endAnchor)) ::UnityW<::UnityEngine::Transform>  endAnchor;

/// @brief Field endStiffness, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_endStiffness, put=__cordl_internal_set_endStiffness)) float_t  endStiffness;

/// @brief Field firstUpdate, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstUpdate, put=__cordl_internal_set_firstUpdate)) bool  firstUpdate;

/// @brief Field hoseBoneMaxDisplacement, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoseBoneMaxDisplacement, put=__cordl_internal_set_hoseBoneMaxDisplacement)) ::ArrayW<float_t>  hoseBoneMaxDisplacement;

/// @brief Field hoseBonePositions, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoseBonePositions, put=__cordl_internal_set_hoseBonePositions)) ::ArrayW<::UnityEngine::Vector3>  hoseBonePositions;

/// @brief Field hoseBoneVelocities, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoseBoneVelocities, put=__cordl_internal_set_hoseBoneVelocities)) ::ArrayW<::UnityEngine::Vector3>  hoseBoneVelocities;

/// @brief Field hoseBones, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoseBones, put=__cordl_internal_set_hoseBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  hoseBones;

/// @brief Field hoseSectionLengths, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoseSectionLengths, put=__cordl_internal_set_hoseSectionLengths)) ::ArrayW<float_t>  hoseSectionLengths;

/// @brief Field isLeftHanded, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLeftHanded, put=__cordl_internal_set_isLeftHanded)) bool  isLeftHanded;

/// @brief Field localBoundsOverride, offset 0x28, size 0xc 
 __declspec(property(get=__cordl_internal_get_localBoundsOverride, put=__cordl_internal_set_localBoundsOverride)) ::UnityEngine::Vector3  localBoundsOverride;

/// @brief Field miscBones, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_miscBones, put=__cordl_internal_set_miscBones)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  miscBones;

/// @brief Field myHoldable, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_myHoldable, put=__cordl_internal_set_myHoldable)) ::UnityW<::GlobalNamespace::TransferrableObject>  myHoldable;

/// @brief Field skinnedMeshRenderer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_skinnedMeshRenderer, put=__cordl_internal_set_skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  skinnedMeshRenderer;

/// @brief Field startAnchor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_startAnchor, put=__cordl_internal_set_startAnchor)) ::UnityW<::UnityEngine::Transform>  startAnchor;

/// @brief Field startAnchorRef, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_startAnchorRef, put=__cordl_internal_set_startAnchorRef)) ::GlobalNamespace::CosmeticRefID  startAnchorRef;

/// @brief Field startStiffness, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_startStiffness, put=__cordl_internal_set_startStiffness)) float_t  startStiffness;

/// @brief Field totalHoseLength, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalHoseLength, put=__cordl_internal_set_totalHoseLength)) float_t  totalHoseLength;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method GorillaTag.ISpawnable.OnDespawn, addr 0x5654470, size 0x4, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnDespawn() ;

/// @brief Method GorillaTag.ISpawnable.OnSpawn, addr 0x5654474, size 0x214, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_CosmeticSelectedSide, addr 0x5654460, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide GorillaTag_ISpawnable_get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.get_IsSpawned, addr 0x5654450, size 0x8, virtual true, abstract: false, final true
inline bool GorillaTag_ISpawnable_get_IsSpawned() ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_CosmeticSelectedSide, addr 0x5654468, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method GorillaTag.ISpawnable.set_IsSpawned, addr 0x5654458, size 0x8, virtual true, abstract: false, final true
inline void GorillaTag_ISpawnable_set_IsSpawned(bool  value) ;

/// @brief Method LateUpdate, addr 0x5654688, size 0x850, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::HoseSimulator* New_ctor() ;

/// @brief Method OnDrawGizmosSelected, addr 0x5654ed8, size 0x88, virtual false, abstract: false, final false
inline void OnDrawGizmosSelected() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__GorillaTag_ISpawnable_IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::HoseSimulatorAnchors> const& __cordl_internal_get_anchors() const;

constexpr ::UnityW<::GlobalNamespace::HoseSimulatorAnchors>& __cordl_internal_get_anchors() ;

constexpr float_t const& __cordl_internal_get_damping() const;

constexpr float_t& __cordl_internal_get_damping() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endAnchor() ;

constexpr float_t const& __cordl_internal_get_endStiffness() const;

constexpr float_t& __cordl_internal_get_endStiffness() ;

constexpr bool const& __cordl_internal_get_firstUpdate() const;

constexpr bool& __cordl_internal_get_firstUpdate() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_hoseBoneMaxDisplacement() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_hoseBoneMaxDisplacement() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_hoseBonePositions() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_hoseBonePositions() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_hoseBoneVelocities() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_hoseBoneVelocities() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_hoseBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_hoseBones() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_hoseSectionLengths() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_hoseSectionLengths() ;

constexpr bool const& __cordl_internal_get_isLeftHanded() const;

constexpr bool& __cordl_internal_get_isLeftHanded() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localBoundsOverride() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localBoundsOverride() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_miscBones() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_miscBones() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_myHoldable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_myHoldable() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get_skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get_skinnedMeshRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startAnchor() ;

constexpr ::GlobalNamespace::CosmeticRefID const& __cordl_internal_get_startAnchorRef() const;

constexpr ::GlobalNamespace::CosmeticRefID& __cordl_internal_get_startAnchorRef() ;

constexpr float_t const& __cordl_internal_get_startStiffness() const;

constexpr float_t& __cordl_internal_get_startStiffness() ;

constexpr float_t const& __cordl_internal_get_totalHoseLength() const;

constexpr float_t& __cordl_internal_get_totalHoseLength() ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__GorillaTag_ISpawnable_IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anchors(::UnityW<::GlobalNamespace::HoseSimulatorAnchors>  value) ;

constexpr void __cordl_internal_set_damping(float_t  value) ;

constexpr void __cordl_internal_set_endAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endStiffness(float_t  value) ;

constexpr void __cordl_internal_set_firstUpdate(bool  value) ;

constexpr void __cordl_internal_set_hoseBoneMaxDisplacement(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_hoseBonePositions(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_hoseBoneVelocities(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_hoseBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_hoseSectionLengths(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_isLeftHanded(bool  value) ;

constexpr void __cordl_internal_set_localBoundsOverride(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_miscBones(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_myHoldable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set_startAnchor(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_startAnchorRef(::GlobalNamespace::CosmeticRefID  value) ;

constexpr void __cordl_internal_set_startStiffness(float_t  value) ;

constexpr void __cordl_internal_set_totalHoseLength(float_t  value) ;

/// @brief Method .ctor, addr 0x5654f60, size 0x28, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoseSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoseSimulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoseSimulator(HoseSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoseSimulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoseSimulator(HoseSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{742};

/// [SerializeField]
/// @brief Field skinnedMeshRenderer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ___skinnedMeshRenderer;

/// [SerializeField]
/// @brief Field localBoundsOverride, offset: 0x28, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localBoundsOverride;

/// [SerializeField]
/// @brief Field miscBones, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___miscBones;

/// [SerializeField]
/// @brief Field hoseBones, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___hoseBones;

/// [SerializeField]
/// @brief Field hoseBoneMaxDisplacement, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<float_t>  ___hoseBoneMaxDisplacement;

/// [SerializeField]
/// @brief Field startAnchorRef, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticRefID  ___startAnchorRef;

/// @brief Field startAnchor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startAnchor;

/// [SerializeField]
/// @brief Field startStiffness, offset: 0x60, size: 0x4, def value: None
 float_t  ___startStiffness;

/// [SerializeField]
/// @brief Field endAnchor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endAnchor;

/// [SerializeField]
/// @brief Field endStiffness, offset: 0x70, size: 0x4, def value: None
 float_t  ___endStiffness;

/// @brief Field hoseBonePositions, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___hoseBonePositions;

/// @brief Field hoseBoneVelocities, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___hoseBoneVelocities;

/// [SerializeField]
/// @brief Field damping, offset: 0x88, size: 0x4, def value: None
 float_t  ___damping;

/// @brief Field hoseSectionLengths, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ___hoseSectionLengths;

/// @brief Field totalHoseLength, offset: 0x98, size: 0x4, def value: None
 float_t  ___totalHoseLength;

/// @brief Field firstUpdate, offset: 0x9c, size: 0x1, def value: None
 bool  ___firstUpdate;

/// @brief Field anchors, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HoseSimulatorAnchors>  ___anchors;

/// [SerializeField]
/// @brief Field myHoldable, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___myHoldable;

/// @brief Field isLeftHanded, offset: 0xb0, size: 0x1, def value: None
 bool  ___isLeftHanded;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.IsSpawned>k__BackingField, offset: 0xb1, size: 0x1, def value: None
 bool  ____GorillaTag_ISpawnable_IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <GorillaTag.ISpawnable.CosmeticSelectedSide>k__BackingField, offset: 0xb4, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___skinnedMeshRenderer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___localBoundsOverride) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___miscBones) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___hoseBones) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___hoseBoneMaxDisplacement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___startAnchorRef) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___startAnchor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___startStiffness) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___endAnchor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___endStiffness) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___hoseBonePositions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___hoseBoneVelocities) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___damping) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___hoseSectionLengths) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___totalHoseLength) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___firstUpdate) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___anchors) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___myHoldable) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ___isLeftHanded) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ____GorillaTag_ISpawnable_IsSpawned_k__BackingField) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HoseSimulator, ____GorillaTag_ISpawnable_CosmeticSelectedSide_k__BackingField) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HoseSimulator) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace

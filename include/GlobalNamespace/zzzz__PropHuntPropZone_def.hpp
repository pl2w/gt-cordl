#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPropZone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PropHuntPropZone)
namespace GlobalNamespace {
class IDelayedExecListener;
}
namespace GlobalNamespace {
class PropPlacementRB;
}
namespace GorillaTag::CosmeticSystem {
class CosmeticSO;
}
namespace GorillaTag {
template<typename TObject>
class GTAssetRef_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntPropZone;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntPropZone*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPropZone*, "", "PropHuntPropZone");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntPropZone
class CORDL_TYPE PropHuntPropZone : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boxCollider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_boxCollider, put=__cordl_internal_set_boxCollider)) ::UnityW<::UnityEngine::BoxCollider>  boxCollider;

/// @brief Field hasBoxCollider, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasBoxCollider, put=__cordl_internal_set_hasBoxCollider)) bool  hasBoxCollider;

/// @brief Field m_simDurationBeforeFreeze, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_simDurationBeforeFreeze, put=__cordl_internal_set_m_simDurationBeforeFreeze)) float_t  m_simDurationBeforeFreeze;

/// @brief Field nextUnusedPropPlacement, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextUnusedPropPlacement, put=__cordl_internal_set_nextUnusedPropPlacement)) int32_t  nextUnusedPropPlacement;

/// @brief Field numProps, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_numProps, put=__cordl_internal_set_numProps)) int32_t  numProps;

/// @brief Field propPlacementPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_propPlacementPrefab, put=__cordl_internal_set_propPlacementPrefab)) ::UnityW<::GlobalNamespace::PropPlacementRB>  propPlacementPrefab;

/// @brief Field propPlacementRBs, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_propPlacementRBs, put=__cordl_internal_set_propPlacementRBs)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*  propPlacementRBs;

/// @brief Field radius, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field seedOffset, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_seedOffset, put=__cordl_internal_set_seedOffset)) int32_t  seedOffset;

/// @brief Convert operator to "::GlobalNamespace::IDelayedExecListener"
constexpr operator  ::GlobalNamespace::IDelayedExecListener*() noexcept;

/// @brief Method Awake, addr 0x563ebb4, size 0x58, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CreateDecoys, addr 0x563efa0, size 0x4f4, virtual false, abstract: false, final false
inline void CreateDecoys(int32_t  seed) ;

/// @brief Method DestroyDecoys, addr 0x563ecc4, size 0x1d0, virtual false, abstract: false, final false
inline void DestroyDecoys() ;

static inline ::GlobalNamespace::PropHuntPropZone* New_ctor() ;

/// @brief Method OnDelayedAction, addr 0x563f494, size 0x15c, virtual true, abstract: false, final true
inline void OnDelayedAction(int32_t  contextId) ;

/// @brief Method OnDisable, addr 0x563ec64, size 0x60, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x563ec0c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRoundStart, addr 0x563ee94, size 0x10c, virtual false, abstract: false, final false
inline void OnRoundStart() ;

/// @brief Method SpawnProp_NoPool, addr 0x563f754, size 0x88, virtual false, abstract: false, final false
inline void SpawnProp_NoPool(::GorillaTag::GTAssetRef_1<::UnityW<::UnityEngine::GameObject>>*  item, ::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rot, ::GorillaTag::CosmeticSystem::CosmeticSO*  debugCosmeticSO) ;

/// @brief Method _GetOrCreatePropPlacementObj_NoPool, addr 0x563f5f0, size 0x164, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::PropPlacementRB> _GetOrCreatePropPlacementObj_NoPool() ;

constexpr ::UnityW<::UnityEngine::BoxCollider> const& __cordl_internal_get_boxCollider() const;

constexpr ::UnityW<::UnityEngine::BoxCollider>& __cordl_internal_get_boxCollider() ;

constexpr bool const& __cordl_internal_get_hasBoxCollider() const;

constexpr bool& __cordl_internal_get_hasBoxCollider() ;

constexpr float_t const& __cordl_internal_get_m_simDurationBeforeFreeze() const;

constexpr float_t& __cordl_internal_get_m_simDurationBeforeFreeze() ;

constexpr int32_t const& __cordl_internal_get_nextUnusedPropPlacement() const;

constexpr int32_t& __cordl_internal_get_nextUnusedPropPlacement() ;

constexpr int32_t const& __cordl_internal_get_numProps() const;

constexpr int32_t& __cordl_internal_get_numProps() ;

constexpr ::UnityW<::GlobalNamespace::PropPlacementRB> const& __cordl_internal_get_propPlacementPrefab() const;

constexpr ::UnityW<::GlobalNamespace::PropPlacementRB>& __cordl_internal_get_propPlacementPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>* const& __cordl_internal_get_propPlacementRBs() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*& __cordl_internal_get_propPlacementRBs() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr int32_t const& __cordl_internal_get_seedOffset() const;

constexpr int32_t& __cordl_internal_get_seedOffset() ;

constexpr void __cordl_internal_set_boxCollider(::UnityW<::UnityEngine::BoxCollider>  value) ;

constexpr void __cordl_internal_set_hasBoxCollider(bool  value) ;

constexpr void __cordl_internal_set_m_simDurationBeforeFreeze(float_t  value) ;

constexpr void __cordl_internal_set_nextUnusedPropPlacement(int32_t  value) ;

constexpr void __cordl_internal_set_numProps(int32_t  value) ;

constexpr void __cordl_internal_set_propPlacementPrefab(::UnityW<::GlobalNamespace::PropPlacementRB>  value) ;

constexpr void __cordl_internal_set_propPlacementRBs(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_seedOffset(int32_t  value) ;

/// @brief Method .ctor, addr 0x563fa4c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IDelayedExecListener"
constexpr ::GlobalNamespace::IDelayedExecListener* i___GlobalNamespace__IDelayedExecListener() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPropZone() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPropZone", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntPropZone(PropHuntPropZone && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPropZone", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntPropZone(PropHuntPropZone const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{641};

/// @brief Field _k__GT_PROP_HUNT__USE_POOLING__ offset 0xffffffff size 0x1
static constexpr bool  _k__GT_PROP_HUNT__USE_POOLING__{true};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  PropHuntPropZone: "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"ERROR!!!  (beta only log) PropHuntPropZone: "};

/// @brief Field preErrEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrEd{u"ERROR!!!  (editor only log) PropHuntPropZone: "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"PropHuntPropZone: "};

/// @brief Field preLogBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogBeta{u"(beta only log) PropHuntPropZone: "};

/// @brief Field preLogEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogEd{u"(editor only log) PropHuntPropZone: "};

/// [SerializeField]
/// @brief Field propPlacementPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PropPlacementRB>  ___propPlacementPrefab;

/// [SerializeField]
/// @brief Field seedOffset, offset: 0x28, size: 0x4, def value: None
 int32_t  ___seedOffset;

/// [SerializeField]
/// @brief Field radius, offset: 0x2c, size: 0x4, def value: None
 float_t  ___radius;

/// [SerializeField]
/// @brief Field numProps, offset: 0x30, size: 0x4, def value: None
 int32_t  ___numProps;

/// [SerializeField]
/// @brief Field m_simDurationBeforeFreeze, offset: 0x34, size: 0x4, def value: None
 float_t  ___m_simDurationBeforeFreeze;

/// @brief Field boxCollider, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::BoxCollider>  ___boxCollider;

/// @brief Field hasBoxCollider, offset: 0x40, size: 0x1, def value: None
 bool  ___hasBoxCollider;

/// @brief Field nextUnusedPropPlacement, offset: 0x44, size: 0x4, def value: None
 int32_t  ___nextUnusedPropPlacement;

/// @brief Field propPlacementRBs, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PropPlacementRB>>*  ___propPlacementRBs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___propPlacementPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___seedOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___radius) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___numProps) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___m_simDurationBeforeFreeze) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___boxCollider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___hasBoxCollider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___nextUnusedPropPlacement) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PropHuntPropZone, ___propPlacementRBs) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PropHuntPropZone) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace

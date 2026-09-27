#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticsControllerUpdateStand.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HeadModel_def.hpp"
#include "GorillaNetworking/zzzz__CosmeticsController_CosmeticItem_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CosmeticsControllerUpdateStand)
namespace GlobalNamespace {
class CosmeticsControllerUpdateStand___c__DisplayClass13_0;
}
namespace GlobalNamespace {
struct CosmeticsController_CosmeticItem;
}
namespace GorillaNetworking {
class CosmeticsController;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticsControllerUpdateStand;
}
namespace GlobalNamespace {
class CosmeticsControllerUpdateStand___c__DisplayClass13_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticsControllerUpdateStand*);
MARK_REF_T(::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsControllerUpdateStand*, "", "CosmeticsControllerUpdateStand");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0*, "", "CosmeticsControllerUpdateStand/<>c__DisplayClass13_0");
// Dependencies GorillaNetworking.CosmeticsController::CosmeticItem, HeadModel, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsControllerUpdateStand
class CORDL_TYPE CosmeticsControllerUpdateStand : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass13_0 = ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0;

/// @brief Field AttemptToConsumeEntitlement, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_AttemptToConsumeEntitlement, put=__cordl_internal_set_AttemptToConsumeEntitlement)) bool  AttemptToConsumeEntitlement;

/// @brief Field EntitlementSuccessfullyConsumed, offset 0x2d, size 0x1 
 __declspec(property(get=__cordl_internal_get_EntitlementSuccessfullyConsumed, put=__cordl_internal_set_EntitlementSuccessfullyConsumed)) bool  EntitlementSuccessfullyConsumed;

/// @brief Field FailEntitlement, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_FailEntitlement, put=__cordl_internal_set_FailEntitlement)) bool  FailEntitlement;

/// @brief Field ItemNotGrantedYet, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_ItemNotGrantedYet, put=__cordl_internal_set_ItemNotGrantedYet)) bool  ItemNotGrantedYet;

/// @brief Field ItemSuccessfullyGranted, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_ItemSuccessfullyGranted, put=__cordl_internal_set_ItemSuccessfullyGranted)) bool  ItemSuccessfullyGranted;

/// @brief Field LockSuccessfullyCleared, offset 0x2e, size 0x1 
 __declspec(property(get=__cordl_internal_get_LockSuccessfullyCleared, put=__cordl_internal_set_LockSuccessfullyCleared)) bool  LockSuccessfullyCleared;

/// @brief Field PlayerUnlocked, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_PlayerUnlocked, put=__cordl_internal_set_PlayerUnlocked)) bool  PlayerUnlocked;

/// @brief Field RunDebug, offset 0x2f, size 0x1 
 __declspec(property(get=__cordl_internal_get_RunDebug, put=__cordl_internal_set_RunDebug)) bool  RunDebug;

/// @brief Field cosmeticsController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticsController, put=__cordl_internal_set_cosmeticsController)) ::UnityW<::GorillaNetworking::CosmeticsController>  cosmeticsController;

/// @brief Field headModelsPrefabPath, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headModelsPrefabPath, put=__cordl_internal_set_headModelsPrefabPath)) ::StringW  headModelsPrefabPath;

/// @brief Field inventoryHeadModels, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_inventoryHeadModels, put=__cordl_internal_set_inventoryHeadModels)) ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>  inventoryHeadModels;

/// @brief Field outItem, offset 0x38, size 0x98 
 __declspec(property(get=__cordl_internal_get_outItem, put=__cordl_internal_set_outItem)) ::GlobalNamespace::CosmeticsController_CosmeticItem  outItem;

/// @brief Field textParent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_textParent, put=__cordl_internal_set_textParent)) ::UnityW<::UnityEngine::Transform>  textParent;

static inline ::GlobalNamespace::CosmeticsControllerUpdateStand* New_ctor() ;

/// @brief Method ReturnChildWithCosmeticNameMatch, addr 0x574c014, size 0x4ac, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> ReturnChildWithCosmeticNameMatch(::UnityEngine::Transform*  parentTransform) ;

constexpr bool const& __cordl_internal_get_AttemptToConsumeEntitlement() const;

constexpr bool& __cordl_internal_get_AttemptToConsumeEntitlement() ;

constexpr bool const& __cordl_internal_get_EntitlementSuccessfullyConsumed() const;

constexpr bool& __cordl_internal_get_EntitlementSuccessfullyConsumed() ;

constexpr bool const& __cordl_internal_get_FailEntitlement() const;

constexpr bool& __cordl_internal_get_FailEntitlement() ;

constexpr bool const& __cordl_internal_get_ItemNotGrantedYet() const;

constexpr bool& __cordl_internal_get_ItemNotGrantedYet() ;

constexpr bool const& __cordl_internal_get_ItemSuccessfullyGranted() const;

constexpr bool& __cordl_internal_get_ItemSuccessfullyGranted() ;

constexpr bool const& __cordl_internal_get_LockSuccessfullyCleared() const;

constexpr bool& __cordl_internal_get_LockSuccessfullyCleared() ;

constexpr bool const& __cordl_internal_get_PlayerUnlocked() const;

constexpr bool& __cordl_internal_get_PlayerUnlocked() ;

constexpr bool const& __cordl_internal_get_RunDebug() const;

constexpr bool& __cordl_internal_get_RunDebug() ;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController> const& __cordl_internal_get_cosmeticsController() const;

constexpr ::UnityW<::GorillaNetworking::CosmeticsController>& __cordl_internal_get_cosmeticsController() ;

constexpr ::StringW const& __cordl_internal_get_headModelsPrefabPath() const;

constexpr ::StringW& __cordl_internal_get_headModelsPrefabPath() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>> const& __cordl_internal_get_inventoryHeadModels() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>& __cordl_internal_get_inventoryHeadModels() ;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem const& __cordl_internal_get_outItem() const;

constexpr ::GlobalNamespace::CosmeticsController_CosmeticItem& __cordl_internal_get_outItem() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_textParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_textParent() ;

constexpr void __cordl_internal_set_AttemptToConsumeEntitlement(bool  value) ;

constexpr void __cordl_internal_set_EntitlementSuccessfullyConsumed(bool  value) ;

constexpr void __cordl_internal_set_FailEntitlement(bool  value) ;

constexpr void __cordl_internal_set_ItemNotGrantedYet(bool  value) ;

constexpr void __cordl_internal_set_ItemSuccessfullyGranted(bool  value) ;

constexpr void __cordl_internal_set_LockSuccessfullyCleared(bool  value) ;

constexpr void __cordl_internal_set_PlayerUnlocked(bool  value) ;

constexpr void __cordl_internal_set_RunDebug(bool  value) ;

constexpr void __cordl_internal_set_cosmeticsController(::UnityW<::GorillaNetworking::CosmeticsController>  value) ;

constexpr void __cordl_internal_set_headModelsPrefabPath(::StringW  value) ;

constexpr void __cordl_internal_set_inventoryHeadModels(::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>  value) ;

constexpr void __cordl_internal_set_outItem(::GlobalNamespace::CosmeticsController_CosmeticItem  value) ;

constexpr void __cordl_internal_set_textParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x574c4c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsControllerUpdateStand() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsControllerUpdateStand", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsControllerUpdateStand(CosmeticsControllerUpdateStand && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsControllerUpdateStand", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsControllerUpdateStand(CosmeticsControllerUpdateStand const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1295};

/// @brief Field cosmeticsController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaNetworking::CosmeticsController>  ___cosmeticsController;

/// @brief Field FailEntitlement, offset: 0x28, size: 0x1, def value: None
 bool  ___FailEntitlement;

/// @brief Field PlayerUnlocked, offset: 0x29, size: 0x1, def value: None
 bool  ___PlayerUnlocked;

/// @brief Field ItemNotGrantedYet, offset: 0x2a, size: 0x1, def value: None
 bool  ___ItemNotGrantedYet;

/// @brief Field ItemSuccessfullyGranted, offset: 0x2b, size: 0x1, def value: None
 bool  ___ItemSuccessfullyGranted;

/// @brief Field AttemptToConsumeEntitlement, offset: 0x2c, size: 0x1, def value: None
 bool  ___AttemptToConsumeEntitlement;

/// @brief Field EntitlementSuccessfullyConsumed, offset: 0x2d, size: 0x1, def value: None
 bool  ___EntitlementSuccessfullyConsumed;

/// @brief Field LockSuccessfullyCleared, offset: 0x2e, size: 0x1, def value: None
 bool  ___LockSuccessfullyCleared;

/// @brief Field RunDebug, offset: 0x2f, size: 0x1, def value: None
 bool  ___RunDebug;

/// @brief Field textParent, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___textParent;

/// @brief Field outItem, offset: 0x38, size: 0x98, def value: None
 ::GlobalNamespace::CosmeticsController_CosmeticItem  ___outItem;

/// @brief Field inventoryHeadModels, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::HeadModel>>  ___inventoryHeadModels;

/// @brief Field headModelsPrefabPath, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___headModelsPrefabPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___cosmeticsController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___FailEntitlement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___PlayerUnlocked) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___ItemNotGrantedYet) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___ItemSuccessfullyGranted) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___AttemptToConsumeEntitlement) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___EntitlementSuccessfullyConsumed) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___LockSuccessfullyCleared) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___RunDebug) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___textParent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___outItem) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___inventoryHeadModels) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand, ___headModelsPrefabPath) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsControllerUpdateStand) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticsControllerUpdateStand/<>c__DisplayClass13_0
class CORDL_TYPE CosmeticsControllerUpdateStand___c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief Field child, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_child, put=__cordl_internal_set_child)) ::UnityW<::UnityEngine::Transform>  child;

static inline ::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0* New_ctor() ;

/// @brief Method <ReturnChildWithCosmeticNameMatch>b__0, addr 0x574c4d0, size 0x2c, virtual false, abstract: false, final false
inline bool _ReturnChildWithCosmeticNameMatch_b__0(::GlobalNamespace::CosmeticsController_CosmeticItem  x) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_child() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_child() ;

constexpr void __cordl_internal_set_child(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x574c4c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticsControllerUpdateStand___c__DisplayClass13_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsControllerUpdateStand___c__DisplayClass13_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticsControllerUpdateStand___c__DisplayClass13_0(CosmeticsControllerUpdateStand___c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticsControllerUpdateStand___c__DisplayClass13_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticsControllerUpdateStand___c__DisplayClass13_0(CosmeticsControllerUpdateStand___c__DisplayClass13_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1294};

/// @brief Field child, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___child;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0, ___child) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticsControllerUpdateStand___c__DisplayClass13_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

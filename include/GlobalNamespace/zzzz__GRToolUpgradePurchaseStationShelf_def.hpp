#pragma once
// IWYU pragma private; include "GlobalNamespace/GRToolUpgradePurchaseStationShelf.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRToolProgressionManager_ToolParts_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRToolUpgradePurchaseStationShelf)
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationShelf_GRPurchaseSlot;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationShelf;
}
namespace GlobalNamespace {
class GRToolUpgradePurchaseStationShelf_GRPurchaseSlot;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRToolUpgradePurchaseStationShelf*);
MARK_REF_T(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePurchaseStationShelf*, "", "GRToolUpgradePurchaseStationShelf");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*, "", "GRToolUpgradePurchaseStationShelf/GRPurchaseSlot");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradePurchaseStationShelf
class CORDL_TYPE GRToolUpgradePurchaseStationShelf : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GRPurchaseSlot = ::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot;

/// @brief Field ShelfName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShelfName, put=__cordl_internal_set_ShelfName)) ::StringW  ShelfName;

/// @brief Field gRPurchaseSlots, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gRPurchaseSlots, put=__cordl_internal_set_gRPurchaseSlots)) ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*  gRPurchaseSlots;

/// @brief Field slotOriginalMaterials, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotOriginalMaterials, put=__cordl_internal_set_slotOriginalMaterials)) ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*  slotOriginalMaterials;

/// @brief Field slotRenderers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_slotRenderers, put=__cordl_internal_set_slotRenderers)) ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*  slotRenderers;

/// @brief Method Awake, addr 0x58cf1d0, size 0x27c, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::GRToolUpgradePurchaseStationShelf* New_ctor() ;

/// @brief Method SetBacklightStateAndMaterial, addr 0x58cd834, size 0x178, virtual false, abstract: false, final false
inline void SetBacklightStateAndMaterial(int32_t  slotID, bool  isEnabled, ::UnityEngine::Material*  materialOverride) ;

/// @brief Method SetMaterialOverride, addr 0x58cd564, size 0x2d0, virtual false, abstract: false, final false
inline void SetMaterialOverride(int32_t  slotID, ::UnityEngine::Material*  overrideMaterial) ;

constexpr ::StringW const& __cordl_internal_get_ShelfName() const;

constexpr ::StringW& __cordl_internal_get_ShelfName() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>* const& __cordl_internal_get_gRPurchaseSlots() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*& __cordl_internal_get_gRPurchaseSlots() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>* const& __cordl_internal_get_slotOriginalMaterials() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*& __cordl_internal_get_slotOriginalMaterials() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>* const& __cordl_internal_get_slotRenderers() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*& __cordl_internal_get_slotRenderers() ;

constexpr void __cordl_internal_set_ShelfName(::StringW  value) ;

constexpr void __cordl_internal_set_gRPurchaseSlots(::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*  value) ;

constexpr void __cordl_internal_set_slotOriginalMaterials(::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*  value) ;

constexpr void __cordl_internal_set_slotRenderers(::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*  value) ;

/// @brief Method .ctor, addr 0x58cf44c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePurchaseStationShelf() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationShelf", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradePurchaseStationShelf(GRToolUpgradePurchaseStationShelf && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationShelf", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradePurchaseStationShelf(GRToolUpgradePurchaseStationShelf const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2093};

/// @brief Field ShelfName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___ShelfName;

/// @brief Field slotOriginalMaterials, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::ArrayW<::UnityW<::UnityEngine::Material>>>>*  ___slotOriginalMaterials;

/// @brief Field slotRenderers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<::UnityW<::UnityEngine::Renderer>>>*  ___slotRenderers;

/// @brief Field gRPurchaseSlots, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot*>*  ___gRPurchaseSlots;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf, ___ShelfName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf, ___slotOriginalMaterials) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf, ___slotRenderers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf, ___gRPurchaseSlots) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies GRToolProgressionManager::ToolParts, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRToolUpgradePurchaseStationShelf/GRPurchaseSlot
class CORDL_TYPE GRToolUpgradePurchaseStationShelf_GRPurchaseSlot : public ::System::Object {
public:
// Declarations
/// @brief Field BacklightRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_BacklightRenderer, put=__cordl_internal_set_BacklightRenderer)) ::UnityW<::UnityEngine::MeshRenderer>  BacklightRenderer;

/// @brief Field Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Name, put=__cordl_internal_set_Name)) ::UnityW<::TMPro::TMP_Text>  Name;

/// @brief Field Price, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Price, put=__cordl_internal_set_Price)) ::UnityW<::TMPro::TMP_Text>  Price;

/// @brief Field PurchaseID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_PurchaseID, put=__cordl_internal_set_PurchaseID)) ::GlobalNamespace::GRToolProgressionManager_ToolParts  PurchaseID;

/// @brief Field RopePitch, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_RopePitch, put=__cordl_internal_set_RopePitch)) float_t  RopePitch;

/// @brief Field RopeYaw, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_RopeYaw, put=__cordl_internal_set_RopeYaw)) float_t  RopeYaw;

/// @brief Field SlotPivot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_SlotPivot, put=__cordl_internal_set_SlotPivot)) ::UnityW<::UnityEngine::Transform>  SlotPivot;

/// @brief Field ToolEntityPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ToolEntityPrefab, put=__cordl_internal_set_ToolEntityPrefab)) ::UnityW<::GlobalNamespace::GameEntity>  ToolEntityPrefab;

/// @brief Field canAfford, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_canAfford, put=__cordl_internal_set_canAfford)) bool  canAfford;

/// @brief Field overrideMaterial, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideMaterial, put=__cordl_internal_set_overrideMaterial)) ::UnityW<::UnityEngine::Material>  overrideMaterial;

/// @brief Field purchaseText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_purchaseText, put=__cordl_internal_set_purchaseText)) ::StringW  purchaseText;

static inline ::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot* New_ctor() ;

constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_BacklightRenderer() const;

constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_BacklightRenderer() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_Name() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_Name() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_Price() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_Price() ;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts const& __cordl_internal_get_PurchaseID() const;

constexpr ::GlobalNamespace::GRToolProgressionManager_ToolParts& __cordl_internal_get_PurchaseID() ;

constexpr float_t const& __cordl_internal_get_RopePitch() const;

constexpr float_t& __cordl_internal_get_RopePitch() ;

constexpr float_t const& __cordl_internal_get_RopeYaw() const;

constexpr float_t& __cordl_internal_get_RopeYaw() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_SlotPivot() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_SlotPivot() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_ToolEntityPrefab() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_ToolEntityPrefab() ;

constexpr bool const& __cordl_internal_get_canAfford() const;

constexpr bool& __cordl_internal_get_canAfford() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_overrideMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_overrideMaterial() ;

constexpr ::StringW const& __cordl_internal_get_purchaseText() const;

constexpr ::StringW& __cordl_internal_get_purchaseText() ;

constexpr void __cordl_internal_set_BacklightRenderer(::UnityW<::UnityEngine::MeshRenderer>  value) ;

constexpr void __cordl_internal_set_Name(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_Price(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_PurchaseID(::GlobalNamespace::GRToolProgressionManager_ToolParts  value) ;

constexpr void __cordl_internal_set_RopePitch(float_t  value) ;

constexpr void __cordl_internal_set_RopeYaw(float_t  value) ;

constexpr void __cordl_internal_set_SlotPivot(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_ToolEntityPrefab(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_canAfford(bool  value) ;

constexpr void __cordl_internal_set_overrideMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_purchaseText(::StringW  value) ;

/// @brief Method .ctor, addr 0x58cf528, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRToolUpgradePurchaseStationShelf_GRPurchaseSlot() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationShelf_GRPurchaseSlot", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRToolUpgradePurchaseStationShelf_GRPurchaseSlot(GRToolUpgradePurchaseStationShelf_GRPurchaseSlot && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRToolUpgradePurchaseStationShelf_GRPurchaseSlot", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRToolUpgradePurchaseStationShelf_GRPurchaseSlot(GRToolUpgradePurchaseStationShelf_GRPurchaseSlot const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2092};

/// @brief Field Name, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___Name;

/// @brief Field Price, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___Price;

/// @brief Field SlotPivot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___SlotPivot;

/// @brief Field PurchaseID, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GRToolProgressionManager_ToolParts  ___PurchaseID;

/// @brief Field ToolEntityPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___ToolEntityPrefab;

/// @brief Field RopeYaw, offset: 0x38, size: 0x4, def value: None
 float_t  ___RopeYaw;

/// @brief Field RopePitch, offset: 0x3c, size: 0x4, def value: None
 float_t  ___RopePitch;

/// @brief Field BacklightRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshRenderer>  ___BacklightRenderer;

/// @brief Field overrideMaterial, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___overrideMaterial;

/// @brief Field canAfford, offset: 0x50, size: 0x1, def value: None
 bool  ___canAfford;

/// @brief Field purchaseText, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___purchaseText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___Price) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___SlotPivot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___PurchaseID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___ToolEntityPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___RopeYaw) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___RopePitch) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___BacklightRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___overrideMaterial) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___canAfford) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot, ___purchaseText) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRToolUpgradePurchaseStationShelf_GRPurchaseSlot) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

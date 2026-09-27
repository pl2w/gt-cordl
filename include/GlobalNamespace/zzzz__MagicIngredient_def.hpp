#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicIngredient.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
CORDL_MODULE_EXPORT(MagicIngredient)
namespace GlobalNamespace {
class MagicIngredientType;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
class WorldShareableItem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MagicIngredient;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MagicIngredient*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicIngredient*, "", "MagicIngredient");
// [Obsolete("replaced with ThrowableSetDressing.cs")]
// Dependencies TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicIngredient
class CORDL_TYPE MagicIngredient : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field IngredientTypeSO, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_IngredientTypeSO, put=__cordl_internal_set_IngredientTypeSO)) ::UnityW<::GlobalNamespace::MagicIngredientType>  IngredientTypeSO;

/// @brief Field grabPtInitParent, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabPtInitParent, put=__cordl_internal_set_grabPtInitParent)) ::UnityW<::UnityEngine::Transform>  grabPtInitParent;

/// @brief Field item, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::UnityW<::GlobalNamespace::WorldShareableItem>  item;

/// @brief Field rootParent, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootParent, put=__cordl_internal_set_rootParent)) ::UnityW<::UnityEngine::Transform>  rootParent;

/// @brief Method Disable, addr 0x595a1cc, size 0xb8, virtual false, abstract: false, final false
inline void Disable() ;

static inline ::GlobalNamespace::MagicIngredient* New_ctor() ;

/// @brief Method OnSpawn, addr 0x595a110, size 0x54, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ReParent, addr 0x595a164, size 0x68, virtual false, abstract: false, final false
inline void ReParent() ;

constexpr ::UnityW<::GlobalNamespace::MagicIngredientType> const& __cordl_internal_get_IngredientTypeSO() const;

constexpr ::UnityW<::GlobalNamespace::MagicIngredientType>& __cordl_internal_get_IngredientTypeSO() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabPtInitParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabPtInitParent() ;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem> const& __cordl_internal_get_item() const;

constexpr ::UnityW<::GlobalNamespace::WorldShareableItem>& __cordl_internal_get_item() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rootParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rootParent() ;

constexpr void __cordl_internal_set_IngredientTypeSO(::UnityW<::GlobalNamespace::MagicIngredientType>  value) ;

constexpr void __cordl_internal_set_grabPtInitParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_item(::UnityW<::GlobalNamespace::WorldShareableItem>  value) ;

constexpr void __cordl_internal_set_rootParent(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x595a284, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicIngredient() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicIngredient", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicIngredient(MagicIngredient && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicIngredient", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicIngredient(MagicIngredient const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2334};

/// [FormerlySerializedAs("IngredientType")]
/// @brief Field IngredientTypeSO, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MagicIngredientType>  ___IngredientTypeSO;

/// @brief Field rootParent, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rootParent;

/// @brief Field item, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::WorldShareableItem>  ___item;

/// @brief Field grabPtInitParent, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabPtInitParent;

/// @brief Size padding 0x388 - 0x358 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicIngredient, ___IngredientTypeSO) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicIngredient, ___rootParent) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicIngredient, ___item) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicIngredient, ___grabPtInitParent) == 0x350, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicIngredient) == 0x388, "Size mismatch!");

} // namespace end def GlobalNamespace

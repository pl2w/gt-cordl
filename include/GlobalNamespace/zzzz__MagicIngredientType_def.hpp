#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicIngredientType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(MagicIngredientType)
// Forward declare root types
namespace GlobalNamespace {
class MagicIngredientType;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MagicIngredientType*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicIngredientType*, "", "MagicIngredientType");
// [CreateAssetMenu(fileName = "IngredientTypeSO", menuName = "ScriptableObjects/Add New Magic Ingredient Type")]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: MagicIngredientType
class CORDL_TYPE MagicIngredientType : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field color, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

static inline ::GlobalNamespace::MagicIngredientType* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x595a2dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MagicIngredientType() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MagicIngredientType", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MagicIngredientType(MagicIngredientType && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MagicIngredientType", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MagicIngredientType(MagicIngredientType const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2335};

/// @brief Field color, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicIngredientType, ___color) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicIngredientType) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

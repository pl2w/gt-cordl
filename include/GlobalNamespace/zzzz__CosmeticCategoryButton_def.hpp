#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticCategoryButton.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticButton_def.hpp"
CORDL_MODULE_EXPORT(CosmeticCategoryButton)
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticCategoryButton;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticCategoryButton*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticCategoryButton*, "", "CosmeticCategoryButton");
// Dependencies CosmeticButton
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticCategoryButton
class CORDL_TYPE CosmeticCategoryButton : public ::GlobalNamespace::CosmeticButton {
public:
// Declarations
/// @brief Field equippedIcon, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_equippedIcon, put=__cordl_internal_set_equippedIcon)) ::UnityW<::UnityEngine::SpriteRenderer>  equippedIcon;

/// @brief Field equippedLeftIcon, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_equippedLeftIcon, put=__cordl_internal_set_equippedLeftIcon)) ::UnityW<::UnityEngine::SpriteRenderer>  equippedLeftIcon;

/// @brief Field equippedRightIcon, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_equippedRightIcon, put=__cordl_internal_set_equippedRightIcon)) ::UnityW<::UnityEngine::SpriteRenderer>  equippedRightIcon;

static inline ::GlobalNamespace::CosmeticCategoryButton* New_ctor() ;

/// @brief Method SetDualIcon, addr 0x57833b0, size 0xec, virtual false, abstract: false, final false
inline void SetDualIcon(::UnityEngine::Sprite*  leftSprite, ::UnityEngine::Sprite*  rightSprite) ;

/// @brief Method SetIcon, addr 0x57832f8, size 0xb8, virtual false, abstract: false, final false
inline void SetIcon(::UnityEngine::Sprite*  sprite) ;

/// @brief Method UpdatePosition, addr 0x578349c, size 0x18c, virtual true, abstract: false, final false
inline void UpdatePosition() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_equippedIcon() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_equippedIcon() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_equippedLeftIcon() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_equippedLeftIcon() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_equippedRightIcon() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_equippedRightIcon() ;

constexpr void __cordl_internal_set_equippedIcon(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_equippedLeftIcon(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_equippedRightIcon(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

/// @brief Method .ctor, addr 0x5783628, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticCategoryButton() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCategoryButton", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticCategoryButton(CosmeticCategoryButton && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticCategoryButton", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticCategoryButton(CosmeticCategoryButton const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1407};

/// [SerializeField]
/// @brief Field equippedIcon, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___equippedIcon;

/// [SerializeField]
/// @brief Field equippedLeftIcon, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___equippedLeftIcon;

/// [SerializeField]
/// @brief Field equippedRightIcon, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___equippedRightIcon;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticCategoryButton, ___equippedIcon) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCategoryButton, ___equippedLeftIcon) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticCategoryButton, ___equippedRightIcon) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticCategoryButton) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace

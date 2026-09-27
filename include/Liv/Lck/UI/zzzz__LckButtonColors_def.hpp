#pragma once
// IWYU pragma private; include "Liv/Lck/UI/LckButtonColors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LckButtonColors)
// Forward declare root types
namespace Liv::Lck::UI {
class LckButtonColors;
}
// Write type traits
MARK_REF_T(::Liv::Lck::UI::LckButtonColors*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::UI::LckButtonColors*, "Liv.Lck.UI", "LckButtonColors");
// [CreateAssetMenu(fileName = "LckButtonColors", menuName = "LIV/LCK/LCK Button Colors", order = 0)]
// Dependencies UnityEngine.Color, UnityEngine.ScriptableObject
namespace Liv::Lck::UI {
// Is value type: false
// CS Name: Liv.Lck.UI.LckButtonColors
class CORDL_TYPE LckButtonColors : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field DisabledColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_DisabledColor, put=__cordl_internal_set_DisabledColor)) ::UnityEngine::Color  DisabledColor;

/// @brief Field HighlightedColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_HighlightedColor, put=__cordl_internal_set_HighlightedColor)) ::UnityEngine::Color  HighlightedColor;

/// @brief Field NormalColor, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_NormalColor, put=__cordl_internal_set_NormalColor)) ::UnityEngine::Color  NormalColor;

/// @brief Field PressedColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_PressedColor, put=__cordl_internal_set_PressedColor)) ::UnityEngine::Color  PressedColor;

/// @brief Field SelectedColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_SelectedColor, put=__cordl_internal_set_SelectedColor)) ::UnityEngine::Color  SelectedColor;

static inline ::Liv::Lck::UI::LckButtonColors* New_ctor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_DisabledColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_DisabledColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_HighlightedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_HighlightedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_NormalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_NormalColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_PressedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_PressedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_SelectedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_SelectedColor() ;

constexpr void __cordl_internal_set_DisabledColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_HighlightedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_NormalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_PressedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_SelectedColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x9d4e840, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckButtonColors() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckButtonColors", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckButtonColors(LckButtonColors && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckButtonColors", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckButtonColors(LckButtonColors const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24915};

/// @brief Field NormalColor, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Color  ___NormalColor;

/// @brief Field HighlightedColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___HighlightedColor;

/// @brief Field PressedColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___PressedColor;

/// @brief Field SelectedColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___SelectedColor;

/// @brief Field DisabledColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___DisabledColor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::UI::LckButtonColors, ___NormalColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButtonColors, ___HighlightedColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButtonColors, ___PressedColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButtonColors, ___SelectedColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::UI::LckButtonColors, ___DisabledColor) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::UI::LckButtonColors) == 0x68, "Size mismatch!");

} // namespace end def Liv::Lck::UI

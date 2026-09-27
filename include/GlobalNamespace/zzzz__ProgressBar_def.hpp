#pragma once
// IWYU pragma private; include "GlobalNamespace/ProgressBar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ProgressBar)
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class ProgressBar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProgressBar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProgressBar*, "", "ProgressBar");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProgressBar
class CORDL_TYPE ProgressBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _fillAmount, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get__fillAmount, put=__cordl_internal_set__fillAmount)) float_t  _fillAmount;

/// @brief Field atCapacity, offset 0x4c, size 0x10 
 __declspec(property(get=__cordl_internal_get_atCapacity, put=__cordl_internal_set_atCapacity)) ::UnityEngine::Color  atCapacity;

/// @brief Field fillImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillImage, put=__cordl_internal_set_fillImage)) ::UnityW<::UnityEngine::UI::Image>  fillImage;

/// @brief Field overCapacity, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_overCapacity, put=__cordl_internal_set_overCapacity)) ::UnityEngine::Color  overCapacity;

/// @brief Field underCapacity, offset 0x2c, size 0x10 
 __declspec(property(get=__cordl_internal_get_underCapacity, put=__cordl_internal_set_underCapacity)) ::UnityEngine::Color  underCapacity;

/// @brief Field useColors, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useColors, put=__cordl_internal_set_useColors)) bool  useColors;

static inline ::GlobalNamespace::ProgressBar* New_ctor() ;

/// @brief Method UpdateProgress, addr 0x596e658, size 0x12c, virtual false, abstract: false, final false
inline void UpdateProgress(float_t  newFill) ;

constexpr float_t const& __cordl_internal_get__fillAmount() const;

constexpr float_t& __cordl_internal_get__fillAmount() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_atCapacity() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_atCapacity() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_fillImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_fillImage() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_overCapacity() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_overCapacity() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_underCapacity() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_underCapacity() ;

constexpr bool const& __cordl_internal_get_useColors() const;

constexpr bool& __cordl_internal_get_useColors() ;

constexpr void __cordl_internal_set__fillAmount(float_t  value) ;

constexpr void __cordl_internal_set_atCapacity(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fillImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_overCapacity(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_underCapacity(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_useColors(bool  value) ;

/// @brief Method .ctor, addr 0x596e784, size 0x2c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProgressBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProgressBar(ProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProgressBar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProgressBar(ProgressBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2400};

/// [SerializeField]
/// @brief Field fillImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___fillImage;

/// [SerializeField]
/// @brief Field useColors, offset: 0x28, size: 0x1, def value: None
 bool  ___useColors;

/// [SerializeField]
/// @brief Field underCapacity, offset: 0x2c, size: 0x10, def value: None
 ::UnityEngine::Color  ___underCapacity;

/// [SerializeField]
/// @brief Field overCapacity, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___overCapacity;

/// [SerializeField]
/// @brief Field atCapacity, offset: 0x4c, size: 0x10, def value: None
 ::UnityEngine::Color  ___atCapacity;

/// @brief Field _fillAmount, offset: 0x5c, size: 0x4, def value: None
 float_t  ____fillAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProgressBar, ___fillImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___useColors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___underCapacity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___overCapacity) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ___atCapacity) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProgressBar, ____fillAmount) == 0x5c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProgressBar) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace

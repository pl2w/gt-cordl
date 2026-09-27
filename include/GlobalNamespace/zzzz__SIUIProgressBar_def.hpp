#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUIProgressBar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIUIProgressBar)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class SIUIProgressBar;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIUIProgressBar*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUIProgressBar*, "", "SIUIProgressBar");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIUIProgressBar
class CORDL_TYPE SIUIProgressBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field backgroundImage, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_backgroundImage, put=__cordl_internal_set_backgroundImage)) ::UnityW<::UnityEngine::UI::Image>  backgroundImage;

/// @brief Field borderPercent, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_borderPercent, put=__cordl_internal_set_borderPercent)) float_t  borderPercent;

/// @brief Field progressImage, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressImage, put=__cordl_internal_set_progressImage)) ::UnityW<::UnityEngine::UI::Image>  progressImage;

/// @brief Field progressText, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressText, put=__cordl_internal_set_progressText)) ::UnityW<::TMPro::TextMeshProUGUI>  progressText;

static inline ::GlobalNamespace::SIUIProgressBar* New_ctor() ;

/// @brief Method UpdateFillPercent, addr 0x5af7728, size 0x160, virtual false, abstract: false, final false
inline void UpdateFillPercent(float_t  percentFull) ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_backgroundImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_backgroundImage() ;

constexpr float_t const& __cordl_internal_get_borderPercent() const;

constexpr float_t& __cordl_internal_get_borderPercent() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_progressImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_progressImage() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_progressText() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_progressText() ;

constexpr void __cordl_internal_set_backgroundImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_borderPercent(float_t  value) ;

constexpr void __cordl_internal_set_progressImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_progressText(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

/// @brief Method .ctor, addr 0x5af7da0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIUIProgressBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIUIProgressBar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIUIProgressBar(SIUIProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIUIProgressBar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIUIProgressBar(SIUIProgressBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{380};

/// @brief Field backgroundImage, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___backgroundImage;

/// @brief Field progressImage, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___progressImage;

/// @brief Field borderPercent, offset: 0x30, size: 0x4, def value: None
 float_t  ___borderPercent;

/// @brief Field progressText, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___progressText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUIProgressBar, ___backgroundImage) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIProgressBar, ___progressImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIProgressBar, ___borderPercent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIProgressBar, ___progressText) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUIProgressBar) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

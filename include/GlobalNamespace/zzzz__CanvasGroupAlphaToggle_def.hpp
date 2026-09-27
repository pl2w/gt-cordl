#pragma once
// IWYU pragma private; include "GlobalNamespace/CanvasGroupAlphaToggle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CanvasGroupAlphaToggle)
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class CanvasGroupAlphaToggle;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CanvasGroupAlphaToggle*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CanvasGroupAlphaToggle*, "", "CanvasGroupAlphaToggle");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CanvasGroupAlphaToggle
class CORDL_TYPE CanvasGroupAlphaToggle : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field animationSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_animationSpeed, put=__cordl_internal_set_animationSpeed)) float_t  animationSpeed;

/// @brief Field canvasGroup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_canvasGroup, put=__cordl_internal_set_canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup>  canvasGroup;

/// @brief Field visible, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_visible, put=__cordl_internal_set_visible)) bool  visible;

static inline ::GlobalNamespace::CanvasGroupAlphaToggle* New_ctor() ;

/// @brief Method Start, addr 0xa42430c, size 0x4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleVisible, addr 0xa4242fc, size 0x10, virtual false, abstract: false, final false
inline void ToggleVisible() ;

/// @brief Method Update, addr 0xa424310, size 0x84, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get_animationSpeed() const;

constexpr float_t& __cordl_internal_get_animationSpeed() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_canvasGroup() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_canvasGroup() ;

constexpr bool const& __cordl_internal_get_visible() const;

constexpr bool& __cordl_internal_get_visible() ;

constexpr void __cordl_internal_set_animationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_canvasGroup(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_visible(bool  value) ;

/// @brief Method .ctor, addr 0xa424394, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CanvasGroupAlphaToggle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupAlphaToggle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CanvasGroupAlphaToggle(CanvasGroupAlphaToggle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroupAlphaToggle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanvasGroupAlphaToggle(CanvasGroupAlphaToggle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28223};

/// @brief Field canvasGroup, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___canvasGroup;

/// @brief Field animationSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___animationSpeed;

/// @brief Field visible, offset: 0x2c, size: 0x1, def value: None
 bool  ___visible;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CanvasGroupAlphaToggle, ___canvasGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupAlphaToggle, ___animationSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CanvasGroupAlphaToggle, ___visible) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CanvasGroupAlphaToggle) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

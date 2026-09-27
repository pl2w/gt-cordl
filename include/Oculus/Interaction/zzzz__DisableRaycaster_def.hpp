#pragma once
// IWYU pragma private; include "Oculus/Interaction/DisableRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DisableRaycaster)
namespace UnityEngine::UI {
class GraphicRaycaster;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace Oculus::Interaction {
class DisableRaycaster;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::DisableRaycaster*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DisableRaycaster*, "Oculus.Interaction", "DisableRaycaster");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.DisableRaycaster
class CORDL_TYPE DisableRaycaster : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field group, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_group, put=__cordl_internal_set_group)) ::UnityW<::UnityEngine::CanvasGroup>  group;

/// @brief Field minAlpha, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_minAlpha, put=__cordl_internal_set_minAlpha)) float_t  minAlpha;

/// @brief Field raycaster, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_raycaster, put=__cordl_internal_set_raycaster)) ::UnityW<::UnityEngine::UI::GraphicRaycaster>  raycaster;

static inline ::Oculus::Interaction::DisableRaycaster* New_ctor() ;

/// @brief Method Update, addr 0xa42ab60, size 0x48, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get_group() const;

constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get_group() ;

constexpr float_t const& __cordl_internal_get_minAlpha() const;

constexpr float_t& __cordl_internal_get_minAlpha() ;

constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster> const& __cordl_internal_get_raycaster() const;

constexpr ::UnityW<::UnityEngine::UI::GraphicRaycaster>& __cordl_internal_get_raycaster() ;

constexpr void __cordl_internal_set_group(::UnityW<::UnityEngine::CanvasGroup>  value) ;

constexpr void __cordl_internal_set_minAlpha(float_t  value) ;

constexpr void __cordl_internal_set_raycaster(::UnityW<::UnityEngine::UI::GraphicRaycaster>  value) ;

/// @brief Method .ctor, addr 0xa42aba8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DisableRaycaster() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DisableRaycaster", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DisableRaycaster(DisableRaycaster && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DisableRaycaster", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DisableRaycaster(DisableRaycaster const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28250};

/// @brief Field minAlpha, offset: 0x20, size: 0x4, def value: None
 float_t  ___minAlpha;

/// @brief Field raycaster, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::GraphicRaycaster>  ___raycaster;

/// @brief Field group, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CanvasGroup>  ___group;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DisableRaycaster, ___minAlpha) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DisableRaycaster, ___raycaster) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DisableRaycaster, ___group) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DisableRaycaster) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction

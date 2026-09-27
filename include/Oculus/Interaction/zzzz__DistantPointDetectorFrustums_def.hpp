#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantPointDetectorFrustums.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(DistantPointDetectorFrustums)
namespace Oculus::Interaction {
class ConicalFrustum;
}
// Forward declare root types
namespace Oculus::Interaction {
struct DistantPointDetectorFrustums;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::DistantPointDetectorFrustums);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::DistantPointDetectorFrustums, "Oculus.Interaction", "DistantPointDetectorFrustums");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.DistantPointDetectorFrustums
struct CORDL_TYPE DistantPointDetectorFrustums {
public:
// Declarations
 __declspec(property(get=get_AidBlending)) float_t  AidBlending;

 __declspec(property(get=get_AidFrustum)) ::UnityW<::Oculus::Interaction::ConicalFrustum>  AidFrustum;

 __declspec(property(get=get_DeselectionFrustum)) ::UnityW<::Oculus::Interaction::ConicalFrustum>  DeselectionFrustum;

 __declspec(property(get=get_SelectionFrustum)) ::UnityW<::Oculus::Interaction::ConicalFrustum>  SelectionFrustum;

/// @brief Method .ctor, addr 0xa40080c, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::ConicalFrustum*  selection, ::Oculus::Interaction::ConicalFrustum*  deselection, ::Oculus::Interaction::ConicalFrustum*  aid, float_t  blend) ;

/// @brief Method get_AidBlending, addr 0xa400804, size 0x8, virtual false, abstract: false, final false
inline float_t get_AidBlending() ;

/// @brief Method get_AidFrustum, addr 0xa4007fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> get_AidFrustum() ;

/// @brief Method get_DeselectionFrustum, addr 0xa4007f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> get_DeselectionFrustum() ;

/// @brief Method get_SelectionFrustum, addr 0xa4007ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::ConicalFrustum> get_SelectionFrustum() ;

// Ctor Parameters []
// @brief default ctor
constexpr DistantPointDetectorFrustums() ;

// Ctor Parameters [CppParam { name: "_selectionFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_deselectionFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_aidFrustum", ty: "::UnityW<::Oculus::Interaction::ConicalFrustum>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_aidBlending", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr DistantPointDetectorFrustums(::UnityW<::Oculus::Interaction::ConicalFrustum>  _selectionFrustum, ::UnityW<::Oculus::Interaction::ConicalFrustum>  _deselectionFrustum, ::UnityW<::Oculus::Interaction::ConicalFrustum>  _aidFrustum, float_t  _aidBlending) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15696};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// @brief Field _selectionFrustum, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::ConicalFrustum>  _selectionFrustum;

/// [SerializeField]
/// [Optional]
/// @brief Field _deselectionFrustum, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::ConicalFrustum>  _deselectionFrustum;

/// [SerializeField]
/// [Optional]
/// @brief Field _aidFrustum, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::ConicalFrustum>  _aidFrustum;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field _aidBlending, offset: 0x18, size: 0x4, def value: None
 float_t  _aidBlending;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::DistantPointDetectorFrustums, _selectionFrustum) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistantPointDetectorFrustums, _deselectionFrustum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistantPointDetectorFrustums, _aidFrustum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::DistantPointDetectorFrustums, _aidBlending) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::DistantPointDetectorFrustums) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction

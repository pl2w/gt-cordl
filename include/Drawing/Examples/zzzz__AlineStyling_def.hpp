#pragma once
// IWYU pragma private; include "Drawing/Examples/AlineStyling.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AlineStyling)
// Forward declare root types
namespace Drawing::Examples {
class AlineStyling;
}
// Write type traits
MARK_REF_T(::Drawing::Examples::AlineStyling*);
DEFINE_IL2CPP_CLASS(::Drawing::Examples::AlineStyling*, "Drawing.Examples", "AlineStyling");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Drawing::Examples {
// Is value type: false
// CS Name: Drawing.Examples.AlineStyling
class CORDL_TYPE AlineStyling : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field gizmoColor, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor, put=__cordl_internal_set_gizmoColor)) ::UnityEngine::Color  gizmoColor;

/// @brief Field gizmoColor2, offset 0x30, size 0x10 
 __declspec(property(get=__cordl_internal_get_gizmoColor2, put=__cordl_internal_set_gizmoColor2)) ::UnityEngine::Color  gizmoColor2;

static inline ::Drawing::Examples::AlineStyling* New_ctor() ;

/// @brief Method Update, addr 0x55e1d88, size 0x5ac, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_gizmoColor2() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_gizmoColor2() ;

constexpr void __cordl_internal_set_gizmoColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_gizmoColor2(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x55e2334, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AlineStyling() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AlineStyling", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AlineStyling(AlineStyling && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AlineStyling", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AlineStyling(AlineStyling const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27788};

/// @brief Field gizmoColor, offset: 0x20, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor;

/// @brief Field gizmoColor2, offset: 0x30, size: 0x10, def value: None
 ::UnityEngine::Color  ___gizmoColor2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Drawing::Examples::AlineStyling, ___gizmoColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Drawing::Examples::AlineStyling, ___gizmoColor2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Drawing::Examples::AlineStyling) == 0x40, "Size mismatch!");

} // namespace end def Drawing::Examples

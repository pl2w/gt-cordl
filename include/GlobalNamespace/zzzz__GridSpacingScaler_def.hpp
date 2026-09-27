#pragma once
// IWYU pragma private; include "GlobalNamespace/GridSpacingScaler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GridSpacingScaler_Axis_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(GridSpacingScaler)
namespace GlobalNamespace {
struct GridSpacingScaler_Axis;
}
namespace UnityEngine::UI {
class GridLayoutGroup;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GridSpacingScaler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GridSpacingScaler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GridSpacingScaler*, "", "GridSpacingScaler");
// [RequireComponent(typeof(UnityEngine.RectTransform), typeof(UnityEngine.UI.GridLayoutGroup))]
// Dependencies GridSpacingScaler::Axis, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: GridSpacingScaler
class CORDL_TYPE GridSpacingScaler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis = ::GlobalNamespace::GridSpacingScaler_Axis;

/// @brief Field _gridLayoutGroup, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__gridLayoutGroup, put=__cordl_internal_set__gridLayoutGroup)) ::UnityW<::UnityEngine::UI::GridLayoutGroup>  _gridLayoutGroup;

/// @brief Field _rectTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rectTransform, put=__cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform>  _rectTransform;

/// @brief Field minSpacing, offset 0x24, size 0x8 
 __declspec(property(get=__cordl_internal_get_minSpacing, put=__cordl_internal_set_minSpacing)) ::UnityEngine::Vector2  minSpacing;

/// @brief Field scaleAxis, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleAxis, put=__cordl_internal_set_scaleAxis)) ::GlobalNamespace::GridSpacingScaler_Axis  scaleAxis;

/// @brief Method LateUpdate, addr 0xa424554, size 0x24c, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GridSpacingScaler* New_ctor() ;

/// @brief Method Start, addr 0xa42439c, size 0x1b8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup> const& __cordl_internal_get__gridLayoutGroup() const;

constexpr ::UnityW<::UnityEngine::UI::GridLayoutGroup>& __cordl_internal_get__gridLayoutGroup() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_minSpacing() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_minSpacing() ;

constexpr ::GlobalNamespace::GridSpacingScaler_Axis const& __cordl_internal_get_scaleAxis() const;

constexpr ::GlobalNamespace::GridSpacingScaler_Axis& __cordl_internal_get_scaleAxis() ;

constexpr void __cordl_internal_set__gridLayoutGroup(::UnityW<::UnityEngine::UI::GridLayoutGroup>  value) ;

constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_minSpacing(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_scaleAxis(::GlobalNamespace::GridSpacingScaler_Axis  value) ;

/// @brief Method .ctor, addr 0xa4247a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridSpacingScaler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridSpacingScaler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridSpacingScaler(GridSpacingScaler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridSpacingScaler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridSpacingScaler(GridSpacingScaler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28225};

/// @brief Field scaleAxis, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GridSpacingScaler_Axis  ___scaleAxis;

/// @brief Field minSpacing, offset: 0x24, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___minSpacing;

/// @brief Field _gridLayoutGroup, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::GridLayoutGroup>  ____gridLayoutGroup;

/// @brief Field _rectTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rectTransform;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GridSpacingScaler, ___scaleAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridSpacingScaler, ___minSpacing) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridSpacingScaler, ____gridLayoutGroup) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridSpacingScaler, ____rectTransform) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GridSpacingScaler) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

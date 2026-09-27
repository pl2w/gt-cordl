#pragma once
// IWYU pragma private; include "GlobalNamespace/FixedScrollbarSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FixedScrollbarSize)
namespace UnityEngine::UI {
class ScrollRect;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedScrollbarSize;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::FixedScrollbarSize*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FixedScrollbarSize*, "", "FixedScrollbarSize");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: FixedScrollbarSize
class CORDL_TYPE FixedScrollbarSize : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HorizontalBarSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_HorizontalBarSize, put=__cordl_internal_set_HorizontalBarSize)) float_t  HorizontalBarSize;

/// @brief Field ScrollRect, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ScrollRect, put=__cordl_internal_set_ScrollRect)) ::UnityW<::UnityEngine::UI::ScrollRect>  ScrollRect;

/// @brief Field VerticalBarSize, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_VerticalBarSize, put=__cordl_internal_set_VerticalBarSize)) float_t  VerticalBarSize;

/// @brief Method EnforceScrollbarSize, addr 0x5705a80, size 0xf4, virtual false, abstract: false, final false
inline void EnforceScrollbarSize() ;

static inline ::GlobalNamespace::FixedScrollbarSize* New_ctor() ;

/// @brief Method OnDisable, addr 0x5705b74, size 0x80, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57059bc, size 0xc4, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_HorizontalBarSize() const;

constexpr float_t& __cordl_internal_get_HorizontalBarSize() ;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect> const& __cordl_internal_get_ScrollRect() const;

constexpr ::UnityW<::UnityEngine::UI::ScrollRect>& __cordl_internal_get_ScrollRect() ;

constexpr float_t const& __cordl_internal_get_VerticalBarSize() const;

constexpr float_t& __cordl_internal_get_VerticalBarSize() ;

constexpr void __cordl_internal_set_HorizontalBarSize(float_t  value) ;

constexpr void __cordl_internal_set_ScrollRect(::UnityW<::UnityEngine::UI::ScrollRect>  value) ;

constexpr void __cordl_internal_set_VerticalBarSize(float_t  value) ;

/// @brief Method .ctor, addr 0x5705bf4, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedScrollbarSize() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedScrollbarSize", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedScrollbarSize(FixedScrollbarSize && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedScrollbarSize", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedScrollbarSize(FixedScrollbarSize const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{162};

/// @brief Field ScrollRect, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ScrollRect>  ___ScrollRect;

/// @brief Field HorizontalBarSize, offset: 0x28, size: 0x4, def value: None
 float_t  ___HorizontalBarSize;

/// @brief Field VerticalBarSize, offset: 0x2c, size: 0x4, def value: None
 float_t  ___VerticalBarSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FixedScrollbarSize, ___ScrollRect) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedScrollbarSize, ___HorizontalBarSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FixedScrollbarSize, ___VerticalBarSize) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FixedScrollbarSize) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

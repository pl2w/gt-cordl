#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModioPopupPositioning.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ModioPopupPositioning)
namespace GlobalNamespace {
struct RectTransform_Axis;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine {
class RectOffset;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Modio::Unity::UI::Panels {
class ModioPopupPositioning;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Panels::ModioPopupPositioning*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Panels::ModioPopupPositioning*, "Modio.Unity.UI.Panels", "ModioPopupPositioning");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Modio::Unity::UI::Panels {
// Is value type: false
// CS Name: Modio.Unity.UI.Panels.ModioPopupPositioning
class CORDL_TYPE ModioPopupPositioning : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field FourCornersArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_FourCornersArray, put=setStaticF_FourCornersArray)) ::ArrayW<::UnityEngine::Vector3>  FourCornersArray;

/// @brief Field _containWithin, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__containWithin, put=__cordl_internal_set__containWithin)) ::UnityW<::UnityEngine::RectTransform>  _containWithin;

/// @brief Field _padding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) ::UnityEngine::RectOffset*  _padding;

/// @brief Field _target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::RectTransform>  _target;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr operator  ::UnityEngine::UI::ILayoutSelfController*() noexcept;

/// @brief Method GetMinMax, addr 0x9fabcf0, size 0x10c, virtual false, abstract: false, final false
inline void GetMinMax(::UnityEngine::RectTransform*  rectTransform, ::GlobalNamespace::RectTransform_Axis  axis, ::by_ref<float_t>  min, ::by_ref<float_t>  max) ;

static inline ::Modio::Unity::UI::Panels::ModioPopupPositioning* New_ctor() ;

/// @brief Method PositionNextTo, addr 0x9fab9cc, size 0xb8, virtual false, abstract: false, final false
inline void PositionNextTo(::UnityEngine::RectTransform*  target) ;

/// @brief Method SetLayout, addr 0x9faba8c, size 0x25c, virtual false, abstract: false, final false
inline void SetLayout(::GlobalNamespace::RectTransform_Axis  axis) ;

/// @brief Method SetLayoutHorizontal, addr 0x9faba84, size 0x8, virtual true, abstract: false, final true
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0x9fabce8, size 0x8, virtual true, abstract: false, final true
inline void SetLayoutVertical() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__containWithin() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__containWithin() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get__padding() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get__padding() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__containWithin(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__padding(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::RectTransform>  value) ;

/// @brief Method .ctor, addr 0x9fabdfc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_FourCornersArray() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

static inline void setStaticF_FourCornersArray(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioPopupPositioning() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioPopupPositioning", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioPopupPositioning(ModioPopupPositioning && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioPopupPositioning", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioPopupPositioning(ModioPopupPositioning const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27079};

/// [SerializeField]
/// @brief Field _containWithin, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____containWithin;

/// [SerializeField]
/// @brief Field _target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____target;

/// [SerializeField]
/// @brief Field _padding, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ____padding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPopupPositioning, ____containWithin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPopupPositioning, ____target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Panels::ModioPopupPositioning, ____padding) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Panels::ModioPopupPositioning) == 0x38, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Panels

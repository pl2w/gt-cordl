#pragma once
// IWYU pragma private; include "UnityEngine/UI/ContentSizeFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_FitMode_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentSizeFitter)
namespace GlobalNamespace {
struct ContentSizeFitter_FitMode;
}
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::ContentSizeFitter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::ContentSizeFitter*, "UnityEngine.UI", "ContentSizeFitter");
// [AddComponentMenu("Layout/Content Size Fitter", 141)]
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.ContentSizeFitter::FitMode
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.ContentSizeFitter
class CORDL_TYPE ContentSizeFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using FitMode = ::GlobalNamespace::ContentSizeFitter_FitMode;

 __declspec(property(get=get_horizontalFit, put=set_horizontalFit)) ::GlobalNamespace::ContentSizeFitter_FitMode  horizontalFit;

/// @brief Field m_HorizontalFit, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HorizontalFit, put=__cordl_internal_set_m_HorizontalFit)) ::GlobalNamespace::ContentSizeFitter_FitMode  m_HorizontalFit;

/// @brief Field m_Rect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rect, put=__cordl_internal_set_m_Rect)) ::UnityW<::UnityEngine::RectTransform>  m_Rect;

/// @brief Field m_Tracker, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Tracker, put=__cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker  m_Tracker;

/// @brief Field m_VerticalFit, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VerticalFit, put=__cordl_internal_set_m_VerticalFit)) ::GlobalNamespace::ContentSizeFitter_FitMode  m_VerticalFit;

 __declspec(property(get=get_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

 __declspec(property(get=get_verticalFit, put=set_verticalFit)) ::GlobalNamespace::ContentSizeFitter_FitMode  verticalFit;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr operator  ::UnityEngine::UI::ILayoutSelfController*() noexcept;

/// @brief Method HandleSelfFittingAlongAxis, addr 0xb8f535c, size 0xd4, virtual false, abstract: false, final false
inline void HandleSelfFittingAlongAxis(int32_t  axis) ;

static inline ::UnityEngine::UI::ContentSizeFitter* New_ctor() ;

/// @brief Method OnDisable, addr 0xb8f52dc, size 0x7c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb8f52c0, size 0x1c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0xb8f5358, size 0x4, virtual true, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method SetDirty, addr 0xb8f5118, size 0x84, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetLayoutHorizontal, addr 0xb8f5448, size 0x24, virtual true, abstract: false, final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0xb8f546c, size 0x8, virtual true, abstract: false, final false
inline void SetLayoutVertical() ;

constexpr ::GlobalNamespace::ContentSizeFitter_FitMode const& __cordl_internal_get_m_HorizontalFit() const;

constexpr ::GlobalNamespace::ContentSizeFitter_FitMode& __cordl_internal_get_m_HorizontalFit() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker() ;

constexpr ::GlobalNamespace::ContentSizeFitter_FitMode const& __cordl_internal_get_m_VerticalFit() const;

constexpr ::GlobalNamespace::ContentSizeFitter_FitMode& __cordl_internal_get_m_VerticalFit() ;

constexpr void __cordl_internal_set_m_HorizontalFit(::GlobalNamespace::ContentSizeFitter_FitMode  value) ;

constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

constexpr void __cordl_internal_set_m_VerticalFit(::GlobalNamespace::ContentSizeFitter_FitMode  value) ;

/// @brief Method .ctor, addr 0xb8f52b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_horizontalFit, addr 0xb8f509c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContentSizeFitter_FitMode get_horizontalFit() ;

/// @brief Method get_rectTransform, addr 0xb8f5218, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform() ;

/// @brief Method get_verticalFit, addr 0xb8f519c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ContentSizeFitter_FitMode get_verticalFit() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

/// @brief Method set_horizontalFit, addr 0xb8f50a4, size 0x74, virtual false, abstract: false, final false
inline void set_horizontalFit(::GlobalNamespace::ContentSizeFitter_FitMode  value) ;

/// @brief Method set_verticalFit, addr 0xb8f51a4, size 0x74, virtual false, abstract: false, final false
inline void set_verticalFit(::GlobalNamespace::ContentSizeFitter_FitMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContentSizeFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentSizeFitter(ContentSizeFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentSizeFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentSizeFitter(ContentSizeFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26055};

/// [SerializeField]
/// @brief Field m_HorizontalFit, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::ContentSizeFitter_FitMode  ___m_HorizontalFit;

/// [SerializeField]
/// @brief Field m_VerticalFit, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::ContentSizeFitter_FitMode  ___m_VerticalFit;

/// @brief Field m_Rect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_Rect;

/// @brief Field m_Tracker, offset: 0x30, size: 0x1, def value: None
 ::UnityEngine::DrivenRectTransformTracker  ___m_Tracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_HorizontalFit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_VerticalFit) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::ContentSizeFitter, ___m_Tracker) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::ContentSizeFitter) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::UI

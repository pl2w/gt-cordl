#pragma once
// IWYU pragma private; include "UnityEngine/UI/AspectRatioFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_AspectMode_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AspectRatioFitter)
namespace GlobalNamespace {
struct AspectRatioFitter_AspectMode;
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
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UI {
class AspectRatioFitter;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::AspectRatioFitter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::AspectRatioFitter*, "UnityEngine.UI", "AspectRatioFitter");
// [AddComponentMenu("Layout/Aspect Ratio Fitter", 142)]
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.AspectRatioFitter::AspectMode
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.AspectRatioFitter
class CORDL_TYPE AspectRatioFitter : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using AspectMode = ::GlobalNamespace::AspectRatioFitter_AspectMode;

 __declspec(property(get=get_aspectMode, put=set_aspectMode)) ::GlobalNamespace::AspectRatioFitter_AspectMode  aspectMode;

 __declspec(property(get=get_aspectRatio, put=set_aspectRatio)) float_t  aspectRatio;

/// @brief Field m_AspectMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AspectMode, put=__cordl_internal_set_m_AspectMode)) ::GlobalNamespace::AspectRatioFitter_AspectMode  m_AspectMode;

/// @brief Field m_AspectRatio, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AspectRatio, put=__cordl_internal_set_m_AspectRatio)) float_t  m_AspectRatio;

/// @brief Field m_DelayedSetDirty, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DelayedSetDirty, put=__cordl_internal_set_m_DelayedSetDirty)) bool  m_DelayedSetDirty;

/// @brief Field m_DoesParentExist, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DoesParentExist, put=__cordl_internal_set_m_DoesParentExist)) bool  m_DoesParentExist;

/// @brief Field m_Rect, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rect, put=__cordl_internal_set_m_Rect)) ::UnityW<::UnityEngine::RectTransform>  m_Rect;

/// @brief Field m_Tracker, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Tracker, put=__cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker  m_Tracker;

 __declspec(property(get=get_rectTransform)) ::UnityW<::UnityEngine::RectTransform>  rectTransform;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr operator  ::UnityEngine::UI::ILayoutSelfController*() noexcept;

/// @brief Method DoesParentExists, addr 0xb8f4930, size 0x8, virtual false, abstract: false, final false
inline bool DoesParentExists() ;

/// @brief Method GetParentSize, addr 0xb8f473c, size 0xf8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetParentSize() ;

/// @brief Method GetSizeDeltaToProduceSize, addr 0xb8f4834, size 0xf4, virtual false, abstract: false, final false
inline float_t GetSizeDeltaToProduceSize(float_t  size, int32_t  axis) ;

/// @brief Method IsAspectModeValid, addr 0xb8f3fa4, size 0x28, virtual false, abstract: false, final false
inline bool IsAspectModeValid() ;

/// @brief Method IsComponentValidOnObject, addr 0xb8f3ed8, size 0xcc, virtual false, abstract: false, final false
inline bool IsComponentValidOnObject() ;

static inline ::UnityEngine::UI::AspectRatioFitter* New_ctor() ;

/// @brief Method OnDisable, addr 0xb8f3fcc, size 0x7c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb8f3df0, size 0x98, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0xb8f44e8, size 0x4, virtual true, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method OnTransformParentChanged, addr 0xb8f443c, size 0x98, virtual true, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method SetDirty, addr 0xb8f3cc0, size 0x4, virtual false, abstract: false, final false
inline void SetDirty() ;

/// @brief Method SetLayoutHorizontal, addr 0xb8f4928, size 0x4, virtual true, abstract: false, final false
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0xb8f492c, size 0x4, virtual true, abstract: false, final false
inline void SetLayoutVertical() ;

/// @brief Method Start, addr 0xb8f3e88, size 0x50, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xb8f44d4, size 0x14, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRect, addr 0xb8f44ec, size 0x250, virtual false, abstract: false, final false
inline void UpdateRect() ;

constexpr ::GlobalNamespace::AspectRatioFitter_AspectMode const& __cordl_internal_get_m_AspectMode() const;

constexpr ::GlobalNamespace::AspectRatioFitter_AspectMode& __cordl_internal_get_m_AspectMode() ;

constexpr float_t const& __cordl_internal_get_m_AspectRatio() const;

constexpr float_t& __cordl_internal_get_m_AspectRatio() ;

constexpr bool const& __cordl_internal_get_m_DelayedSetDirty() const;

constexpr bool& __cordl_internal_get_m_DelayedSetDirty() ;

constexpr bool const& __cordl_internal_get_m_DoesParentExist() const;

constexpr bool& __cordl_internal_get_m_DoesParentExist() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_Rect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_Rect() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker() ;

constexpr void __cordl_internal_set_m_AspectMode(::GlobalNamespace::AspectRatioFitter_AspectMode  value) ;

constexpr void __cordl_internal_set_m_AspectRatio(float_t  value) ;

constexpr void __cordl_internal_set_m_DelayedSetDirty(bool  value) ;

constexpr void __cordl_internal_set_m_DoesParentExist(bool  value) ;

constexpr void __cordl_internal_set_m_Rect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

/// @brief Method .ctor, addr 0xb8f3de0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_aspectMode, addr 0xb8f3c44, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AspectRatioFitter_AspectMode get_aspectMode() ;

/// @brief Method get_aspectRatio, addr 0xb8f3cc4, size 0x8, virtual false, abstract: false, final false
inline float_t get_aspectRatio() ;

/// @brief Method get_rectTransform, addr 0xb8f3d40, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_rectTransform() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

/// @brief Method set_aspectMode, addr 0xb8f3c4c, size 0x74, virtual false, abstract: false, final false
inline void set_aspectMode(::GlobalNamespace::AspectRatioFitter_AspectMode  value) ;

/// @brief Method set_aspectRatio, addr 0xb8f3ccc, size 0x74, virtual false, abstract: false, final false
inline void set_aspectRatio(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AspectRatioFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AspectRatioFitter(AspectRatioFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AspectRatioFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AspectRatioFitter(AspectRatioFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26049};

/// [SerializeField]
/// @brief Field m_AspectMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::AspectRatioFitter_AspectMode  ___m_AspectMode;

/// [SerializeField]
/// @brief Field m_AspectRatio, offset: 0x24, size: 0x4, def value: None
 float_t  ___m_AspectRatio;

/// @brief Field m_Rect, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_Rect;

/// @brief Field m_DelayedSetDirty, offset: 0x30, size: 0x1, def value: None
 bool  ___m_DelayedSetDirty;

/// @brief Field m_DoesParentExist, offset: 0x31, size: 0x1, def value: None
 bool  ___m_DoesParentExist;

/// @brief Field m_Tracker, offset: 0x32, size: 0x1, def value: None
 ::UnityEngine::DrivenRectTransformTracker  ___m_Tracker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_AspectRatio) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Rect) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DelayedSetDirty) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_DoesParentExist) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::AspectRatioFitter, ___m_Tracker) == 0x32, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::AspectRatioFitter) == 0x38, "Size mismatch!");

} // namespace end def UnityEngine::UI

#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Navigation/ModioAspectRatioFitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ModioAspectRatioFitter)
namespace UnityEngine::UI {
class ILayoutController;
}
namespace UnityEngine::UI {
class ILayoutSelfController;
}
namespace UnityEngine {
class RectOffset;
}
// Forward declare root types
namespace Modio::Unity::UI::Navigation {
class ModioAspectRatioFitter;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter*, "Modio.Unity.UI.Navigation", "ModioAspectRatioFitter");
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Modio::Unity::UI::Navigation {
// Is value type: false
// CS Name: Modio.Unity.UI.Navigation.ModioAspectRatioFitter
class CORDL_TYPE ModioAspectRatioFitter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _additionalPadding, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__additionalPadding, put=__cordl_internal_set__additionalPadding)) ::UnityEngine::Vector2  _additionalPadding;

/// @brief Field _aspectRatio, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__aspectRatio, put=__cordl_internal_set__aspectRatio)) float_t  _aspectRatio;

/// @brief Field _delayedSetDirty, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__delayedSetDirty, put=__cordl_internal_set__delayedSetDirty)) bool  _delayedSetDirty;

/// @brief Field _margin, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__margin, put=__cordl_internal_set__margin)) ::UnityEngine::RectOffset*  _margin;

/// @brief Field _maxSize, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxSize, put=__cordl_internal_set__maxSize)) ::UnityEngine::Vector2  _maxSize;

/// @brief Field _tracker, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__tracker, put=__cordl_internal_set__tracker)) ::UnityEngine::DrivenRectTransformTracker  _tracker;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr operator  ::UnityEngine::UI::ILayoutController*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr operator  ::UnityEngine::UI::ILayoutSelfController*() noexcept;

static inline ::Modio::Unity::UI::Navigation::ModioAspectRatioFitter* New_ctor() ;

/// @brief Method OnEnable, addr 0x9faff88, size 0x4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRectTransformDimensionsChange, addr 0x9fb0108, size 0x4, virtual false, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method OnValidate, addr 0x9fb0120, size 0xc, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method SetLayoutHorizontal, addr 0x9fb012c, size 0x4, virtual true, abstract: false, final true
inline void SetLayoutHorizontal() ;

/// @brief Method SetLayoutVertical, addr 0x9fb0130, size 0x4, virtual true, abstract: false, final true
inline void SetLayoutVertical() ;

/// @brief Method Update, addr 0x9fb010c, size 0x14, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateRect, addr 0x9faff8c, size 0x17c, virtual false, abstract: false, final false
inline void UpdateRect() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__additionalPadding() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__additionalPadding() ;

constexpr float_t const& __cordl_internal_get__aspectRatio() const;

constexpr float_t& __cordl_internal_get__aspectRatio() ;

constexpr bool const& __cordl_internal_get__delayedSetDirty() const;

constexpr bool& __cordl_internal_get__delayedSetDirty() ;

constexpr ::UnityEngine::RectOffset* const& __cordl_internal_get__margin() const;

constexpr ::UnityEngine::RectOffset*& __cordl_internal_get__margin() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__maxSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__maxSize() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get__tracker() const;

constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get__tracker() ;

constexpr void __cordl_internal_set__additionalPadding(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__aspectRatio(float_t  value) ;

constexpr void __cordl_internal_set__delayedSetDirty(bool  value) ;

constexpr void __cordl_internal_set__margin(::UnityEngine::RectOffset*  value) ;

constexpr void __cordl_internal_set__maxSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

/// @brief Method .ctor, addr 0x9fb0134, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::UI::ILayoutController"
constexpr ::UnityEngine::UI::ILayoutController* i___UnityEngine__UI__ILayoutController() noexcept;

/// @brief Convert to "::UnityEngine::UI::ILayoutSelfController"
constexpr ::UnityEngine::UI::ILayoutSelfController* i___UnityEngine__UI__ILayoutSelfController() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioAspectRatioFitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioAspectRatioFitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioAspectRatioFitter(ModioAspectRatioFitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioAspectRatioFitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioAspectRatioFitter(ModioAspectRatioFitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27111};

/// [SerializeField]
/// @brief Field _aspectRatio, offset: 0x20, size: 0x4, def value: None
 float_t  ____aspectRatio;

/// [SerializeField]
/// @brief Field _margin, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::RectOffset*  ____margin;

/// [SerializeField]
/// @brief Field _additionalPadding, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____additionalPadding;

/// [SerializeField]
/// @brief Field _maxSize, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____maxSize;

/// @brief Field _tracker, offset: 0x40, size: 0x1, def value: None
 ::UnityEngine::DrivenRectTransformTracker  ____tracker;

/// @brief Field _delayedSetDirty, offset: 0x41, size: 0x1, def value: None
 bool  ____delayedSetDirty;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____aspectRatio) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____margin) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____additionalPadding) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____maxSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____tracker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter, ____delayedSetDirty) == 0x41, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Navigation::ModioAspectRatioFitter) == 0x48, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Navigation

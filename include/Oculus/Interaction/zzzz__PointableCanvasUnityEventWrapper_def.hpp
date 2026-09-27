#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointableCanvasUnityEventWrapper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(PointableCanvasUnityEventWrapper)
namespace Oculus::Interaction {
class IPointableCanvas;
}
namespace Oculus::Interaction {
class PointableCanvasEventArgs;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class PointableCanvasUnityEventWrapper;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PointableCanvasUnityEventWrapper*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PointableCanvasUnityEventWrapper*, "Oculus.Interaction", "PointableCanvasUnityEventWrapper");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PointableCanvasUnityEventWrapper
class CORDL_TYPE PointableCanvasUnityEventWrapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field PointableCanvas, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PointableCanvas, put=__cordl_internal_set_PointableCanvas)) ::Oculus::Interaction::IPointableCanvas*  PointableCanvas;

/// @brief Field _pointableCanvas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointableCanvas, put=__cordl_internal_set__pointableCanvas)) ::UnityW<::UnityEngine::Object>  _pointableCanvas;

/// @brief Field _started, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _suppressWhileDragging, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__suppressWhileDragging, put=__cordl_internal_set__suppressWhileDragging)) bool  _suppressWhileDragging;

/// @brief Field _whenBeginHighlight, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenBeginHighlight, put=__cordl_internal_set__whenBeginHighlight)) ::UnityEngine::Events::UnityEvent*  _whenBeginHighlight;

/// @brief Field _whenEndHighlight, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenEndHighlight, put=__cordl_internal_set__whenEndHighlight)) ::UnityEngine::Events::UnityEvent*  _whenEndHighlight;

/// @brief Field _whenSelectedEmpty, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectedEmpty, put=__cordl_internal_set__whenSelectedEmpty)) ::UnityEngine::Events::UnityEvent*  _whenSelectedEmpty;

/// @brief Field _whenSelectedHovered, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenSelectedHovered, put=__cordl_internal_set__whenSelectedHovered)) ::UnityEngine::Events::UnityEvent*  _whenSelectedHovered;

/// @brief Field _whenUnselectedEmpty, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselectedEmpty, put=__cordl_internal_set__whenUnselectedEmpty)) ::UnityEngine::Events::UnityEvent*  _whenUnselectedEmpty;

/// @brief Field _whenUnselectedHovered, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenUnselectedHovered, put=__cordl_internal_set__whenUnselectedHovered)) ::UnityEngine::Events::UnityEvent*  _whenUnselectedHovered;

/// @brief Method Awake, addr 0xa489194, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::PointableCanvasUnityEventWrapper* New_ctor() ;

/// @brief Method OnDisable, addr 0xa489370, size 0x148, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa489228, size 0x148, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PointableCanvasModule_WhenSelectableHoverEnter, addr 0xa488fec, size 0x30, virtual false, abstract: false, final false
inline void PointableCanvasModule_WhenSelectableHoverEnter(::Oculus::Interaction::PointableCanvasEventArgs*  args) ;

/// @brief Method PointableCanvasModule_WhenSelectableHoverExit, addr 0xa48901c, size 0x30, virtual false, abstract: false, final false
inline void PointableCanvasModule_WhenSelectableHoverExit(::Oculus::Interaction::PointableCanvasEventArgs*  args) ;

/// @brief Method PointableCanvasModule_WhenSelectableSelected, addr 0xa48904c, size 0xa4, virtual false, abstract: false, final false
inline void PointableCanvasModule_WhenSelectableSelected(::Oculus::Interaction::PointableCanvasEventArgs*  args) ;

/// @brief Method PointableCanvasModule_WhenSelectableUnselected, addr 0xa4890f0, size 0xa4, virtual false, abstract: false, final false
inline void PointableCanvasModule_WhenSelectableUnselected(::Oculus::Interaction::PointableCanvasEventArgs*  args) ;

/// @brief Method ShouldFireEvent, addr 0xa488ed8, size 0x114, virtual false, abstract: false, final false
inline bool ShouldFireEvent(::Oculus::Interaction::PointableCanvasEventArgs*  args) ;

/// @brief Method Start, addr 0xa4891fc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::IPointableCanvas* const& __cordl_internal_get_PointableCanvas() const;

constexpr ::Oculus::Interaction::IPointableCanvas*& __cordl_internal_get_PointableCanvas() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__pointableCanvas() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__pointableCanvas() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr bool const& __cordl_internal_get__suppressWhileDragging() const;

constexpr bool& __cordl_internal_get__suppressWhileDragging() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenBeginHighlight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenBeginHighlight() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenEndHighlight() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenEndHighlight() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelectedEmpty() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelectedEmpty() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenSelectedHovered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenSelectedHovered() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnselectedEmpty() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnselectedEmpty() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get__whenUnselectedHovered() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get__whenUnselectedHovered() ;

constexpr void __cordl_internal_set_PointableCanvas(::Oculus::Interaction::IPointableCanvas*  value) ;

constexpr void __cordl_internal_set__pointableCanvas(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__suppressWhileDragging(bool  value) ;

constexpr void __cordl_internal_set__whenBeginHighlight(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenEndHighlight(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelectedEmpty(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenSelectedHovered(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnselectedEmpty(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__whenUnselectedHovered(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0xa4894b8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointableCanvasUnityEventWrapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasUnityEventWrapper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointableCanvasUnityEventWrapper(PointableCanvasUnityEventWrapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointableCanvasUnityEventWrapper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointableCanvasUnityEventWrapper(PointableCanvasUnityEventWrapper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16001};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IPointableCanvas), new[] {  })]
/// @brief Field _pointableCanvas, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____pointableCanvas;

/// @brief Field PointableCanvas, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IPointableCanvas*  ___PointableCanvas;

/// [SerializeField]
/// [Tooltip("Selection and hover events will not be fired while dragging.")]
/// @brief Field _suppressWhileDragging, offset: 0x30, size: 0x1, def value: None
 bool  ____suppressWhileDragging;

/// [SerializeField]
/// [Tooltip("Raised when beginning hover of a uGUI selectable")]
/// @brief Field _whenBeginHighlight, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenBeginHighlight;

/// [SerializeField]
/// [Tooltip("Raised when ending hover of a uGUI selectable")]
/// @brief Field _whenEndHighlight, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenEndHighlight;

/// [SerializeField]
/// [Tooltip("Raised when selecting a hovered uGUI selectable")]
/// @brief Field _whenSelectedHovered, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelectedHovered;

/// [SerializeField]
/// [Tooltip("Raised when selecting with no uGUI selectable hovered")]
/// @brief Field _whenSelectedEmpty, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenSelectedEmpty;

/// [SerializeField]
/// [Tooltip("Raised when deselecting a hovered uGUI selectable")]
/// @brief Field _whenUnselectedHovered, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnselectedHovered;

/// [SerializeField]
/// [Tooltip("Raised when deselecting with no uGUI selectable hovered")]
/// @brief Field _whenUnselectedEmpty, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ____whenUnselectedEmpty;

/// @brief Field _started, offset: 0x68, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____pointableCanvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ___PointableCanvas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____suppressWhileDragging) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenBeginHighlight) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenEndHighlight) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenSelectedHovered) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenSelectedEmpty) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenUnselectedHovered) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____whenUnselectedEmpty) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PointableCanvasUnityEventWrapper, ____started) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PointableCanvasUnityEventWrapper) == 0x70, "Size mismatch!");

} // namespace end def Oculus::Interaction

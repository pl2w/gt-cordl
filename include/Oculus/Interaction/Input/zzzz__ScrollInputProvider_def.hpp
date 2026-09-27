#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ScrollInputProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ScrollInputProvider)
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class PointableCanvasModule_Pointer;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ScrollInputProvider;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ScrollInputProvider*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ScrollInputProvider*, "Oculus.Interaction.Input", "ScrollInputProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ScrollInputProvider
class CORDL_TYPE ScrollInputProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_Axis2D, put=set_Axis2D)) ::Oculus::Interaction::Input::IAxis2D*  Axis2D;

 __declspec(property(get=get_InteractorView, put=set_InteractorView)) ::Oculus::Interaction::IInteractorView*  InteractorView;

/// @brief Field <Axis2D>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Axis2D_k__BackingField, put=__cordl_internal_set__Axis2D_k__BackingField)) ::Oculus::Interaction::Input::IAxis2D*  _Axis2D_k__BackingField;

/// @brief Field <InteractorView>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__InteractorView_k__BackingField, put=__cordl_internal_set__InteractorView_k__BackingField)) ::Oculus::Interaction::IInteractorView*  _InteractorView_k__BackingField;

/// @brief Field _axis2D, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::UnityW<::UnityEngine::Object>  _axis2D;

/// @brief Field _currentPointer, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentPointer, put=__cordl_internal_set__currentPointer)) ::Oculus::Interaction::PointableCanvasModule_Pointer*  _currentPointer;

/// @brief Field _deadZone, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__deadZone, put=__cordl_internal_set__deadZone)) float_t  _deadZone;

/// @brief Field _interactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::UnityEngine::Object>  _interactor;

/// @brief Field _invertXAxis, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertXAxis, put=__cordl_internal_set__invertXAxis)) bool  _invertXAxis;

/// @brief Field _invertYAxis, offset 0x3b, size 0x1 
 __declspec(property(get=__cordl_internal_get__invertYAxis, put=__cordl_internal_set__invertYAxis)) bool  _invertYAxis;

/// @brief Field _pointerEventData, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__pointerEventData, put=__cordl_internal_set__pointerEventData)) ::UnityEngine::EventSystems::PointerEventData*  _pointerEventData;

/// @brief Field _scrollSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__scrollSpeed, put=__cordl_internal_set__scrollSpeed)) float_t  _scrollSpeed;

/// @brief Field _scrollXAxis, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__scrollXAxis, put=__cordl_internal_set__scrollXAxis)) bool  _scrollXAxis;

/// @brief Field _scrollYAxis, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get__scrollYAxis, put=__cordl_internal_set__scrollYAxis)) bool  _scrollYAxis;

/// @brief Field _started, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method ApplyAxisSettings, addr 0xa506a68, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 ApplyAxisSettings(::UnityEngine::Vector2  input) ;

/// @brief Method Awake, addr 0xa506318, size 0x90, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePointerStarted, addr 0xa5065f8, size 0x178, virtual false, abstract: false, final false
inline void HandlePointerStarted(::Oculus::Interaction::PointableCanvasModule_Pointer*  pointer) ;

/// @brief Method HandlePointerUpdated, addr 0xa506770, size 0x174, virtual false, abstract: false, final false
inline void HandlePointerUpdated(::UnityEngine::EventSystems::PointerEventData*  pointerEventData) ;

/// @brief Method InjectAll, addr 0xa506aac, size 0x28, virtual false, abstract: false, final false
inline void InjectAll(::Oculus::Interaction::Input::IAxis2D*  axis2D, ::Oculus::Interaction::IInteractorView*  interactorView) ;

/// @brief Method InjectAxis2D, addr 0xa506ad4, size 0xd0, virtual false, abstract: false, final false
inline void InjectAxis2D(::Oculus::Interaction::Input::IAxis2D*  axis2D) ;

/// @brief Method InjectInteractorView, addr 0xa506ba4, size 0xd0, virtual false, abstract: false, final false
inline void InjectInteractorView(::Oculus::Interaction::IInteractorView*  interactorView) ;

static inline ::Oculus::Interaction::Input::ScrollInputProvider* New_ctor() ;

/// @brief Method OnDisable, addr 0xa5064f0, size 0x108, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa506464, size 0x8c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa5063a8, size 0xbc, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetScrollData, addr 0xa5068e4, size 0x184, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 TryGetScrollData() ;

constexpr ::Oculus::Interaction::Input::IAxis2D* const& __cordl_internal_get__Axis2D_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis2D*& __cordl_internal_get__Axis2D_k__BackingField() ;

constexpr ::Oculus::Interaction::IInteractorView* const& __cordl_internal_get__InteractorView_k__BackingField() const;

constexpr ::Oculus::Interaction::IInteractorView*& __cordl_internal_get__InteractorView_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis2D() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis2D() ;

constexpr ::Oculus::Interaction::PointableCanvasModule_Pointer* const& __cordl_internal_get__currentPointer() const;

constexpr ::Oculus::Interaction::PointableCanvasModule_Pointer*& __cordl_internal_get__currentPointer() ;

constexpr float_t const& __cordl_internal_get__deadZone() const;

constexpr float_t& __cordl_internal_get__deadZone() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactor() ;

constexpr bool const& __cordl_internal_get__invertXAxis() const;

constexpr bool& __cordl_internal_get__invertXAxis() ;

constexpr bool const& __cordl_internal_get__invertYAxis() const;

constexpr bool& __cordl_internal_get__invertYAxis() ;

constexpr ::UnityEngine::EventSystems::PointerEventData* const& __cordl_internal_get__pointerEventData() const;

constexpr ::UnityEngine::EventSystems::PointerEventData*& __cordl_internal_get__pointerEventData() ;

constexpr float_t const& __cordl_internal_get__scrollSpeed() const;

constexpr float_t& __cordl_internal_get__scrollSpeed() ;

constexpr bool const& __cordl_internal_get__scrollXAxis() const;

constexpr bool& __cordl_internal_get__scrollXAxis() ;

constexpr bool const& __cordl_internal_get__scrollYAxis() const;

constexpr bool& __cordl_internal_get__scrollYAxis() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set__Axis2D_k__BackingField(::Oculus::Interaction::Input::IAxis2D*  value) ;

constexpr void __cordl_internal_set__InteractorView_k__BackingField(::Oculus::Interaction::IInteractorView*  value) ;

constexpr void __cordl_internal_set__axis2D(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__currentPointer(::Oculus::Interaction::PointableCanvasModule_Pointer*  value) ;

constexpr void __cordl_internal_set__deadZone(float_t  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__invertXAxis(bool  value) ;

constexpr void __cordl_internal_set__invertYAxis(bool  value) ;

constexpr void __cordl_internal_set__pointerEventData(::UnityEngine::EventSystems::PointerEventData*  value) ;

constexpr void __cordl_internal_set__scrollSpeed(float_t  value) ;

constexpr void __cordl_internal_set__scrollXAxis(bool  value) ;

constexpr void __cordl_internal_set__scrollYAxis(bool  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa506c74, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Axis2D, addr 0xa5062f8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis2D* get_Axis2D() ;

/// [CompilerGenerated]
/// @brief Method get_InteractorView, addr 0xa506308, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractorView* get_InteractorView() ;

/// [CompilerGenerated]
/// @brief Method set_Axis2D, addr 0xa506300, size 0x8, virtual false, abstract: false, final false
inline void set_Axis2D(::Oculus::Interaction::Input::IAxis2D*  value) ;

/// [CompilerGenerated]
/// @brief Method set_InteractorView, addr 0xa506310, size 0x8, virtual false, abstract: false, final false
inline void set_InteractorView(::Oculus::Interaction::IInteractorView*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollInputProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollInputProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollInputProvider(ScrollInputProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollInputProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollInputProvider(ScrollInputProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16463};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis2D), new[] {  })]
/// [Tooltip("Input 2D Axis from which the horizontal and vertical axis will be extracted")]
/// @brief Field _axis2D, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis2D;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractorView), new[] {  })]
/// @brief Field _interactor, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactor;

/// [SerializeField]
/// [Optional]
/// [Tooltip("The speed at which scrolling occurs.")]
/// @brief Field _scrollSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ____scrollSpeed;

/// [SerializeField]
/// [Optional]
/// [Tooltip("The dead zone threshold for input.")]
/// @brief Field _deadZone, offset: 0x34, size: 0x4, def value: None
 float_t  ____deadZone;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Enable or disable scrolling on the X axis.")]
/// @brief Field _scrollXAxis, offset: 0x38, size: 0x1, def value: None
 bool  ____scrollXAxis;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Enable or disable scrolling on the Y axis.")]
/// @brief Field _scrollYAxis, offset: 0x39, size: 0x1, def value: None
 bool  ____scrollYAxis;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Invert the X axis input.")]
/// @brief Field _invertXAxis, offset: 0x3a, size: 0x1, def value: None
 bool  ____invertXAxis;

/// [SerializeField]
/// [Optional]
/// [Tooltip("Invert the Y axis input.")]
/// @brief Field _invertYAxis, offset: 0x3b, size: 0x1, def value: None
 bool  ____invertYAxis;

/// [CompilerGenerated]
/// @brief Field <Axis2D>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis2D*  ____Axis2D_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <InteractorView>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractorView*  ____InteractorView_k__BackingField;

/// @brief Field _pointerEventData, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::EventSystems::PointerEventData*  ____pointerEventData;

/// @brief Field _currentPointer, offset: 0x58, size: 0x8, def value: None
 ::Oculus::Interaction::PointableCanvasModule_Pointer*  ____currentPointer;

/// @brief Field _started, offset: 0x60, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____axis2D) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____interactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____scrollSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____deadZone) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____scrollXAxis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____scrollYAxis) == 0x39, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____invertXAxis) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____invertYAxis) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____Axis2D_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____InteractorView_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____pointerEventData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____currentPointer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ScrollInputProvider, ____started) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ScrollInputProvider) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

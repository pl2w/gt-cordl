#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DPrioritySelector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Axis1DPrioritySelector)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction {
class Axis1DPrioritySelector_AxisData;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class Axis1DPrioritySelector;
}
namespace Oculus::Interaction {
class Axis1DPrioritySelector_AxisData;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Axis1DPrioritySelector*);
MARK_REF_T(::Oculus::Interaction::Axis1DPrioritySelector_AxisData*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Axis1DPrioritySelector*, "Oculus.Interaction", "Axis1DPrioritySelector");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Axis1DPrioritySelector_AxisData*, "Oculus.Interaction", "Axis1DPrioritySelector/AxisData");
// Dependencies Oculus.Interaction.Axis1DPrioritySelector::AxisData, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Axis1DPrioritySelector
class CORDL_TYPE Axis1DPrioritySelector : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AxisData = ::Oculus::Interaction::Axis1DPrioritySelector_AxisData;

/// @brief Field ActiveAxis, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveAxis, put=__cordl_internal_set_ActiveAxis)) ::Oculus::Interaction::Axis1DPrioritySelector_AxisData*  ActiveAxis;

 __declspec(property(get=get_Current)) ::Oculus::Interaction::Input::IAxis1D*  Current;

/// @brief Field FallbackIfNoMatchAxis, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FallbackIfNoMatchAxis, put=__cordl_internal_set_FallbackIfNoMatchAxis)) ::Oculus::Interaction::Input::IAxis1D*  FallbackIfNoMatchAxis;

/// @brief Field _axisData, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axisData, put=__cordl_internal_set__axisData)) ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  _axisData;

/// @brief Field _fallbackIfNoMatchAxis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallbackIfNoMatchAxis, put=__cordl_internal_set__fallbackIfNoMatchAxis)) ::UnityW<::UnityEngine::Object>  _fallbackIfNoMatchAxis;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

/// @brief Method Awake, addr 0xa408160, size 0xb8, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetActiveAxis, addr 0xa407fd0, size 0x190, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* GetActiveAxis() ;

/// @brief Method InjectAll, addr 0xa4083c8, size 0x128, virtual false, abstract: false, final false
inline void InjectAll(::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  axisData, ::Oculus::Interaction::Input::IAxis1D*  fallbackIfNoMatchAxis) ;

static inline ::Oculus::Interaction::Axis1DPrioritySelector* New_ctor() ;

/// @brief Method Start, addr 0xa4082cc, size 0x50, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Value, addr 0xa408320, size 0xa8, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr ::Oculus::Interaction::Axis1DPrioritySelector_AxisData* const& __cordl_internal_get_ActiveAxis() const;

constexpr ::Oculus::Interaction::Axis1DPrioritySelector_AxisData*& __cordl_internal_get_ActiveAxis() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_FallbackIfNoMatchAxis() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_FallbackIfNoMatchAxis() ;

constexpr ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*> const& __cordl_internal_get__axisData() const;

constexpr ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>& __cordl_internal_get__axisData() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__fallbackIfNoMatchAxis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__fallbackIfNoMatchAxis() ;

constexpr void __cordl_internal_set_ActiveAxis(::Oculus::Interaction::Axis1DPrioritySelector_AxisData*  value) ;

constexpr void __cordl_internal_set_FallbackIfNoMatchAxis(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__axisData(::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  value) ;

constexpr void __cordl_internal_set__fallbackIfNoMatchAxis(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4084f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Current, addr 0xa407fcc, size 0x4, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis1D* get_Current() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis1DPrioritySelector() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis1DPrioritySelector", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis1DPrioritySelector(Axis1DPrioritySelector && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis1DPrioritySelector", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis1DPrioritySelector(Axis1DPrioritySelector const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15721};

/// [SerializeField]
/// @brief Field _axisData, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::Axis1DPrioritySelector_AxisData*>  ____axisData;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _fallbackIfNoMatchAxis, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____fallbackIfNoMatchAxis;

/// @brief Field FallbackIfNoMatchAxis, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___FallbackIfNoMatchAxis;

/// @brief Field ActiveAxis, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Axis1DPrioritySelector_AxisData*  ___ActiveAxis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector, ____axisData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector, ____fallbackIfNoMatchAxis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector, ___FallbackIfNoMatchAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector, ___ActiveAxis) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Axis1DPrioritySelector) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Axis1DPrioritySelector/AxisData
class CORDL_TYPE Axis1DPrioritySelector_AxisData : public ::System::Object {
public:
// Declarations
/// @brief Field ActiveState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field Axis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Axis, put=__cordl_internal_set_Axis)) ::Oculus::Interaction::Input::IAxis1D*  Axis;

/// @brief Field _activeState, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _axis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::UnityW<::UnityEngine::Object>  _axis;

/// @brief Method Initialize, addr 0xa408218, size 0xb4, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Oculus::Interaction::Axis1DPrioritySelector_AxisData* New_ctor() ;

/// @brief Method Validate, addr 0xa40831c, size 0x4, virtual false, abstract: false, final false
inline void Validate(::UnityEngine::Component*  context) ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_Axis() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_Axis() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_Axis(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa4084f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis1DPrioritySelector_AxisData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis1DPrioritySelector_AxisData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis1DPrioritySelector_AxisData(Axis1DPrioritySelector_AxisData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis1DPrioritySelector_AxisData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis1DPrioritySelector_AxisData(Axis1DPrioritySelector_AxisData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15720};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _axis, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis;

/// @brief Field Axis, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___Axis;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector_AxisData, ____activeState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector_AxisData, ___ActiveState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector_AxisData, ____axis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DPrioritySelector_AxisData, ___Axis) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Axis1DPrioritySelector_AxisData) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction

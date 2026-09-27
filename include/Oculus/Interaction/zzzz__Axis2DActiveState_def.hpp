#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis2DActiveState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__Axis2DActiveState_CheckComponent_def.hpp"
#include "Oculus/Interaction/zzzz__Axis2DActiveState_ComparisonMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(Axis2DActiveState)
namespace GlobalNamespace {
struct Axis2DActiveState_CheckComponent;
}
namespace GlobalNamespace {
struct Axis2DActiveState_ComparisonMode;
}
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction {
class Axis2DActiveState;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Axis2DActiveState*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Axis2DActiveState*, "Oculus.Interaction", "Axis2DActiveState");
// Dependencies Oculus.Interaction.Axis2DActiveState::CheckComponent, Oculus.Interaction.Axis2DActiveState::ComparisonMode, UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Axis2DActiveState
class CORDL_TYPE Axis2DActiveState : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CheckComponent = ::GlobalNamespace::Axis2DActiveState_CheckComponent;

using ComparisonMode = ::GlobalNamespace::Axis2DActiveState_ComparisonMode;

 __declspec(property(get=get_AbsoluteValues, put=set_AbsoluteValues)) bool  AbsoluteValues;

 __declspec(property(get=get_Active, put=set_Active)) bool  Active;

 __declspec(property(get=get_CheckAxis, put=set_CheckAxis)) ::GlobalNamespace::Axis2DActiveState_CheckComponent  CheckAxis;

 __declspec(property(get=get_Comparison, put=set_Comparison)) ::GlobalNamespace::Axis2DActiveState_ComparisonMode  Comparison;

 __declspec(property(get=get_InputAxis, put=set_InputAxis)) ::Oculus::Interaction::Input::IAxis2D*  InputAxis;

/// @brief Field <Active>k__BackingField, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__Active_k__BackingField, put=__cordl_internal_set__Active_k__BackingField)) bool  _Active_k__BackingField;

/// @brief Field <InputAxis>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__InputAxis_k__BackingField, put=__cordl_internal_set__InputAxis_k__BackingField)) ::Oculus::Interaction::Input::IAxis2D*  _InputAxis_k__BackingField;

/// @brief Field _absoluteValues, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__absoluteValues, put=__cordl_internal_set__absoluteValues)) bool  _absoluteValues;

/// @brief Field _checkAxis, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__checkAxis, put=__cordl_internal_set__checkAxis)) ::GlobalNamespace::Axis2DActiveState_CheckComponent  _checkAxis;

/// @brief Field _comparison, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__comparison, put=__cordl_internal_set__comparison)) ::GlobalNamespace::Axis2DActiveState_ComparisonMode  _comparison;

/// @brief Field _inputAxis, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__inputAxis, put=__cordl_internal_set__inputAxis)) ::UnityW<::UnityEngine::Object>  _inputAxis;

/// @brief Field _started, offset 0x45, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _thresold, offset 0x3c, size 0x8 
 __declspec(property(get=__cordl_internal_get__thresold, put=__cordl_internal_set__thresold)) ::UnityEngine::Vector2  _thresold;

/// @brief Convert operator to "::Oculus::Interaction::IActiveState"
constexpr operator  ::Oculus::Interaction::IActiveState*() noexcept;

/// @brief Method Awake, addr 0xa40af80, size 0x58, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckGreaterThan, addr 0xa40b17c, size 0x7c, virtual false, abstract: false, final false
inline bool CheckGreaterThan(::UnityEngine::Vector2  value) ;

/// @brief Method CheckLessThan, addr 0xa40b100, size 0x7c, virtual false, abstract: false, final false
inline bool CheckLessThan(::UnityEngine::Vector2  value) ;

/// @brief Method HandleValueUpdated, addr 0xa40b0b4, size 0x4c, virtual false, abstract: false, final false
inline void HandleValueUpdated(::UnityEngine::Vector2  value) ;

static inline ::Oculus::Interaction::Axis2DActiveState* New_ctor() ;

/// @brief Method OnDisable, addr 0xa40affc, size 0x10, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method Start, addr 0xa40afd8, size 0x24, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa40b00c, size 0xa8, virtual true, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get__Active_k__BackingField() const;

constexpr bool& __cordl_internal_get__Active_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::IAxis2D* const& __cordl_internal_get__InputAxis_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::IAxis2D*& __cordl_internal_get__InputAxis_k__BackingField() ;

constexpr bool const& __cordl_internal_get__absoluteValues() const;

constexpr bool& __cordl_internal_get__absoluteValues() ;

constexpr ::GlobalNamespace::Axis2DActiveState_CheckComponent const& __cordl_internal_get__checkAxis() const;

constexpr ::GlobalNamespace::Axis2DActiveState_CheckComponent& __cordl_internal_get__checkAxis() ;

constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode const& __cordl_internal_get__comparison() const;

constexpr ::GlobalNamespace::Axis2DActiveState_ComparisonMode& __cordl_internal_get__comparison() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__inputAxis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__inputAxis() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__thresold() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__thresold() ;

constexpr void __cordl_internal_set__Active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__InputAxis_k__BackingField(::Oculus::Interaction::Input::IAxis2D*  value) ;

constexpr void __cordl_internal_set__absoluteValues(bool  value) ;

constexpr void __cordl_internal_set__checkAxis(::GlobalNamespace::Axis2DActiveState_CheckComponent  value) ;

constexpr void __cordl_internal_set__comparison(::GlobalNamespace::Axis2DActiveState_ComparisonMode  value) ;

constexpr void __cordl_internal_set__inputAxis(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__thresold(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0xa40b1f8, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AbsoluteValues, addr 0xa40af60, size 0x8, virtual false, abstract: false, final false
inline bool get_AbsoluteValues() ;

/// [CompilerGenerated]
/// @brief Method get_Active, addr 0xa40af70, size 0x8, virtual true, abstract: false, final true
inline bool get_Active() ;

/// @brief Method get_CheckAxis, addr 0xa40af40, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Axis2DActiveState_CheckComponent get_CheckAxis() ;

/// @brief Method get_Comparison, addr 0xa40af50, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Axis2DActiveState_ComparisonMode get_Comparison() ;

/// [CompilerGenerated]
/// @brief Method get_InputAxis, addr 0xa40af30, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::IAxis2D* get_InputAxis() ;

/// @brief Convert to "::Oculus::Interaction::IActiveState"
constexpr ::Oculus::Interaction::IActiveState* i___Oculus__Interaction__IActiveState() noexcept;

/// @brief Method set_AbsoluteValues, addr 0xa40af68, size 0x8, virtual false, abstract: false, final false
inline void set_AbsoluteValues(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_Active, addr 0xa40af78, size 0x8, virtual false, abstract: false, final false
inline void set_Active(bool  value) ;

/// @brief Method set_CheckAxis, addr 0xa40af48, size 0x8, virtual false, abstract: false, final false
inline void set_CheckAxis(::GlobalNamespace::Axis2DActiveState_CheckComponent  value) ;

/// @brief Method set_Comparison, addr 0xa40af58, size 0x8, virtual false, abstract: false, final false
inline void set_Comparison(::GlobalNamespace::Axis2DActiveState_ComparisonMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_InputAxis, addr 0xa40af38, size 0x8, virtual false, abstract: false, final false
inline void set_InputAxis(::Oculus::Interaction::Input::IAxis2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis2DActiveState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis2DActiveState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis2DActiveState(Axis2DActiveState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis2DActiveState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis2DActiveState(Axis2DActiveState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15739};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis2D), new[] {  })]
/// @brief Field _inputAxis, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____inputAxis;

/// [CompilerGenerated]
/// @brief Field <InputAxis>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis2D*  ____InputAxis_k__BackingField;

/// [SerializeField]
/// @brief Field _checkAxis, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::Axis2DActiveState_CheckComponent  ____checkAxis;

/// [SerializeField]
/// @brief Field _comparison, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::Axis2DActiveState_ComparisonMode  ____comparison;

/// [SerializeField]
/// @brief Field _absoluteValues, offset: 0x38, size: 0x1, def value: None
 bool  ____absoluteValues;

/// [SerializeField]
/// @brief Field _thresold, offset: 0x3c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____thresold;

/// [CompilerGenerated]
/// @brief Field <Active>k__BackingField, offset: 0x44, size: 0x1, def value: None
 bool  ____Active_k__BackingField;

/// @brief Field _started, offset: 0x45, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____inputAxis) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____InputAxis_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____checkAxis) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____comparison) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____absoluteValues) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____thresold) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____Active_k__BackingField) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis2DActiveState, ____started) == 0x45, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Axis2DActiveState) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction

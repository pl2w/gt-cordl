#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/Debug/ActiveStateDebugVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ActiveStateDebugVisual)
namespace Oculus::Interaction {
class IActiveState;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Renderer;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection::Debug {
class ActiveStateDebugVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateDebugVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::PoseDetection::Debug {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.Debug.ActiveStateDebugVisual
class CORDL_TYPE ActiveStateDebugVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_ActiveState, put=set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field <ActiveState>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ActiveState_k__BackingField, put=__cordl_internal_set__ActiveState_k__BackingField)) ::Oculus::Interaction::IActiveState*  _ActiveState_k__BackingField;

/// @brief Field _activeColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__activeColor, put=__cordl_internal_set__activeColor)) ::UnityEngine::Color  _activeColor;

/// @brief Field _activeState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _lastActiveValue, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__lastActiveValue, put=__cordl_internal_set__lastActiveValue)) bool  _lastActiveValue;

/// @brief Field _material, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _normalColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__normalColor, put=__cordl_internal_set__normalColor)) ::UnityEngine::Color  _normalColor;

/// @brief Field _target, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__target, put=__cordl_internal_set__target)) ::UnityW<::UnityEngine::Renderer>  _target;

/// @brief Method Awake, addr 0xa4aacb0, size 0xc8, virtual true, abstract: false, final false
inline void Awake() ;

static inline ::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa4aadc4, size 0x5c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SetMaterialColor, addr 0xa4aad78, size 0x4c, virtual false, abstract: false, final false
inline void SetMaterialColor(::UnityEngine::Color  activeColor) ;

/// @brief Method Update, addr 0xa4aae20, size 0xf8, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get__ActiveState_k__BackingField() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get__ActiveState_k__BackingField() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__activeColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__activeColor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr bool const& __cordl_internal_get__lastActiveValue() const;

constexpr bool& __cordl_internal_get__lastActiveValue() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get__target() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get__target() ;

constexpr void __cordl_internal_set__ActiveState_k__BackingField(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set__activeColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__lastActiveValue(bool  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set__target(::UnityW<::UnityEngine::Renderer>  value) ;

/// @brief Method .ctor, addr 0xa4aaf18, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ActiveState, addr 0xa4aaca0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IActiveState* get_ActiveState() ;

/// [CompilerGenerated]
/// @brief Method set_ActiveState, addr 0xa4aaca8, size 0x8, virtual false, abstract: false, final false
inline void set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActiveStateDebugVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActiveStateDebugVisual(ActiveStateDebugVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActiveStateDebugVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActiveStateDebugVisual(ActiveStateDebugVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16180};

/// [Tooltip("The IActiveState to debug.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// @brief Field _activeState, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// [CompilerGenerated]
/// @brief Field <ActiveState>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ____ActiveState_k__BackingField;

/// [Tooltip("The renderer used for the color change.")]
/// [SerializeField]
/// @brief Field _target, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ____target;

/// [Tooltip("The renderer will be set to this color when ActiveState is inactive.")]
/// [SerializeField]
/// @brief Field _normalColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ____normalColor;

/// [Tooltip("The renderer will be set to this color when ActiveState is active.")]
/// [SerializeField]
/// @brief Field _activeColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ____activeColor;

/// @brief Field _material, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// @brief Field _lastActiveValue, offset: 0x60, size: 0x1, def value: None
 bool  ____lastActiveValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____activeState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____ActiveState_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____target) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____normalColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____activeColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____material) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual, ____lastActiveValue) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateDebugVisual) == 0x68, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection::Debug

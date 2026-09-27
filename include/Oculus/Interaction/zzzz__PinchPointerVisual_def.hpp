#pragma once
// IWYU pragma private; include "Oculus/Interaction/PinchPointerVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PinchPointerVisual)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Oculus::Interaction {
class PinchPointerVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PinchPointerVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PinchPointerVisual*, "Oculus.Interaction", "PinchPointerVisual");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.PinchPointerVisual
class CORDL_TYPE PinchPointerVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AlphaRange, put=set_AlphaRange)) ::UnityEngine::Vector2  AlphaRange;

/// @brief Field Interactor, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactor, put=__cordl_internal_set_Interactor)) ::Oculus::Interaction::IInteractor*  Interactor;

 __declspec(property(get=get_LocalOffset, put=set_LocalOffset)) ::UnityEngine::Vector3  LocalOffset;

/// @brief Field Progress, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_Progress, put=__cordl_internal_set_Progress)) ::Oculus::Interaction::Input::IAxis1D*  Progress;

 __declspec(property(get=get_RemapCurve, put=set_RemapCurve)) ::UnityEngine::AnimationCurve*  RemapCurve;

 __declspec(property(get=get_Tint, put=set_Tint)) ::UnityEngine::Color  Tint;

/// @brief Field _alphaRange, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphaRange, put=__cordl_internal_set__alphaRange)) ::UnityEngine::Vector2  _alphaRange;

/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::UnityEngine::Object>  _interactor;

/// @brief Field _localOffset, offset 0x38, size 0xc 
 __declspec(property(get=__cordl_internal_get__localOffset, put=__cordl_internal_set__localOffset)) ::UnityEngine::Vector3  _localOffset;

/// @brief Field _progress, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__progress, put=__cordl_internal_set__progress)) ::UnityW<::UnityEngine::Object>  _progress;

/// @brief Field _remapCurve, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__remapCurve, put=__cordl_internal_set__remapCurve)) ::UnityEngine::AnimationCurve*  _remapCurve;

/// @brief Field _skinnedMeshRenderer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__skinnedMeshRenderer, put=__cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _skinnedMeshRenderer;

/// @brief Field _started, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _tint, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get__tint, put=__cordl_internal_set__tint)) ::UnityEngine::Color  _tint;

/// @brief Method Awake, addr 0xa453c8c, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method HandlePostprocessed, addr 0xa4541d8, size 0x19c, virtual false, abstract: false, final false
inline void HandlePostprocessed() ;

/// @brief Method HandleStateChanged, addr 0xa4541a8, size 0x30, virtual false, abstract: false, final false
inline void HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  stateArgs) ;

/// @brief Method InjectAllPinchPointerVisual, addr 0xa454400, size 0x2c, virtual false, abstract: false, final false
inline void InjectAllPinchPointerVisual(::Oculus::Interaction::IInteractor*  interactor, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

/// @brief Method InjectInteractor, addr 0xa45442c, size 0xcc, virtual false, abstract: false, final false
inline void InjectInteractor(::Oculus::Interaction::IInteractor*  interactor) ;

/// @brief Method InjectSkinnedMeshRenderer, addr 0xa4544f8, size 0x8, virtual false, abstract: false, final false
inline void InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

static inline ::Oculus::Interaction::PinchPointerVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa453f30, size 0x1c4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa453d6c, size 0x1c4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetPositionAndRotation, addr 0xa4540f4, size 0xb4, virtual false, abstract: false, final false
inline void SetPositionAndRotation(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Start, addr 0xa453d40, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateColor, addr 0xa454374, size 0x8c, virtual false, abstract: false, final false
inline void UpdateColor(bool  highlight, float_t  mappedPinchStrength) ;

constexpr ::Oculus::Interaction::IInteractor* const& __cordl_internal_get_Interactor() const;

constexpr ::Oculus::Interaction::IInteractor*& __cordl_internal_get_Interactor() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_Progress() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_Progress() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__alphaRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__alphaRange() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__interactor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__localOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__localOffset() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__progress() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__progress() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__remapCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__remapCurve() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get__tint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get__tint() ;

constexpr void __cordl_internal_set_Interactor(::Oculus::Interaction::IInteractor*  value) ;

constexpr void __cordl_internal_set_Progress(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set__alphaRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__interactor(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__localOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__progress(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__remapCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__tint(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xa454500, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlphaRange, addr 0xa453c64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_AlphaRange() ;

/// @brief Method get_LocalOffset, addr 0xa453c3c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_LocalOffset() ;

/// @brief Method get_RemapCurve, addr 0xa453c54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RemapCurve() ;

/// @brief Method get_Tint, addr 0xa453c74, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Color get_Tint() ;

/// @brief Method set_AlphaRange, addr 0xa453c6c, size 0x8, virtual false, abstract: false, final false
inline void set_AlphaRange(::UnityEngine::Vector2  value) ;

/// @brief Method set_LocalOffset, addr 0xa453c48, size 0xc, virtual false, abstract: false, final false
inline void set_LocalOffset(::UnityEngine::Vector3  value) ;

/// @brief Method set_RemapCurve, addr 0xa453c5c, size 0x8, virtual false, abstract: false, final false
inline void set_RemapCurve(::UnityEngine::AnimationCurve*  value) ;

/// @brief Method set_Tint, addr 0xa453c80, size 0xc, virtual false, abstract: false, final false
inline void set_Tint(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PinchPointerVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PinchPointerVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PinchPointerVisual(PinchPointerVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PinchPointerVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PinchPointerVisual(PinchPointerVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15848};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____interactor;

/// @brief Field Interactor, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::IInteractor*  ___Interactor;

/// [SerializeField]
/// @brief Field _skinnedMeshRenderer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____skinnedMeshRenderer;

/// [SerializeField]
/// @brief Field _localOffset, offset: 0x38, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____localOffset;

/// [SerializeField]
/// @brief Field _remapCurve, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____remapCurve;

/// [SerializeField]
/// @brief Field _alphaRange, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____alphaRange;

/// [SerializeField]
/// @brief Field _tint, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ____tint;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// [Optional]
/// @brief Field _progress, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____progress;

/// @brief Field Progress, offset: 0x70, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___Progress;

/// @brief Field _started, offset: 0x78, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ___Interactor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____skinnedMeshRenderer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____localOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____remapCurve) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____alphaRange) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____tint) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____progress) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ___Progress) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PinchPointerVisual, ____started) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PinchPointerVisual) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction

#pragma once
// IWYU pragma private; include "Oculus/Interaction/RayInteractorPinchVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
CORDL_MODULE_EXPORT(RayInteractorPinchVisual)
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
class RayInteractor;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class SkinnedMeshRenderer;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction {
class RayInteractorPinchVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::RayInteractorPinchVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::RayInteractorPinchVisual*, "Oculus.Interaction", "RayInteractorPinchVisual");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.RayInteractorPinchVisual
class CORDL_TYPE RayInteractorPinchVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AlphaRange, put=set_AlphaRange)) ::UnityEngine::Vector2  AlphaRange;

/// @brief Field Hand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

 __declspec(property(get=get_RemapCurve, put=set_RemapCurve)) ::UnityEngine::AnimationCurve*  RemapCurve;

/// @brief Field _alphaRange, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__alphaRange, put=__cordl_internal_set__alphaRange)) ::UnityEngine::Vector2  _alphaRange;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _rayInteractor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__rayInteractor, put=__cordl_internal_set__rayInteractor)) ::UnityW<::Oculus::Interaction::RayInteractor>  _rayInteractor;

/// @brief Field _remapCurve, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__remapCurve, put=__cordl_internal_set__remapCurve)) ::UnityEngine::AnimationCurve*  _remapCurve;

/// @brief Field _skinnedMeshRenderer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__skinnedMeshRenderer, put=__cordl_internal_set__skinnedMeshRenderer)) ::UnityW<::UnityEngine::SkinnedMeshRenderer>  _skinnedMeshRenderer;

/// @brief Field _started, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Method Awake, addr 0xa45f020, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAllRayInteractorPinchVisual, addr 0xa45f8fc, size 0x40, virtual false, abstract: false, final false
inline void InjectAllRayInteractorPinchVisual(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::RayInteractor*  rayInteractor, ::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

/// @brief Method InjectHand, addr 0xa45f93c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

/// @brief Method InjectRayInteractor, addr 0xa45fa0c, size 0x8, virtual false, abstract: false, final false
inline void InjectRayInteractor(::Oculus::Interaction::RayInteractor*  rayInteractor) ;

/// @brief Method InjectSkinnedMeshRenderer, addr 0xa45fa14, size 0x8, virtual false, abstract: false, final false
inline void InjectSkinnedMeshRenderer(::UnityEngine::SkinnedMeshRenderer*  skinnedMeshRenderer) ;

static inline ::Oculus::Interaction::RayInteractorPinchVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa45f7cc, size 0x12c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa45f0b4, size 0x134, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa45f088, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateVisual, addr 0xa45f1e8, size 0x5e4, virtual false, abstract: false, final false
inline void UpdateVisual() ;

/// @brief Method UpdateVisualState, addr 0xa45f8f8, size 0x4, virtual false, abstract: false, final false
inline void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs  args) ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__alphaRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__alphaRange() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor> const& __cordl_internal_get__rayInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::RayInteractor>& __cordl_internal_get__rayInteractor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get__remapCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__remapCurve() ;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer> const& __cordl_internal_get__skinnedMeshRenderer() const;

constexpr ::UnityW<::UnityEngine::SkinnedMeshRenderer>& __cordl_internal_get__skinnedMeshRenderer() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__alphaRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__rayInteractor(::UnityW<::Oculus::Interaction::RayInteractor>  value) ;

constexpr void __cordl_internal_set__remapCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set__skinnedMeshRenderer(::UnityW<::UnityEngine::SkinnedMeshRenderer>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa45fa1c, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlphaRange, addr 0xa45f010, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_AlphaRange() ;

/// @brief Method get_RemapCurve, addr 0xa45f000, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* get_RemapCurve() ;

/// @brief Method set_AlphaRange, addr 0xa45f018, size 0x8, virtual false, abstract: false, final false
inline void set_AlphaRange(::UnityEngine::Vector2  value) ;

/// @brief Method set_RemapCurve, addr 0xa45f008, size 0x8, virtual false, abstract: false, final false
inline void set_RemapCurve(::UnityEngine::AnimationCurve*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RayInteractorPinchVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorPinchVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RayInteractorPinchVisual(RayInteractorPinchVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RayInteractorPinchVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RayInteractorPinchVisual(RayInteractorPinchVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15869};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// @brief Field Hand, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// [SerializeField]
/// @brief Field _rayInteractor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::RayInteractor>  ____rayInteractor;

/// [SerializeField]
/// @brief Field _skinnedMeshRenderer, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SkinnedMeshRenderer>  ____skinnedMeshRenderer;

/// [SerializeField]
/// @brief Field _remapCurve, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____remapCurve;

/// [SerializeField]
/// @brief Field _alphaRange, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____alphaRange;

/// @brief Field _started, offset: 0x50, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ___Hand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____rayInteractor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____skinnedMeshRenderer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____remapCurve) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____alphaRange) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::RayInteractorPinchVisual, ____started) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::RayInteractorPinchVisual) == 0x58, "Size mismatch!");

} // namespace end def Oculus::Interaction

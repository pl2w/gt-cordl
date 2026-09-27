#pragma once
// IWYU pragma private; include "Oculus/Interaction/TouchHandGrabInteractorVisual.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(TouchHandGrabInteractorVisual)
namespace Oculus::Interaction::Input {
class SyntheticHand;
}
namespace Oculus::Interaction {
class TouchHandGrabInteractor;
}
// Forward declare root types
namespace Oculus::Interaction {
class TouchHandGrabInteractorVisual;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::TouchHandGrabInteractorVisual*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::TouchHandGrabInteractorVisual*, "Oculus.Interaction", "TouchHandGrabInteractorVisual");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.TouchHandGrabInteractorVisual
class CORDL_TYPE TouchHandGrabInteractorVisual : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _interactor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactor, put=__cordl_internal_set__interactor)) ::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>  _interactor;

/// @brief Field _started, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _syntheticHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__syntheticHand, put=__cordl_internal_set__syntheticHand)) ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  _syntheticHand;

/// @brief Method InjectSyntheticHand, addr 0xa468a4c, size 0x8, virtual false, abstract: false, final false
inline void InjectSyntheticHand(::Oculus::Interaction::Input::SyntheticHand*  syntheticHand) ;

static inline ::Oculus::Interaction::TouchHandGrabInteractorVisual* New_ctor() ;

/// @brief Method OnDisable, addr 0xa468b18, size 0x98, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa468a80, size 0x98, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Start, addr 0xa468a54, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa468e84, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLocks, addr 0xa468bb0, size 0x2d4, virtual false, abstract: false, final false
inline void UpdateLocks() ;

constexpr ::UnityW<::Oculus::Interaction::TouchHandGrabInteractor> const& __cordl_internal_get__interactor() const;

constexpr ::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>& __cordl_internal_get__interactor() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand> const& __cordl_internal_get__syntheticHand() const;

constexpr ::UnityW<::Oculus::Interaction::Input::SyntheticHand>& __cordl_internal_get__syntheticHand() ;

constexpr void __cordl_internal_set__interactor(::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__syntheticHand(::UnityW<::Oculus::Interaction::Input::SyntheticHand>  value) ;

/// @brief Method .ctor, addr 0xa468e88, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TouchHandGrabInteractorVisual() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractorVisual", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TouchHandGrabInteractorVisual(TouchHandGrabInteractorVisual && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TouchHandGrabInteractorVisual", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TouchHandGrabInteractorVisual(TouchHandGrabInteractorVisual const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15892};

/// [SerializeField]
/// @brief Field _interactor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::TouchHandGrabInteractor>  ____interactor;

/// [SerializeField]
/// @brief Field _syntheticHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::Input::SyntheticHand>  ____syntheticHand;

/// @brief Field _started, offset: 0x30, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractorVisual, ____interactor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractorVisual, ____syntheticHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::TouchHandGrabInteractorVisual, ____started) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::TouchHandGrabInteractorVisual) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction

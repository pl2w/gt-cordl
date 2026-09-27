#pragma once
// IWYU pragma private; include "Oculus/Interaction/Samples/HideHandVisualOnGrab.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(HideHandVisualOnGrab)
namespace Oculus::Interaction::HandGrab {
class HandGrabInteractor;
}
namespace Oculus::Interaction {
class IHandVisual;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction::Samples {
class HideHandVisualOnGrab;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Samples::HideHandVisualOnGrab*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Samples::HideHandVisualOnGrab*, "Oculus.Interaction.Samples", "HideHandVisualOnGrab");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction::Samples {
// Is value type: false
// CS Name: Oculus.Interaction.Samples.HideHandVisualOnGrab
class CORDL_TYPE HideHandVisualOnGrab : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field HandVisual, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_HandVisual, put=__cordl_internal_set_HandVisual)) ::Oculus::Interaction::IHandVisual*  HandVisual;

/// @brief Field _handGrabInteractor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__handGrabInteractor, put=__cordl_internal_set__handGrabInteractor)) ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  _handGrabInteractor;

/// @brief Field _handVisual, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__handVisual, put=__cordl_internal_set__handVisual)) ::UnityW<::UnityEngine::Object>  _handVisual;

/// @brief Method Awake, addr 0xa4376d8, size 0x68, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InjectAll, addr 0xa437920, size 0x2c, virtual false, abstract: false, final false
inline void InjectAll(::Oculus::Interaction::HandGrab::HandGrabInteractor*  handGrabInteractor, ::Oculus::Interaction::IHandVisual*  handVisual) ;

/// @brief Method InjectHandGrabInteractor, addr 0xa437a1c, size 0x8, virtual false, abstract: false, final false
inline void InjectHandGrabInteractor(::Oculus::Interaction::HandGrab::HandGrabInteractor*  handGrabInteractor) ;

/// @brief Method InjectHandVisual, addr 0xa43794c, size 0xd0, virtual false, abstract: false, final false
inline void InjectHandVisual(::Oculus::Interaction::IHandVisual*  handVisual) ;

static inline ::Oculus::Interaction::Samples::HideHandVisualOnGrab* New_ctor() ;

/// @brief Method Start, addr 0xa437740, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa437744, size 0x1dc, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::Oculus::Interaction::IHandVisual* const& __cordl_internal_get_HandVisual() const;

constexpr ::Oculus::Interaction::IHandVisual*& __cordl_internal_get_HandVisual() ;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor> const& __cordl_internal_get__handGrabInteractor() const;

constexpr ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>& __cordl_internal_get__handGrabInteractor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__handVisual() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__handVisual() ;

constexpr void __cordl_internal_set_HandVisual(::Oculus::Interaction::IHandVisual*  value) ;

constexpr void __cordl_internal_set__handGrabInteractor(::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  value) ;

constexpr void __cordl_internal_set__handVisual(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0xa437a24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HideHandVisualOnGrab() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HideHandVisualOnGrab", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HideHandVisualOnGrab(HideHandVisualOnGrab && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HideHandVisualOnGrab", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HideHandVisualOnGrab(HideHandVisualOnGrab const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28302};

/// [SerializeField]
/// @brief Field _handGrabInteractor, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::HandGrab::HandGrabInteractor>  ____handGrabInteractor;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IHandVisual), new[] {  })]
/// @brief Field _handVisual, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____handVisual;

/// @brief Field HandVisual, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IHandVisual*  ___HandVisual;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Samples::HideHandVisualOnGrab, ____handGrabInteractor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::HideHandVisualOnGrab, ____handVisual) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Samples::HideHandVisualOnGrab, ___HandVisual) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Samples::HideHandVisualOnGrab) == 0x38, "Size mismatch!");

} // namespace end def Oculus::Interaction::Samples

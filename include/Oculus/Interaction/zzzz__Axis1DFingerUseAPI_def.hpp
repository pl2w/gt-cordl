#pragma once
// IWYU pragma private; include "Oculus/Interaction/Axis1DFingerUseAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Axis1DFingerUseAPI)
namespace Oculus::Interaction::Input {
struct HandFinger;
}
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::Input {
class IHand;
}
namespace Oculus::Interaction {
class IFingerUseAPI;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class Axis1DFingerUseAPI;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Axis1DFingerUseAPI*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Axis1DFingerUseAPI*, "Oculus.Interaction", "Axis1DFingerUseAPI");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.Axis1DFingerUseAPI
class CORDL_TYPE Axis1DFingerUseAPI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field Axis, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_Axis, put=__cordl_internal_set_Axis)) ::Oculus::Interaction::Input::IAxis1D*  Axis;

/// @brief Field Hand, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Hand, put=__cordl_internal_set_Hand)) ::Oculus::Interaction::Input::IHand*  Hand;

/// @brief Field _axis, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__axis, put=__cordl_internal_set__axis)) ::UnityW<::UnityEngine::Object>  _axis;

/// @brief Field _hand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__hand, put=__cordl_internal_set__hand)) ::UnityW<::UnityEngine::Object>  _hand;

/// @brief Field _started, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Convert operator to "::Oculus::Interaction::IFingerUseAPI"
constexpr operator  ::Oculus::Interaction::IFingerUseAPI*() noexcept;

/// @brief Method Awake, addr 0xa46a108, size 0xb4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetFingerUseStrength, addr 0xa46a1e8, size 0x134, virtual true, abstract: false, final true
inline float_t GetFingerUseStrength(::Oculus::Interaction::Input::HandFinger  finger) ;

/// @brief Method InjectAllUseFingerPinchPressureApi, addr 0xa46a31c, size 0x28, virtual false, abstract: false, final false
inline void InjectAllUseFingerPinchPressureApi(::Oculus::Interaction::Input::IHand*  hand, ::Oculus::Interaction::Input::IAxis1D*  axis) ;

/// @brief Method InjectAxis, addr 0xa46a414, size 0xcc, virtual false, abstract: false, final false
inline void InjectAxis(::Oculus::Interaction::Input::IAxis1D*  pinchPressure) ;

/// @brief Method InjectHand, addr 0xa46a344, size 0xd0, virtual false, abstract: false, final false
inline void InjectHand(::Oculus::Interaction::Input::IHand*  hand) ;

static inline ::Oculus::Interaction::Axis1DFingerUseAPI* New_ctor() ;

/// @brief Method Start, addr 0xa46a1bc, size 0x2c, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::Oculus::Interaction::Input::IAxis1D* const& __cordl_internal_get_Axis() const;

constexpr ::Oculus::Interaction::Input::IAxis1D*& __cordl_internal_get_Axis() ;

constexpr ::Oculus::Interaction::Input::IHand* const& __cordl_internal_get_Hand() const;

constexpr ::Oculus::Interaction::Input::IHand*& __cordl_internal_get_Hand() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__axis() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__axis() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__hand() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__hand() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr void __cordl_internal_set_Axis(::Oculus::Interaction::Input::IAxis1D*  value) ;

constexpr void __cordl_internal_set_Hand(::Oculus::Interaction::Input::IHand*  value) ;

constexpr void __cordl_internal_set__axis(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__hand(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

/// @brief Method .ctor, addr 0xa46a4e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::IFingerUseAPI"
constexpr ::Oculus::Interaction::IFingerUseAPI* i___Oculus__Interaction__IFingerUseAPI() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Axis1DFingerUseAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Axis1DFingerUseAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Axis1DFingerUseAPI(Axis1DFingerUseAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Axis1DFingerUseAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Axis1DFingerUseAPI(Axis1DFingerUseAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15895};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IHand), new[] {  })]
/// @brief Field _hand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____hand;

/// [FormerlySerializedAs("_pressureAxis")]
/// [FormerlySerializedAs("_pinchPressure")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.Input.IAxis1D), new[] {  })]
/// @brief Field _axis, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____axis;

/// @brief Field Hand, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IHand*  ___Hand;

/// @brief Field Axis, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::Input::IAxis1D*  ___Axis;

/// @brief Field _started, offset: 0x40, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Axis1DFingerUseAPI, ____hand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DFingerUseAPI, ____axis) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DFingerUseAPI, ___Hand) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DFingerUseAPI, ___Axis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Axis1DFingerUseAPI, ____started) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Axis1DFingerUseAPI) == 0x48, "Size mismatch!");

} // namespace end def Oculus::Interaction

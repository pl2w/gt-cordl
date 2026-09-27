#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRAxis2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRAxis2D)
namespace Oculus::Interaction::Input {
class IAxis2D;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Oculus::Interaction::OVR::Input {
class OVRAxis2D;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVR::Input::OVRAxis2D*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::Input::OVRAxis2D*, "Oculus.Interaction.OVR.Input", "OVRAxis2D");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Axis2D, OVRInput::Controller, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::OVR::Input {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.Input.OVRAxis2D
class CORDL_TYPE OVRAxis2D : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _axis2D, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis2D, put=__cordl_internal_set__axis2D)) ::GlobalNamespace::OVRInput_Axis2D  _axis2D;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis2D"
constexpr operator  ::Oculus::Interaction::Input::IAxis2D*() noexcept;

static inline ::Oculus::Interaction::OVR::Input::OVRAxis2D* New_ctor() ;

/// @brief Method Value, addr 0xa41b250, size 0x60, virtual true, abstract: false, final true
inline ::UnityEngine::Vector2 Value() ;

constexpr ::GlobalNamespace::OVRInput_Axis2D const& __cordl_internal_get__axis2D() const;

constexpr ::GlobalNamespace::OVRInput_Axis2D& __cordl_internal_get__axis2D() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr void __cordl_internal_set__axis2D(::GlobalNamespace::OVRInput_Axis2D  value) ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

/// @brief Method .ctor, addr 0xa41b2b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis2D"
constexpr ::Oculus::Interaction::Input::IAxis2D* i___Oculus__Interaction__Input__IAxis2D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAxis2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis2D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAxis2D(OVRAxis2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis2D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAxis2D(OVRAxis2D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31130};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _axis2D, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Axis2D  ____axis2D;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis2D, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis2D, ____axis2D) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::Input::OVRAxis2D) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR::Input

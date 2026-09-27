#pragma once
// IWYU pragma private; include "Oculus/Interaction/OVR/Input/OVRAxis1D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_Controller_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRAxis1D)
namespace Oculus::Interaction::Input {
class IAxis1D;
}
namespace Oculus::Interaction::OVR::Input {
class OVRAxis1D_RemapConfig;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace Oculus::Interaction::OVR::Input {
class OVRAxis1D;
}
namespace Oculus::Interaction::OVR::Input {
class OVRAxis1D_RemapConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::OVR::Input::OVRAxis1D*);
MARK_REF_T(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::Input::OVRAxis1D*, "Oculus.Interaction.OVR.Input", "OVRAxis1D");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*, "Oculus.Interaction.OVR.Input", "OVRAxis1D/RemapConfig");
// [Feature((Meta.XR.Util.Feature)6)]
// Dependencies OVRInput::Axis1D, OVRInput::Controller, UnityEngine.MonoBehaviour
namespace Oculus::Interaction::OVR::Input {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.Input.OVRAxis1D
class CORDL_TYPE OVRAxis1D : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RemapConfig = ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig;

/// @brief Field _axis1D, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis1D, put=__cordl_internal_set__axis1D)) ::GlobalNamespace::OVRInput_Axis1D  _axis1D;

/// @brief Field _controller, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__controller, put=__cordl_internal_set__controller)) ::GlobalNamespace::OVRInput_Controller  _controller;

/// @brief Field _remapConfig, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__remapConfig, put=__cordl_internal_set__remapConfig)) ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*  _remapConfig;

/// @brief Convert operator to "::Oculus::Interaction::Input::IAxis1D"
constexpr operator  ::Oculus::Interaction::Input::IAxis1D*() noexcept;

static inline ::Oculus::Interaction::OVR::Input::OVRAxis1D* New_ctor() ;

/// @brief Method Value, addr 0xa41b118, size 0x90, virtual true, abstract: false, final true
inline float_t Value() ;

constexpr ::GlobalNamespace::OVRInput_Axis1D const& __cordl_internal_get__axis1D() const;

constexpr ::GlobalNamespace::OVRInput_Axis1D& __cordl_internal_get__axis1D() ;

constexpr ::GlobalNamespace::OVRInput_Controller const& __cordl_internal_get__controller() const;

constexpr ::GlobalNamespace::OVRInput_Controller& __cordl_internal_get__controller() ;

constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig* const& __cordl_internal_get__remapConfig() const;

constexpr ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*& __cordl_internal_get__remapConfig() ;

constexpr void __cordl_internal_set__axis1D(::GlobalNamespace::OVRInput_Axis1D  value) ;

constexpr void __cordl_internal_set__controller(::GlobalNamespace::OVRInput_Controller  value) ;

constexpr void __cordl_internal_set__remapConfig(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*  value) ;

/// @brief Method .ctor, addr 0xa41b1a8, size 0xa0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Oculus::Interaction::Input::IAxis1D"
constexpr ::Oculus::Interaction::Input::IAxis1D* i___Oculus__Interaction__Input__IAxis1D() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAxis1D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis1D", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAxis1D(OVRAxis1D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis1D", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAxis1D(OVRAxis1D const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31129};

/// [SerializeField]
/// @brief Field _controller, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Controller  ____controller;

/// [SerializeField]
/// @brief Field _axis1D, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Axis1D  ____axis1D;

/// [SerializeField]
/// @brief Field _remapConfig, offset: 0x28, size: 0x8, def value: None
 ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig*  ____remapConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis1D, ____controller) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis1D, ____axis1D) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis1D, ____remapConfig) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::Input::OVRAxis1D) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR::Input
// Dependencies System.Object
namespace Oculus::Interaction::OVR::Input {
// Is value type: false
// CS Name: Oculus.Interaction.OVR.Input.OVRAxis1D/RemapConfig
class CORDL_TYPE OVRAxis1D_RemapConfig : public ::System::Object {
public:
// Declarations
/// @brief Field Curve, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Curve, put=__cordl_internal_set_Curve)) ::UnityEngine::AnimationCurve*  Curve;

/// @brief Field Enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_Enabled, put=__cordl_internal_set_Enabled)) bool  Enabled;

static inline ::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_Curve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_Curve() ;

constexpr bool const& __cordl_internal_get_Enabled() const;

constexpr bool& __cordl_internal_get_Enabled() ;

constexpr void __cordl_internal_set_Curve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_Enabled(bool  value) ;

/// @brief Method .ctor, addr 0xa41b248, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRAxis1D_RemapConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis1D_RemapConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRAxis1D_RemapConfig(OVRAxis1D_RemapConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRAxis1D_RemapConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRAxis1D_RemapConfig(OVRAxis1D_RemapConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31128};

/// @brief Field Enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___Enabled;

/// @brief Field Curve, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___Curve;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig, ___Enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig, ___Curve) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::OVR::Input::OVRAxis1D_RemapConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::OVR::Input

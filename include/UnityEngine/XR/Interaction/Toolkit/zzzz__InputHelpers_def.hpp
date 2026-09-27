#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InputHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InputHelpers_ButtonInfo_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(InputHelpers)
namespace GlobalNamespace {
struct InputHelpers_Axis2D;
}
namespace GlobalNamespace {
struct InputHelpers_ButtonInfo;
}
namespace GlobalNamespace {
struct InputHelpers_ButtonReadType;
}
namespace GlobalNamespace {
struct InputHelpers_Button;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InputHelpers;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::InputHelpers*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InputHelpers*, "UnityEngine.XR.Interaction.Toolkit", "InputHelpers");
// [Extension]
// [Obsolete("InputHelpers has been deprecated in version 3.0.0. Use XRInputDeviceButtonReader or XRInputDeviceValueReader instead.")]
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.InputHelpers::ButtonInfo
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.InputHelpers
class CORDL_TYPE InputHelpers : public ::System::Object {
public:
// Declarations
using Axis2D = ::GlobalNamespace::InputHelpers_Axis2D;

using Button = ::GlobalNamespace::InputHelpers_Button;

using ButtonInfo = ::GlobalNamespace::InputHelpers_ButtonInfo;

using ButtonReadType = ::GlobalNamespace::InputHelpers_ButtonReadType;

/// @brief Field s_Axis2DNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Axis2DNames, put=setStaticF_s_Axis2DNames)) ::ArrayW<::StringW>  s_Axis2DNames;

/// @brief Field s_ButtonData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ButtonData, put=setStaticF_s_ButtonData)) ::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>  s_ButtonData;

/// [Extension]
/// [Obsolete("IsPressed has been deprecated in version 3.0.0. Use XRInputDeviceButtonReader instead.")]
/// @brief Method IsPressed, addr 0xb41b248, size 0x354, virtual false, abstract: false, final false
static inline bool IsPressed(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Button  button, ::by_ref<bool>  isPressed, float_t  pressThreshold) ;

/// [Extension]
/// [Obsolete("TryReadAxis2DValue has been deprecated in version 3.0.0. Use XRInputDeviceValueReader instead.")]
/// @brief Method TryReadAxis2DValue, addr 0xb41b8b0, size 0x164, virtual false, abstract: false, final false
static inline bool TryReadAxis2DValue(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Axis2D  axis2D, ::by_ref<::UnityEngine::Vector2>  value) ;

/// [Extension]
/// [Obsolete("TryReadSingleValue has been deprecated in version 3.0.0. Use XRInputDeviceValueReader instead.")]
/// @brief Method TryReadSingleValue, addr 0xb41b59c, size 0x314, virtual false, abstract: false, final false
static inline bool TryReadSingleValue(::UnityEngine::XR::InputDevice  device, ::GlobalNamespace::InputHelpers_Button  button, ::by_ref<float_t>  singleValue) ;

static inline ::ArrayW<::StringW> getStaticF_s_Axis2DNames() ;

static inline ::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo> getStaticF_s_ButtonData() ;

static inline void setStaticF_s_Axis2DNames(::ArrayW<::StringW>  value) ;

static inline void setStaticF_s_ButtonData(::ArrayW<::GlobalNamespace::InputHelpers_ButtonInfo>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputHelpers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputHelpers(InputHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputHelpers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputHelpers(InputHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11133};

/// @brief Field k_DefaultPressThreshold offset 0xffffffff size 0x4
static constexpr float_t  k_DefaultPressThreshold{static_cast<float_t>(0.1f)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InputHelpers) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageAxis2DMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Axis2D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis2DUsage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UsageAxis2DMapping)
namespace GlobalNamespace {
struct OVRInput_Axis2D;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
struct ControllerAxis2DUsage;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
class IUsage;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class UsageAxis2DMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::UsageAxis2DMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::UsageAxis2DMapping*, "Oculus.Interaction.Input", "UsageAxis2DMapping");
// Dependencies OVRInput::Axis2D, Oculus.Interaction.Input.ControllerAxis2DUsage, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.UsageAxis2DMapping
class CORDL_TYPE UsageAxis2DMapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Axis2D)) ::GlobalNamespace::OVRInput_Axis2D  Axis2D;

 __declspec(property(get=get_Usage)) ::Oculus::Interaction::Input::ControllerAxis2DUsage  Usage;

/// @brief Field <Axis2D>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Axis2D_k__BackingField, put=__cordl_internal_set__Axis2D_k__BackingField)) ::GlobalNamespace::OVRInput_Axis2D  _Axis2D_k__BackingField;

/// @brief Field <Usage>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Usage_k__BackingField, put=__cordl_internal_set__Usage_k__BackingField)) ::Oculus::Interaction::Input::ControllerAxis2DUsage  _Usage_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr operator  ::Oculus::Interaction::Input::IUsage*() noexcept;

/// @brief Method Apply, addr 0xa41bf28, size 0x88, virtual true, abstract: false, final true
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

static inline ::Oculus::Interaction::Input::UsageAxis2DMapping* New_ctor(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::GlobalNamespace::OVRInput_Axis2D  axis2D) ;

constexpr ::GlobalNamespace::OVRInput_Axis2D const& __cordl_internal_get__Axis2D_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Axis2D& __cordl_internal_get__Axis2D_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage const& __cordl_internal_get__Usage_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ControllerAxis2DUsage& __cordl_internal_get__Usage_k__BackingField() ;

constexpr void __cordl_internal_set__Axis2D_k__BackingField(::GlobalNamespace::OVRInput_Axis2D  value) ;

constexpr void __cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerAxis2DUsage  value) ;

/// @brief Method .ctor, addr 0xa41befc, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::ControllerAxis2DUsage  usage, ::GlobalNamespace::OVRInput_Axis2D  axis2D) ;

/// [CompilerGenerated]
/// @brief Method get_Axis2D, addr 0xa41bef4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Axis2D get_Axis2D() ;

/// [CompilerGenerated]
/// @brief Method get_Usage, addr 0xa41beec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerAxis2DUsage get_Usage() ;

/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* i___Oculus__Interaction__Input__IUsage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UsageAxis2DMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UsageAxis2DMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UsageAxis2DMapping(UsageAxis2DMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsageAxis2DMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsageAxis2DMapping(UsageAxis2DMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31140};

/// [CompilerGenerated]
/// @brief Field <Usage>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerAxis2DUsage  ____Usage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Axis2D>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Axis2D  ____Axis2D_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::UsageAxis2DMapping, ____Usage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::UsageAxis2DMapping, ____Axis2D_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::UsageAxis2DMapping) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

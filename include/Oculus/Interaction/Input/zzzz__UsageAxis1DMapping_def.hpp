#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageAxis1DMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Axis1D_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerAxis1DUsage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UsageAxis1DMapping)
namespace GlobalNamespace {
struct OVRInput_Axis1D;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
struct ControllerAxis1DUsage;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
class IUsage;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class UsageAxis1DMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::UsageAxis1DMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::UsageAxis1DMapping*, "Oculus.Interaction.Input", "UsageAxis1DMapping");
// Dependencies OVRInput::Axis1D, Oculus.Interaction.Input.ControllerAxis1DUsage, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.UsageAxis1DMapping
class CORDL_TYPE UsageAxis1DMapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Axis1D)) ::GlobalNamespace::OVRInput_Axis1D  Axis1D;

 __declspec(property(get=get_Usage)) ::Oculus::Interaction::Input::ControllerAxis1DUsage  Usage;

/// @brief Field <Axis1D>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Axis1D_k__BackingField, put=__cordl_internal_set__Axis1D_k__BackingField)) ::GlobalNamespace::OVRInput_Axis1D  _Axis1D_k__BackingField;

/// @brief Field <Usage>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Usage_k__BackingField, put=__cordl_internal_set__Usage_k__BackingField)) ::Oculus::Interaction::Input::ControllerAxis1DUsage  _Usage_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr operator  ::Oculus::Interaction::Input::IUsage*() noexcept;

/// @brief Method Apply, addr 0xa41be64, size 0x88, virtual true, abstract: false, final true
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

static inline ::Oculus::Interaction::Input::UsageAxis1DMapping* New_ctor(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, ::GlobalNamespace::OVRInput_Axis1D  axis1D) ;

constexpr ::GlobalNamespace::OVRInput_Axis1D const& __cordl_internal_get__Axis1D_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Axis1D& __cordl_internal_get__Axis1D_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage const& __cordl_internal_get__Usage_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ControllerAxis1DUsage& __cordl_internal_get__Usage_k__BackingField() ;

constexpr void __cordl_internal_set__Axis1D_k__BackingField(::GlobalNamespace::OVRInput_Axis1D  value) ;

constexpr void __cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerAxis1DUsage  value) ;

/// @brief Method .ctor, addr 0xa41be38, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::ControllerAxis1DUsage  usage, ::GlobalNamespace::OVRInput_Axis1D  axis1D) ;

/// [CompilerGenerated]
/// @brief Method get_Axis1D, addr 0xa41be30, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Axis1D get_Axis1D() ;

/// [CompilerGenerated]
/// @brief Method get_Usage, addr 0xa41be28, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerAxis1DUsage get_Usage() ;

/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* i___Oculus__Interaction__Input__IUsage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UsageAxis1DMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UsageAxis1DMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UsageAxis1DMapping(UsageAxis1DMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsageAxis1DMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsageAxis1DMapping(UsageAxis1DMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31139};

/// [CompilerGenerated]
/// @brief Field <Usage>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerAxis1DUsage  ____Usage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Axis1D>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Axis1D  ____Axis1D_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::UsageAxis1DMapping, ____Usage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::UsageAxis1DMapping, ____Axis1D_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::UsageAxis1DMapping) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

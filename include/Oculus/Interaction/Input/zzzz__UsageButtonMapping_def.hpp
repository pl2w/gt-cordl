#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageButtonMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Button_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UsageButtonMapping)
namespace GlobalNamespace {
struct OVRInput_Button;
}
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace Oculus::Interaction::Input {
struct ControllerButtonUsage;
}
namespace Oculus::Interaction::Input {
class ControllerDataAsset;
}
namespace Oculus::Interaction::Input {
class IUsage;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class UsageButtonMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::UsageButtonMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::UsageButtonMapping*, "Oculus.Interaction.Input", "UsageButtonMapping");
// Dependencies OVRInput::Button, Oculus.Interaction.Input.ControllerButtonUsage, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.UsageButtonMapping
class CORDL_TYPE UsageButtonMapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Button)) ::GlobalNamespace::OVRInput_Button  Button;

 __declspec(property(get=get_Usage)) ::Oculus::Interaction::Input::ControllerButtonUsage  Usage;

/// @brief Field <Button>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Button_k__BackingField, put=__cordl_internal_set__Button_k__BackingField)) ::GlobalNamespace::OVRInput_Button  _Button_k__BackingField;

/// @brief Field <Usage>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Usage_k__BackingField, put=__cordl_internal_set__Usage_k__BackingField)) ::Oculus::Interaction::Input::ControllerButtonUsage  _Usage_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr operator  ::Oculus::Interaction::Input::IUsage*() noexcept;

/// @brief Method Apply, addr 0xa41bd98, size 0x90, virtual true, abstract: false, final true
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

static inline ::Oculus::Interaction::Input::UsageButtonMapping* New_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Button  button) ;

constexpr ::GlobalNamespace::OVRInput_Button const& __cordl_internal_get__Button_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Button& __cordl_internal_get__Button_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& __cordl_internal_get__Usage_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& __cordl_internal_get__Usage_k__BackingField() ;

constexpr void __cordl_internal_set__Button_k__BackingField(::GlobalNamespace::OVRInput_Button  value) ;

constexpr void __cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

/// @brief Method .ctor, addr 0xa41bd6c, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Button  button) ;

/// [CompilerGenerated]
/// @brief Method get_Button, addr 0xa41bd64, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Button get_Button() ;

/// [CompilerGenerated]
/// @brief Method get_Usage, addr 0xa41bd5c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerButtonUsage get_Usage() ;

/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* i___Oculus__Interaction__Input__IUsage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UsageButtonMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UsageButtonMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UsageButtonMapping(UsageButtonMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsageButtonMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsageButtonMapping(UsageButtonMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31138};

/// [CompilerGenerated]
/// @brief Field <Usage>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerButtonUsage  ____Usage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Button>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Button  ____Button_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::UsageButtonMapping, ____Usage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::UsageButtonMapping, ____Button_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::UsageButtonMapping) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/UsageTouchMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRInput_Touch_def.hpp"
#include "Oculus/Interaction/Input/zzzz__ControllerButtonUsage_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UsageTouchMapping)
namespace GlobalNamespace {
struct OVRInput_Controller;
}
namespace GlobalNamespace {
struct OVRInput_Touch;
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
class UsageTouchMapping;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::UsageTouchMapping*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::UsageTouchMapping*, "Oculus.Interaction.Input", "UsageTouchMapping");
// Dependencies OVRInput::Touch, Oculus.Interaction.Input.ControllerButtonUsage, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.UsageTouchMapping
class CORDL_TYPE UsageTouchMapping : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Touch)) ::GlobalNamespace::OVRInput_Touch  Touch;

 __declspec(property(get=get_Usage)) ::Oculus::Interaction::Input::ControllerButtonUsage  Usage;

/// @brief Field <Touch>k__BackingField, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Touch_k__BackingField, put=__cordl_internal_set__Touch_k__BackingField)) ::GlobalNamespace::OVRInput_Touch  _Touch_k__BackingField;

/// @brief Field <Usage>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Usage_k__BackingField, put=__cordl_internal_set__Usage_k__BackingField)) ::Oculus::Interaction::Input::ControllerButtonUsage  _Usage_k__BackingField;

/// @brief Convert operator to "::Oculus::Interaction::Input::IUsage"
constexpr operator  ::Oculus::Interaction::Input::IUsage*() noexcept;

/// @brief Method Apply, addr 0xa41bccc, size 0x90, virtual true, abstract: false, final true
inline void Apply(::Oculus::Interaction::Input::ControllerDataAsset*  controllerDataAsset, ::GlobalNamespace::OVRInput_Controller  controllerMask) ;

static inline ::Oculus::Interaction::Input::UsageTouchMapping* New_ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Touch  touch) ;

constexpr ::GlobalNamespace::OVRInput_Touch const& __cordl_internal_get__Touch_k__BackingField() const;

constexpr ::GlobalNamespace::OVRInput_Touch& __cordl_internal_get__Touch_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage const& __cordl_internal_get__Usage_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ControllerButtonUsage& __cordl_internal_get__Usage_k__BackingField() ;

constexpr void __cordl_internal_set__Touch_k__BackingField(::GlobalNamespace::OVRInput_Touch  value) ;

constexpr void __cordl_internal_set__Usage_k__BackingField(::Oculus::Interaction::Input::ControllerButtonUsage  value) ;

/// @brief Method .ctor, addr 0xa41bca0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::Input::ControllerButtonUsage  usage, ::GlobalNamespace::OVRInput_Touch  touch) ;

/// [CompilerGenerated]
/// @brief Method get_Touch, addr 0xa41bc98, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRInput_Touch get_Touch() ;

/// [CompilerGenerated]
/// @brief Method get_Usage, addr 0xa41bc90, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ControllerButtonUsage get_Usage() ;

/// @brief Convert to "::Oculus::Interaction::Input::IUsage"
constexpr ::Oculus::Interaction::Input::IUsage* i___Oculus__Interaction__Input__IUsage() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UsageTouchMapping() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UsageTouchMapping", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UsageTouchMapping(UsageTouchMapping && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UsageTouchMapping", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UsageTouchMapping(UsageTouchMapping const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31137};

/// [CompilerGenerated]
/// @brief Field <Usage>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::ControllerButtonUsage  ____Usage_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Touch>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::OVRInput_Touch  ____Touch_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::UsageTouchMapping, ____Usage_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::UsageTouchMapping, ____Touch_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::UsageTouchMapping) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

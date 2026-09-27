#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ControllerDataSourceConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ControllerDataSourceConfig)
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class ControllerDataSourceConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::ControllerDataSourceConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::ControllerDataSourceConfig*, "Oculus.Interaction.Input", "ControllerDataSourceConfig");
// Dependencies Oculus.Interaction.Input.Handedness, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.ControllerDataSourceConfig
class CORDL_TYPE ControllerDataSourceConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Handedness, put=set_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_TrackingToWorldTransformer, put=set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <Handedness>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Handedness_k__BackingField, put=__cordl_internal_set__Handedness_k__BackingField)) ::Oculus::Interaction::Input::Handedness  _Handedness_k__BackingField;

/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackingToWorldTransformer_k__BackingField, put=__cordl_internal_set__TrackingToWorldTransformer_k__BackingField)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  _TrackingToWorldTransformer_k__BackingField;

static inline ::Oculus::Interaction::Input::ControllerDataSourceConfig* New_ctor() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__Handedness_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__Handedness_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() ;

constexpr void __cordl_internal_set__Handedness_k__BackingField(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

/// @brief Method .ctor, addr 0xa504ec8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Handedness, addr 0xa504ea8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// [CompilerGenerated]
/// @brief Method get_TrackingToWorldTransformer, addr 0xa504eb8, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// [CompilerGenerated]
/// @brief Method set_Handedness, addr 0xa504eb0, size 0x8, virtual false, abstract: false, final false
inline void set_Handedness(::Oculus::Interaction::Input::Handedness  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackingToWorldTransformer, addr 0xa504ec0, size 0x8, virtual false, abstract: false, final false
inline void set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ControllerDataSourceConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataSourceConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ControllerDataSourceConfig(ControllerDataSourceConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ControllerDataSourceConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ControllerDataSourceConfig(ControllerDataSourceConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16454};

/// [CompilerGenerated]
/// @brief Field <Handedness>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____Handedness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ____TrackingToWorldTransformer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataSourceConfig, ____Handedness_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::ControllerDataSourceConfig, ____TrackingToWorldTransformer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::ControllerDataSourceConfig) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

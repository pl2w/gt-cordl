#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HmdDataSourceConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HmdDataSourceConfig)
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HmdDataSourceConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HmdDataSourceConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HmdDataSourceConfig*, "Oculus.Interaction.Input", "HmdDataSourceConfig");
// Dependencies System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HmdDataSourceConfig
class CORDL_TYPE HmdDataSourceConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_TrackingToWorldTransformer, put=set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackingToWorldTransformer_k__BackingField, put=__cordl_internal_set__TrackingToWorldTransformer_k__BackingField)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  _TrackingToWorldTransformer_k__BackingField;

static inline ::Oculus::Interaction::Input::HmdDataSourceConfig* New_ctor() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() ;

constexpr void __cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

/// @brief Method .ctor, addr 0xa5136f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TrackingToWorldTransformer, addr 0xa5136e0, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// [CompilerGenerated]
/// @brief Method set_TrackingToWorldTransformer, addr 0xa5136e8, size 0x8, virtual false, abstract: false, final false
inline void set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HmdDataSourceConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HmdDataSourceConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HmdDataSourceConfig(HmdDataSourceConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HmdDataSourceConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HmdDataSourceConfig(HmdDataSourceConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16508};

/// [CompilerGenerated]
/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ____TrackingToWorldTransformer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HmdDataSourceConfig, ____TrackingToWorldTransformer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HmdDataSourceConfig) == 0x18, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

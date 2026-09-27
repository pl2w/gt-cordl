#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/HandDataSourceConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Input/zzzz__Handedness_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HandDataSourceConfig)
namespace Oculus::Interaction::Input {
class HandSkeleton;
}
namespace Oculus::Interaction::Input {
struct Handedness;
}
namespace Oculus::Interaction::Input {
class ITrackingToWorldTransformer;
}
// Forward declare root types
namespace Oculus::Interaction::Input {
class HandDataSourceConfig;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::Input::HandDataSourceConfig*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Input::HandDataSourceConfig*, "Oculus.Interaction.Input", "HandDataSourceConfig");
// Dependencies Oculus.Interaction.Input.Handedness, System.Object
namespace Oculus::Interaction::Input {
// Is value type: false
// CS Name: Oculus.Interaction.Input.HandDataSourceConfig
class CORDL_TYPE HandDataSourceConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_HandSkeleton, put=set_HandSkeleton)) ::Oculus::Interaction::Input::HandSkeleton*  HandSkeleton;

 __declspec(property(get=get_Handedness, put=set_Handedness)) ::Oculus::Interaction::Input::Handedness  Handedness;

 __declspec(property(get=get_TrackingToWorldTransformer, put=set_TrackingToWorldTransformer)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  TrackingToWorldTransformer;

/// @brief Field <HandSkeleton>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__HandSkeleton_k__BackingField, put=__cordl_internal_set__HandSkeleton_k__BackingField)) ::Oculus::Interaction::Input::HandSkeleton*  _HandSkeleton_k__BackingField;

/// @brief Field <Handedness>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Handedness_k__BackingField, put=__cordl_internal_set__Handedness_k__BackingField)) ::Oculus::Interaction::Input::Handedness  _Handedness_k__BackingField;

/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__TrackingToWorldTransformer_k__BackingField, put=__cordl_internal_set__TrackingToWorldTransformer_k__BackingField)) ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  _TrackingToWorldTransformer_k__BackingField;

static inline ::Oculus::Interaction::Input::HandDataSourceConfig* New_ctor() ;

constexpr ::Oculus::Interaction::Input::HandSkeleton* const& __cordl_internal_get__HandSkeleton_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::HandSkeleton*& __cordl_internal_get__HandSkeleton_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::Handedness const& __cordl_internal_get__Handedness_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::Handedness& __cordl_internal_get__Handedness_k__BackingField() ;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer* const& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() const;

constexpr ::Oculus::Interaction::Input::ITrackingToWorldTransformer*& __cordl_internal_get__TrackingToWorldTransformer_k__BackingField() ;

constexpr void __cordl_internal_set__HandSkeleton_k__BackingField(::Oculus::Interaction::Input::HandSkeleton*  value) ;

constexpr void __cordl_internal_set__Handedness_k__BackingField(::Oculus::Interaction::Input::Handedness  value) ;

constexpr void __cordl_internal_set__TrackingToWorldTransformer_k__BackingField(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

/// @brief Method .ctor, addr 0xa50e71c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_HandSkeleton, addr 0xa50e70c, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::HandSkeleton* get_HandSkeleton() ;

/// [CompilerGenerated]
/// @brief Method get_Handedness, addr 0xa50e6ec, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::Handedness get_Handedness() ;

/// [CompilerGenerated]
/// @brief Method get_TrackingToWorldTransformer, addr 0xa50e6fc, size 0x8, virtual false, abstract: false, final false
inline ::Oculus::Interaction::Input::ITrackingToWorldTransformer* get_TrackingToWorldTransformer() ;

/// [CompilerGenerated]
/// @brief Method set_HandSkeleton, addr 0xa50e714, size 0x8, virtual false, abstract: false, final false
inline void set_HandSkeleton(::Oculus::Interaction::Input::HandSkeleton*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Handedness, addr 0xa50e6f4, size 0x8, virtual false, abstract: false, final false
inline void set_Handedness(::Oculus::Interaction::Input::Handedness  value) ;

/// [CompilerGenerated]
/// @brief Method set_TrackingToWorldTransformer, addr 0xa50e704, size 0x8, virtual false, abstract: false, final false
inline void set_TrackingToWorldTransformer(::Oculus::Interaction::Input::ITrackingToWorldTransformer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HandDataSourceConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HandDataSourceConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HandDataSourceConfig(HandDataSourceConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HandDataSourceConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HandDataSourceConfig(HandDataSourceConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16489};

/// [CompilerGenerated]
/// @brief Field <Handedness>k__BackingField, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::Input::Handedness  ____Handedness_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TrackingToWorldTransformer>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::Oculus::Interaction::Input::ITrackingToWorldTransformer*  ____TrackingToWorldTransformer_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HandSkeleton>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Oculus::Interaction::Input::HandSkeleton*  ____HandSkeleton_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Input::HandDataSourceConfig, ____Handedness_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataSourceConfig, ____TrackingToWorldTransformer_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::Input::HandDataSourceConfig, ____HandSkeleton_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Input::HandDataSourceConfig) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::Input

#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Locomotion/ApplyBodyTransformationsEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ApplyBodyTransformationsEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class XRBodyTransformer;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
class ApplyBodyTransformationsEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs*, "UnityEngine.XR.Interaction.Toolkit.Locomotion", "ApplyBodyTransformationsEventArgs");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Locomotion {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Locomotion.ApplyBodyTransformationsEventArgs
class CORDL_TYPE ApplyBodyTransformationsEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field <bodyTransformer>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__bodyTransformer_k__BackingField, put=__cordl_internal_set__bodyTransformer_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  _bodyTransformer_k__BackingField;

 __declspec(property(get=get_bodyTransformer, put=set_bodyTransformer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  bodyTransformer;

static inline ::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs* New_ctor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> const& __cordl_internal_get__bodyTransformer_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>& __cordl_internal_get__bodyTransformer_k__BackingField() ;

constexpr void __cordl_internal_set__bodyTransformer_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  value) ;

/// @brief Method .ctor, addr 0xb449fb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_bodyTransformer, addr 0xb449fa8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer> get_bodyTransformer() ;

/// [CompilerGenerated]
/// @brief Method set_bodyTransformer, addr 0xb449fb0, size 0x8, virtual false, abstract: false, final false
inline void set_bodyTransformer(::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ApplyBodyTransformationsEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ApplyBodyTransformationsEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ApplyBodyTransformationsEventArgs(ApplyBodyTransformationsEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ApplyBodyTransformationsEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ApplyBodyTransformationsEventArgs(ApplyBodyTransformationsEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11346};

/// [CompilerGenerated]
/// @brief Field <bodyTransformer>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Locomotion::XRBodyTransformer>  ____bodyTransformer_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs, ____bodyTransformer_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Locomotion::ApplyBodyTransformationsEventArgs) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Locomotion

#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FeatureStateDescription_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FeatureDescription)
namespace Oculus::Interaction::PoseDetection {
class FeatureStateDescription;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FeatureDescription;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FeatureDescription*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FeatureDescription*, "Oculus.Interaction.PoseDetection", "FeatureDescription");
// Dependencies Oculus.Interaction.PoseDetection.FeatureStateDescription, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureDescription
class CORDL_TYPE FeatureDescription : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Description)) ::StringW  Description;

 __declspec(property(get=get_FeatureStates)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  FeatureStates;

 __declspec(property(get=get_MaxValueHint)) float_t  MaxValueHint;

 __declspec(property(get=get_MinValueHint)) float_t  MinValueHint;

 __declspec(property(get=get_ShortDescription)) ::StringW  ShortDescription;

/// @brief Field <Description>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Description_k__BackingField, put=__cordl_internal_set__Description_k__BackingField)) ::StringW  _Description_k__BackingField;

/// @brief Field <FeatureStates>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FeatureStates_k__BackingField, put=__cordl_internal_set__FeatureStates_k__BackingField)) ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  _FeatureStates_k__BackingField;

/// @brief Field <MaxValueHint>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__MaxValueHint_k__BackingField, put=__cordl_internal_set__MaxValueHint_k__BackingField)) float_t  _MaxValueHint_k__BackingField;

/// @brief Field <MinValueHint>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__MinValueHint_k__BackingField, put=__cordl_internal_set__MinValueHint_k__BackingField)) float_t  _MinValueHint_k__BackingField;

/// @brief Field <ShortDescription>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShortDescription_k__BackingField, put=__cordl_internal_set__ShortDescription_k__BackingField)) ::StringW  _ShortDescription_k__BackingField;

static inline ::Oculus::Interaction::PoseDetection::FeatureDescription* New_ctor(::StringW  shortDescription, ::StringW  description, float_t  minValueHint, float_t  maxValueHint, ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  featureStates) ;

constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Description_k__BackingField() ;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> const& __cordl_internal_get__FeatureStates_k__BackingField() const;

constexpr ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>& __cordl_internal_get__FeatureStates_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MaxValueHint_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MaxValueHint_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MinValueHint_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MinValueHint_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__ShortDescription_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__ShortDescription_k__BackingField() ;

constexpr void __cordl_internal_set__Description_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__FeatureStates_k__BackingField(::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  value) ;

constexpr void __cordl_internal_set__MaxValueHint_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__MinValueHint_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ShortDescription_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa49aee4, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  shortDescription, ::StringW  description, float_t  minValueHint, float_t  maxValueHint, ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  featureStates) ;

/// [CompilerGenerated]
/// @brief Method get_Description, addr 0xa49af60, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Description() ;

/// [CompilerGenerated]
/// @brief Method get_FeatureStates, addr 0xa49af78, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*> get_FeatureStates() ;

/// [CompilerGenerated]
/// @brief Method get_MaxValueHint, addr 0xa49af70, size 0x8, virtual false, abstract: false, final false
inline float_t get_MaxValueHint() ;

/// [CompilerGenerated]
/// @brief Method get_MinValueHint, addr 0xa49af68, size 0x8, virtual false, abstract: false, final false
inline float_t get_MinValueHint() ;

/// [CompilerGenerated]
/// @brief Method get_ShortDescription, addr 0xa49af58, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_ShortDescription() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureDescription(FeatureDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureDescription(FeatureDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16098};

/// [CompilerGenerated]
/// @brief Field <ShortDescription>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____ShortDescription_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Description>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Description_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MinValueHint>k__BackingField, offset: 0x20, size: 0x4, def value: None
 float_t  ____MinValueHint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MaxValueHint>k__BackingField, offset: 0x24, size: 0x4, def value: None
 float_t  ____MaxValueHint_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <FeatureStates>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::Oculus::Interaction::PoseDetection::FeatureStateDescription*>  ____FeatureStates_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureDescription, ____ShortDescription_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureDescription, ____Description_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureDescription, ____MinValueHint_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureDescription, ____MaxValueHint_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureDescription, ____FeatureStates_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FeatureDescription) == 0x30, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

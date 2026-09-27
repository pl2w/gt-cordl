#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FeatureStateDescription.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FeatureStateDescription)
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FeatureStateDescription;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FeatureStateDescription*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FeatureStateDescription*, "Oculus.Interaction.PoseDetection", "FeatureStateDescription");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FeatureStateDescription
class CORDL_TYPE FeatureStateDescription : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Id)) ::StringW  Id;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Field <Id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Id_k__BackingField, put=__cordl_internal_set__Id_k__BackingField)) ::StringW  _Id_k__BackingField;

/// @brief Field <Name>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Name_k__BackingField, put=__cordl_internal_set__Name_k__BackingField)) ::StringW  _Name_k__BackingField;

static inline ::Oculus::Interaction::PoseDetection::FeatureStateDescription* New_ctor(::StringW  id, ::StringW  name) ;

constexpr ::StringW const& __cordl_internal_get__Id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Id_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Name_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Name_k__BackingField() ;

constexpr void __cordl_internal_set__Id_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Name_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa49ae90, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  id, ::StringW  name) ;

/// [CompilerGenerated]
/// @brief Method get_Id, addr 0xa49aed4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Id() ;

/// [CompilerGenerated]
/// @brief Method get_Name, addr 0xa49aedc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FeatureStateDescription() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FeatureStateDescription", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FeatureStateDescription(FeatureStateDescription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FeatureStateDescription", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FeatureStateDescription(FeatureStateDescription const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16097};

/// [CompilerGenerated]
/// @brief Field <Id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____Id_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Name>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Name_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureStateDescription, ____Id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FeatureStateDescription, ____Name_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FeatureStateDescription) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

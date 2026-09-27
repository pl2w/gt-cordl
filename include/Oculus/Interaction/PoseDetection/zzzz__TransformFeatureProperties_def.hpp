#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransformFeatureProperties)
namespace Oculus::Interaction::PoseDetection {
class FeatureDescription;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class IReadOnlyDictionary_2;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureProperties;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureProperties*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureProperties*, "Oculus.Interaction.PoseDetection", "TransformFeatureProperties");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureProperties
class CORDL_TYPE TransformFeatureProperties : public ::System::Object {
public:
// Declarations
/// @brief Field <FeatureDescriptions>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__FeatureDescriptions_k__BackingField, put=setStaticF__FeatureDescriptions_k__BackingField)) ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  _FeatureDescriptions_k__BackingField;

/// @brief Method CreateDesc, addr 0xa4a66b0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::PoseDetection::FeatureDescription* CreateDesc(::by_ref<int32_t>  startIndex) ;

/// @brief Method CreateFeatureDescriptions, addr 0xa4a6500, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* CreateFeatureDescriptions() ;

static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* getStaticF__FeatureDescriptions_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_FeatureDescriptions, addr 0xa4a64a8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>* get_FeatureDescriptions() ;

static inline void setStaticF__FeatureDescriptions_k__BackingField(::System::Collections::Generic::IReadOnlyDictionary_2<::Oculus::Interaction::PoseDetection::TransformFeature,::Oculus::Interaction::PoseDetection::FeatureDescription*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureProperties() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureProperties", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureProperties(TransformFeatureProperties && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureProperties", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureProperties(TransformFeatureProperties const& ) = delete;

/// @brief Field FeatureStateThresholdMidpointHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureStateThresholdMidpointHelpText{u"The value at which a state will transition from A > B (or B > A)"};

/// @brief Field FeatureStateThresholdWidthHelpText offset 0xffffffff size 0x8
static constexpr ::ConstString  FeatureStateThresholdWidthHelpText{u"How far the transform value must exceed the midpoint until the transition can occur. This is to prevent rapid flickering at transition edges."};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16157};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureProperties) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

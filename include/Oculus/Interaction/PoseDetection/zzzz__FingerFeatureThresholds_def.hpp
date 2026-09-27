#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__FingerFeature_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(FingerFeatureThresholds)
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateThreshold;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureThresholds;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*, "Oculus.Interaction.PoseDetection", "FingerFeatureThresholds");
// Dependencies Oculus.Interaction.PoseDetection.FingerFeature, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureThresholds
class CORDL_TYPE FingerFeatureThresholds : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Feature)) ::Oculus::Interaction::PoseDetection::FingerFeature  Feature;

 __declspec(property(get=get_Thresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>*  Thresholds;

/// @brief Field _feature, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__feature, put=__cordl_internal_set__feature)) ::Oculus::Interaction::PoseDetection::FingerFeature  _feature;

/// @brief Field _thresholds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__thresholds, put=__cordl_internal_set__thresholds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  _thresholds;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*() noexcept;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds* New_ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureThresholds* New_ctor(::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  thresholds) ;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeature const& __cordl_internal_get__feature() const;

constexpr ::Oculus::Interaction::PoseDetection::FingerFeature& __cordl_internal_get__feature() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>* const& __cordl_internal_get__thresholds() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*& __cordl_internal_get__thresholds() ;

constexpr void __cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::FingerFeature  value) ;

constexpr void __cordl_internal_set__thresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  value) ;

/// @brief Method .ctor, addr 0xa49c958, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa49c960, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::FingerFeature  feature, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  thresholds) ;

/// @brief Method get_Feature, addr 0xa49ca00, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::PoseDetection::FingerFeature get_Feature() ;

/// @brief Method get_Thresholds, addr 0xa49ca08, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* get_Thresholds() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* i___Oculus__Interaction__PoseDetection__IFeatureStateThresholds_2___Oculus__Interaction__PoseDetection__FingerFeature___StringW_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureThresholds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureThresholds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureThresholds(FingerFeatureThresholds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureThresholds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureThresholds(FingerFeatureThresholds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16112};

/// [SerializeField]
/// [Tooltip("Which feature this collection of thresholds controls. Each feature should exist at most once.")]
/// @brief Field _feature, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::FingerFeature  ____feature;

/// [SerializeField]
/// [Tooltip("List of state transitions, with thresold settings. The entries in this list must be in ascending order, based on their \'midpoint\' values.")]
/// @brief Field _thresholds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*>*  ____thresholds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds, ____feature) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds, ____thresholds) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureThresholds) == 0x20, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

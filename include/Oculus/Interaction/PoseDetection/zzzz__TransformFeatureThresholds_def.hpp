#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/PoseDetection/zzzz__TransformFeature_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformFeatureThresholds)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureStateThreshold;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
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
class TransformFeatureThresholds;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*, "Oculus.Interaction.PoseDetection", "TransformFeatureThresholds");
// Dependencies Oculus.Interaction.PoseDetection.TransformFeature, System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureThresholds
class CORDL_TYPE TransformFeatureThresholds : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Feature)) ::Oculus::Interaction::PoseDetection::TransformFeature  Feature;

 __declspec(property(get=get_MinTimeInState)) double_t  MinTimeInState;

 __declspec(property(get=get_Thresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>*  Thresholds;

/// @brief Field _feature, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__feature, put=__cordl_internal_set__feature)) ::Oculus::Interaction::PoseDetection::TransformFeature  _feature;

/// @brief Field _minTimeInState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) double_t  _minTimeInState;

/// @brief Field _thresholds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__thresholds, put=__cordl_internal_set__thresholds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  _thresholds;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*() noexcept;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds* New_ctor() ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureThresholds* New_ctor(::Oculus::Interaction::PoseDetection::TransformFeature  featureTransform, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  thresholds) ;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature const& __cordl_internal_get__feature() const;

constexpr ::Oculus::Interaction::PoseDetection::TransformFeature& __cordl_internal_get__feature() ;

constexpr double_t const& __cordl_internal_get__minTimeInState() const;

constexpr double_t& __cordl_internal_get__minTimeInState() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>* const& __cordl_internal_get__thresholds() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*& __cordl_internal_get__thresholds() ;

constexpr void __cordl_internal_set__feature(::Oculus::Interaction::PoseDetection::TransformFeature  value) ;

constexpr void __cordl_internal_set__minTimeInState(double_t  value) ;

constexpr void __cordl_internal_set__thresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  value) ;

/// @brief Method .ctor, addr 0xa4a83ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa4a83b4, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::Oculus::Interaction::PoseDetection::TransformFeature  featureTransform, ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  thresholds) ;

/// @brief Method get_Feature, addr 0xa4a8454, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::PoseDetection::TransformFeature get_Feature() ;

/// @brief Method get_MinTimeInState, addr 0xa4a8464, size 0x8, virtual false, abstract: false, final false
inline double_t get_MinTimeInState() ;

/// @brief Method get_Thresholds, addr 0xa4a845c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*>* get_Thresholds() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* i___Oculus__Interaction__PoseDetection__IFeatureStateThresholds_2___Oculus__Interaction__PoseDetection__TransformFeature___StringW_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureThresholds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureThresholds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureThresholds(TransformFeatureThresholds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureThresholds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureThresholds(TransformFeatureThresholds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16169};

/// [SerializeField]
/// [Tooltip("Which feature this collection of thresholds controls. Each feature should exist at most once.")]
/// @brief Field _feature, offset: 0x10, size: 0x4, def value: None
 ::Oculus::Interaction::PoseDetection::TransformFeature  ____feature;

/// [SerializeField]
/// [Tooltip("List of state transitions, with thresold settings. The entries in this list must be in ascending order, based on their \'midpoint\' values.")]
/// @brief Field _thresholds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureStateThreshold*>*  ____thresholds;

/// [SerializeField]
/// [Tooltip("Length of time that the transform must be in the new state before the feature state provider will use the new value.")]
/// @brief Field _minTimeInState, offset: 0x20, size: 0x8, def value: None
 double_t  ____minTimeInState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds, ____feature) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds, ____thresholds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds, ____minTimeInState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureThresholds) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

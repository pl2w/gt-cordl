#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/TransformFeatureStateThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TransformFeatureStateThresholds)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureThresholds_2;
}
namespace Oculus::Interaction::PoseDetection {
class TransformFeatureThresholds;
}
namespace Oculus::Interaction::PoseDetection {
struct TransformFeature;
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
class TransformFeatureStateThresholds;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds*, "Oculus.Interaction.PoseDetection", "TransformFeatureStateThresholds");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Detection/Transform Thresholds")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.TransformFeatureStateThresholds
class CORDL_TYPE TransformFeatureStateThresholds : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_FeatureStateThresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>*  FeatureStateThresholds;

 __declspec(property(get=get_MinTimeInState)) double_t  MinTimeInState;

/// @brief Field _featureThresholds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureThresholds, put=__cordl_internal_set__featureThresholds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  _featureThresholds;

/// @brief Field _minTimeInState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) double_t  _minTimeInState;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*() noexcept;

/// @brief Method Construct, addr 0xa4a846c, size 0x2c, virtual false, abstract: false, final false
inline void Construct(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  featureThresholds, double_t  minTimeInState) ;

static inline ::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>* const& __cordl_internal_get__featureThresholds() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*& __cordl_internal_get__featureThresholds() ;

constexpr double_t const& __cordl_internal_get__minTimeInState() const;

constexpr double_t& __cordl_internal_get__minTimeInState() ;

constexpr void __cordl_internal_set__featureThresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  value) ;

constexpr void __cordl_internal_set__minTimeInState(double_t  value) ;

/// @brief Method .ctor, addr 0xa4a84a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FeatureStateThresholds, addr 0xa4a8498, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>*>* get_FeatureStateThresholds() ;

/// @brief Method get_MinTimeInState, addr 0xa4a84a0, size 0x8, virtual true, abstract: false, final true
inline double_t get_MinTimeInState() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::TransformFeature,::StringW>* i___Oculus__Interaction__PoseDetection__IFeatureThresholds_2___Oculus__Interaction__PoseDetection__TransformFeature___StringW_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformFeatureStateThresholds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateThresholds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformFeatureStateThresholds(TransformFeatureStateThresholds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformFeatureStateThresholds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformFeatureStateThresholds(TransformFeatureStateThresholds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16170};

/// [SerializeField]
/// [Tooltip("List of all supported transform features, along with the state entry/exit thresholds.")]
/// @brief Field _featureThresholds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::TransformFeatureThresholds*>*  ____featureThresholds;

/// [SerializeField]
/// [Tooltip("Length of time that the transform must be in the new state before the feature state provider will use the new value.")]
/// @brief Field _minTimeInState, offset: 0x20, size: 0x8, def value: None
 double_t  ____minTimeInState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds, ____featureThresholds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds, ____minTimeInState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::TransformFeatureStateThresholds) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

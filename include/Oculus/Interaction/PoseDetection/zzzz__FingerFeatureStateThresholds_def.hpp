#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateThresholds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerFeatureStateThresholds)
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureThresholds;
}
namespace Oculus::Interaction::PoseDetection {
struct FingerFeature;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureStateThresholds_2;
}
namespace Oculus::Interaction::PoseDetection {
template<typename TFeature,typename TFeatureState>
class IFeatureThresholds_2;
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
class FingerFeatureStateThresholds;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateThresholds");
// [CreateAssetMenu(menuName = "Meta/Interaction/SDK/Pose Detection/Finger Thresholds")]
// Dependencies UnityEngine.ScriptableObject
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateThresholds
class CORDL_TYPE FingerFeatureStateThresholds : public ::UnityEngine::ScriptableObject {
public:
// Declarations
 __declspec(property(get=get_FeatureStateThresholds)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>*  FeatureStateThresholds;

 __declspec(property(get=get_MinTimeInState)) double_t  MinTimeInState;

/// @brief Field _featureThresholds, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__featureThresholds, put=__cordl_internal_set__featureThresholds)) ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>*  _featureThresholds;

/// @brief Field _minTimeInState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__minTimeInState, put=__cordl_internal_set__minTimeInState)) double_t  _minTimeInState;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*() noexcept;

/// @brief Method Construct, addr 0xa49ca10, size 0x2c, virtual false, abstract: false, final false
inline void Construct(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>*  featureThresholds, double_t  minTimeInState) ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>* const& __cordl_internal_get__featureThresholds() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>*& __cordl_internal_get__featureThresholds() ;

constexpr double_t const& __cordl_internal_get__minTimeInState() const;

constexpr double_t& __cordl_internal_get__minTimeInState() ;

constexpr void __cordl_internal_set__featureThresholds(::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>*  value) ;

constexpr void __cordl_internal_set__minTimeInState(double_t  value) ;

/// @brief Method .ctor, addr 0xa49ca4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_FeatureStateThresholds, addr 0xa49ca3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::PoseDetection::IFeatureStateThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>*>* get_FeatureStateThresholds() ;

/// @brief Method get_MinTimeInState, addr 0xa49ca44, size 0x8, virtual true, abstract: false, final true
inline double_t get_MinTimeInState() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureThresholds_2<::Oculus::Interaction::PoseDetection::FingerFeature,::StringW>* i___Oculus__Interaction__PoseDetection__IFeatureThresholds_2___Oculus__Interaction__PoseDetection__FingerFeature___StringW_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateThresholds() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateThresholds", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateThresholds(FingerFeatureStateThresholds && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateThresholds", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateThresholds(FingerFeatureStateThresholds const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16113};

/// [SerializeField]
/// [Tooltip("List of all supported finger features, along with the state entry/exit thresholds.")]
/// @brief Field _featureThresholds, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::PoseDetection::FingerFeatureThresholds*>*  ____featureThresholds;

/// [SerializeField]
/// [Tooltip("Length of time that the finger must be in the new state before the feature state provider will use the new value.")]
/// @brief Field _minTimeInState, offset: 0x20, size: 0x8, def value: None
 double_t  ____minTimeInState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds, ____featureThresholds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds, ____minTimeInState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThresholds) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

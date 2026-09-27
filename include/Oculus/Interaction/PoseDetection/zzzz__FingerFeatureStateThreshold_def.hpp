#pragma once
// IWYU pragma private; include "Oculus/Interaction/PoseDetection/FingerFeatureStateThreshold.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FingerFeatureStateThreshold)
namespace Oculus::Interaction::PoseDetection {
template<typename TFeatureState>
class IFeatureStateThreshold_1;
}
// Forward declare root types
namespace Oculus::Interaction::PoseDetection {
class FingerFeatureStateThreshold;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold*, "Oculus.Interaction.PoseDetection", "FingerFeatureStateThreshold");
// Dependencies System.Object
namespace Oculus::Interaction::PoseDetection {
// Is value type: false
// CS Name: Oculus.Interaction.PoseDetection.FingerFeatureStateThreshold
class CORDL_TYPE FingerFeatureStateThreshold : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_FirstState)) ::StringW  FirstState;

 __declspec(property(get=get_SecondState)) ::StringW  SecondState;

 __declspec(property(get=get_ThresholdMidpoint)) float_t  ThresholdMidpoint;

 __declspec(property(get=get_ThresholdWidth)) float_t  ThresholdWidth;

 __declspec(property(get=get_ToFirstWhenBelow)) float_t  ToFirstWhenBelow;

 __declspec(property(get=get_ToSecondWhenAbove)) float_t  ToSecondWhenAbove;

/// @brief Field _firstState, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstState, put=__cordl_internal_set__firstState)) ::StringW  _firstState;

/// @brief Field _secondState, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__secondState, put=__cordl_internal_set__secondState)) ::StringW  _secondState;

/// @brief Field _thresholdMidpoint, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdMidpoint, put=__cordl_internal_set__thresholdMidpoint)) float_t  _thresholdMidpoint;

/// @brief Field _thresholdWidth, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__thresholdWidth, put=__cordl_internal_set__thresholdWidth)) float_t  _thresholdWidth;

/// @brief Convert operator to "::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>"
constexpr operator  ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>*() noexcept;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold* New_ctor() ;

static inline ::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold* New_ctor(float_t  thresholdMidpoint, float_t  thresholdWidth, ::StringW  firstState, ::StringW  secondState) ;

constexpr ::StringW const& __cordl_internal_get__firstState() const;

constexpr ::StringW& __cordl_internal_get__firstState() ;

constexpr ::StringW const& __cordl_internal_get__secondState() const;

constexpr ::StringW& __cordl_internal_get__secondState() ;

constexpr float_t const& __cordl_internal_get__thresholdMidpoint() const;

constexpr float_t& __cordl_internal_get__thresholdMidpoint() ;

constexpr float_t const& __cordl_internal_get__thresholdWidth() const;

constexpr float_t& __cordl_internal_get__thresholdWidth() ;

constexpr void __cordl_internal_set__firstState(::StringW  value) ;

constexpr void __cordl_internal_set__secondState(::StringW  value) ;

constexpr void __cordl_internal_set__thresholdMidpoint(float_t  value) ;

constexpr void __cordl_internal_set__thresholdWidth(float_t  value) ;

/// @brief Method .ctor, addr 0xa49c8b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa49c8b8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(float_t  thresholdMidpoint, float_t  thresholdWidth, ::StringW  firstState, ::StringW  secondState) ;

/// @brief Method get_FirstState, addr 0xa49c948, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_FirstState() ;

/// @brief Method get_SecondState, addr 0xa49c950, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_SecondState() ;

/// @brief Method get_ThresholdMidpoint, addr 0xa49c910, size 0x8, virtual false, abstract: false, final false
inline float_t get_ThresholdMidpoint() ;

/// @brief Method get_ThresholdWidth, addr 0xa49c918, size 0x8, virtual false, abstract: false, final false
inline float_t get_ThresholdWidth() ;

/// @brief Method get_ToFirstWhenBelow, addr 0xa49c920, size 0x14, virtual true, abstract: false, final true
inline float_t get_ToFirstWhenBelow() ;

/// @brief Method get_ToSecondWhenAbove, addr 0xa49c934, size 0x14, virtual true, abstract: false, final true
inline float_t get_ToSecondWhenAbove() ;

/// @brief Convert to "::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>"
constexpr ::Oculus::Interaction::PoseDetection::IFeatureStateThreshold_1<::StringW>* i___Oculus__Interaction__PoseDetection__IFeatureStateThreshold_1___StringW_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FingerFeatureStateThreshold() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateThreshold", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FingerFeatureStateThreshold(FingerFeatureStateThreshold && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FingerFeatureStateThreshold", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FingerFeatureStateThreshold(FingerFeatureStateThreshold const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16111};

/// [SerializeField]
/// [Tooltip("The angle at which a state will transition from A > B (or B > A)")]
/// @brief Field _thresholdMidpoint, offset: 0x10, size: 0x4, def value: None
 float_t  ____thresholdMidpoint;

/// [SerializeField]
/// [Tooltip("How far the angle must exceed the midpoint until the transition can occur. This is to prevent rapid flickering at transition edges.")]
/// @brief Field _thresholdWidth, offset: 0x14, size: 0x4, def value: None
 float_t  ____thresholdWidth;

/// [SerializeField]
/// [Tooltip("State to transition to when value passes below the threshold")]
/// @brief Field _firstState, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____firstState;

/// [SerializeField]
/// [Tooltip("State to transition to when value passes above the threshold")]
/// @brief Field _secondState, offset: 0x20, size: 0x8, def value: None
 ::StringW  ____secondState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold, ____thresholdMidpoint) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold, ____thresholdWidth) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold, ____firstState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold, ____secondState) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::PoseDetection::FingerFeatureStateThreshold) == 0x28, "Size mismatch!");

} // namespace end def Oculus::Interaction::PoseDetection

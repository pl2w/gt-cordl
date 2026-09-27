#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/PoseMeasureParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(PoseMeasureParameters)
// Forward declare root types
namespace Oculus::Interaction::Grab {
struct PoseMeasureParameters;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::Grab::PoseMeasureParameters);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::Grab::PoseMeasureParameters, "Oculus.Interaction.Grab", "PoseMeasureParameters");
// Dependencies 
namespace Oculus::Interaction::Grab {
// Is value type: true
// CS Name: Oculus.Interaction.Grab.PoseMeasureParameters
struct CORDL_TYPE PoseMeasureParameters {
public:
// Declarations
/// @brief Field DEFAULT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DEFAULT, put=setStaticF_DEFAULT)) ::Oculus::Interaction::Grab::PoseMeasureParameters  DEFAULT;

 __declspec(property(get=get_PositionRotationWeight)) float_t  PositionRotationWeight;

/// @brief Method Lerp, addr 0xa4e6a0c, size 0x30, virtual false, abstract: false, final false
static inline ::Oculus::Interaction::Grab::PoseMeasureParameters Lerp(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  from, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  to, float_t  t) ;

/// @brief Method .ctor, addr 0xa4e6ac8, size 0x8, virtual false, abstract: false, final false
inline void _ctor(float_t  positionRotationWeight) ;

static inline ::Oculus::Interaction::Grab::PoseMeasureParameters getStaticF_DEFAULT() ;

/// @brief Method get_PositionRotationWeight, addr 0xa4e6ac0, size 0x8, virtual false, abstract: false, final false
inline float_t get_PositionRotationWeight() ;

static inline void setStaticF_DEFAULT(::Oculus::Interaction::Grab::PoseMeasureParameters  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr PoseMeasureParameters() ;

// Ctor Parameters [CppParam { name: "_positionRotationWeight", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr PoseMeasureParameters(float_t  _positionRotationWeight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16352};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("Weights the scoring of the pose based more in the amount of translationor rotation needed to align the interactor with the desired pose.")]
/// @brief Field _positionRotationWeight, offset: 0x0, size: 0x4, def value: None
 float_t  _positionRotationWeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::Grab::PoseMeasureParameters, _positionRotationWeight) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::Grab::PoseMeasureParameters) == 0x4, "Size mismatch!");

} // namespace end def Oculus::Interaction::Grab

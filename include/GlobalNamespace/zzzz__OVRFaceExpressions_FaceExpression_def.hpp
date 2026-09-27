#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRFaceExpressions_FaceExpression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRFaceExpressions_FaceExpression)
// Forward declare root types
namespace GlobalNamespace {
struct OVRFaceExpressions_FaceExpression;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRFaceExpressions_FaceExpression);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRFaceExpressions_FaceExpression, "", "OVRFaceExpressions/FaceExpression");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRFaceExpressions/FaceExpression
struct CORDL_TYPE OVRFaceExpressions_FaceExpression {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OVRFaceExpressions_FaceExpression_Unwrapped
enum struct __OVRFaceExpressions_FaceExpression_Unwrapped : int32_t {
__E_Invalid = static_cast<int32_t>(0xffffffff),
__E_BrowLowererL = static_cast<int32_t>(0x0),
__E_BrowLowererR = static_cast<int32_t>(0x1),
__E_CheekPuffL = static_cast<int32_t>(0x2),
__E_CheekPuffR = static_cast<int32_t>(0x3),
__E_CheekRaiserL = static_cast<int32_t>(0x4),
__E_CheekRaiserR = static_cast<int32_t>(0x5),
__E_CheekSuckL = static_cast<int32_t>(0x6),
__E_CheekSuckR = static_cast<int32_t>(0x7),
__E_ChinRaiserB = static_cast<int32_t>(0x8),
__E_ChinRaiserT = static_cast<int32_t>(0x9),
__E_DimplerL = static_cast<int32_t>(0xa),
__E_DimplerR = static_cast<int32_t>(0xb),
__E_EyesClosedL = static_cast<int32_t>(0xc),
__E_EyesClosedR = static_cast<int32_t>(0xd),
__E_EyesLookDownL = static_cast<int32_t>(0xe),
__E_EyesLookDownR = static_cast<int32_t>(0xf),
__E_EyesLookLeftL = static_cast<int32_t>(0x10),
__E_EyesLookLeftR = static_cast<int32_t>(0x11),
__E_EyesLookRightL = static_cast<int32_t>(0x12),
__E_EyesLookRightR = static_cast<int32_t>(0x13),
__E_EyesLookUpL = static_cast<int32_t>(0x14),
__E_EyesLookUpR = static_cast<int32_t>(0x15),
__E_InnerBrowRaiserL = static_cast<int32_t>(0x16),
__E_InnerBrowRaiserR = static_cast<int32_t>(0x17),
__E_JawDrop = static_cast<int32_t>(0x18),
__E_JawSidewaysLeft = static_cast<int32_t>(0x19),
__E_JawSidewaysRight = static_cast<int32_t>(0x1a),
__E_JawThrust = static_cast<int32_t>(0x1b),
__E_LidTightenerL = static_cast<int32_t>(0x1c),
__E_LidTightenerR = static_cast<int32_t>(0x1d),
__E_LipCornerDepressorL = static_cast<int32_t>(0x1e),
__E_LipCornerDepressorR = static_cast<int32_t>(0x1f),
__E_LipCornerPullerL = static_cast<int32_t>(0x20),
__E_LipCornerPullerR = static_cast<int32_t>(0x21),
__E_LipFunnelerLB = static_cast<int32_t>(0x22),
__E_LipFunnelerLT = static_cast<int32_t>(0x23),
__E_LipFunnelerRB = static_cast<int32_t>(0x24),
__E_LipFunnelerRT = static_cast<int32_t>(0x25),
__E_LipPressorL = static_cast<int32_t>(0x26),
__E_LipPressorR = static_cast<int32_t>(0x27),
__E_LipPuckerL = static_cast<int32_t>(0x28),
__E_LipPuckerR = static_cast<int32_t>(0x29),
__E_LipStretcherL = static_cast<int32_t>(0x2a),
__E_LipStretcherR = static_cast<int32_t>(0x2b),
__E_LipSuckLB = static_cast<int32_t>(0x2c),
__E_LipSuckLT = static_cast<int32_t>(0x2d),
__E_LipSuckRB = static_cast<int32_t>(0x2e),
__E_LipSuckRT = static_cast<int32_t>(0x2f),
__E_LipTightenerL = static_cast<int32_t>(0x30),
__E_LipTightenerR = static_cast<int32_t>(0x31),
__E_LipsToward = static_cast<int32_t>(0x32),
__E_LowerLipDepressorL = static_cast<int32_t>(0x33),
__E_LowerLipDepressorR = static_cast<int32_t>(0x34),
__E_MouthLeft = static_cast<int32_t>(0x35),
__E_MouthRight = static_cast<int32_t>(0x36),
__E_NoseWrinklerL = static_cast<int32_t>(0x37),
__E_NoseWrinklerR = static_cast<int32_t>(0x38),
__E_OuterBrowRaiserL = static_cast<int32_t>(0x39),
__E_OuterBrowRaiserR = static_cast<int32_t>(0x3a),
__E_UpperLidRaiserL = static_cast<int32_t>(0x3b),
__E_UpperLidRaiserR = static_cast<int32_t>(0x3c),
__E_UpperLipRaiserL = static_cast<int32_t>(0x3d),
__E_UpperLipRaiserR = static_cast<int32_t>(0x3e),
__E_TongueTipInterdental = static_cast<int32_t>(0x3f),
__E_TongueTipAlveolar = static_cast<int32_t>(0x40),
__E_TongueFrontDorsalPalate = static_cast<int32_t>(0x41),
__E_TongueMidDorsalPalate = static_cast<int32_t>(0x42),
__E_TongueBackDorsalVelar = static_cast<int32_t>(0x43),
__E_TongueOut = static_cast<int32_t>(0x44),
__E_TongueRetreat = static_cast<int32_t>(0x45),
__E_Max = static_cast<int32_t>(0x46),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRFaceExpressions_FaceExpression_Unwrapped () const noexcept {
return static_cast<__OVRFaceExpressions_FaceExpression_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRFaceExpressions_FaceExpression() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRFaceExpressions_FaceExpression(int32_t  value__) noexcept;

/// @brief Field BrowLowererL value: I32(0)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const BrowLowererL;

/// @brief Field BrowLowererR value: I32(1)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const BrowLowererR;

/// @brief Field CheekPuffL value: I32(2)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekPuffL;

/// @brief Field CheekPuffR value: I32(3)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekPuffR;

/// @brief Field CheekRaiserL value: I32(4)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekRaiserL;

/// @brief Field CheekRaiserR value: I32(5)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekRaiserR;

/// @brief Field CheekSuckL value: I32(6)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekSuckL;

/// @brief Field CheekSuckR value: I32(7)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const CheekSuckR;

/// @brief Field ChinRaiserB value: I32(8)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const ChinRaiserB;

/// @brief Field ChinRaiserT value: I32(9)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const ChinRaiserT;

/// @brief Field DimplerL value: I32(10)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const DimplerL;

/// @brief Field DimplerR value: I32(11)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const DimplerR;

/// @brief Field EyesClosedL value: I32(12)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesClosedL;

/// @brief Field EyesClosedR value: I32(13)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesClosedR;

/// @brief Field EyesLookDownL value: I32(14)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookDownL;

/// @brief Field EyesLookDownR value: I32(15)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookDownR;

/// @brief Field EyesLookLeftL value: I32(16)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookLeftL;

/// @brief Field EyesLookLeftR value: I32(17)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookLeftR;

/// @brief Field EyesLookRightL value: I32(18)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookRightL;

/// @brief Field EyesLookRightR value: I32(19)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookRightR;

/// @brief Field EyesLookUpL value: I32(20)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookUpL;

/// @brief Field EyesLookUpR value: I32(21)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const EyesLookUpR;

/// @brief Field InnerBrowRaiserL value: I32(22)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const InnerBrowRaiserL;

/// @brief Field InnerBrowRaiserR value: I32(23)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const InnerBrowRaiserR;

/// @brief Field Invalid value: I32(-1)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const Invalid;

/// @brief Field JawDrop value: I32(24)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawDrop;

/// @brief Field JawSidewaysLeft value: I32(25)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawSidewaysLeft;

/// @brief Field JawSidewaysRight value: I32(26)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawSidewaysRight;

/// @brief Field JawThrust value: I32(27)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const JawThrust;

/// @brief Field LidTightenerL value: I32(28)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LidTightenerL;

/// @brief Field LidTightenerR value: I32(29)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LidTightenerR;

/// @brief Field LipCornerDepressorL value: I32(30)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerDepressorL;

/// @brief Field LipCornerDepressorR value: I32(31)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerDepressorR;

/// @brief Field LipCornerPullerL value: I32(32)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerPullerL;

/// @brief Field LipCornerPullerR value: I32(33)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipCornerPullerR;

/// @brief Field LipFunnelerLB value: I32(34)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerLB;

/// @brief Field LipFunnelerLT value: I32(35)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerLT;

/// @brief Field LipFunnelerRB value: I32(36)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerRB;

/// @brief Field LipFunnelerRT value: I32(37)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipFunnelerRT;

/// @brief Field LipPressorL value: I32(38)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPressorL;

/// @brief Field LipPressorR value: I32(39)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPressorR;

/// @brief Field LipPuckerL value: I32(40)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPuckerL;

/// @brief Field LipPuckerR value: I32(41)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipPuckerR;

/// @brief Field LipStretcherL value: I32(42)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipStretcherL;

/// @brief Field LipStretcherR value: I32(43)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipStretcherR;

/// @brief Field LipSuckLB value: I32(44)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckLB;

/// @brief Field LipSuckLT value: I32(45)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckLT;

/// @brief Field LipSuckRB value: I32(46)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckRB;

/// @brief Field LipSuckRT value: I32(47)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipSuckRT;

/// @brief Field LipTightenerL value: I32(48)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipTightenerL;

/// @brief Field LipTightenerR value: I32(49)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipTightenerR;

/// @brief Field LipsToward value: I32(50)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LipsToward;

/// @brief Field LowerLipDepressorL value: I32(51)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LowerLipDepressorL;

/// @brief Field LowerLipDepressorR value: I32(52)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const LowerLipDepressorR;

/// @brief Field Max value: I32(70)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const Max;

/// @brief Field MouthLeft value: I32(53)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const MouthLeft;

/// @brief Field MouthRight value: I32(54)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const MouthRight;

/// @brief Field NoseWrinklerL value: I32(55)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const NoseWrinklerL;

/// @brief Field NoseWrinklerR value: I32(56)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const NoseWrinklerR;

/// @brief Field OuterBrowRaiserL value: I32(57)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const OuterBrowRaiserL;

/// @brief Field OuterBrowRaiserR value: I32(58)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const OuterBrowRaiserR;

/// @brief Field TongueBackDorsalVelar value: I32(67)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueBackDorsalVelar;

/// @brief Field TongueFrontDorsalPalate value: I32(65)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueFrontDorsalPalate;

/// @brief Field TongueMidDorsalPalate value: I32(66)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueMidDorsalPalate;

/// @brief Field TongueOut value: I32(68)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueOut;

/// @brief Field TongueRetreat value: I32(69)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueRetreat;

/// @brief Field TongueTipAlveolar value: I32(64)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueTipAlveolar;

/// @brief Field TongueTipInterdental value: I32(63)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const TongueTipInterdental;

/// @brief Field UpperLidRaiserL value: I32(59)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLidRaiserL;

/// @brief Field UpperLidRaiserR value: I32(60)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLidRaiserR;

/// @brief Field UpperLipRaiserL value: I32(61)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLipRaiserL;

/// @brief Field UpperLipRaiserR value: I32(62)
static ::GlobalNamespace::OVRFaceExpressions_FaceExpression const UpperLipRaiserR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11889};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRFaceExpressions_FaceExpression, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRFaceExpressions_FaceExpression) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

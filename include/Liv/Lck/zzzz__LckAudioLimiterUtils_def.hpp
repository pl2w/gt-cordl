#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioLimiterUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioLimiterUtils)
// Forward declare root types
namespace Liv::Lck {
class LckAudioLimiterUtils;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioLimiterUtils*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioLimiterUtils*, "Liv.Lck", "LckAudioLimiterUtils");
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioLimiterUtils
class CORDL_TYPE LckAudioLimiterUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ApplyGainReduction, addr 0x9cddddc, size 0xc, virtual false, abstract: false, final false
static inline float_t ApplyGainReduction(float_t  data, float_t  envelope, float_t  makeUpGain) ;

/// @brief Method ApplySoftClip, addr 0x9cddde8, size 0x18, virtual false, abstract: false, final false
static inline float_t ApplySoftClip(float_t  audioIn) ;

/// @brief Method CalculateAttackCoefficient, addr 0x9cddccc, size 0x78, virtual false, abstract: false, final false
static inline float_t CalculateAttackCoefficient(float_t  attackTime, int32_t  sampleRate) ;

/// @brief Method CalculateReleaseCoefficient, addr 0x9cddd44, size 0x78, virtual false, abstract: false, final false
static inline float_t CalculateReleaseCoefficient(float_t  releaseTime, int32_t  sampleRate) ;

/// @brief Method UpdateEnvelope, addr 0x9cdddbc, size 0x20, virtual false, abstract: false, final false
static inline float_t UpdateEnvelope(float_t  gainReduction, float_t  envelope, float_t  attackCoeff, float_t  releaseCoeff) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioLimiterUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioLimiterUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioLimiterUtils(LckAudioLimiterUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioLimiterUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioLimiterUtils(LckAudioLimiterUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24694};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckAudioLimiterUtils) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck

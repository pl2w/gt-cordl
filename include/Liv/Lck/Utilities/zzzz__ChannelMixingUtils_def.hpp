#pragma once
// IWYU pragma private; include "Liv/Lck/Utilities/ChannelMixingUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ChannelMixingUtils)
namespace Liv::Lck::Collections {
class AudioBuffer;
}
// Forward declare root types
namespace Liv::Lck::Utilities {
class ChannelMixingUtils;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Utilities::ChannelMixingUtils*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Utilities::ChannelMixingUtils*, "Liv.Lck.Utilities", "ChannelMixingUtils");
// Dependencies System.Object
namespace Liv::Lck::Utilities {
// Is value type: false
// CS Name: Liv.Lck.Utilities.ChannelMixingUtils
class CORDL_TYPE ChannelMixingUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertFiveOneToStereo, addr 0x9d6de68, size 0x138, virtual false, abstract: false, final false
static inline void ConvertFiveOneToStereo(::ArrayW<float_t>  sourceFiveOneAudio, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, ::Liv::Lck::Collections::AudioBuffer*  outputBuffer) ;

/// @brief Method ConvertMonoToStereo, addr 0x9d6ddb4, size 0xb4, virtual false, abstract: false, final false
static inline void ConvertMonoToStereo(::ArrayW<float_t>  sourceMonoAudio, int32_t  sourceAudioStartIdx, int32_t  sourceAudioLength, ::Liv::Lck::Collections::AudioBuffer*  outputBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ChannelMixingUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ChannelMixingUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ChannelMixingUtils(ChannelMixingUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ChannelMixingUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ChannelMixingUtils(ChannelMixingUtils const& ) = delete;

/// @brief Field FiveOneChannelCount offset 0xffffffff size 0x4
static constexpr int32_t  FiveOneChannelCount{static_cast<int32_t>(0x6)};

/// @brief Field MonoChannelCount offset 0xffffffff size 0x4
static constexpr int32_t  MonoChannelCount{static_cast<int32_t>(0x1)};

/// @brief Field StereoChannelCount offset 0xffffffff size 0x4
static constexpr int32_t  StereoChannelCount{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Utilities::ChannelMixingUtils) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Utilities

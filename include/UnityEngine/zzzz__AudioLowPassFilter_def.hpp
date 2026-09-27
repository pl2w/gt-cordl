#pragma once
// IWYU pragma private; include "UnityEngine/AudioLowPassFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Behaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioLowPassFilter)
// Forward declare root types
namespace UnityEngine {
class AudioLowPassFilter;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioLowPassFilter*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioLowPassFilter*, "UnityEngine", "AudioLowPassFilter");
// [RequireComponent(typeof(UnityEngine.AudioBehaviour))]
// Dependencies UnityEngine.Behaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioLowPassFilter
class CORDL_TYPE AudioLowPassFilter : public ::UnityEngine::Behaviour {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioLowPassFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioLowPassFilter(AudioLowPassFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioLowPassFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioLowPassFilter(AudioLowPassFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioLowPassFilter) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

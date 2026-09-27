#pragma once
// IWYU pragma private; include "Meta/WitAi/ServiceReferences/AudioInputServiceReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioInputServiceReference)
namespace Meta::WitAi::Interfaces {
class IAudioEventProvider;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputEvents;
}
// Forward declare root types
namespace Meta::WitAi::ServiceReferences {
class AudioInputServiceReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::ServiceReferences::AudioInputServiceReference*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::ServiceReferences::AudioInputServiceReference*, "Meta.WitAi.ServiceReferences", "AudioInputServiceReference");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::ServiceReferences {
// Is value type: false
// CS Name: Meta.WitAi.ServiceReferences.AudioInputServiceReference
class CORDL_TYPE AudioInputServiceReference : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_AudioEvents)) ::Meta::WitAi::Interfaces::IAudioInputEvents*  AudioEvents;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioEventProvider*() noexcept;

static inline ::Meta::WitAi::ServiceReferences::AudioInputServiceReference* New_ctor() ;

/// @brief Method .ctor, addr 0x9e850e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AudioEvents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Meta::WitAi::Interfaces::IAudioInputEvents* get_AudioEvents() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioEventProvider"
constexpr ::Meta::WitAi::Interfaces::IAudioEventProvider* i___Meta__WitAi__Interfaces__IAudioEventProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioInputServiceReference() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioInputServiceReference", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioInputServiceReference(AudioInputServiceReference && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioInputServiceReference", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioInputServiceReference(AudioInputServiceReference const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25585};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::ServiceReferences::AudioInputServiceReference) == 0x20, "Size mismatch!");

} // namespace end def Meta::WitAi::ServiceReferences

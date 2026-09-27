#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/IAudioBufferProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IAudioBufferProvider)
namespace Meta::WitAi::Data {
class AudioBuffer;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class IAudioBufferProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::IAudioBufferProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::IAudioBufferProvider*, "Meta.WitAi.Data", "IAudioBufferProvider");
// Dependencies 
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.IAudioBufferProvider
class CORDL_TYPE IAudioBufferProvider {
public:
// Declarations
/// @brief Method InstantiateAudioBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> InstantiateAudioBuffer() ;

// Ctor Parameters [CppParam { name: "", ty: "IAudioBufferProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IAudioBufferProvider(IAudioBufferProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25706};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi::Data

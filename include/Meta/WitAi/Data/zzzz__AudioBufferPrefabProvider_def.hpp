#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBufferPrefabProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(AudioBufferPrefabProvider)
namespace Meta::WitAi::Data {
class AudioBuffer;
}
namespace Meta::WitAi::Data {
class IAudioBufferProvider;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class AudioBufferPrefabProvider;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::AudioBufferPrefabProvider*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioBufferPrefabProvider*, "Meta.WitAi.Data", "AudioBufferPrefabProvider");
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioBufferPrefabProvider
class CORDL_TYPE AudioBufferPrefabProvider : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _audioBufferPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioBufferPrefab, put=__cordl_internal_set__audioBufferPrefab)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _audioBufferPrefab;

/// @brief Convert operator to "::Meta::WitAi::Data::IAudioBufferProvider"
constexpr operator  ::Meta::WitAi::Data::IAudioBufferProvider*() noexcept;

/// @brief Method Awake, addr 0x9e9a6c8, size 0x60, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method InstantiateAudioBuffer, addr 0x9e9a728, size 0x120, virtual true, abstract: false, final true
inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> InstantiateAudioBuffer() ;

static inline ::Meta::WitAi::Data::AudioBufferPrefabProvider* New_ctor() ;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& __cordl_internal_get__audioBufferPrefab() const;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& __cordl_internal_get__audioBufferPrefab() ;

constexpr void __cordl_internal_set__audioBufferPrefab(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

/// @brief Method .ctor, addr 0x9e9a848, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Meta::WitAi::Data::IAudioBufferProvider"
constexpr ::Meta::WitAi::Data::IAudioBufferProvider* i___Meta__WitAi__Data__IAudioBufferProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBufferPrefabProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferPrefabProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBufferPrefabProvider(AudioBufferPrefabProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBufferPrefabProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBufferPrefabProvider(AudioBufferPrefabProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25696};

/// [SerializeField]
/// @brief Field _audioBufferPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::AudioBuffer>  ____audioBufferPrefab;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioBufferPrefabProvider, ____audioBufferPrefab) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioBufferPrefabProvider) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data

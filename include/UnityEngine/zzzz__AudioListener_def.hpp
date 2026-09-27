#pragma once
// IWYU pragma private; include "UnityEngine/AudioListener.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioListener)
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct FFTWindow;
}
// Forward declare root types
namespace UnityEngine {
class AudioListener;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioListener*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioListener*, "UnityEngine", "AudioListener");
// [StaticAccessor("AudioListenerBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// [RequireComponent(typeof(UnityEngine.Transform))]
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioListener
class CORDL_TYPE AudioListener : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
/// @brief Method GetSpectrumData, addr 0xb553ca4, size 0x4, virtual false, abstract: false, final false
static inline void GetSpectrumData(::ArrayW<float_t>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// [NativeThrows]
/// @brief Method GetSpectrumDataHelper, addr 0xb553b28, size 0x128, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(::by_ref<::ArrayW<float_t>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper_Injected, addr 0xb553c50, size 0x54, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper_Injected(::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

static inline ::UnityEngine::AudioListener* New_ctor() ;

/// @brief Method .ctor, addr 0xb553ca8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioListener() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioListener(AudioListener && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioListener", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioListener(AudioListener const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31531};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioListener) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine

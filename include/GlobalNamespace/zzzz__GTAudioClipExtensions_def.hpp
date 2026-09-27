#pragma once
// IWYU pragma private; include "GlobalNamespace/GTAudioClipExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GTAudioClipExtensions)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class GTAudioClipExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GTAudioClipExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTAudioClipExtensions*, "", "GTAudioClipExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GTAudioClipExtensions
class CORDL_TYPE GTAudioClipExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method GetPeakMagnitude, addr 0x56735f0, size 0x10c, virtual false, abstract: false, final false
static inline float_t GetPeakMagnitude(::UnityEngine::AudioClip*  audioClip) ;

/// [Extension]
/// @brief Method GetRMSMagnitude, addr 0x56736fc, size 0x108, virtual false, abstract: false, final false
static inline float_t GetRMSMagnitude(::UnityEngine::AudioClip*  audioClip) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTAudioClipExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTAudioClipExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTAudioClipExtensions(GTAudioClipExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTAudioClipExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTAudioClipExtensions(GTAudioClipExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{822};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GTAudioClipExtensions) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

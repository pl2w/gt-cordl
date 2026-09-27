#pragma once
// IWYU pragma private; include "Liv/NativeAudioBridge/NativeAudioUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeAudioUtils)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Liv::NativeAudioBridge {
class NativeAudioUtils;
}
// Write type traits
MARK_REF_T(::Liv::NativeAudioBridge::NativeAudioUtils*);
DEFINE_IL2CPP_CLASS(::Liv::NativeAudioBridge::NativeAudioUtils*, "Liv.NativeAudioBridge", "NativeAudioUtils");
// Dependencies System.Object
namespace Liv::NativeAudioBridge {
// Is value type: false
// CS Name: Liv.NativeAudioBridge.NativeAudioUtils
class CORDL_TYPE NativeAudioUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertAudioClipToByteArray, addr 0x9d6f3c8, size 0x188, virtual false, abstract: false, final false
static inline ::ArrayW<int8_t> ConvertAudioClipToByteArray(::UnityEngine::AudioClip*  audioClip, float_t  volume) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NativeAudioUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeAudioUtils(NativeAudioUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeAudioUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeAudioUtils(NativeAudioUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33092};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::NativeAudioBridge::NativeAudioUtils) == 0x10, "Size mismatch!");

} // namespace end def Liv::NativeAudioBridge

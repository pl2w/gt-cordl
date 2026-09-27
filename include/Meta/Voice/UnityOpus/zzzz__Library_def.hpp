#pragma once
// IWYU pragma private; include "Meta/Voice/UnityOpus/Library.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Library)
namespace Meta::Voice::UnityOpus {
struct ErrorCode;
}
namespace Meta::Voice::UnityOpus {
struct NumChannels;
}
namespace Meta::Voice::UnityOpus {
struct SamplingFrequency;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Meta::Voice::UnityOpus {
class Library;
}
// Write type traits
MARK_REF_T(::Meta::Voice::UnityOpus::Library*);
DEFINE_IL2CPP_CLASS(::Meta::Voice::UnityOpus::Library*, "Meta.Voice.UnityOpus", "Library");
// Dependencies System.Object
namespace Meta::Voice::UnityOpus {
// Is value type: false
// CS Name: Meta.Voice.UnityOpus.Library
class CORDL_TYPE Library : public ::System::Object {
public:
// Declarations
/// @brief Method OpusDecodeFloat, addr 0x9e15784, size 0xc4, virtual false, abstract: false, final false
static inline int32_t OpusDecodeFloat(::System::IntPtr  decoder, ::ArrayW<uint8_t>  data, int32_t  len, ::ArrayW<float_t>  pcm, int32_t  frameSize, int32_t  decodeFec) ;

/// @brief Method OpusDecoderCreate, addr 0x9e15688, size 0x94, virtual false, abstract: false, final false
static inline ::System::IntPtr OpusDecoderCreate(::Meta::Voice::UnityOpus::SamplingFrequency  samplingFrequency, ::Meta::Voice::UnityOpus::NumChannels  channels, ::by_ref<::Meta::Voice::UnityOpus::ErrorCode>  error) ;

/// @brief Method OpusDecoderDestroy, addr 0x9e15928, size 0x7c, virtual false, abstract: false, final false
static inline void OpusDecoderDestroy(::System::IntPtr  decoder) ;

/// @brief Method OpusPcmSoftClip, addr 0x9e15848, size 0xac, virtual false, abstract: false, final false
static inline void OpusPcmSoftClip(::ArrayW<float_t>  pcm, int32_t  frameSize, ::Meta::Voice::UnityOpus::NumChannels  channels, ::ArrayW<float_t>  softclipMem) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Library() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Library(Library && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Library", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Library(Library const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{33123};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::Voice::UnityOpus::Library) == 0x10, "Size mismatch!");

} // namespace end def Meta::Voice::UnityOpus

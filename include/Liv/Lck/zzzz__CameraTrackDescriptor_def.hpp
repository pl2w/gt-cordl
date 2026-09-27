#pragma once
// IWYU pragma private; include "Liv/Lck/CameraTrackDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CameraTrackDescriptor)
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
// Forward declare root types
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
// Write type traits
MARK_VAL_T(::Liv::Lck::CameraTrackDescriptor);
DEFINE_IL2CPP_CLASS(::Liv::Lck::CameraTrackDescriptor, "Liv.Lck", "CameraTrackDescriptor");
// Dependencies Liv.Lck.CameraResolutionDescriptor
namespace Liv::Lck {
// Is value type: true
// CS Name: Liv.Lck.CameraTrackDescriptor
struct CORDL_TYPE CameraTrackDescriptor {
public:
// Declarations
/// @brief Method .ctor, addr 0x9cebafc, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor, uint32_t  bitrate, uint32_t  framerate, uint32_t  audioBitrate) ;

// Ctor Parameters []
// @brief default ctor
constexpr CameraTrackDescriptor() ;

// Ctor Parameters [CppParam { name: "CameraResolutionDescriptor", ty: "::Liv::Lck::CameraResolutionDescriptor", modifiers: "", def_value: None, comment: None }, CppParam { name: "Bitrate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Framerate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "AudioBitrate", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr CameraTrackDescriptor(::Liv::Lck::CameraResolutionDescriptor  CameraResolutionDescriptor, uint32_t  Bitrate, uint32_t  Framerate, uint32_t  AudioBitrate) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24753};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field CameraResolutionDescriptor, offset: 0x0, size: 0x8, def value: None
 ::Liv::Lck::CameraResolutionDescriptor  CameraResolutionDescriptor;

/// @brief Field Bitrate, offset: 0x8, size: 0x4, def value: None
 uint32_t  Bitrate;

/// @brief Field Framerate, offset: 0xc, size: 0x4, def value: None
 uint32_t  Framerate;

/// @brief Field AudioBitrate, offset: 0x10, size: 0x4, def value: None
 uint32_t  AudioBitrate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::CameraTrackDescriptor, CameraResolutionDescriptor) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::CameraTrackDescriptor, Bitrate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::CameraTrackDescriptor, Framerate) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::CameraTrackDescriptor, AudioBitrate) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::CameraTrackDescriptor) == 0x14, "Size mismatch!");

} // namespace end def Liv::Lck

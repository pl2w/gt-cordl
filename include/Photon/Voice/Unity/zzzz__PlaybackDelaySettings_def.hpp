#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/PlaybackDelaySettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlaybackDelaySettings)
// Forward declare root types
namespace Photon::Voice::Unity {
struct PlaybackDelaySettings;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::Unity::PlaybackDelaySettings);
DEFINE_IL2CPP_CLASS(::Photon::Voice::Unity::PlaybackDelaySettings, "Photon.Voice.Unity", "PlaybackDelaySettings");
// Dependencies 
namespace Photon::Voice::Unity {
// Is value type: true
// CS Name: Photon.Voice.Unity.PlaybackDelaySettings
struct CORDL_TYPE PlaybackDelaySettings {
public:
// Declarations
/// @brief Method ToString, addr 0xa7676b4, size 0xb8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr PlaybackDelaySettings() ;

// Ctor Parameters [CppParam { name: "MinDelaySoft", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxDelaySoft", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "MaxDelayHard", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlaybackDelaySettings(int32_t  MinDelaySoft, int32_t  MaxDelaySoft, int32_t  MaxDelayHard) noexcept;

/// @brief Field DEFAULT_HIGH offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_HIGH{static_cast<int32_t>(0x190)};

/// @brief Field DEFAULT_LOW offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_LOW{static_cast<int32_t>(0xc8)};

/// @brief Field DEFAULT_MAX offset 0xffffffff size 0x4
static constexpr int32_t  DEFAULT_MAX{static_cast<int32_t>(0x3e8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field MinDelaySoft, offset: 0x0, size: 0x4, def value: None
 int32_t  MinDelaySoft;

/// @brief Field MaxDelaySoft, offset: 0x4, size: 0x4, def value: None
 int32_t  MaxDelaySoft;

/// @brief Field MaxDelayHard, offset: 0x8, size: 0x4, def value: None
 int32_t  MaxDelayHard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::Unity::PlaybackDelaySettings, MinDelaySoft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::PlaybackDelaySettings, MaxDelaySoft) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Photon::Voice::Unity::PlaybackDelaySettings, MaxDelayHard) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::Unity::PlaybackDelaySettings) == 0xc, "Size mismatch!");

} // namespace end def Photon::Voice::Unity

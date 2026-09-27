#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSessionCategory)
// Forward declare root types
namespace Photon::Voice::IOS {
struct AudioSessionCategory;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::IOS::AudioSessionCategory);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IOS::AudioSessionCategory, "Photon.Voice.IOS", "AudioSessionCategory");
// Dependencies 
namespace Photon::Voice::IOS {
// Is value type: true
// CS Name: Photon.Voice.IOS.AudioSessionCategory
struct CORDL_TYPE AudioSessionCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSessionCategory_Unwrapped
enum struct __AudioSessionCategory_Unwrapped : int32_t {
__E_Ambient = static_cast<int32_t>(0x0),
__E_SoloAmbient = static_cast<int32_t>(0x1),
__E_Playback = static_cast<int32_t>(0x2),
__E_Record = static_cast<int32_t>(0x3),
__E_PlayAndRecord = static_cast<int32_t>(0x4),
__E_AudioProcessing = static_cast<int32_t>(0x5),
__E_MultiRoute = static_cast<int32_t>(0x6),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSessionCategory_Unwrapped () const noexcept {
return static_cast<__AudioSessionCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioSessionCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioSessionCategory(int32_t  value__) noexcept;

/// @brief Field Ambient value: I32(0)
static ::Photon::Voice::IOS::AudioSessionCategory const Ambient;

/// @brief Field AudioProcessing value: I32(5)
static ::Photon::Voice::IOS::AudioSessionCategory const AudioProcessing;

/// @brief Field MultiRoute value: I32(6)
static ::Photon::Voice::IOS::AudioSessionCategory const MultiRoute;

/// @brief Field PlayAndRecord value: I32(4)
static ::Photon::Voice::IOS::AudioSessionCategory const PlayAndRecord;

/// @brief Field Playback value: I32(2)
static ::Photon::Voice::IOS::AudioSessionCategory const Playback;

/// @brief Field Record value: I32(3)
static ::Photon::Voice::IOS::AudioSessionCategory const Record;

/// @brief Field SoloAmbient value: I32(1)
static ::Photon::Voice::IOS::AudioSessionCategory const SoloAmbient;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28520};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::IOS::AudioSessionCategory, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::IOS::AudioSessionCategory) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice::IOS

#pragma once
// IWYU pragma private; include "Photon/Voice/IOS/AudioSessionCategoryOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSessionCategoryOption)
// Forward declare root types
namespace Photon::Voice::IOS {
struct AudioSessionCategoryOption;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::IOS::AudioSessionCategoryOption);
DEFINE_IL2CPP_CLASS(::Photon::Voice::IOS::AudioSessionCategoryOption, "Photon.Voice.IOS", "AudioSessionCategoryOption");
// Dependencies 
namespace Photon::Voice::IOS {
// Is value type: true
// CS Name: Photon.Voice.IOS.AudioSessionCategoryOption
struct CORDL_TYPE AudioSessionCategoryOption {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSessionCategoryOption_Unwrapped
enum struct __AudioSessionCategoryOption_Unwrapped : int32_t {
__E_MixWithOthers = static_cast<int32_t>(0x1),
__E_DuckOthers = static_cast<int32_t>(0x2),
__E_AllowBluetooth = static_cast<int32_t>(0x4),
__E_DefaultToSpeaker = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSessionCategoryOption_Unwrapped () const noexcept {
return static_cast<__AudioSessionCategoryOption_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioSessionCategoryOption() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioSessionCategoryOption(int32_t  value__) noexcept;

/// @brief Field AllowBluetooth value: I32(4)
static ::Photon::Voice::IOS::AudioSessionCategoryOption const AllowBluetooth;

/// @brief Field DefaultToSpeaker value: I32(8)
static ::Photon::Voice::IOS::AudioSessionCategoryOption const DefaultToSpeaker;

/// @brief Field DuckOthers value: I32(2)
static ::Photon::Voice::IOS::AudioSessionCategoryOption const DuckOthers;

/// @brief Field MixWithOthers value: I32(1)
static ::Photon::Voice::IOS::AudioSessionCategoryOption const MixWithOthers;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28522};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::IOS::AudioSessionCategoryOption, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::IOS::AudioSessionCategoryOption) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice::IOS

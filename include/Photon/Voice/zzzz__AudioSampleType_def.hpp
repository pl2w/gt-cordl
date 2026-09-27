#pragma once
// IWYU pragma private; include "Photon/Voice/AudioSampleType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSampleType)
// Forward declare root types
namespace Photon::Voice {
struct AudioSampleType;
}
// Write type traits
MARK_VAL_T(::Photon::Voice::AudioSampleType);
DEFINE_IL2CPP_CLASS(::Photon::Voice::AudioSampleType, "Photon.Voice", "AudioSampleType");
// Dependencies 
namespace Photon::Voice {
// Is value type: true
// CS Name: Photon.Voice.AudioSampleType
struct CORDL_TYPE AudioSampleType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioSampleType_Unwrapped
enum struct __AudioSampleType_Unwrapped : int32_t {
__E_Source = static_cast<int32_t>(0x0),
__E_Short = static_cast<int32_t>(0x1),
__E_Float = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSampleType_Unwrapped () const noexcept {
return static_cast<__AudioSampleType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioSampleType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioSampleType(int32_t  value__) noexcept;

/// @brief Field Float value: I32(2)
static ::Photon::Voice::AudioSampleType const Float;

/// @brief Field Short value: I32(1)
static ::Photon::Voice::AudioSampleType const Short;

/// @brief Field Source value: I32(0)
static ::Photon::Voice::AudioSampleType const Source;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28446};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Photon::Voice::AudioSampleType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Photon::Voice::AudioSampleType) == 0x4, "Size mismatch!");

} // namespace end def Photon::Voice

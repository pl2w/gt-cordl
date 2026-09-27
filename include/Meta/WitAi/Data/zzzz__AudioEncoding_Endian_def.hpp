#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioEncoding_Endian.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioEncoding_Endian)
// Forward declare root types
namespace GlobalNamespace {
struct AudioEncoding_Endian;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AudioEncoding_Endian);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioEncoding_Endian, "Meta.WitAi.Data", "AudioEncoding/Endian");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Meta.WitAi.Data.AudioEncoding/Endian
struct CORDL_TYPE AudioEncoding_Endian {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AudioEncoding_Endian_Unwrapped
enum struct __AudioEncoding_Endian_Unwrapped : int32_t {
__E_Big = static_cast<int32_t>(0x0),
__E_Little = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioEncoding_Endian_Unwrapped () const noexcept {
return static_cast<__AudioEncoding_Endian_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AudioEncoding_Endian() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AudioEncoding_Endian(int32_t  value__) noexcept;

/// @brief Field Big value: I32(0)
static ::GlobalNamespace::AudioEncoding_Endian const Big;

/// @brief Field Little value: I32(1)
static ::GlobalNamespace::AudioEncoding_Endian const Little;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32775};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioEncoding_Endian, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioEncoding_Endian) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

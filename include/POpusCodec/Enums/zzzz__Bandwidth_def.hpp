#pragma once
// IWYU pragma private; include "POpusCodec/Enums/Bandwidth.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Bandwidth)
// Forward declare root types
namespace POpusCodec::Enums {
struct Bandwidth;
}
// Write type traits
MARK_VAL_T(::POpusCodec::Enums::Bandwidth);
DEFINE_IL2CPP_CLASS(::POpusCodec::Enums::Bandwidth, "POpusCodec.Enums", "Bandwidth");
// Dependencies 
namespace POpusCodec::Enums {
// Is value type: true
// CS Name: POpusCodec.Enums.Bandwidth
struct CORDL_TYPE Bandwidth {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Bandwidth_Unwrapped
enum struct __Bandwidth_Unwrapped : int32_t {
__E_Narrowband = static_cast<int32_t>(0x44d),
__E_Mediumband = static_cast<int32_t>(0x44e),
__E_Wideband = static_cast<int32_t>(0x44f),
__E_SuperWideband = static_cast<int32_t>(0x450),
__E_Fullband = static_cast<int32_t>(0x451),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Bandwidth_Unwrapped () const noexcept {
return static_cast<__Bandwidth_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Bandwidth() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Bandwidth(int32_t  value__) noexcept;

/// @brief Field Fullband value: I32(1105)
static ::POpusCodec::Enums::Bandwidth const Fullband;

/// @brief Field Mediumband value: I32(1102)
static ::POpusCodec::Enums::Bandwidth const Mediumband;

/// @brief Field Narrowband value: I32(1101)
static ::POpusCodec::Enums::Bandwidth const Narrowband;

/// @brief Field SuperWideband value: I32(1104)
static ::POpusCodec::Enums::Bandwidth const SuperWideband;

/// @brief Field Wideband value: I32(1103)
static ::POpusCodec::Enums::Bandwidth const Wideband;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28367};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::POpusCodec::Enums::Bandwidth, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::POpusCodec::Enums::Bandwidth) == 0x4, "Size mismatch!");

} // namespace end def POpusCodec::Enums

#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/LZ4Level.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LZ4Level)
// Forward declare root types
namespace K4os::Compression::LZ4 {
struct LZ4Level;
}
// Write type traits
MARK_VAL_T(::K4os::Compression::LZ4::LZ4Level);
DEFINE_IL2CPP_CLASS(::K4os::Compression::LZ4::LZ4Level, "K4os.Compression.LZ4", "LZ4Level");
// Dependencies 
namespace K4os::Compression::LZ4 {
// Is value type: true
// CS Name: K4os.Compression.LZ4.LZ4Level
struct CORDL_TYPE LZ4Level {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LZ4Level_Unwrapped
enum struct __LZ4Level_Unwrapped : int32_t {
__E_L00_FAST = static_cast<int32_t>(0x0),
__E_L03_HC = static_cast<int32_t>(0x3),
__E_L04_HC = static_cast<int32_t>(0x4),
__E_L05_HC = static_cast<int32_t>(0x5),
__E_L06_HC = static_cast<int32_t>(0x6),
__E_L07_HC = static_cast<int32_t>(0x7),
__E_L08_HC = static_cast<int32_t>(0x8),
__E_L09_HC = static_cast<int32_t>(0x9),
__E_L10_OPT = static_cast<int32_t>(0xa),
__E_L11_OPT = static_cast<int32_t>(0xb),
__E_L12_MAX = static_cast<int32_t>(0xc),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LZ4Level_Unwrapped () const noexcept {
return static_cast<__LZ4Level_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LZ4Level() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LZ4Level(int32_t  value__) noexcept;

/// @brief Field L00_FAST value: I32(0)
static ::K4os::Compression::LZ4::LZ4Level const L00_FAST;

/// @brief Field L03_HC value: I32(3)
static ::K4os::Compression::LZ4::LZ4Level const L03_HC;

/// @brief Field L04_HC value: I32(4)
static ::K4os::Compression::LZ4::LZ4Level const L04_HC;

/// @brief Field L05_HC value: I32(5)
static ::K4os::Compression::LZ4::LZ4Level const L05_HC;

/// @brief Field L06_HC value: I32(6)
static ::K4os::Compression::LZ4::LZ4Level const L06_HC;

/// @brief Field L07_HC value: I32(7)
static ::K4os::Compression::LZ4::LZ4Level const L07_HC;

/// @brief Field L08_HC value: I32(8)
static ::K4os::Compression::LZ4::LZ4Level const L08_HC;

/// @brief Field L09_HC value: I32(9)
static ::K4os::Compression::LZ4::LZ4Level const L09_HC;

/// @brief Field L10_OPT value: I32(10)
static ::K4os::Compression::LZ4::LZ4Level const L10_OPT;

/// @brief Field L11_OPT value: I32(11)
static ::K4os::Compression::LZ4::LZ4Level const L11_OPT;

/// @brief Field L12_MAX value: I32(12)
static ::K4os::Compression::LZ4::LZ4Level const L12_MAX;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31568};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::K4os::Compression::LZ4::LZ4Level, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::K4os::Compression::LZ4::LZ4Level) == 0x4, "Size mismatch!");

} // namespace end def K4os::Compression::LZ4

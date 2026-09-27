#pragma once
// IWYU pragma private; include "Ionic/Zlib/CompressionLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompressionLevel)
// Forward declare root types
namespace Ionic::Zlib {
struct CompressionLevel;
}
// Write type traits
MARK_VAL_T(::Ionic::Zlib::CompressionLevel);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::CompressionLevel, "Ionic.Zlib", "CompressionLevel");
// Dependencies 
namespace Ionic::Zlib {
// Is value type: true
// CS Name: Ionic.Zlib.CompressionLevel
struct CORDL_TYPE CompressionLevel {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CompressionLevel_Unwrapped
enum struct __CompressionLevel_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Level0 = static_cast<int32_t>(0x0),
__E_BestSpeed = static_cast<int32_t>(0x1),
__E_Level1 = static_cast<int32_t>(0x1),
__E_Level2 = static_cast<int32_t>(0x2),
__E_Level3 = static_cast<int32_t>(0x3),
__E_Level4 = static_cast<int32_t>(0x4),
__E_Level5 = static_cast<int32_t>(0x5),
__E_Default = static_cast<int32_t>(0x6),
__E_Level6 = static_cast<int32_t>(0x6),
__E_Level7 = static_cast<int32_t>(0x7),
__E_Level8 = static_cast<int32_t>(0x8),
__E_BestCompression = static_cast<int32_t>(0x9),
__E_Level9 = static_cast<int32_t>(0x9),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CompressionLevel_Unwrapped () const noexcept {
return static_cast<__CompressionLevel_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CompressionLevel() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CompressionLevel(int32_t  value__) noexcept;

/// @brief Field BestCompression value: I32(9)
static ::Ionic::Zlib::CompressionLevel const BestCompression;

/// @brief Field BestSpeed value: I32(1)
static ::Ionic::Zlib::CompressionLevel const BestSpeed;

/// @brief Field Default value: I32(6)
static ::Ionic::Zlib::CompressionLevel const Default;

/// @brief Field Level0 value: I32(0)
static ::Ionic::Zlib::CompressionLevel const Level0;

/// @brief Field Level1 value: I32(1)
static ::Ionic::Zlib::CompressionLevel const Level1;

/// @brief Field Level2 value: I32(2)
static ::Ionic::Zlib::CompressionLevel const Level2;

/// @brief Field Level3 value: I32(3)
static ::Ionic::Zlib::CompressionLevel const Level3;

/// @brief Field Level4 value: I32(4)
static ::Ionic::Zlib::CompressionLevel const Level4;

/// @brief Field Level5 value: I32(5)
static ::Ionic::Zlib::CompressionLevel const Level5;

/// @brief Field Level6 value: I32(6)
static ::Ionic::Zlib::CompressionLevel const Level6;

/// @brief Field Level7 value: I32(7)
static ::Ionic::Zlib::CompressionLevel const Level7;

/// @brief Field Level8 value: I32(8)
static ::Ionic::Zlib::CompressionLevel const Level8;

/// @brief Field Level9 value: I32(9)
static ::Ionic::Zlib::CompressionLevel const Level9;

/// @brief Field None value: I32(0)
static ::Ionic::Zlib::CompressionLevel const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19467};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::CompressionLevel, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::CompressionLevel) == 0x4, "Size mismatch!");

} // namespace end def Ionic::Zlib

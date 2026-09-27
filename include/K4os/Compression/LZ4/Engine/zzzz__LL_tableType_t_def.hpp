#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Engine/LL_tableType_t.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LL_tableType_t)
// Forward declare root types
namespace GlobalNamespace {
struct LL_tableType_t;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LL_tableType_t);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LL_tableType_t, "K4os.Compression.LZ4.Engine", "LL/tableType_t");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: K4os.Compression.LZ4.Engine.LL/tableType_t
struct CORDL_TYPE LL_tableType_t {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LL_tableType_t_Unwrapped
enum struct __LL_tableType_t_Unwrapped : int32_t {
__E_clearedTable = static_cast<int32_t>(0x0),
__E_byPtr = static_cast<int32_t>(0x1),
__E_byU32 = static_cast<int32_t>(0x2),
__E_byU16 = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __LL_tableType_t_Unwrapped () const noexcept {
return static_cast<__LL_tableType_t_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr LL_tableType_t() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr LL_tableType_t(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31580};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field byPtr value: I32(1)
static ::GlobalNamespace::LL_tableType_t const byPtr;

/// @brief Field byU16 value: I32(3)
static ::GlobalNamespace::LL_tableType_t const byU16;

/// @brief Field byU32 value: I32(2)
static ::GlobalNamespace::LL_tableType_t const byU32;

/// @brief Field clearedTable value: I32(0)
static ::GlobalNamespace::LL_tableType_t const clearedTable;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LL_tableType_t, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LL_tableType_t) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

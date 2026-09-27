#pragma once
// IWYU pragma private; include "Ionic/Zlib/FlushType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FlushType)
// Forward declare root types
namespace Ionic::Zlib {
struct FlushType;
}
// Write type traits
MARK_VAL_T(::Ionic::Zlib::FlushType);
DEFINE_IL2CPP_CLASS(::Ionic::Zlib::FlushType, "Ionic.Zlib", "FlushType");
// Dependencies 
namespace Ionic::Zlib {
// Is value type: true
// CS Name: Ionic.Zlib.FlushType
struct CORDL_TYPE FlushType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FlushType_Unwrapped
enum struct __FlushType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Partial = static_cast<int32_t>(0x1),
__E_Sync = static_cast<int32_t>(0x2),
__E_Full = static_cast<int32_t>(0x3),
__E_Finish = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FlushType_Unwrapped () const noexcept {
return static_cast<__FlushType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FlushType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FlushType(int32_t  value__) noexcept;

/// @brief Field Finish value: I32(4)
static ::Ionic::Zlib::FlushType const Finish;

/// @brief Field Full value: I32(3)
static ::Ionic::Zlib::FlushType const Full;

/// @brief Field None value: I32(0)
static ::Ionic::Zlib::FlushType const None;

/// @brief Field Partial value: I32(1)
static ::Ionic::Zlib::FlushType const Partial;

/// @brief Field Sync value: I32(2)
static ::Ionic::Zlib::FlushType const Sync;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19466};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Ionic::Zlib::FlushType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Ionic::Zlib::FlushType) == 0x4, "Size mismatch!");

} // namespace end def Ionic::Zlib

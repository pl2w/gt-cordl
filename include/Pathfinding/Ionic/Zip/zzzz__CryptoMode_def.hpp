#pragma once
// IWYU pragma private; include "Pathfinding/Ionic/Zip/CryptoMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoMode)
// Forward declare root types
namespace Pathfinding::Ionic::Zip {
struct CryptoMode;
}
// Write type traits
MARK_VAL_T(::Pathfinding::Ionic::Zip::CryptoMode);
DEFINE_IL2CPP_CLASS(::Pathfinding::Ionic::Zip::CryptoMode, "Pathfinding.Ionic.Zip", "CryptoMode");
// Dependencies 
namespace Pathfinding::Ionic::Zip {
// Is value type: true
// CS Name: Pathfinding.Ionic.Zip.CryptoMode
struct CORDL_TYPE CryptoMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CryptoMode_Unwrapped
enum struct __CryptoMode_Unwrapped : int32_t {
__E_Encrypt = static_cast<int32_t>(0x0),
__E_Decrypt = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CryptoMode_Unwrapped () const noexcept {
return static_cast<__CryptoMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr CryptoMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr CryptoMode(int32_t  value__) noexcept;

/// @brief Field Decrypt value: I32(1)
static ::Pathfinding::Ionic::Zip::CryptoMode const Decrypt;

/// @brief Field Encrypt value: I32(0)
static ::Pathfinding::Ionic::Zip::CryptoMode const Encrypt;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28158};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::Ionic::Zip::CryptoMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::Ionic::Zip::CryptoMode) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::Ionic::Zip

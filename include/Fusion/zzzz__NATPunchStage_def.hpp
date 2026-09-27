#pragma once
// IWYU pragma private; include "Fusion/NATPunchStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NATPunchStage)
// Forward declare root types
namespace Fusion {
struct NATPunchStage;
}
// Write type traits
MARK_VAL_T(::Fusion::NATPunchStage);
DEFINE_IL2CPP_CLASS(::Fusion::NATPunchStage, "Fusion", "NATPunchStage");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NATPunchStage
struct CORDL_TYPE NATPunchStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NATPunchStage_Unwrapped
enum struct __NATPunchStage_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Local = static_cast<int32_t>(0x1),
__E_Public = static_cast<int32_t>(0x2),
__E_Relay = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NATPunchStage_Unwrapped () const noexcept {
return static_cast<__NATPunchStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NATPunchStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NATPunchStage(int32_t  value__) noexcept;

/// @brief Field Local value: I32(1)
static ::Fusion::NATPunchStage const Local;

/// @brief Field None value: I32(0)
static ::Fusion::NATPunchStage const None;

/// @brief Field Public value: I32(2)
static ::Fusion::NATPunchStage const Public;

/// @brief Field Relay value: I32(3)
static ::Fusion::NATPunchStage const Relay;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18851};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NATPunchStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NATPunchStage) == 0x4, "Size mismatch!");

} // namespace end def Fusion

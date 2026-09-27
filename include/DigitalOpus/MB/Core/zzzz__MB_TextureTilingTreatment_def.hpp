#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB_TextureTilingTreatment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MB_TextureTilingTreatment)
// Forward declare root types
namespace DigitalOpus::MB::Core {
struct MB_TextureTilingTreatment;
}
// Write type traits
MARK_VAL_T(::DigitalOpus::MB::Core::MB_TextureTilingTreatment);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MB_TextureTilingTreatment, "DigitalOpus.MB.Core", "MB_TextureTilingTreatment");
// Dependencies 
namespace DigitalOpus::MB::Core {
// Is value type: true
// CS Name: DigitalOpus.MB.Core.MB_TextureTilingTreatment
struct CORDL_TYPE MB_TextureTilingTreatment {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MB_TextureTilingTreatment_Unwrapped
enum struct __MB_TextureTilingTreatment_Unwrapped : int32_t {
__E_none = static_cast<int32_t>(0x0),
__E_considerUVs = static_cast<int32_t>(0x1),
__E_edgeToEdgeX = static_cast<int32_t>(0x2),
__E_edgeToEdgeY = static_cast<int32_t>(0x3),
__E_edgeToEdgeXY = static_cast<int32_t>(0x4),
__E_unknown = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MB_TextureTilingTreatment_Unwrapped () const noexcept {
return static_cast<__MB_TextureTilingTreatment_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MB_TextureTilingTreatment() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MB_TextureTilingTreatment(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22600};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field considerUVs value: I32(1)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const considerUVs;

/// @brief Field edgeToEdgeX value: I32(2)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const edgeToEdgeX;

/// @brief Field edgeToEdgeXY value: I32(4)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const edgeToEdgeXY;

/// @brief Field edgeToEdgeY value: I32(3)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const edgeToEdgeY;

/// @brief Field none value: I32(0)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const none;

/// @brief Field unknown value: I32(5)
static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment const unknown;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MB_TextureTilingTreatment, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MB_TextureTilingTreatment) == 0x4, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core

#pragma once
// IWYU pragma private; include "Meta/XR/Acoustics/FaceType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FaceType)
// Forward declare root types
namespace Meta::XR::Acoustics {
struct FaceType;
}
// Write type traits
MARK_VAL_T(::Meta::XR::Acoustics::FaceType);
DEFINE_IL2CPP_CLASS(::Meta::XR::Acoustics::FaceType, "Meta.XR.Acoustics", "FaceType");
// Dependencies 
namespace Meta::XR::Acoustics {
// Is value type: true
// CS Name: Meta.XR.Acoustics.FaceType
struct CORDL_TYPE FaceType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __FaceType_Unwrapped
enum struct __FaceType_Unwrapped : uint32_t {
__E_TRIANGLES = static_cast<uint32_t>(0x0u),
__E_QUADS = static_cast<uint32_t>(0x1u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FaceType_Unwrapped () const noexcept {
return static_cast<__FaceType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FaceType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr FaceType(uint32_t  value__) noexcept;

/// @brief Field QUADS value: U32(1)
static ::Meta::XR::Acoustics::FaceType const QUADS;

/// @brief Field TRIANGLES value: U32(0)
static ::Meta::XR::Acoustics::FaceType const TRIANGLES;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29970};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::Acoustics::FaceType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::Acoustics::FaceType) == 0x4, "Size mismatch!");

} // namespace end def Meta::XR::Acoustics

#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/FinalBlitPass_BlitType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FinalBlitPass_BlitType)
// Forward declare root types
namespace GlobalNamespace {
struct FinalBlitPass_BlitType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FinalBlitPass_BlitType);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FinalBlitPass_BlitType, "UnityEngine.Rendering.Universal.Internal", "FinalBlitPass/BlitType");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.Internal.FinalBlitPass/BlitType
struct CORDL_TYPE FinalBlitPass_BlitType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FinalBlitPass_BlitType_Unwrapped
enum struct __FinalBlitPass_BlitType_Unwrapped : int32_t {
__E_Core = static_cast<int32_t>(0x0),
__E_HDR = static_cast<int32_t>(0x1),
__E_Count = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FinalBlitPass_BlitType_Unwrapped () const noexcept {
return static_cast<__FinalBlitPass_BlitType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr FinalBlitPass_BlitType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr FinalBlitPass_BlitType(int32_t  value__) noexcept;

/// @brief Field Core value: I32(0)
static ::GlobalNamespace::FinalBlitPass_BlitType const Core;

/// @brief Field Count value: I32(2)
static ::GlobalNamespace::FinalBlitPass_BlitType const Count;

/// @brief Field HDR value: I32(1)
static ::GlobalNamespace::FinalBlitPass_BlitType const HDR;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18757};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FinalBlitPass_BlitType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FinalBlitPass_BlitType) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

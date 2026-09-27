#pragma once
// IWYU pragma private; include "Fusion/NetworkLoadSceneParametersFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkLoadSceneParametersFlags)
// Forward declare root types
namespace Fusion {
struct NetworkLoadSceneParametersFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkLoadSceneParametersFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkLoadSceneParametersFlags, "Fusion", "NetworkLoadSceneParametersFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkLoadSceneParametersFlags
struct CORDL_TYPE NetworkLoadSceneParametersFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __NetworkLoadSceneParametersFlags_Unwrapped
enum struct __NetworkLoadSceneParametersFlags_Unwrapped : uint8_t {
__E_Single = static_cast<uint8_t>(0x1u),
__E_LocalPhysics2D = static_cast<uint8_t>(0x2u),
__E_LocalPhysics3D = static_cast<uint8_t>(0x4u),
__E_ActiveOnLoad = static_cast<uint8_t>(0x8u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkLoadSceneParametersFlags_Unwrapped () const noexcept {
return static_cast<__NetworkLoadSceneParametersFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint8_t () const noexcept {
return static_cast<uint8_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkLoadSceneParametersFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkLoadSceneParametersFlags(uint8_t  value__) noexcept;

/// @brief Field ActiveOnLoad value: U8(8)
static ::Fusion::NetworkLoadSceneParametersFlags const ActiveOnLoad;

/// @brief Field LocalPhysics2D value: U8(2)
static ::Fusion::NetworkLoadSceneParametersFlags const LocalPhysics2D;

/// @brief Field LocalPhysics3D value: U8(4)
static ::Fusion::NetworkLoadSceneParametersFlags const LocalPhysics3D;

/// @brief Field Single value: U8(1)
static ::Fusion::NetworkLoadSceneParametersFlags const Single;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19284};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field value__, offset: 0x0, size: 0x1, def value: None
 uint8_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkLoadSceneParametersFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkLoadSceneParametersFlags) == 0x1, "Size mismatch!");

} // namespace end def Fusion

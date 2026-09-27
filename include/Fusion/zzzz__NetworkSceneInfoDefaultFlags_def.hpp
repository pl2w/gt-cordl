#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfoDefaultFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneInfoDefaultFlags)
// Forward declare root types
namespace Fusion {
struct NetworkSceneInfoDefaultFlags;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSceneInfoDefaultFlags);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneInfoDefaultFlags, "Fusion", "NetworkSceneInfoDefaultFlags");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneInfoDefaultFlags
struct CORDL_TYPE NetworkSceneInfoDefaultFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __NetworkSceneInfoDefaultFlags_Unwrapped
enum struct __NetworkSceneInfoDefaultFlags_Unwrapped : uint32_t {
__E_SceneCountMask = static_cast<uint32_t>(0xfu),
__E_ConterMask = static_cast<uint32_t>(0xffff0u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSceneInfoDefaultFlags_Unwrapped () const noexcept {
return static_cast<__NetworkSceneInfoDefaultFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneInfoDefaultFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneInfoDefaultFlags(uint32_t  value__) noexcept;

/// @brief Field ConterMask value: U32(1048560)
static ::Fusion::NetworkSceneInfoDefaultFlags const ConterMask;

/// @brief Field SceneCountMask value: U32(15)
static ::Fusion::NetworkSceneInfoDefaultFlags const SceneCountMask;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19287};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneInfoDefaultFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneInfoDefaultFlags) == 0x4, "Size mismatch!");

} // namespace end def Fusion

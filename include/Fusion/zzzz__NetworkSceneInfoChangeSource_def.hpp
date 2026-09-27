#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneInfoChangeSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneInfoChangeSource)
// Forward declare root types
namespace Fusion {
struct NetworkSceneInfoChangeSource;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSceneInfoChangeSource);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneInfoChangeSource, "Fusion", "NetworkSceneInfoChangeSource");
// [Flags]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneInfoChangeSource
struct CORDL_TYPE NetworkSceneInfoChangeSource {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetworkSceneInfoChangeSource_Unwrapped
enum struct __NetworkSceneInfoChangeSource_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Initial = static_cast<int32_t>(0x1),
__E_Remote = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetworkSceneInfoChangeSource_Unwrapped () const noexcept {
return static_cast<__NetworkSceneInfoChangeSource_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneInfoChangeSource() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneInfoChangeSource(int32_t  value__) noexcept;

/// @brief Field Initial value: I32(1)
static ::Fusion::NetworkSceneInfoChangeSource const Initial;

/// @brief Field None value: I32(0)
static ::Fusion::NetworkSceneInfoChangeSource const None;

/// @brief Field Remote value: I32(2)
static ::Fusion::NetworkSceneInfoChangeSource const Remote;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19289};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneInfoChangeSource, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneInfoChangeSource) == 0x4, "Size mismatch!");

} // namespace end def Fusion

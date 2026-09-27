#pragma once
// IWYU pragma private; include "Mono/Unity/UnityTls_unitytls_log_level.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityTls_unitytls_log_level)
// Forward declare root types
namespace GlobalNamespace {
struct UnityTls_unitytls_log_level;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UnityTls_unitytls_log_level);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnityTls_unitytls_log_level, "Mono.Unity", "UnityTls/unitytls_log_level");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Mono.Unity.UnityTls/unitytls_log_level
struct CORDL_TYPE UnityTls_unitytls_log_level {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __UnityTls_unitytls_log_level_Unwrapped
enum struct __UnityTls_unitytls_log_level_Unwrapped : uint32_t {
__E_UNITYTLS_LOGLEVEL_MIN = static_cast<uint32_t>(0x0u),
__E_UNITYTLS_LOGLEVEL_FATAL = static_cast<uint32_t>(0x0u),
__E_UNITYTLS_LOGLEVEL_ERROR = static_cast<uint32_t>(0x1u),
__E_UNITYTLS_LOGLEVEL_WARN = static_cast<uint32_t>(0x2u),
__E_UNITYTLS_LOGLEVEL_INFO = static_cast<uint32_t>(0x3u),
__E_UNITYTLS_LOGLEVEL_DEBUG = static_cast<uint32_t>(0x4u),
__E_UNITYTLS_LOGLEVEL_TRACE = static_cast<uint32_t>(0x5u),
__E_UNITYTLS_LOGLEVEL_MAX = static_cast<uint32_t>(0x5u),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityTls_unitytls_log_level_Unwrapped () const noexcept {
return static_cast<__UnityTls_unitytls_log_level_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator uint32_t () const noexcept {
return static_cast<uint32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr UnityTls_unitytls_log_level() ;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr UnityTls_unitytls_log_level(uint32_t  value__) noexcept;

/// @brief Field UNITYTLS_LOGLEVEL_DEBUG value: U32(4)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_DEBUG;

/// @brief Field UNITYTLS_LOGLEVEL_ERROR value: U32(1)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_ERROR;

/// @brief Field UNITYTLS_LOGLEVEL_FATAL value: U32(0)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_FATAL;

/// @brief Field UNITYTLS_LOGLEVEL_INFO value: U32(3)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_INFO;

/// @brief Field UNITYTLS_LOGLEVEL_MAX value: U32(5)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_MAX;

/// @brief Field UNITYTLS_LOGLEVEL_MIN value: U32(0)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_MIN;

/// @brief Field UNITYTLS_LOGLEVEL_TRACE value: U32(5)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_TRACE;

/// @brief Field UNITYTLS_LOGLEVEL_WARN value: U32(2)
static ::GlobalNamespace::UnityTls_unitytls_log_level const UNITYTLS_LOGLEVEL_WARN;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9808};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 uint32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UnityTls_unitytls_log_level, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UnityTls_unitytls_log_level) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

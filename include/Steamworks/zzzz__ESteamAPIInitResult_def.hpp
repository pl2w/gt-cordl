#pragma once
// IWYU pragma private; include "Steamworks/ESteamAPIInitResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ESteamAPIInitResult)
// Forward declare root types
namespace Steamworks {
struct ESteamAPIInitResult;
}
// Write type traits
MARK_VAL_T(::Steamworks::ESteamAPIInitResult);
DEFINE_IL2CPP_CLASS(::Steamworks::ESteamAPIInitResult, "Steamworks", "ESteamAPIInitResult");
// Dependencies 
namespace Steamworks {
// Is value type: true
// CS Name: Steamworks.ESteamAPIInitResult
struct CORDL_TYPE ESteamAPIInitResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ESteamAPIInitResult_Unwrapped
enum struct __ESteamAPIInitResult_Unwrapped : int32_t {
__E_k_ESteamAPIInitResult_OK = static_cast<int32_t>(0x0),
__E_k_ESteamAPIInitResult_FailedGeneric = static_cast<int32_t>(0x1),
__E_k_ESteamAPIInitResult_NoSteamClient = static_cast<int32_t>(0x2),
__E_k_ESteamAPIInitResult_VersionMismatch = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ESteamAPIInitResult_Unwrapped () const noexcept {
return static_cast<__ESteamAPIInitResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ESteamAPIInitResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ESteamAPIInitResult(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32128};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field k_ESteamAPIInitResult_FailedGeneric value: I32(1)
static ::Steamworks::ESteamAPIInitResult const k_ESteamAPIInitResult_FailedGeneric;

/// @brief Field k_ESteamAPIInitResult_NoSteamClient value: I32(2)
static ::Steamworks::ESteamAPIInitResult const k_ESteamAPIInitResult_NoSteamClient;

/// @brief Field k_ESteamAPIInitResult_OK value: I32(0)
static ::Steamworks::ESteamAPIInitResult const k_ESteamAPIInitResult_OK;

/// @brief Field k_ESteamAPIInitResult_VersionMismatch value: I32(3)
static ::Steamworks::ESteamAPIInitResult const k_ESteamAPIInitResult_VersionMismatch;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Steamworks::ESteamAPIInitResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Steamworks::ESteamAPIInitResult) == 0x4, "Size mismatch!");

} // namespace end def Steamworks

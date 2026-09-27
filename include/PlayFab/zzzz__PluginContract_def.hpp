#pragma once
// IWYU pragma private; include "PlayFab/PluginContract.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PluginContract)
// Forward declare root types
namespace PlayFab {
struct PluginContract;
}
// Write type traits
MARK_VAL_T(::PlayFab::PluginContract);
DEFINE_IL2CPP_CLASS(::PlayFab::PluginContract, "PlayFab", "PluginContract");
// Dependencies 
namespace PlayFab {
// Is value type: true
// CS Name: PlayFab.PluginContract
struct CORDL_TYPE PluginContract {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PluginContract_Unwrapped
enum struct __PluginContract_Unwrapped : int32_t {
__E_PlayFab_Serializer = static_cast<int32_t>(0x0),
__E_PlayFab_Transport = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PluginContract_Unwrapped () const noexcept {
return static_cast<__PluginContract_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PluginContract() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PluginContract(int32_t  value__) noexcept;

/// @brief Field PlayFab_Serializer value: I32(0)
static ::PlayFab::PluginContract const PlayFab_Serializer;

/// @brief Field PlayFab_Transport value: I32(1)
static ::PlayFab::PluginContract const PlayFab_Transport;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19525};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::PluginContract, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::PlayFab::PluginContract) == 0x4, "Size mismatch!");

} // namespace end def PlayFab

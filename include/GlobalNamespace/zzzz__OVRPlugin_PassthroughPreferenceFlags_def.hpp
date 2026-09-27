#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPlugin_PassthroughPreferenceFlags.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRPlugin_PassthroughPreferenceFlags)
// Forward declare root types
namespace GlobalNamespace {
struct OVRPlugin_PassthroughPreferenceFlags;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags, "", "OVRPlugin/PassthroughPreferenceFlags");
// [Flags]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRPlugin/PassthroughPreferenceFlags
struct CORDL_TYPE OVRPlugin_PassthroughPreferenceFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __OVRPlugin_PassthroughPreferenceFlags_Unwrapped
enum struct __OVRPlugin_PassthroughPreferenceFlags_Unwrapped : int64_t {
__E_DefaultToActive = static_cast<int64_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OVRPlugin_PassthroughPreferenceFlags_Unwrapped () const noexcept {
return static_cast<__OVRPlugin_PassthroughPreferenceFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int64_t () const noexcept {
return static_cast<int64_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr OVRPlugin_PassthroughPreferenceFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None, comment: None }]
constexpr OVRPlugin_PassthroughPreferenceFlags(int64_t  value__) noexcept;

/// @brief Field DefaultToActive value: I64(1)
static ::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags const DefaultToActive;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12250};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field value__, offset: 0x0, size: 0x8, def value: None
 int64_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OVRPlugin_PassthroughPreferenceFlags) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace

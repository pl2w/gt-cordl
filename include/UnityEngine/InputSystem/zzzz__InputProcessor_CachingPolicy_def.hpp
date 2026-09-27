#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputProcessor_CachingPolicy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputProcessor_CachingPolicy)
// Forward declare root types
namespace GlobalNamespace {
struct InputProcessor_CachingPolicy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::InputProcessor_CachingPolicy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::InputProcessor_CachingPolicy, "UnityEngine.InputSystem", "InputProcessor/CachingPolicy");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.InputProcessor/CachingPolicy
struct CORDL_TYPE InputProcessor_CachingPolicy {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InputProcessor_CachingPolicy_Unwrapped
enum struct __InputProcessor_CachingPolicy_Unwrapped : int32_t {
__E_CacheResult = static_cast<int32_t>(0x0),
__E_EvaluateOnEveryRead = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InputProcessor_CachingPolicy_Unwrapped () const noexcept {
return static_cast<__InputProcessor_CachingPolicy_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InputProcessor_CachingPolicy() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InputProcessor_CachingPolicy(int32_t  value__) noexcept;

/// @brief Field CacheResult value: I32(0)
static ::GlobalNamespace::InputProcessor_CachingPolicy const CacheResult;

/// @brief Field EvaluateOnEveryRead value: I32(1)
static ::GlobalNamespace::InputProcessor_CachingPolicy const EvaluateOnEveryRead;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13445};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::InputProcessor_CachingPolicy, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::InputProcessor_CachingPolicy) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

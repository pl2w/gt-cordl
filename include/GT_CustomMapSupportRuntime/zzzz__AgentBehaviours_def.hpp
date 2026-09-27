#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/AgentBehaviours.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AgentBehaviours)
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
struct AgentBehaviours;
}
// Write type traits
MARK_VAL_T(::GT_CustomMapSupportRuntime::AgentBehaviours);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::AgentBehaviours, "GT_CustomMapSupportRuntime", "AgentBehaviours");
// Dependencies 
namespace GT_CustomMapSupportRuntime {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.AgentBehaviours
struct CORDL_TYPE AgentBehaviours {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AgentBehaviours_Unwrapped
enum struct __AgentBehaviours_Unwrapped : int32_t {
__E_Search = static_cast<int32_t>(0x0),
__E_Chase = static_cast<int32_t>(0x1),
__E_Attack = static_cast<int32_t>(0x2),
__E_Count = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AgentBehaviours_Unwrapped () const noexcept {
return static_cast<__AgentBehaviours_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr AgentBehaviours() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr AgentBehaviours(int32_t  value__) noexcept;

/// @brief Field Attack value: I32(2)
static ::GT_CustomMapSupportRuntime::AgentBehaviours const Attack;

/// @brief Field Chase value: I32(1)
static ::GT_CustomMapSupportRuntime::AgentBehaviours const Chase;

/// @brief Field Count value: I32(3)
static ::GT_CustomMapSupportRuntime::AgentBehaviours const Count;

/// @brief Field Search value: I32(0)
static ::GT_CustomMapSupportRuntime::AgentBehaviours const Search;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30872};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::AgentBehaviours, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::AgentBehaviours) == 0x4, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

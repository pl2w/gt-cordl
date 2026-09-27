#pragma once
// IWYU pragma private; include "GlobalNamespace/NetJoinResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetJoinResult)
// Forward declare root types
namespace GlobalNamespace {
struct NetJoinResult;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetJoinResult);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetJoinResult, "", "NetJoinResult");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: NetJoinResult
struct CORDL_TYPE NetJoinResult {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetJoinResult_Unwrapped
enum struct __NetJoinResult_Unwrapped : int32_t {
__E_Success = static_cast<int32_t>(0x0),
__E_FallbackCreated = static_cast<int32_t>(0x1),
__E_Failed_Full = static_cast<int32_t>(0x2),
__E_AlreadyInRoom = static_cast<int32_t>(0x3),
__E_Failed_Other = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetJoinResult_Unwrapped () const noexcept {
return static_cast<__NetJoinResult_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetJoinResult() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetJoinResult(int32_t  value__) noexcept;

/// @brief Field AlreadyInRoom value: I32(3)
static ::GlobalNamespace::NetJoinResult const AlreadyInRoom;

/// @brief Field Failed_Full value: I32(2)
static ::GlobalNamespace::NetJoinResult const Failed_Full;

/// @brief Field Failed_Other value: I32(4)
static ::GlobalNamespace::NetJoinResult const Failed_Other;

/// @brief Field FallbackCreated value: I32(1)
static ::GlobalNamespace::NetJoinResult const FallbackCreated;

/// @brief Field Success value: I32(0)
static ::GlobalNamespace::NetJoinResult const Success;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1119};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetJoinResult, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetJoinResult) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRemovalData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendSystem_FriendRemovalData)
namespace GlobalNamespace {
class FriendSystem_FriendRemovalCallback;
}
// Forward declare root types
namespace GlobalNamespace {
struct FriendSystem_FriendRemovalData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendSystem_FriendRemovalData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_FriendRemovalData, "", "FriendSystem/FriendRemovalData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendSystem/FriendRemovalData
struct CORDL_TYPE FriendSystem_FriendRemovalData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_FriendRemovalData() ;

// Ctor Parameters [CppParam { name: "targetPlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localTimeSent", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "completionCallback", ty: "::GlobalNamespace::FriendSystem_FriendRemovalCallback*", modifiers: "", def_value: None, comment: None }]
constexpr FriendSystem_FriendRemovalData(int32_t  targetPlayerId, float_t  localTimeSent, ::GlobalNamespace::FriendSystem_FriendRemovalCallback*  completionCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3271};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field targetPlayerId, offset: 0x0, size: 0x4, def value: None
 int32_t  targetPlayerId;

/// @brief Field localTimeSent, offset: 0x4, size: 0x4, def value: None
 float_t  localTimeSent;

/// @brief Field completionCallback, offset: 0x8, size: 0x8, def value: None
 ::GlobalNamespace::FriendSystem_FriendRemovalCallback*  completionCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRemovalData, targetPlayerId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRemovalData, localTimeSent) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRemovalData, completionCallback) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendSystem_FriendRemovalData) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

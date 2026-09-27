#pragma once
// IWYU pragma private; include "GlobalNamespace/FriendSystem_FriendRequestData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FriendSystem_FriendRequestData)
namespace GlobalNamespace {
class FriendSystem_FriendRequestCallback;
}
// Forward declare root types
namespace GlobalNamespace {
struct FriendSystem_FriendRequestData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FriendSystem_FriendRequestData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::FriendSystem_FriendRequestData, "", "FriendSystem/FriendRequestData");
// Dependencies GTZone
namespace GlobalNamespace {
// Is value type: true
// CS Name: FriendSystem/FriendRequestData
struct CORDL_TYPE FriendSystem_FriendRequestData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr FriendSystem_FriendRequestData() ;

// Ctor Parameters [CppParam { name: "zone", ty: "::GlobalNamespace::GTZone", modifiers: "", def_value: None, comment: None }, CppParam { name: "sendingPlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "targetPlayerId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "localTimeSent", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "completionCallback", ty: "::GlobalNamespace::FriendSystem_FriendRequestCallback*", modifiers: "", def_value: None, comment: None }]
constexpr FriendSystem_FriendRequestData(::GlobalNamespace::GTZone  zone, int32_t  sendingPlayerId, int32_t  targetPlayerId, float_t  localTimeSent, ::GlobalNamespace::FriendSystem_FriendRequestCallback*  completionCallback) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3269};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field zone, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  zone;

/// @brief Field sendingPlayerId, offset: 0x4, size: 0x4, def value: None
 int32_t  sendingPlayerId;

/// @brief Field targetPlayerId, offset: 0x8, size: 0x4, def value: None
 int32_t  targetPlayerId;

/// @brief Field localTimeSent, offset: 0xc, size: 0x4, def value: None
 float_t  localTimeSent;

/// @brief Field completionCallback, offset: 0x10, size: 0x8, def value: None
 ::GlobalNamespace::FriendSystem_FriendRequestCallback*  completionCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestData, zone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestData, sendingPlayerId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestData, targetPlayerId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestData, localTimeSent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FriendSystem_FriendRequestData, completionCallback) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::FriendSystem_FriendRequestData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetRoomPlayersSubscriptionsCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ClientGetBulkSubscriptionsCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetRoomPlayersSubscriptionsCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipGetRoomPlayersSubscriptionsCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback*, "", "MothershipGetRoomPlayersSubscriptionsCallback");
// Dependencies ClientGetBulkSubscriptionsCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetRoomPlayersSubscriptionsCallback
class CORDL_TYPE MothershipGetRoomPlayersSubscriptionsCallback : public ::GlobalNamespace::ClientGetBulkSubscriptionsCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53bed20, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53becc0, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetRoomPlayersSubscriptionsCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetRoomPlayersSubscriptionsCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetRoomPlayersSubscriptionsCallback(MothershipGetRoomPlayersSubscriptionsCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetRoomPlayersSubscriptionsCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetRoomPlayersSubscriptionsCallback(MothershipGetRoomPlayersSubscriptionsCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9756};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetRoomPlayersSubscriptionsCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace

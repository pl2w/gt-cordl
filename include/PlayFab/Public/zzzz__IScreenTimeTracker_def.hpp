#pragma once
// IWYU pragma private; include "PlayFab/Public/IScreenTimeTracker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(IScreenTimeTracker)
// Forward declare root types
namespace PlayFab::Public {
class IScreenTimeTracker;
}
// Write type traits
MARK_REF_T(::PlayFab::Public::IScreenTimeTracker*);
DEFINE_IL2CPP_CLASS(::PlayFab::Public::IScreenTimeTracker*, "PlayFab.Public", "IScreenTimeTracker");
// Dependencies 
namespace PlayFab::Public {
// Is value type: false
// CS Name: PlayFab.Public.IScreenTimeTracker
class CORDL_TYPE IScreenTimeTracker {
public:
// Declarations
/// @brief Method ClientSessionStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClientSessionStart(::StringW  entityId, ::StringW  entityType, ::StringW  playFabUserId) ;

/// @brief Method OnApplicationFocus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnApplicationFocus(bool  isFocused) ;

/// @brief Method OnApplicationQuit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnApplicationQuit() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnEnable() ;

/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Send() ;

// Ctor Parameters [CppParam { name: "", ty: "IScreenTimeTracker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IScreenTimeTracker(IScreenTimeTracker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19842};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def PlayFab::Public

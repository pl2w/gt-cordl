#pragma once
// IWYU pragma private; include "Steamworks/SteamAPI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SteamAPI)
namespace Steamworks {
struct AppId_t;
}
namespace Steamworks {
struct ESteamAPIInitResult;
}
namespace Steamworks {
struct HSteamPipe;
}
namespace Steamworks {
struct HSteamUser;
}
// Forward declare root types
namespace Steamworks {
class SteamAPI;
}
// Write type traits
MARK_REF_T(::Steamworks::SteamAPI*);
DEFINE_IL2CPP_CLASS(::Steamworks::SteamAPI*, "Steamworks", "SteamAPI");
// Dependencies System.Object
namespace Steamworks {
// Is value type: false
// CS Name: Steamworks.SteamAPI
class CORDL_TYPE SteamAPI : public ::System::Object {
public:
// Declarations
/// @brief Method GetHSteamPipe, addr 0x5f33464, size 0x4, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamPipe GetHSteamPipe() ;

/// @brief Method GetHSteamUser, addr 0x5f33468, size 0x4, virtual false, abstract: false, final false
static inline ::Steamworks::HSteamUser GetHSteamUser() ;

/// @brief Method Init, addr 0x5f33318, size 0x1c, virtual false, abstract: false, final false
static inline bool Init() ;

/// @brief Method InitEx, addr 0x5f32bdc, size 0x73c, virtual false, abstract: false, final false
static inline ::Steamworks::ESteamAPIInitResult InitEx(::by_ref<::StringW>  OutSteamErrMsg) ;

/// @brief Method RestartAppIfNecessary, addr 0x5f3340c, size 0x8, virtual false, abstract: false, final false
static inline bool RestartAppIfNecessary(::Steamworks::AppId_t  unOwnAppID) ;

/// @brief Method RunCallbacks, addr 0x5f33414, size 0x50, virtual false, abstract: false, final false
static inline void RunCallbacks() ;

/// @brief Method Shutdown, addr 0x5f33334, size 0x8c, virtual false, abstract: false, final false
static inline void Shutdown() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SteamAPI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SteamAPI(SteamAPI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SteamAPI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SteamAPI(SteamAPI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32147};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Steamworks::SteamAPI) == 0x10, "Size mismatch!");

} // namespace end def Steamworks

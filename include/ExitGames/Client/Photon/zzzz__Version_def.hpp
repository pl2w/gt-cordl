#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/Version.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
// Forward declare root types
namespace ExitGames::Client::Photon {
class Version;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::Version*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::Version*, "ExitGames.Client.Photon", "Version");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.Version
class CORDL_TYPE Version : public ::System::Object {
public:
// Declarations
/// @brief Field clientVersion, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_clientVersion, put=setStaticF_clientVersion)) ::ArrayW<uint8_t>  clientVersion;

static inline ::ArrayW<uint8_t> getStaticF_clientVersion() ;

static inline void setStaticF_clientVersion(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Version() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Version(Version && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Version(Version const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::Version) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon

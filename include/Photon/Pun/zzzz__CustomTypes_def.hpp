#pragma once
// IWYU pragma private; include "Photon/Pun/CustomTypes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomTypes)
namespace ExitGames::Client::Photon {
class StreamBuffer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Photon::Pun {
class CustomTypes;
}
// Write type traits
MARK_REF_T(::Photon::Pun::CustomTypes*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::CustomTypes*, "Photon.Pun", "CustomTypes");
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.CustomTypes
class CORDL_TYPE CustomTypes : public ::System::Object {
public:
// Declarations
/// @brief Field memPlayer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_memPlayer, put=setStaticF_memPlayer)) ::ArrayW<uint8_t>  memPlayer;

/// @brief Method DeserializePhotonPlayer, addr 0xa711f70, size 0x218, virtual false, abstract: false, final false
static inline ::System::Object* DeserializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer*  inStream, int16_t  length) ;

/// @brief Method Register, addr 0xa711c4c, size 0x13c, virtual false, abstract: false, final false
static inline void Register() ;

/// @brief Method SerializePhotonPlayer, addr 0xa711d88, size 0x1e8, virtual false, abstract: false, final false
static inline int16_t SerializePhotonPlayer(::ExitGames::Client::Photon::StreamBuffer*  outStream, ::System::Object*  customobject) ;

static inline ::ArrayW<uint8_t> getStaticF_memPlayer() ;

static inline void setStaticF_memPlayer(::ArrayW<uint8_t>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomTypes() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomTypes", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomTypes(CustomTypes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomTypes", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomTypes(CustomTypes const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29686};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::CustomTypes) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun

#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/SerializationProtocolFactory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializationProtocolFactory)
namespace ExitGames::Client::Photon {
class IProtocol;
}
namespace ExitGames::Client::Photon {
struct SerializationProtocol;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class SerializationProtocolFactory;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::SerializationProtocolFactory*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::SerializationProtocolFactory*, "ExitGames.Client.Photon", "SerializationProtocolFactory");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.SerializationProtocolFactory
class CORDL_TYPE SerializationProtocolFactory : public ::System::Object {
public:
// Declarations
/// @brief Method Create, addr 0xa6c4a70, size 0x8c, virtual false, abstract: false, final false
static inline ::ExitGames::Client::Photon::IProtocol* Create(::ExitGames::Client::Photon::SerializationProtocol  serializationProtocol) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationProtocolFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationProtocolFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationProtocolFactory(SerializationProtocolFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationProtocolFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationProtocolFactory(SerializationProtocolFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::ExitGames::Client::Photon::SerializationProtocolFactory) == 0x10, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon

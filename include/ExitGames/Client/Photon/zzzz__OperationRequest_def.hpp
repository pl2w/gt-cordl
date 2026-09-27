#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/OperationRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OperationRequest)
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class OperationRequest;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::OperationRequest*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::OperationRequest*, "ExitGames.Client.Photon", "OperationRequest");
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.OperationRequest
class CORDL_TYPE OperationRequest : public ::System::Object {
public:
// Declarations
/// @brief Field OperationCode, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_OperationCode, put=__cordl_internal_set_OperationCode)) uint8_t  OperationCode;

/// @brief Field Parameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::ExitGames::Client::Photon::ParameterDictionary*  Parameters;

static inline ::ExitGames::Client::Photon::OperationRequest* New_ctor() ;

constexpr uint8_t const& __cordl_internal_get_OperationCode() const;

constexpr uint8_t& __cordl_internal_get_OperationCode() ;

constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& __cordl_internal_get_Parameters() const;

constexpr ::ExitGames::Client::Photon::ParameterDictionary*& __cordl_internal_get_Parameters() ;

constexpr void __cordl_internal_set_OperationCode(uint8_t  value) ;

constexpr void __cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value) ;

/// @brief Method .ctor, addr 0xa6d00a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationRequest(OperationRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationRequest(OperationRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26454};

/// @brief Field OperationCode, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___OperationCode;

/// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ParameterDictionary*  ___Parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::OperationRequest, ___OperationCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::OperationRequest, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::OperationRequest) == 0x20, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon

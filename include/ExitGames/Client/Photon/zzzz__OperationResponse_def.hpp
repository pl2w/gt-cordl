#pragma once
// IWYU pragma private; include "ExitGames/Client/Photon/OperationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OperationResponse)
namespace ExitGames::Client::Photon {
class ParameterDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace ExitGames::Client::Photon {
class OperationResponse;
}
// Write type traits
MARK_REF_T(::ExitGames::Client::Photon::OperationResponse*);
DEFINE_IL2CPP_CLASS(::ExitGames::Client::Photon::OperationResponse*, "ExitGames.Client.Photon", "OperationResponse");
// [DefaultMember("Item")]
// Dependencies System.Object
namespace ExitGames::Client::Photon {
// Is value type: false
// CS Name: ExitGames.Client.Photon.OperationResponse
class CORDL_TYPE OperationResponse : public ::System::Object {
public:
// Declarations
/// @brief Field DebugMessage, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_DebugMessage, put=__cordl_internal_set_DebugMessage)) ::StringW  DebugMessage;

 __declspec(property(get=get_Item, put=set_Item)) ::System::Object*  Item[];

/// @brief Field OperationCode, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_OperationCode, put=__cordl_internal_set_OperationCode)) uint8_t  OperationCode;

/// @brief Field Parameters, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::ExitGames::Client::Photon::ParameterDictionary*  Parameters;

/// @brief Field ReturnCode, offset 0x12, size 0x2 
 __declspec(property(get=__cordl_internal_get_ReturnCode, put=__cordl_internal_set_ReturnCode)) int16_t  ReturnCode;

static inline ::ExitGames::Client::Photon::OperationResponse* New_ctor() ;

/// @brief Method ToString, addr 0xa6d00f0, size 0x94, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringFull, addr 0xa6d0184, size 0x1e8, virtual false, abstract: false, final false
inline ::StringW ToStringFull() ;

constexpr ::StringW const& __cordl_internal_get_DebugMessage() const;

constexpr ::StringW& __cordl_internal_get_DebugMessage() ;

constexpr uint8_t const& __cordl_internal_get_OperationCode() const;

constexpr uint8_t& __cordl_internal_get_OperationCode() ;

constexpr ::ExitGames::Client::Photon::ParameterDictionary* const& __cordl_internal_get_Parameters() const;

constexpr ::ExitGames::Client::Photon::ParameterDictionary*& __cordl_internal_get_Parameters() ;

constexpr int16_t const& __cordl_internal_get_ReturnCode() const;

constexpr int16_t& __cordl_internal_get_ReturnCode() ;

constexpr void __cordl_internal_set_DebugMessage(::StringW  value) ;

constexpr void __cordl_internal_set_OperationCode(uint8_t  value) ;

constexpr void __cordl_internal_set_Parameters(::ExitGames::Client::Photon::ParameterDictionary*  value) ;

constexpr void __cordl_internal_set_ReturnCode(int16_t  value) ;

/// @brief Method .ctor, addr 0xa6d036c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Item, addr 0xa6d00b0, size 0x28, virtual false, abstract: false, final false
inline ::System::Object* get_Item(uint8_t  parameterCode) ;

/// @brief Method set_Item, addr 0xa6d00d8, size 0x18, virtual false, abstract: false, final false
inline void set_Item(uint8_t  parameterCode, ::System::Object*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OperationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OperationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OperationResponse(OperationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OperationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OperationResponse(OperationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26455};

/// @brief Field OperationCode, offset: 0x10, size: 0x1, def value: None
 uint8_t  ___OperationCode;

/// @brief Field ReturnCode, offset: 0x12, size: 0x2, def value: None
 int16_t  ___ReturnCode;

/// @brief Field DebugMessage, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___DebugMessage;

/// @brief Field Parameters, offset: 0x20, size: 0x8, def value: None
 ::ExitGames::Client::Photon::ParameterDictionary*  ___Parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::ExitGames::Client::Photon::OperationResponse, ___OperationCode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::OperationResponse, ___ReturnCode) == 0x12, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::OperationResponse, ___DebugMessage) == 0x18, "Offset mismatch!");

static_assert(offsetof(::ExitGames::Client::Photon::OperationResponse, ___Parameters) == 0x20, "Offset mismatch!");

static_assert(sizeof(::ExitGames::Client::Photon::OperationResponse) == 0x28, "Size mismatch!");

} // namespace end def ExitGames::Client::Photon

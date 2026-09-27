#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRequestEndpointInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWitRequestEndpointInfo)
// Forward declare root types
namespace Meta::WitAi {
class IWitRequestEndpointInfo;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::IWitRequestEndpointInfo*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::IWitRequestEndpointInfo*, "Meta.WitAi", "IWitRequestEndpointInfo");
// Dependencies 
namespace Meta::WitAi {
// Is value type: false
// CS Name: Meta.WitAi.IWitRequestEndpointInfo
class CORDL_TYPE IWitRequestEndpointInfo {
public:
// Declarations
 __declspec(property(get=get_Authority)) ::StringW  Authority;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Port)) int32_t  Port;

 __declspec(property(get=get_Speech)) ::StringW  Speech;

 __declspec(property(get=get_Synthesize)) ::StringW  Synthesize;

 __declspec(property(get=get_UriScheme)) ::StringW  UriScheme;

 __declspec(property(get=get_WitApiVersion)) ::StringW  WitApiVersion;

/// @brief Method get_Authority, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Authority() ;

/// @brief Method get_Message, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Message() ;

/// @brief Method get_Port, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t get_Port() ;

/// @brief Method get_Speech, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Speech() ;

/// @brief Method get_Synthesize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Synthesize() ;

/// @brief Method get_UriScheme, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_UriScheme() ;

/// @brief Method get_WitApiVersion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_WitApiVersion() ;

// Ctor Parameters [CppParam { name: "", ty: "IWitRequestEndpointInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IWitRequestEndpointInfo(IWitRequestEndpointInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25534};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::WitAi

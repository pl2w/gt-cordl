#pragma once
// IWYU pragma private; include "Meta/WitAi/Configuration/WitEndpointConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WitEndpointConfig)
namespace Meta::WitAi::Data::Configuration {
class WitConfiguration;
}
namespace Meta::WitAi {
class IWitRequestEndpointInfo;
}
// Forward declare root types
namespace Meta::WitAi::Configuration {
class WitEndpointConfig;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Configuration::WitEndpointConfig*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Configuration::WitEndpointConfig*, "Meta.WitAi.Configuration", "WitEndpointConfig");
// Dependencies System.Object
namespace Meta::WitAi::Configuration {
// Is value type: false
// CS Name: Meta.WitAi.Configuration.WitEndpointConfig
class CORDL_TYPE WitEndpointConfig : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Authority)) ::StringW  Authority;

 __declspec(property(get=get_Dictation)) ::StringW  Dictation;

 __declspec(property(get=get_Message)) ::StringW  Message;

 __declspec(property(get=get_Port)) int32_t  Port;

 __declspec(property(get=get_Speech)) ::StringW  Speech;

 __declspec(property(get=get_Synthesize)) ::StringW  Synthesize;

 __declspec(property(get=get_UriScheme)) ::StringW  UriScheme;

 __declspec(property(get=get_WitApiVersion)) ::StringW  WitApiVersion;

/// @brief Field _authority, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__authority, put=__cordl_internal_set__authority)) ::StringW  _authority;

/// @brief Field _converse, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__converse, put=__cordl_internal_set__converse)) ::StringW  _converse;

/// @brief Field _dictation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__dictation, put=__cordl_internal_set__dictation)) ::StringW  _dictation;

/// @brief Field _event, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__event, put=__cordl_internal_set__event)) ::StringW  _event;

/// @brief Field _message, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::StringW  _message;

/// @brief Field _port, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__port, put=__cordl_internal_set__port)) int32_t  _port;

/// @brief Field _speech, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__speech, put=__cordl_internal_set__speech)) ::StringW  _speech;

/// @brief Field _synthesize, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__synthesize, put=__cordl_internal_set__synthesize)) ::StringW  _synthesize;

/// @brief Field _uriScheme, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__uriScheme, put=__cordl_internal_set__uriScheme)) ::StringW  _uriScheme;

/// @brief Field _witApiVersion, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__witApiVersion, put=__cordl_internal_set__witApiVersion)) ::StringW  _witApiVersion;

/// @brief Field defaultEndpointConfig, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultEndpointConfig, put=setStaticF_defaultEndpointConfig)) ::Meta::WitAi::Configuration::WitEndpointConfig*  defaultEndpointConfig;

/// @brief Convert operator to "::Meta::WitAi::IWitRequestEndpointInfo"
constexpr operator  ::Meta::WitAi::IWitRequestEndpointInfo*() noexcept;

/// @brief Method GetEndpointConfig, addr 0x9e96698, size 0xa0, virtual false, abstract: false, final false
static inline ::Meta::WitAi::Configuration::WitEndpointConfig* GetEndpointConfig(::Meta::WitAi::Data::Configuration::WitConfiguration*  witConfig) ;

static inline ::Meta::WitAi::Configuration::WitEndpointConfig* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get__authority() const;

constexpr ::StringW& __cordl_internal_get__authority() ;

constexpr ::StringW const& __cordl_internal_get__converse() const;

constexpr ::StringW& __cordl_internal_get__converse() ;

constexpr ::StringW const& __cordl_internal_get__dictation() const;

constexpr ::StringW& __cordl_internal_get__dictation() ;

constexpr ::StringW const& __cordl_internal_get__event() const;

constexpr ::StringW& __cordl_internal_get__event() ;

constexpr ::StringW const& __cordl_internal_get__message() const;

constexpr ::StringW& __cordl_internal_get__message() ;

constexpr int32_t const& __cordl_internal_get__port() const;

constexpr int32_t& __cordl_internal_get__port() ;

constexpr ::StringW const& __cordl_internal_get__speech() const;

constexpr ::StringW& __cordl_internal_get__speech() ;

constexpr ::StringW const& __cordl_internal_get__synthesize() const;

constexpr ::StringW& __cordl_internal_get__synthesize() ;

constexpr ::StringW const& __cordl_internal_get__uriScheme() const;

constexpr ::StringW& __cordl_internal_get__uriScheme() ;

constexpr ::StringW const& __cordl_internal_get__witApiVersion() const;

constexpr ::StringW& __cordl_internal_get__witApiVersion() ;

constexpr void __cordl_internal_set__authority(::StringW  value) ;

constexpr void __cordl_internal_set__converse(::StringW  value) ;

constexpr void __cordl_internal_set__dictation(::StringW  value) ;

constexpr void __cordl_internal_set__event(::StringW  value) ;

constexpr void __cordl_internal_set__message(::StringW  value) ;

constexpr void __cordl_internal_set__port(int32_t  value) ;

constexpr void __cordl_internal_set__speech(::StringW  value) ;

constexpr void __cordl_internal_set__synthesize(::StringW  value) ;

constexpr void __cordl_internal_set__uriScheme(::StringW  value) ;

constexpr void __cordl_internal_set__witApiVersion(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e96738, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Meta::WitAi::Configuration::WitEndpointConfig* getStaticF_defaultEndpointConfig() ;

/// @brief Method get_Authority, addr 0x9e96478, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Authority() ;

/// @brief Method get_Dictation, addr 0x9e965e8, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Dictation() ;

/// @brief Method get_Message, addr 0x9e96538, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Message() ;

/// @brief Method get_Port, addr 0x9e964d0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Port() ;

/// @brief Method get_Speech, addr 0x9e96590, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Speech() ;

/// @brief Method get_Synthesize, addr 0x9e96640, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_Synthesize() ;

/// @brief Method get_UriScheme, addr 0x9e96420, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_UriScheme() ;

/// @brief Method get_WitApiVersion, addr 0x9e964e0, size 0x58, virtual true, abstract: false, final true
inline ::StringW get_WitApiVersion() ;

/// @brief Convert to "::Meta::WitAi::IWitRequestEndpointInfo"
constexpr ::Meta::WitAi::IWitRequestEndpointInfo* i___Meta__WitAi__IWitRequestEndpointInfo() noexcept;

static inline void setStaticF_defaultEndpointConfig(::Meta::WitAi::Configuration::WitEndpointConfig*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WitEndpointConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WitEndpointConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WitEndpointConfig(WitEndpointConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WitEndpointConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WitEndpointConfig(WitEndpointConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25689};

/// [SerializeField]
/// [FormerlySerializedAs("uriScheme")]
/// @brief Field _uriScheme, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____uriScheme;

/// [SerializeField]
/// [FormerlySerializedAs("authority")]
/// @brief Field _authority, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____authority;

/// [SerializeField]
/// [FormerlySerializedAs("port")]
/// @brief Field _port, offset: 0x20, size: 0x4, def value: None
 int32_t  ____port;

/// [SerializeField]
/// [FormerlySerializedAs("witApiVersion")]
/// @brief Field _witApiVersion, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____witApiVersion;

/// [SerializeField]
/// [FormerlySerializedAs("message")]
/// @brief Field _message, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____message;

/// [SerializeField]
/// [FormerlySerializedAs("speech")]
/// @brief Field _speech, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____speech;

/// [SerializeField]
/// [FormerlySerializedAs("dictation")]
/// @brief Field _dictation, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____dictation;

/// [SerializeField]
/// @brief Field _synthesize, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____synthesize;

/// [SerializeField]
/// @brief Field _event, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____event;

/// [SerializeField]
/// @brief Field _converse, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____converse;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____uriScheme) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____authority) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____port) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____witApiVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____message) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____speech) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____dictation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____synthesize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____event) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Configuration::WitEndpointConfig, ____converse) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Configuration::WitEndpointConfig) == 0x60, "Size mismatch!");

} // namespace end def Meta::WitAi::Configuration

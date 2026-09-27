#pragma once
// IWYU pragma private; include "System/Net/Configuration/SocketElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
CORDL_MODULE_EXPORT(SocketElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Forward declare root types
namespace System::Net::Configuration {
class SocketElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::SocketElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::SocketElement*, "System.Net.Configuration", "SocketElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.SocketElement
class CORDL_TYPE SocketElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_AlwaysUseCompletionPortsForAccept, put=set_AlwaysUseCompletionPortsForAccept)) bool  AlwaysUseCompletionPortsForAccept;

 __declspec(property(get=get_AlwaysUseCompletionPortsForConnect, put=set_AlwaysUseCompletionPortsForConnect)) bool  AlwaysUseCompletionPortsForConnect;

 __declspec(property(get=get_IPProtectionLevel, put=set_IPProtectionLevel)) ::System::Net::Sockets::IPProtectionLevel  IPProtectionLevel;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Net::Configuration::SocketElement* New_ctor() ;

/// @brief Method PostDeserialize, addr 0xacfac80, size 0x38, virtual true, abstract: false, final false
inline void PostDeserialize() ;

/// @brief Method .ctor, addr 0xacfaac0, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AlwaysUseCompletionPortsForAccept, addr 0xacfaaf8, size 0x38, virtual false, abstract: false, final false
inline bool get_AlwaysUseCompletionPortsForAccept() ;

/// @brief Method get_AlwaysUseCompletionPortsForConnect, addr 0xacfab68, size 0x38, virtual false, abstract: false, final false
inline bool get_AlwaysUseCompletionPortsForConnect() ;

/// @brief Method get_IPProtectionLevel, addr 0xacfabd8, size 0x38, virtual false, abstract: false, final false
inline ::System::Net::Sockets::IPProtectionLevel get_IPProtectionLevel() ;

/// @brief Method get_Properties, addr 0xacfac48, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_AlwaysUseCompletionPortsForAccept, addr 0xacfab30, size 0x38, virtual false, abstract: false, final false
inline void set_AlwaysUseCompletionPortsForAccept(bool  value) ;

/// @brief Method set_AlwaysUseCompletionPortsForConnect, addr 0xacfaba0, size 0x38, virtual false, abstract: false, final false
inline void set_AlwaysUseCompletionPortsForConnect(bool  value) ;

/// @brief Method set_IPProtectionLevel, addr 0xacfac10, size 0x38, virtual false, abstract: false, final false
inline void set_IPProtectionLevel(::System::Net::Sockets::IPProtectionLevel  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SocketElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SocketElement(SocketElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SocketElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SocketElement(SocketElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11005};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::SocketElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration

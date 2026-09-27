#pragma once
// IWYU pragma private; include "System/Net/Configuration/ConnectionManagementElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionManagementElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
// Forward declare root types
namespace System::Net::Configuration {
class ConnectionManagementElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::ConnectionManagementElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::ConnectionManagementElement*, "System.Net.Configuration", "ConnectionManagementElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.ConnectionManagementElement
class CORDL_TYPE ConnectionManagementElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_Address, put=set_Address)) ::StringW  Address;

 __declspec(property(get=get_MaxConnection, put=set_MaxConnection)) int32_t  MaxConnection;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

static inline ::System::Net::Configuration::ConnectionManagementElement* New_ctor() ;

static inline ::System::Net::Configuration::ConnectionManagementElement* New_ctor(::StringW  address, int32_t  maxConnection) ;

/// @brief Method .ctor, addr 0xacf8248, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xacf8280, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::StringW  address, int32_t  maxConnection) ;

/// @brief Method get_Address, addr 0xacf82b8, size 0x38, virtual false, abstract: false, final false
inline ::StringW get_Address() ;

/// @brief Method get_MaxConnection, addr 0xacf8328, size 0x38, virtual false, abstract: false, final false
inline int32_t get_MaxConnection() ;

/// @brief Method get_Properties, addr 0xacf8398, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method set_Address, addr 0xacf82f0, size 0x38, virtual false, abstract: false, final false
inline void set_Address(::StringW  value) ;

/// @brief Method set_MaxConnection, addr 0xacf8360, size 0x38, virtual false, abstract: false, final false
inline void set_MaxConnection(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConnectionManagementElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConnectionManagementElement(ConnectionManagementElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionManagementElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConnectionManagementElement(ConnectionManagementElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10981};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::ConnectionManagementElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration

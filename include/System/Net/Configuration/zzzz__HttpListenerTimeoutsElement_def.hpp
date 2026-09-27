#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpListenerTimeoutsElement.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpListenerTimeoutsElement)
namespace System::Configuration {
class ConfigurationPropertyCollection;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Configuration {
class HttpListenerTimeoutsElement;
}
// Write type traits
MARK_REF_T(::System::Net::Configuration::HttpListenerTimeoutsElement*);
DEFINE_IL2CPP_CLASS(::System::Net::Configuration::HttpListenerTimeoutsElement*, "System.Net.Configuration", "HttpListenerTimeoutsElement");
// Dependencies System.Configuration.ConfigurationElement
namespace System::Net::Configuration {
// Is value type: false
// CS Name: System.Net.Configuration.HttpListenerTimeoutsElement
class CORDL_TYPE HttpListenerTimeoutsElement : public ::System::Configuration::ConfigurationElement {
public:
// Declarations
 __declspec(property(get=get_DrainEntityBody)) ::System::TimeSpan  DrainEntityBody;

 __declspec(property(get=get_EntityBody)) ::System::TimeSpan  EntityBody;

 __declspec(property(get=get_HeaderWait)) ::System::TimeSpan  HeaderWait;

 __declspec(property(get=get_IdleConnection)) ::System::TimeSpan  IdleConnection;

 __declspec(property(get=get_MinSendBytesPerSecond)) int64_t  MinSendBytesPerSecond;

 __declspec(property(get=get_Properties)) ::System::Configuration::ConfigurationPropertyCollection*  Properties;

 __declspec(property(get=get_RequestQueue)) ::System::TimeSpan  RequestQueue;

static inline ::System::Net::Configuration::HttpListenerTimeoutsElement* New_ctor() ;

/// @brief Method .ctor, addr 0xacf9208, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DrainEntityBody, addr 0xacf9240, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_DrainEntityBody() ;

/// @brief Method get_EntityBody, addr 0xacf9278, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_EntityBody() ;

/// @brief Method get_HeaderWait, addr 0xacf92b0, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_HeaderWait() ;

/// @brief Method get_IdleConnection, addr 0xacf92e8, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_IdleConnection() ;

/// @brief Method get_MinSendBytesPerSecond, addr 0xacf9320, size 0x38, virtual false, abstract: false, final false
inline int64_t get_MinSendBytesPerSecond() ;

/// @brief Method get_Properties, addr 0xacf9358, size 0x38, virtual true, abstract: false, final false
inline ::System::Configuration::ConfigurationPropertyCollection* get_Properties() ;

/// @brief Method get_RequestQueue, addr 0xacf9390, size 0x38, virtual false, abstract: false, final false
inline ::System::TimeSpan get_RequestQueue() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpListenerTimeoutsElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerTimeoutsElement", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpListenerTimeoutsElement(HttpListenerTimeoutsElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerTimeoutsElement", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpListenerTimeoutsElement(HttpListenerTimeoutsElement const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10993};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Configuration::HttpListenerTimeoutsElement) == 0x10, "Size mismatch!");

} // namespace end def System::Net::Configuration

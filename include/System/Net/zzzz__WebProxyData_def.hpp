#pragma once
// IWYU pragma private; include "System/Net/WebProxyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WebProxyData)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class WebProxyData;
}
// Write type traits
MARK_REF_T(::System::Net::WebProxyData*);
DEFINE_IL2CPP_CLASS(::System::Net::WebProxyData*, "System.Net", "WebProxyData");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.WebProxyData
class CORDL_TYPE WebProxyData : public ::System::Object {
public:
// Declarations
/// @brief Field automaticallyDetectSettings, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_automaticallyDetectSettings, put=__cordl_internal_set_automaticallyDetectSettings)) bool  automaticallyDetectSettings;

/// @brief Field bypassList, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bypassList, put=__cordl_internal_set_bypassList)) ::System::Collections::ArrayList*  bypassList;

/// @brief Field bypassOnLocal, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_bypassOnLocal, put=__cordl_internal_set_bypassOnLocal)) bool  bypassOnLocal;

/// @brief Field proxyAddress, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxyAddress, put=__cordl_internal_set_proxyAddress)) ::System::Uri*  proxyAddress;

/// @brief Field proxyHostAddresses, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_proxyHostAddresses, put=__cordl_internal_set_proxyHostAddresses)) ::System::Collections::Hashtable*  proxyHostAddresses;

/// @brief Field scriptLocation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_scriptLocation, put=__cordl_internal_set_scriptLocation)) ::System::Uri*  scriptLocation;

static inline ::System::Net::WebProxyData* New_ctor() ;

constexpr bool const& __cordl_internal_get_automaticallyDetectSettings() const;

constexpr bool& __cordl_internal_get_automaticallyDetectSettings() ;

constexpr ::System::Collections::ArrayList* const& __cordl_internal_get_bypassList() const;

constexpr ::System::Collections::ArrayList*& __cordl_internal_get_bypassList() ;

constexpr bool const& __cordl_internal_get_bypassOnLocal() const;

constexpr bool& __cordl_internal_get_bypassOnLocal() ;

constexpr ::System::Uri* const& __cordl_internal_get_proxyAddress() const;

constexpr ::System::Uri*& __cordl_internal_get_proxyAddress() ;

constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_proxyHostAddresses() const;

constexpr ::System::Collections::Hashtable*& __cordl_internal_get_proxyHostAddresses() ;

constexpr ::System::Uri* const& __cordl_internal_get_scriptLocation() const;

constexpr ::System::Uri*& __cordl_internal_get_scriptLocation() ;

constexpr void __cordl_internal_set_automaticallyDetectSettings(bool  value) ;

constexpr void __cordl_internal_set_bypassList(::System::Collections::ArrayList*  value) ;

constexpr void __cordl_internal_set_bypassOnLocal(bool  value) ;

constexpr void __cordl_internal_set_proxyAddress(::System::Uri*  value) ;

constexpr void __cordl_internal_set_proxyHostAddresses(::System::Collections::Hashtable*  value) ;

constexpr void __cordl_internal_set_scriptLocation(::System::Uri*  value) ;

/// @brief Method .ctor, addr 0xac8641c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebProxyData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebProxyData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebProxyData(WebProxyData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebProxyData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebProxyData(WebProxyData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10637};

/// @brief Field bypassOnLocal, offset: 0x10, size: 0x1, def value: None
 bool  ___bypassOnLocal;

/// @brief Field automaticallyDetectSettings, offset: 0x11, size: 0x1, def value: None
 bool  ___automaticallyDetectSettings;

/// @brief Field proxyAddress, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ___proxyAddress;

/// @brief Field proxyHostAddresses, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Hashtable*  ___proxyHostAddresses;

/// @brief Field scriptLocation, offset: 0x28, size: 0x8, def value: None
 ::System::Uri*  ___scriptLocation;

/// @brief Field bypassList, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::ArrayList*  ___bypassList;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Net::WebProxyData, ___bypassOnLocal) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxyData, ___automaticallyDetectSettings) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxyData, ___proxyAddress) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxyData, ___proxyHostAddresses) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxyData, ___scriptLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Net::WebProxyData, ___bypassList) == 0x30, "Offset mismatch!");

static_assert(sizeof(::System::Net::WebProxyData) == 0x38, "Size mismatch!");

} // namespace end def System::Net

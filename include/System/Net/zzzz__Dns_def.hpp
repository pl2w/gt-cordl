#pragma once
// IWYU pragma private; include "System/Net/Dns.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dns)
namespace System::Net {
class Dns_GetHostAddressesCallback;
}
namespace System::Net {
class Dns_GetHostByNameCallback;
}
namespace System::Net {
class Dns_GetHostEntryIPCallback;
}
namespace System::Net {
class Dns_GetHostEntryNameCallback;
}
namespace System::Net {
class Dns_ResolveCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class Dns;
}
namespace System::Net {
class Dns_GetHostAddressesCallback;
}
namespace System::Net {
class Dns_GetHostByNameCallback;
}
namespace System::Net {
class Dns_GetHostEntryIPCallback;
}
namespace System::Net {
class Dns_GetHostEntryNameCallback;
}
namespace System::Net {
class Dns_ResolveCallback;
}
// Write type traits
MARK_REF_T(::System::Net::Dns*);
MARK_REF_T(::System::Net::Dns_GetHostAddressesCallback*);
MARK_REF_T(::System::Net::Dns_GetHostByNameCallback*);
MARK_REF_T(::System::Net::Dns_GetHostEntryIPCallback*);
MARK_REF_T(::System::Net::Dns_GetHostEntryNameCallback*);
MARK_REF_T(::System::Net::Dns_ResolveCallback*);
DEFINE_IL2CPP_CLASS(::System::Net::Dns*, "System.Net", "Dns");
DEFINE_IL2CPP_CLASS(::System::Net::Dns_GetHostAddressesCallback*, "System.Net", "Dns/GetHostAddressesCallback");
DEFINE_IL2CPP_CLASS(::System::Net::Dns_GetHostByNameCallback*, "System.Net", "Dns/GetHostByNameCallback");
DEFINE_IL2CPP_CLASS(::System::Net::Dns_GetHostEntryIPCallback*, "System.Net", "Dns/GetHostEntryIPCallback");
DEFINE_IL2CPP_CLASS(::System::Net::Dns_GetHostEntryNameCallback*, "System.Net", "Dns/GetHostEntryNameCallback");
DEFINE_IL2CPP_CLASS(::System::Net::Dns_ResolveCallback*, "System.Net", "Dns/ResolveCallback");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns
class CORDL_TYPE Dns : public ::System::Object {
public:
// Declarations
using GetHostAddressesCallback = ::System::Net::Dns_GetHostAddressesCallback;

using GetHostByNameCallback = ::System::Net::Dns_GetHostByNameCallback;

using GetHostEntryIPCallback = ::System::Net::Dns_GetHostEntryIPCallback;

using GetHostEntryNameCallback = ::System::Net::Dns_GetHostEntryNameCallback;

using ResolveCallback = ::System::Net::Dns_ResolveCallback;

/// @brief Method BeginGetHostAddresses, addr 0xac8f6e8, size 0x188, virtual false, abstract: false, final false
static inline ::System::IAsyncResult* BeginGetHostAddresses(::StringW  hostNameOrAddress, ::System::AsyncCallback*  requestCallback, ::System::Object*  state) ;

/// [Obsolete("Use BeginGetHostEntry instead")]
/// @brief Method BeginGetHostByName, addr 0xac8f368, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IAsyncResult* BeginGetHostByName(::StringW  hostName, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject) ;

/// @brief Method BeginGetHostEntry, addr 0xac8fb98, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IAsyncResult* BeginGetHostEntry(::System::Net::IPAddress*  address, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject) ;

/// @brief Method BeginGetHostEntry, addr 0xac8f940, size 0x188, virtual false, abstract: false, final false
static inline ::System::IAsyncResult* BeginGetHostEntry(::StringW  hostNameOrAddress, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject) ;

/// [Obsolete("Use BeginGetHostEntry instead")]
/// @brief Method BeginResolve, addr 0xac8f528, size 0xf0, virtual false, abstract: false, final false
static inline ::System::IAsyncResult* BeginResolve(::StringW  hostName, ::System::AsyncCallback*  requestCallback, ::System::Object*  stateObject) ;

/// @brief Method EndGetHostAddresses, addr 0xac8ffd8, size 0x108, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Net::IPAddress*> EndGetHostAddresses(::System::IAsyncResult*  asyncResult) ;

/// [Obsolete("Use EndGetHostEntry instead")]
/// @brief Method EndGetHostByName, addr 0xac8fdb0, size 0x108, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* EndGetHostByName(::System::IAsyncResult*  asyncResult) ;

/// @brief Method EndGetHostEntry, addr 0xac900ec, size 0x164, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* EndGetHostEntry(::System::IAsyncResult*  asyncResult) ;

/// [Obsolete("Use EndGetHostEntry instead")]
/// @brief Method EndResolve, addr 0xac8fec4, size 0x108, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* EndResolve(::System::IAsyncResult*  asyncResult) ;

/// @brief Method Error_11001, addr 0xac90274, size 0x64, virtual false, abstract: false, final false
static inline void Error_11001(::StringW  hostName) ;

/// @brief Method GetHostAddresses, addr 0xac90cc8, size 0x204, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Net::IPAddress*> GetHostAddresses(::StringW  hostNameOrAddress) ;

/// @brief Method GetHostAddressesAsync, addr 0xac9108c, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::ArrayW<::System::Net::IPAddress*>>* GetHostAddressesAsync(::StringW  hostNameOrAddress) ;

/// @brief Method GetHostByAddr_icall, addr 0xac9026c, size 0x4, virtual false, abstract: false, final false
static inline bool GetHostByAddr_icall(::StringW  addr, ::by_ref<::StringW>  h_name, ::by_ref<::ArrayW<::StringW>>  h_aliases, ::by_ref<::ArrayW<::StringW>>  h_addr_list, int32_t  hint) ;

/// [Obsolete("Use GetHostEntry instead")]
/// @brief Method GetHostByAddress, addr 0xac9087c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostByAddress(::StringW  address) ;

/// [Obsolete("Use GetHostEntry instead")]
/// @brief Method GetHostByAddress, addr 0xac9063c, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostByAddress(::System::Net::IPAddress*  address) ;

/// @brief Method GetHostByAddressFromString, addr 0xac906f8, size 0x184, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostByAddressFromString(::StringW  address, bool  parse) ;

/// [Obsolete("Use GetHostEntry instead")]
/// @brief Method GetHostByName, addr 0xac90b80, size 0x148, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostByName(::StringW  hostName) ;

/// @brief Method GetHostByName_icall, addr 0xac90268, size 0x4, virtual false, abstract: false, final false
static inline bool GetHostByName_icall(::StringW  host, ::by_ref<::StringW>  h_name, ::by_ref<::ArrayW<::StringW>>  h_aliases, ::by_ref<::ArrayW<::StringW>>  h_addr_list, int32_t  hint) ;

/// @brief Method GetHostEntry, addr 0xac90ac4, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostEntry(::System::Net::IPAddress*  address) ;

/// @brief Method GetHostEntry, addr 0xac90920, size 0x1a4, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* GetHostEntry(::StringW  hostNameOrAddress) ;

/// @brief Method GetHostEntryAsync, addr 0xac911a8, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* GetHostEntryAsync(::System::Net::IPAddress*  address) ;

/// @brief Method GetHostEntryAsync, addr 0xac912c4, size 0x11c, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::Net::IPHostEntry*>* GetHostEntryAsync(::StringW  hostNameOrAddress) ;

/// @brief Method GetHostName, addr 0xac90ecc, size 0x88, virtual false, abstract: false, final false
static inline ::StringW GetHostName() ;

/// @brief Method GetHostName_icall, addr 0xac90270, size 0x4, virtual false, abstract: false, final false
static inline bool GetHostName_icall(::by_ref<::StringW>  h_name) ;

/// [Obsolete("Use GetHostEntry instead")]
/// @brief Method Resolve, addr 0xac90f54, size 0x138, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* Resolve(::StringW  hostName) ;

/// @brief Method hostent_to_IPHostEntry, addr 0xac902d8, size 0x364, virtual false, abstract: false, final false
static inline ::System::Net::IPHostEntry* hostent_to_IPHostEntry(::StringW  originalHostName, ::StringW  h_name, ::ArrayW<::StringW>  h_aliases, ::ArrayW<::StringW>  h_addrlist) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns(Dns && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns(Dns const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10670};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns) == 0x10, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/GetHostAddressesCallback
class CORDL_TYPE Dns_GetHostAddressesCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8f920, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac900e0, size 0xc, virtual true, abstract: false, final false
inline ::ArrayW<::System::Net::IPAddress*> EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac91430, size 0x14, virtual true, abstract: false, final false
inline ::ArrayW<::System::Net::IPAddress*> Invoke(::StringW  hostName) ;

static inline ::System::Net::Dns_GetHostAddressesCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8f870, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns_GetHostAddressesCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostAddressesCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns_GetHostAddressesCallback(Dns_GetHostAddressesCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostAddressesCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns_GetHostAddressesCallback(Dns_GetHostAddressesCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10669};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns_GetHostAddressesCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/GetHostEntryIPCallback
class CORDL_TYPE Dns_GetHostEntryIPCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8fd90, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Net::IPAddress*  hostAddress, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac90250, size 0xc, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac9141c, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* Invoke(::System::Net::IPAddress*  hostAddress) ;

static inline ::System::Net::Dns_GetHostEntryIPCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8fc88, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns_GetHostEntryIPCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostEntryIPCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns_GetHostEntryIPCallback(Dns_GetHostEntryIPCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostEntryIPCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns_GetHostEntryIPCallback(Dns_GetHostEntryIPCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10668};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns_GetHostEntryIPCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/GetHostEntryNameCallback
class CORDL_TYPE Dns_GetHostEntryNameCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8fb78, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac9025c, size 0xc, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac91408, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* Invoke(::StringW  hostName) ;

static inline ::System::Net::Dns_GetHostEntryNameCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8fac8, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns_GetHostEntryNameCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostEntryNameCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns_GetHostEntryNameCallback(Dns_GetHostEntryNameCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostEntryNameCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns_GetHostEntryNameCallback(Dns_GetHostEntryNameCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10667};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns_GetHostEntryNameCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/ResolveCallback
class CORDL_TYPE Dns_ResolveCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8f6c8, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac8ffcc, size 0xc, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac913f4, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* Invoke(::StringW  hostName) ;

static inline ::System::Net::Dns_ResolveCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8f618, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns_ResolveCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns_ResolveCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns_ResolveCallback(Dns_ResolveCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns_ResolveCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns_ResolveCallback(Dns_ResolveCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10666};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns_ResolveCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net
// Dependencies System.MulticastDelegate
namespace System::Net {
// Is value type: false
// CS Name: System.Net.Dns/GetHostByNameCallback
class CORDL_TYPE Dns_GetHostByNameCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xac8f508, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  hostName, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xac8feb8, size 0xc, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xac913e0, size 0x14, virtual true, abstract: false, final false
inline ::System::Net::IPHostEntry* Invoke(::StringW  hostName) ;

static inline ::System::Net::Dns_GetHostByNameCallback* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xac8f458, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dns_GetHostByNameCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostByNameCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dns_GetHostByNameCallback(Dns_GetHostByNameCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dns_GetHostByNameCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dns_GetHostByNameCallback(Dns_GetHostByNameCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10665};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Dns_GetHostByNameCallback) == 0x80, "Size mismatch!");

} // namespace end def System::Net

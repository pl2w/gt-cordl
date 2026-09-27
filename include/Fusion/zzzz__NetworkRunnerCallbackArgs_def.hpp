#pragma once
// IWYU pragma private; include "Fusion/NetworkRunnerCallbackArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetAddress_def.hpp"
#include "Fusion/Sockets/zzzz__OnConnectionRequestReply_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NetworkRunnerCallbackArgs)
namespace Fusion::Sockets {
struct NetAddress;
}
namespace Fusion {
class NetworkRunnerCallbackArgs_ConnectRequest;
}
// Forward declare root types
namespace Fusion {
class NetworkRunnerCallbackArgs;
}
namespace Fusion {
class NetworkRunnerCallbackArgs_ConnectRequest;
}
// Write type traits
MARK_REF_T(::Fusion::NetworkRunnerCallbackArgs*);
MARK_REF_T(::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerCallbackArgs*, "Fusion", "NetworkRunnerCallbackArgs");
DEFINE_IL2CPP_CLASS(::Fusion::NetworkRunnerCallbackArgs_ConnectRequest*, "Fusion", "NetworkRunnerCallbackArgs/ConnectRequest");
// Dependencies System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerCallbackArgs
class CORDL_TYPE NetworkRunnerCallbackArgs : public ::System::Object {
public:
// Declarations
using ConnectRequest = ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerCallbackArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerCallbackArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerCallbackArgs(NetworkRunnerCallbackArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerCallbackArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerCallbackArgs(NetworkRunnerCallbackArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19262};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkRunnerCallbackArgs) == 0x10, "Size mismatch!");

} // namespace end def Fusion
// Dependencies Fusion.Sockets.NetAddress, Fusion.Sockets.OnConnectionRequestReply, System.Nullable`1<T>, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.NetworkRunnerCallbackArgs/ConnectRequest
class CORDL_TYPE NetworkRunnerCallbackArgs_ConnectRequest : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_RemoteAddress, put=set_RemoteAddress)) ::Fusion::Sockets::NetAddress  RemoteAddress;

/// @brief Field Result, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_Result, put=__cordl_internal_set_Result)) ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>  Result;

/// @brief Field <RemoteAddress>k__BackingField, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get__RemoteAddress_k__BackingField, put=__cordl_internal_set__RemoteAddress_k__BackingField)) ::Fusion::Sockets::NetAddress  _RemoteAddress_k__BackingField;

/// @brief Method Accept, addr 0x5fda7b8, size 0x64, virtual false, abstract: false, final false
inline void Accept() ;

static inline ::Fusion::NetworkRunnerCallbackArgs_ConnectRequest* New_ctor() ;

/// @brief Method Refuse, addr 0x5fda81c, size 0x64, virtual false, abstract: false, final false
inline void Refuse() ;

/// @brief Method Waiting, addr 0x5fda880, size 0x64, virtual false, abstract: false, final false
inline void Waiting() ;

constexpr ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply> const& __cordl_internal_get_Result() const;

constexpr ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>& __cordl_internal_get_Result() ;

constexpr ::Fusion::Sockets::NetAddress const& __cordl_internal_get__RemoteAddress_k__BackingField() const;

constexpr ::Fusion::Sockets::NetAddress& __cordl_internal_get__RemoteAddress_k__BackingField() ;

constexpr void __cordl_internal_set_Result(::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>  value) ;

constexpr void __cordl_internal_set__RemoteAddress_k__BackingField(::Fusion::Sockets::NetAddress  value) ;

/// @brief Method .ctor, addr 0x5fda8e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_RemoteAddress, addr 0x5fda790, size 0x14, virtual false, abstract: false, final false
inline ::Fusion::Sockets::NetAddress get_RemoteAddress() ;

/// [CompilerGenerated]
/// @brief Method set_RemoteAddress, addr 0x5fda7a4, size 0x14, virtual false, abstract: false, final false
inline void set_RemoteAddress(::Fusion::Sockets::NetAddress  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkRunnerCallbackArgs_ConnectRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerCallbackArgs_ConnectRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkRunnerCallbackArgs_ConnectRequest(NetworkRunnerCallbackArgs_ConnectRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkRunnerCallbackArgs_ConnectRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkRunnerCallbackArgs_ConnectRequest(NetworkRunnerCallbackArgs_ConnectRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19261};

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <RemoteAddress>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::Fusion::Sockets::NetAddress  ____RemoteAddress_k__BackingField;

/// @brief Field Result, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<::Fusion::Sockets::OnConnectionRequestReply>  ___Result;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkRunnerCallbackArgs_ConnectRequest, ____RemoteAddress_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::NetworkRunnerCallbackArgs_ConnectRequest, ___Result) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkRunnerCallbackArgs_ConnectRequest) == 0x30, "Size mismatch!");

} // namespace end def Fusion

#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformInternal)
namespace GlobalNamespace {
struct Message_MessageType;
}
namespace GlobalNamespace {
struct PlatformInternal_MessageTypeInternal;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
template<typename T>
class Message_1_Callback;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class PlatformInternal_HTTP;
}
namespace Oculus::Platform {
class PlatformInternal_Users;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class PlatformInternal;
}
namespace Oculus::Platform {
class PlatformInternal_HTTP;
}
namespace Oculus::Platform {
class PlatformInternal_Users;
}
// Write type traits
MARK_REF_T(::Oculus::Platform::PlatformInternal*);
MARK_REF_T(::Oculus::Platform::PlatformInternal_HTTP*);
MARK_REF_T(::Oculus::Platform::PlatformInternal_Users*);
DEFINE_IL2CPP_CLASS(::Oculus::Platform::PlatformInternal*, "Oculus.Platform", "PlatformInternal");
DEFINE_IL2CPP_CLASS(::Oculus::Platform::PlatformInternal_HTTP*, "Oculus.Platform", "PlatformInternal/HTTP");
DEFINE_IL2CPP_CLASS(::Oculus::Platform::PlatformInternal_Users*, "Oculus.Platform", "PlatformInternal/Users");
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal
class CORDL_TYPE PlatformInternal : public ::System::Object {
public:
// Declarations
using MessageTypeInternal = ::GlobalNamespace::PlatformInternal_MessageTypeInternal;

using HTTP = ::Oculus::Platform::PlatformInternal_HTTP;

using Users = ::Oculus::Platform::PlatformInternal_Users;

/// @brief Method CrashApplication, addr 0xa54dc9c, size 0x50, virtual false, abstract: false, final false
static inline void CrashApplication() ;

/// @brief Method InitializeStandaloneAsync, addr 0xa54e54c, size 0x158, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* InitializeStandaloneAsync(uint64_t  appID, ::StringW  accessToken) ;

/// @brief Method ParseMessageHandle, addr 0xa54dcec, size 0x860, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Message* ParseMessageHandle(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  messageType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInternal() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInternal(PlatformInternal && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInternal(PlatformInternal const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26897};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::PlatformInternal) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal/Users
class CORDL_TYPE PlatformInternal_Users : public ::System::Object {
public:
// Declarations
/// @brief Method GetLinkedAccounts, addr 0xa54e7ec, size 0x19c, virtual false, abstract: false, final false
static inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider>  providers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInternal_Users() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_Users", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInternal_Users(PlatformInternal_Users && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_Users", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInternal_Users(PlatformInternal_Users const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26896};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::PlatformInternal_Users) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform
// Dependencies System.Object
namespace Oculus::Platform {
// Is value type: false
// CS Name: Oculus.Platform.PlatformInternal/HTTP
class CORDL_TYPE PlatformInternal_HTTP : public ::System::Object {
public:
// Declarations
/// @brief Method SetHttpTransferUpdateCallback, addr 0xa54e778, size 0x74, virtual false, abstract: false, final false
static inline void SetHttpTransferUpdateCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*  callback) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformInternal_HTTP() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_HTTP", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformInternal_HTTP(PlatformInternal_HTTP && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal_HTTP", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformInternal_HTTP(PlatformInternal_HTTP const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Platform::PlatformInternal_HTTP) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Platform

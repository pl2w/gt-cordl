#pragma once
// IWYU pragma private; include "Viveport/Api.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Api)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Viveport::Internal {
class GetLicenseCallback;
}
namespace Viveport::Internal {
class QueryRuntimeModeCallback;
}
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Api_LicenseChecker;
}
namespace Viveport {
class StatusCallback;
}
// Forward declare root types
namespace Viveport {
class Api;
}
namespace Viveport {
class Api_LicenseChecker;
}
// Write type traits
MARK_REF_T(::Viveport::Api*);
MARK_REF_T(::Viveport::Api_LicenseChecker*);
DEFINE_IL2CPP_CLASS(::Viveport::Api*, "Viveport", "Api");
DEFINE_IL2CPP_CLASS(::Viveport::Api_LicenseChecker*, "Viveport", "Api/LicenseChecker");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Api
class CORDL_TYPE Api : public ::System::Object {
public:
// Declarations
using LicenseChecker = ::Viveport::Api_LicenseChecker;

/// @brief Field InternalGetLicenseCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalGetLicenseCallbacks, put=setStaticF_InternalGetLicenseCallbacks)) ::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*  InternalGetLicenseCallbacks;

/// @brief Field InternalLicenseCheckers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalLicenseCheckers, put=setStaticF_InternalLicenseCheckers)) ::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*  InternalLicenseCheckers;

/// @brief Field InternalQueryRunTimeCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalQueryRunTimeCallbacks, put=setStaticF_InternalQueryRunTimeCallbacks)) ::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*  InternalQueryRunTimeCallbacks;

/// @brief Field InternalStatusCallback2s, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalStatusCallback2s, put=setStaticF_InternalStatusCallback2s)) ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*  InternalStatusCallback2s;

/// @brief Field InternalStatusCallbacks, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalStatusCallbacks, put=setStaticF_InternalStatusCallbacks)) ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*  InternalStatusCallbacks;

/// @brief Field _appId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__appId, put=setStaticF__appId)) ::StringW  _appId;

/// @brief Field _appKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__appKey, put=setStaticF__appKey)) ::StringW  _appKey;

/// @brief Field VERSION, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cordl_VERSION, put=setStaticF__cordl_VERSION)) ::StringW  _cordl_VERSION;

/// @brief Field initIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initIl2cppCallback, put=setStaticF_initIl2cppCallback)) ::Viveport::Internal::StatusCallback*  initIl2cppCallback;

/// @brief Field queryRuntimeModeIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_queryRuntimeModeIl2cppCallback, put=setStaticF_queryRuntimeModeIl2cppCallback)) ::Viveport::Internal::QueryRuntimeModeCallback*  queryRuntimeModeIl2cppCallback;

/// @brief Field shutdownIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_shutdownIl2cppCallback, put=setStaticF_shutdownIl2cppCallback)) ::Viveport::Internal::StatusCallback*  shutdownIl2cppCallback;

/// @brief Method GetLicense, addr 0x5b4c1a8, size 0x104, virtual false, abstract: false, final false
static inline void GetLicense(::Viveport::Api_LicenseChecker*  checker, ::StringW  appId, ::StringW  appKey) ;

/// @brief Method Init, addr 0x5b4c45c, size 0x1e4, virtual false, abstract: false, final false
static inline int32_t Init(::Viveport::StatusCallback*  callback, ::StringW  appId) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method InitIl2cppCallback, addr 0x5b4c0c0, size 0x74, virtual false, abstract: false, final false
static inline void InitIl2cppCallback(int32_t  errorCode) ;

static inline ::Viveport::Api* New_ctor() ;

/// @brief Method Shutdown, addr 0x5b4c86c, size 0x1c4, virtual false, abstract: false, final false
static inline int32_t Shutdown(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method ShutdownIl2cppCallback, addr 0x5b4c134, size 0x74, virtual false, abstract: false, final false
static inline void ShutdownIl2cppCallback(int32_t  errorCode) ;

/// @brief Method Version, addr 0x5b4cb44, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW Version() ;

/// @brief Method .ctor, addr 0x5b4cccc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>* getStaticF_InternalGetLicenseCallbacks() ;

static inline ::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>* getStaticF_InternalLicenseCheckers() ;

static inline ::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>* getStaticF_InternalQueryRunTimeCallbacks() ;

static inline ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>* getStaticF_InternalStatusCallback2s() ;

static inline ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>* getStaticF_InternalStatusCallbacks() ;

static inline ::StringW getStaticF__appId() ;

static inline ::StringW getStaticF__appKey() ;

static inline ::StringW getStaticF__cordl_VERSION() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_initIl2cppCallback() ;

static inline ::Viveport::Internal::QueryRuntimeModeCallback* getStaticF_queryRuntimeModeIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_shutdownIl2cppCallback() ;

static inline void setStaticF_InternalGetLicenseCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>*  value) ;

static inline void setStaticF_InternalLicenseCheckers(::System::Collections::Generic::List_1<::Viveport::Api_LicenseChecker*>*  value) ;

static inline void setStaticF_InternalQueryRunTimeCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>*  value) ;

static inline void setStaticF_InternalStatusCallback2s(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>*  value) ;

static inline void setStaticF_InternalStatusCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>*  value) ;

static inline void setStaticF__appId(::StringW  value) ;

static inline void setStaticF__appKey(::StringW  value) ;

static inline void setStaticF__cordl_VERSION(::StringW  value) ;

static inline void setStaticF_initIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

static inline void setStaticF_queryRuntimeModeIl2cppCallback(::Viveport::Internal::QueryRuntimeModeCallback*  value) ;

static inline void setStaticF_shutdownIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Api() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Api", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Api(Api && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Api", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Api(Api const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3762};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Api) == 0x10, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Api/LicenseChecker
class CORDL_TYPE Api_LicenseChecker : public ::System::Object {
public:
// Declarations
static inline ::Viveport::Api_LicenseChecker* New_ctor() ;

/// @brief Method OnFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFailure(int32_t  errorCode, ::StringW  errorMessage) ;

/// @brief Method OnSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSuccess(int64_t  issueTime, int64_t  expirationTime, int32_t  latestVersion, bool  updateRequired) ;

/// @brief Method .ctor, addr 0x5b4cf28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Api_LicenseChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Api_LicenseChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Api_LicenseChecker(Api_LicenseChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Api_LicenseChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Api_LicenseChecker(Api_LicenseChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Api_LicenseChecker) == 0x10, "Size mismatch!");

} // namespace end def Viveport

#pragma once
// IWYU pragma private; include "Viveport/Deeplink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Deeplink)
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Deeplink_DeeplinkChecker;
}
namespace Viveport {
class StatusCallback;
}
// Forward declare root types
namespace Viveport {
class Deeplink;
}
namespace Viveport {
class Deeplink_DeeplinkChecker;
}
// Write type traits
MARK_REF_T(::Viveport::Deeplink*);
MARK_REF_T(::Viveport::Deeplink_DeeplinkChecker*);
DEFINE_IL2CPP_CLASS(::Viveport::Deeplink*, "Viveport", "Deeplink");
DEFINE_IL2CPP_CLASS(::Viveport::Deeplink_DeeplinkChecker*, "Viveport", "Deeplink/DeeplinkChecker");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Deeplink
class CORDL_TYPE Deeplink : public ::System::Object {
public:
// Declarations
using DeeplinkChecker = ::Viveport::Deeplink_DeeplinkChecker;

/// @brief Field goToAppIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_goToAppIl2cppCallback, put=setStaticF_goToAppIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  goToAppIl2cppCallback;

/// @brief Field goToAppOrGoToStoreIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_goToAppOrGoToStoreIl2cppCallback, put=setStaticF_goToAppOrGoToStoreIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  goToAppOrGoToStoreIl2cppCallback;

/// @brief Field goToAppWithBranchNameIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_goToAppWithBranchNameIl2cppCallback, put=setStaticF_goToAppWithBranchNameIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  goToAppWithBranchNameIl2cppCallback;

/// @brief Field goToStoreIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_goToStoreIl2cppCallback, put=setStaticF_goToStoreIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  goToStoreIl2cppCallback;

/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::StatusCallback*  isReadyIl2cppCallback;

/// @brief Method GetAppLaunchData, addr 0x5b58924, size 0x4, virtual false, abstract: false, final false
static inline ::StringW GetAppLaunchData() ;

/// @brief Method GoToApp, addr 0x5b58260, size 0x88, virtual false, abstract: false, final false
static inline void GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData) ;

/// @brief Method GoToApp, addr 0x5b58498, size 0x88, virtual false, abstract: false, final false
static inline void GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData, ::StringW  branchName) ;

/// @brief Method GoToAppOrGoToStore, addr 0x5b586ec, size 0x88, virtual false, abstract: false, final false
static inline void GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData) ;

/// @brief Method GoToStore, addr 0x5b58520, size 0x54, virtual false, abstract: false, final false
static inline void GoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId) ;

/// @brief Method IsReady, addr 0x5b57f78, size 0x1e8, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b57f14, size 0x64, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode) ;

static inline ::Viveport::Deeplink* New_ctor() ;

/// @brief Method .ctor, addr 0x5b58a0c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_goToAppIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_goToAppOrGoToStoreIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_goToAppWithBranchNameIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_goToStoreIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_isReadyIl2cppCallback() ;

static inline void setStaticF_goToAppIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

static inline void setStaticF_goToAppOrGoToStoreIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

static inline void setStaticF_goToAppWithBranchNameIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

static inline void setStaticF_goToStoreIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Deeplink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Deeplink(Deeplink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Deeplink", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Deeplink(Deeplink const& ) = delete;

/// @brief Field MaxIdLength offset 0xffffffff size 0x4
static constexpr int32_t  MaxIdLength{static_cast<int32_t>(0x100)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3787};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Deeplink) == 0x10, "Size mismatch!");

} // namespace end def Viveport
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Deeplink/DeeplinkChecker
class CORDL_TYPE Deeplink_DeeplinkChecker : public ::System::Object {
public:
// Declarations
static inline ::Viveport::Deeplink_DeeplinkChecker* New_ctor() ;

/// @brief Method OnFailure, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFailure(int32_t  errorCode, ::StringW  errorMessage) ;

/// @brief Method OnSuccess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSuccess() ;

/// @brief Method .ctor, addr 0x5b58a14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Deeplink_DeeplinkChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Deeplink_DeeplinkChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Deeplink_DeeplinkChecker(Deeplink_DeeplinkChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Deeplink_DeeplinkChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Deeplink_DeeplinkChecker(Deeplink_DeeplinkChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3786};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Deeplink_DeeplinkChecker) == 0x10, "Size mismatch!");

} // namespace end def Viveport

#pragma once
// IWYU pragma private; include "Viveport/Internal/Deeplink.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Deeplink)
namespace Viveport::Internal {
class Deeplink_AndroidDeeplinkChecker;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Deeplink_DeeplinkChecker;
}
// Forward declare root types
namespace Viveport::Internal {
class Deeplink;
}
namespace Viveport::Internal {
class Deeplink_AndroidDeeplinkChecker;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::Deeplink*);
MARK_REF_T(::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Deeplink*, "Viveport.Internal", "Deeplink");
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Deeplink_AndroidDeeplinkChecker*, "Viveport.Internal", "Deeplink/AndroidDeeplinkChecker");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Deeplink
class CORDL_TYPE Deeplink : public ::System::Object {
public:
// Declarations
using AndroidDeeplinkChecker = ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker;

/// @brief Method GetAppLaunchData, addr 0x5b58928, size 0xe4, virtual false, abstract: false, final false
static inline ::StringW GetAppLaunchData() ;

/// @brief Method GoToApp, addr 0x5b582e8, size 0x1b0, virtual false, abstract: false, final false
static inline void GoToApp(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData) ;

/// @brief Method GoToAppOrGoToStore, addr 0x5b58774, size 0x1b0, virtual false, abstract: false, final false
static inline void GoToAppOrGoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId, ::StringW  launchData) ;

/// @brief Method GoToStore, addr 0x5b58574, size 0x178, virtual false, abstract: false, final false
static inline void GoToStore(::Viveport::Deeplink_DeeplinkChecker*  checker, ::StringW  appId) ;

/// @brief Method IsReady, addr 0x5b58160, size 0x100, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::Internal::StatusCallback*  callback) ;

static inline ::Viveport::Internal::Deeplink* New_ctor() ;

/// @brief Method .ctor, addr 0x5b59d5c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3809};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::Deeplink) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
// Dependencies UnityEngine.AndroidJavaProxy
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Deeplink/AndroidDeeplinkChecker
class CORDL_TYPE Deeplink_AndroidDeeplinkChecker : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field checker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_checker, put=__cordl_internal_set_checker)) ::Viveport::Deeplink_DeeplinkChecker*  checker;

static inline ::Viveport::Internal::Deeplink_AndroidDeeplinkChecker* New_ctor(::Viveport::Deeplink_DeeplinkChecker*  checker) ;

constexpr ::Viveport::Deeplink_DeeplinkChecker* const& __cordl_internal_get_checker() const;

constexpr ::Viveport::Deeplink_DeeplinkChecker*& __cordl_internal_get_checker() ;

constexpr void __cordl_internal_set_checker(::Viveport::Deeplink_DeeplinkChecker*  value) ;

/// @brief Method .ctor, addr 0x5b59cd0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Viveport::Deeplink_DeeplinkChecker*  checker) ;

/// @brief Method onFailure, addr 0x5b59dec, size 0xe4, virtual false, abstract: false, final false
inline void onFailure(int32_t  errorCode, ::StringW  errorMessage) ;

/// @brief Method onSuccess, addr 0x5b59d64, size 0x88, virtual false, abstract: false, final false
inline void onSuccess() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Deeplink_AndroidDeeplinkChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Deeplink_AndroidDeeplinkChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Deeplink_AndroidDeeplinkChecker(Deeplink_AndroidDeeplinkChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Deeplink_AndroidDeeplinkChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Deeplink_AndroidDeeplinkChecker(Deeplink_AndroidDeeplinkChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3808};

/// @brief Field checker, offset: 0x20, size: 0x8, def value: None
 ::Viveport::Deeplink_DeeplinkChecker*  ___checker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::Deeplink_AndroidDeeplinkChecker, ___checker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::Deeplink_AndroidDeeplinkChecker) == 0x28, "Size mismatch!");

} // namespace end def Viveport::Internal

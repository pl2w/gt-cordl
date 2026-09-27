#pragma once
// IWYU pragma private; include "Viveport/Internal/Api.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Api)
namespace Viveport::Internal {
class Api_AndroidLicenseChecker;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class Api_LicenseChecker;
}
// Forward declare root types
namespace Viveport::Internal {
class Api;
}
namespace Viveport::Internal {
class Api_AndroidLicenseChecker;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::Api*);
MARK_REF_T(::Viveport::Internal::Api_AndroidLicenseChecker*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Api*, "Viveport.Internal", "Api");
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Api_AndroidLicenseChecker*, "Viveport.Internal", "Api/AndroidLicenseChecker");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Api
class CORDL_TYPE Api : public ::System::Object {
public:
// Declarations
using AndroidLicenseChecker = ::Viveport::Internal::Api_AndroidLicenseChecker;

/// @brief Method GetLicense, addr 0x5b4c2ac, size 0x1b0, virtual false, abstract: false, final false
static inline void GetLicense(::Viveport::Api_LicenseChecker*  checker, ::StringW  appId, ::StringW  appKey) ;

/// @brief Method Init, addr 0x5b4c6e0, size 0x18c, virtual false, abstract: false, final false
static inline int32_t Init(::Viveport::Internal::StatusCallback*  callback, ::StringW  pchAppKey) ;

static inline ::Viveport::Internal::Api* New_ctor() ;

/// @brief Method Shutdown, addr 0x5b4ca30, size 0x114, virtual false, abstract: false, final false
static inline int32_t Shutdown(::Viveport::Internal::StatusCallback*  callback) ;

/// @brief Method Version, addr 0x5b4cbf4, size 0xd8, virtual false, abstract: false, final false
static inline ::StringW Version() ;

/// @brief Method .ctor, addr 0x5b59758, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3805};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::Api) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal
// Dependencies UnityEngine.AndroidJavaProxy
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Api/AndroidLicenseChecker
class CORDL_TYPE Api_AndroidLicenseChecker : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field checker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_checker, put=__cordl_internal_set_checker)) ::Viveport::Api_LicenseChecker*  checker;

static inline ::Viveport::Internal::Api_AndroidLicenseChecker* New_ctor(::Viveport::Api_LicenseChecker*  checker) ;

constexpr ::Viveport::Api_LicenseChecker* const& __cordl_internal_get_checker() const;

constexpr ::Viveport::Api_LicenseChecker*& __cordl_internal_get_checker() ;

constexpr void __cordl_internal_set_checker(::Viveport::Api_LicenseChecker*  value) ;

/// @brief Method .ctor, addr 0x5b596cc, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Viveport::Api_LicenseChecker*  checker) ;

/// @brief Method onFailure, addr 0x5b59888, size 0xe4, virtual false, abstract: false, final false
inline void onFailure(int32_t  errorCode, ::StringW  errorMessage) ;

/// @brief Method onSuccess, addr 0x5b59760, size 0x128, virtual false, abstract: false, final false
inline void onSuccess(int64_t  issueTime, int64_t  expirationTime, int32_t  latestVersion, bool  updateRequired) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Api_AndroidLicenseChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Api_AndroidLicenseChecker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Api_AndroidLicenseChecker(Api_AndroidLicenseChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Api_AndroidLicenseChecker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Api_AndroidLicenseChecker(Api_AndroidLicenseChecker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3804};

/// @brief Field checker, offset: 0x20, size: 0x8, def value: None
 ::Viveport::Api_LicenseChecker*  ___checker;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::Api_AndroidLicenseChecker, ___checker) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::Api_AndroidLicenseChecker) == 0x28, "Size mismatch!");

} // namespace end def Viveport::Internal

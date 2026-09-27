#pragma once
// IWYU pragma private; include "Viveport/Internal/AndroidPluginCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AndroidPluginCallback)
namespace Viveport::Internal {
class IAPurchaseCallback;
}
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport::Internal {
class StatusCallback;
}
// Forward declare root types
namespace Viveport::Internal {
class AndroidPluginCallback;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::AndroidPluginCallback*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::AndroidPluginCallback*, "Viveport.Internal", "AndroidPluginCallback");
// Dependencies UnityEngine.AndroidJavaProxy
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.AndroidPluginCallback
class CORDL_TYPE AndroidPluginCallback : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief Field callback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::Viveport::Internal::IAPurchaseCallback*  callback;

/// @brief Field statusCallback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusCallback, put=__cordl_internal_set_statusCallback)) ::Viveport::Internal::StatusCallback*  statusCallback;

/// @brief Field statusCallback2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusCallback2, put=__cordl_internal_set_statusCallback2)) ::Viveport::Internal::StatusCallback2*  statusCallback2;

static inline ::Viveport::Internal::AndroidPluginCallback* New_ctor(::Viveport::Internal::IAPurchaseCallback*  callback) ;

static inline ::Viveport::Internal::AndroidPluginCallback* New_ctor(::Viveport::Internal::StatusCallback*  callback) ;

static inline ::Viveport::Internal::AndroidPluginCallback* New_ctor(::Viveport::Internal::StatusCallback2*  callback) ;

constexpr ::Viveport::Internal::IAPurchaseCallback* const& __cordl_internal_get_callback() const;

constexpr ::Viveport::Internal::IAPurchaseCallback*& __cordl_internal_get_callback() ;

constexpr ::Viveport::Internal::StatusCallback* const& __cordl_internal_get_statusCallback() const;

constexpr ::Viveport::Internal::StatusCallback*& __cordl_internal_get_statusCallback() ;

constexpr ::Viveport::Internal::StatusCallback2* const& __cordl_internal_get_statusCallback2() const;

constexpr ::Viveport::Internal::StatusCallback2*& __cordl_internal_get_statusCallback2() ;

constexpr void __cordl_internal_set_callback(::Viveport::Internal::IAPurchaseCallback*  value) ;

constexpr void __cordl_internal_set_statusCallback(::Viveport::Internal::StatusCallback*  value) ;

constexpr void __cordl_internal_set_statusCallback2(::Viveport::Internal::StatusCallback2*  value) ;

/// @brief Method .ctor, addr 0x5b59fec, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Viveport::Internal::IAPurchaseCallback*  callback) ;

/// @brief Method .ctor, addr 0x5b59640, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Viveport::Internal::StatusCallback*  callback) ;

/// @brief Method .ctor, addr 0x5b5a19c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::Viveport::Internal::StatusCallback2*  callback) ;

/// @brief Method onResult, addr 0x5b5a464, size 0x124, virtual false, abstract: false, final false
inline void onResult(int32_t  statusCode, ::StringW  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidPluginCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidPluginCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidPluginCallback(AndroidPluginCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidPluginCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidPluginCallback(AndroidPluginCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3814};

/// @brief Field callback, offset: 0x20, size: 0x8, def value: None
 ::Viveport::Internal::IAPurchaseCallback*  ___callback;

/// @brief Field statusCallback, offset: 0x28, size: 0x8, def value: None
 ::Viveport::Internal::StatusCallback*  ___statusCallback;

/// @brief Field statusCallback2, offset: 0x30, size: 0x8, def value: None
 ::Viveport::Internal::StatusCallback2*  ___statusCallback2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Viveport::Internal::AndroidPluginCallback, ___callback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Viveport::Internal::AndroidPluginCallback, ___statusCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Viveport::Internal::AndroidPluginCallback, ___statusCallback2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Viveport::Internal::AndroidPluginCallback) == 0x38, "Size mismatch!");

} // namespace end def Viveport::Internal

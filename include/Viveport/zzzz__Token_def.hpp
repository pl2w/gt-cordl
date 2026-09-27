#pragma once
// IWYU pragma private; include "Viveport/Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Token)
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport::Internal {
class StatusCallback;
}
namespace Viveport {
class StatusCallback2;
}
namespace Viveport {
class StatusCallback;
}
// Forward declare root types
namespace Viveport {
class Token;
}
// Write type traits
MARK_REF_T(::Viveport::Token*);
DEFINE_IL2CPP_CLASS(::Viveport::Token*, "Viveport", "Token");
// Dependencies System.Object
namespace Viveport {
// Is value type: false
// CS Name: Viveport.Token
class CORDL_TYPE Token : public ::System::Object {
public:
// Declarations
/// @brief Field getSessionTokenIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_getSessionTokenIl2cppCallback, put=setStaticF_getSessionTokenIl2cppCallback)) ::Viveport::Internal::StatusCallback2*  getSessionTokenIl2cppCallback;

/// @brief Field isReadyIl2cppCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_isReadyIl2cppCallback, put=setStaticF_isReadyIl2cppCallback)) ::Viveport::Internal::StatusCallback*  isReadyIl2cppCallback;

/// @brief Method GetSessionToken, addr 0x5b58e1c, size 0x1e0, virtual false, abstract: false, final false
static inline void GetSessionToken(::Viveport::StatusCallback2*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback2))]
/// @brief Method GetSessionTokenIl2cppCallback, addr 0x5b58a80, size 0x74, virtual false, abstract: false, final false
static inline void GetSessionTokenIl2cppCallback(int32_t  errorCode, ::StringW  message) ;

/// @brief Method IsReady, addr 0x5b58af4, size 0x1e8, virtual false, abstract: false, final false
static inline void IsReady(::Viveport::StatusCallback*  callback) ;

/// [MonoPInvokeCallback(typeof(Viveport.Internal.StatusCallback))]
/// @brief Method IsReadyIl2cppCallback, addr 0x5b58a1c, size 0x64, virtual false, abstract: false, final false
static inline void IsReadyIl2cppCallback(int32_t  errorCode) ;

static inline ::Viveport::Token* New_ctor() ;

/// @brief Method .ctor, addr 0x5b5913c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Viveport::Internal::StatusCallback2* getStaticF_getSessionTokenIl2cppCallback() ;

static inline ::Viveport::Internal::StatusCallback* getStaticF_isReadyIl2cppCallback() ;

static inline void setStaticF_getSessionTokenIl2cppCallback(::Viveport::Internal::StatusCallback2*  value) ;

static inline void setStaticF_isReadyIl2cppCallback(::Viveport::Internal::StatusCallback*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Token() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Token", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Token(Token && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Token", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Token(Token const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3788};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Token) == 0x10, "Size mismatch!");

} // namespace end def Viveport

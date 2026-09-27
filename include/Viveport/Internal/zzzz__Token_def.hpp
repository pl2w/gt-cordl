#pragma once
// IWYU pragma private; include "Viveport/Internal/Token.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Token)
namespace Viveport::Internal {
class StatusCallback2;
}
namespace Viveport::Internal {
class StatusCallback;
}
// Forward declare root types
namespace Viveport::Internal {
class Token;
}
// Write type traits
MARK_REF_T(::Viveport::Internal::Token*);
DEFINE_IL2CPP_CLASS(::Viveport::Internal::Token*, "Viveport.Internal", "Token");
// Dependencies System.Object
namespace Viveport::Internal {
// Is value type: false
// CS Name: Viveport.Internal.Token
class CORDL_TYPE Token : public ::System::Object {
public:
// Declarations
/// @brief Method GetSessionToken, addr 0x5b58ffc, size 0x140, virtual false, abstract: false, final false
static inline int32_t GetSessionToken(::Viveport::Internal::StatusCallback2*  GetSessionTokenCallback) ;

/// @brief Method IsReady, addr 0x5b58cdc, size 0x140, virtual false, abstract: false, final false
static inline int32_t IsReady(::Viveport::Internal::StatusCallback*  IsReadyCallback) ;

static inline ::Viveport::Internal::Token* New_ctor() ;

/// @brief Method .ctor, addr 0x5b5a34c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

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
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3812};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Viveport::Internal::Token) == 0x10, "Size mismatch!");

} // namespace end def Viveport::Internal

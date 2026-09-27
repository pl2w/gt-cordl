#pragma once
// IWYU pragma private; include "PlayFab/WsaReflectionExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WsaReflectionExtensions)
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Delegate;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace PlayFab {
class WsaReflectionExtensions;
}
// Write type traits
MARK_REF_T(::PlayFab::WsaReflectionExtensions*);
DEFINE_IL2CPP_CLASS(::PlayFab::WsaReflectionExtensions*, "PlayFab", "WsaReflectionExtensions");
// [Extension]
// Dependencies System.Object
namespace PlayFab {
// Is value type: false
// CS Name: PlayFab.WsaReflectionExtensions
class CORDL_TYPE WsaReflectionExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method AsType, addr 0xa7dc0cc, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* AsType(::System::Type*  type) ;

/// [Extension]
/// @brief Method CreateDelegate, addr 0xa7dc0b0, size 0x18, virtual false, abstract: false, final false
static inline ::System::Delegate* CreateDelegate(::System::Reflection::MethodInfo*  methodInfo, ::System::Type*  delegateType, ::System::Object*  instance) ;

/// [Extension]
/// @brief Method GetDelegateName, addr 0xa7dc0d0, size 0x28, virtual false, abstract: false, final false
static inline ::StringW GetDelegateName(::System::Delegate*  delegateInstance) ;

/// [Extension]
/// @brief Method GetTypeInfo, addr 0xa7dc0c8, size 0x4, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeInfo(::System::Type*  type) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WsaReflectionExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WsaReflectionExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WsaReflectionExtensions(WsaReflectionExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WsaReflectionExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WsaReflectionExtensions(WsaReflectionExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19513};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::WsaReflectionExtensions) == 0x10, "Size mismatch!");

} // namespace end def PlayFab

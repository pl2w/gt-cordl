#pragma once
// IWYU pragma private; include "GlobalNamespace/lua_Continuation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(lua_Continuation)
namespace GlobalNamespace {
struct lua_State;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class lua_Continuation;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::lua_Continuation*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::lua_Continuation*, "", "lua_Continuation");
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: lua_Continuation
class CORDL_TYPE lua_Continuation : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a92f54, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, int32_t  status, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5a92fb4, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5a92f40, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L, int32_t  status) ;

static inline ::GlobalNamespace::lua_Continuation* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5a92e8c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr lua_Continuation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "lua_Continuation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
lua_Continuation(lua_Continuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "lua_Continuation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
lua_Continuation(lua_Continuation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3221};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::lua_Continuation) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

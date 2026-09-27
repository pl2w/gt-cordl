#pragma once
// IWYU pragma private; include "GlobalNamespace/lua_CFunction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(lua_CFunction)
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
class lua_CFunction;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::lua_CFunction*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::lua_CFunction*, "", "lua_CFunction");
// [UnmanagedFunctionPointer((System.Runtime.InteropServices.CallingConvention)2)]
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// Is value type: false
// CS Name: lua_CFunction
class CORDL_TYPE lua_CFunction : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5a92e44, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::lua_State*  L, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5a92e64, size 0x28, virtual true, abstract: false, final false
inline int32_t EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5a92e30, size 0x14, virtual true, abstract: false, final false
inline int32_t Invoke(::GlobalNamespace::lua_State*  L) ;

static inline ::GlobalNamespace::lua_CFunction* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5a896c4, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr lua_CFunction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "lua_CFunction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
lua_CFunction(lua_CFunction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "lua_CFunction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
lua_CFunction(lua_CFunction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3220};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::lua_CFunction) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace

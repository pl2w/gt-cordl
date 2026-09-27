#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Luau)
namespace GlobalNamespace {
struct Luau_gc_status;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassFields_1;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassFunctions_1;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassProperties_1;
}
namespace GlobalNamespace {
struct Luau_lua_Status;
}
namespace GlobalNamespace {
class Luau_lua_TypeID;
}
namespace GlobalNamespace {
struct Luau_lua_Types;
}
namespace GlobalNamespace {
class lua_CFunction;
}
namespace GlobalNamespace {
struct lua_CompileOptions;
}
namespace GlobalNamespace {
class lua_Continuation;
}
namespace GlobalNamespace {
struct lua_State;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace System {
struct UIntPtr;
}
namespace Unity::Burst {
template<typename T>
struct FunctionPointer_1;
}
namespace Unity::Collections {
struct FixedString32Bytes;
}
// Forward declare root types
namespace GlobalNamespace {
class Luau;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassFields_1;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassFunctions_1;
}
namespace GlobalNamespace {
template<typename T>
class Luau_lua_ClassProperties_1;
}
namespace GlobalNamespace {
class Luau_lua_TypeID;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::Luau*);
MARK_GEN_REF_T_PTR(::GlobalNamespace::Luau_lua_ClassFields_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::Luau_lua_ClassFunctions_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::Luau_lua_ClassProperties_1);
MARK_REF_T(::GlobalNamespace::Luau_lua_TypeID*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Luau*, "", "Luau");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Luau_lua_ClassFields_1, "", "Luau/lua_ClassFields`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Luau_lua_ClassFunctions_1, "", "Luau/lua_ClassFunctions`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::Luau_lua_ClassProperties_1, "", "Luau/lua_ClassProperties`1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Luau_lua_TypeID*, "", "Luau/lua_TypeID");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Luau
class CORDL_TYPE Luau : public ::System::Object {
public:
// Declarations
using gc_status = ::GlobalNamespace::Luau_gc_status;

template<typename T>
using lua_ClassFields_1 = ::GlobalNamespace::Luau_lua_ClassFields_1<T>;

template<typename T>
using lua_ClassFunctions_1 = ::GlobalNamespace::Luau_lua_ClassFunctions_1<T>;

template<typename T>
using lua_ClassProperties_1 = ::GlobalNamespace::Luau_lua_ClassProperties_1<T>;

using lua_Status = ::GlobalNamespace::Luau_lua_Status;

using lua_TypeID = ::GlobalNamespace::Luau_lua_TypeID;

using lua_Types = ::GlobalNamespace::Luau_lua_Types;

static inline ::GlobalNamespace::Luau* New_ctor() ;

/// @brief Method .ctor, addr 0x5a948dc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method luaL_checklstring, addr 0x5a94294, size 0x94, virtual false, abstract: false, final false
static inline uint8_t* luaL_checklstring(::GlobalNamespace::lua_State*  L, int32_t  numArg, int32_t*  l) ;

/// @brief Method luaL_checknumber, addr 0x5a7f82c, size 0x84, virtual false, abstract: false, final false
static inline double_t luaL_checknumber(::GlobalNamespace::lua_State*  L, int32_t  numArg) ;

/// @brief Method luaL_checkstring, addr 0x5a8c5b0, size 0x8, virtual false, abstract: false, final false
static inline uint8_t* luaL_checkstring(::GlobalNamespace::lua_State*  L, int32_t  n) ;

/// @brief Method luaL_checkudata, addr 0x5a945f4, size 0xb0, virtual false, abstract: false, final false
static inline void* luaL_checkudata(::GlobalNamespace::lua_State*  L, int32_t  arg, ::StringW  tname) ;

/// @brief Method luaL_checkudata, addr 0x5a915f8, size 0x94, virtual false, abstract: false, final false
static inline void* luaL_checkudata(::GlobalNamespace::lua_State*  L, int32_t  arg, uint8_t*  tname) ;

/// @brief Method luaL_errorL, addr 0x5a877f8, size 0x144, virtual false, abstract: false, final false
static inline void luaL_errorL(::GlobalNamespace::lua_State*  L, ::StringW  fmt, /* [ParamArray] */ ::ArrayW<::StringW>  a) ;

/// @brief Method luaL_errorL, addr 0x5a86488, size 0x84, virtual false, abstract: false, final false
static inline void luaL_errorL(::GlobalNamespace::lua_State*  L, int8_t*  fmt) ;

/// @brief Method luaL_getmetafield, addr 0x5a86598, size 0xb0, virtual false, abstract: false, final false
static inline int32_t luaL_getmetafield(::GlobalNamespace::lua_State*  L, int32_t  idx, ::StringW  k) ;

/// @brief Method luaL_getmetafield, addr 0x5a91564, size 0x94, virtual false, abstract: false, final false
static inline int32_t luaL_getmetafield(::GlobalNamespace::lua_State*  L, int32_t  idx, uint8_t*  k) ;

/// @brief Method luaL_getmetatable, addr 0x5a941ec, size 0xc, virtual false, abstract: false, final false
static inline void luaL_getmetatable(::GlobalNamespace::lua_State*  L, ::StringW  n) ;

/// @brief Method luaL_getmetatable, addr 0x5a941f8, size 0xc, virtual false, abstract: false, final false
static inline void luaL_getmetatable(::GlobalNamespace::lua_State*  L, uint8_t*  n) ;

/// @brief Method luaL_newmetatable, addr 0x5a94008, size 0xa0, virtual false, abstract: false, final false
static inline int32_t luaL_newmetatable(::GlobalNamespace::lua_State*  L, ::StringW  tname) ;

/// @brief Method luaL_newstate, addr 0x5a93200, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::lua_State* luaL_newstate() ;

/// @brief Method luaL_openlibs, addr 0x5a93264, size 0x7c, virtual false, abstract: false, final false
static inline void luaL_openlibs(::GlobalNamespace::lua_State*  L) ;

/// @brief Method luaL_optnumber, addr 0x5a7f3b0, size 0x94, virtual false, abstract: false, final false
static inline double_t luaL_optnumber(::GlobalNamespace::lua_State*  L, int32_t  narg, double_t  d) ;

/// @brief Method lua_call, addr 0x5a944e4, size 0x94, virtual false, abstract: false, final false
static inline void lua_call(::GlobalNamespace::lua_State*  L, int32_t  nargs, int32_t  nresults) ;

/// @brief Method lua_class_check, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline bool lua_class_check(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_class_get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_class_get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx, ::Unity::Collections::FixedString32Bytes  name) ;

/// @brief Method lua_class_get, addr 0x5a91e50, size 0x1b0, virtual false, abstract: false, final false
static inline uint8_t* lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx, ::Unity::Collections::FixedString32Bytes  name) ;

/// @brief Method lua_class_push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* lua_class_push(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_class_push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline T* lua_class_push(::GlobalNamespace::lua_State*  L, ::Unity::Collections::FixedString32Bytes  name) ;

/// @brief Method lua_class_push, addr 0x5a888b4, size 0xfc, virtual false, abstract: false, final false
static inline void lua_class_push(::GlobalNamespace::lua_State*  L, ::Unity::Collections::FixedString32Bytes  name, ::System::IntPtr  ptr) ;

/// @brief Method lua_close, addr 0x5a93bb0, size 0x7c, virtual false, abstract: false, final false
static inline void lua_close(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_createtable, addr 0x5a87344, size 0x94, virtual false, abstract: false, final false
static inline void lua_createtable(::GlobalNamespace::lua_State*  L, int32_t  narr, int32_t  nrec) ;

/// @brief Method lua_debugtrace, addr 0x5a93b34, size 0x7c, virtual false, abstract: false, final false
static inline uint8_t* lua_debugtrace(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_error, addr 0x5a93ab8, size 0x7c, virtual false, abstract: false, final false
static inline int32_t lua_error(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_gc, addr 0x5a94450, size 0x94, virtual false, abstract: false, final false
static inline int32_t lua_gc(::GlobalNamespace::lua_State*  L, int32_t  what, int32_t  data) ;

/// @brief Method lua_getfield, addr 0x5a940a8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t lua_getfield(::GlobalNamespace::lua_State*  L, int32_t  idx, ::StringW  k) ;

/// @brief Method lua_getfield, addr 0x5a94158, size 0x94, virtual false, abstract: false, final false
static inline int32_t lua_getfield(::GlobalNamespace::lua_State*  L, int32_t  idx, uint8_t*  k) ;

/// @brief Method lua_getglobal, addr 0x5a94204, size 0xc, virtual false, abstract: false, final false
static inline void lua_getglobal(::GlobalNamespace::lua_State*  L, ::StringW  n) ;

/// @brief Method lua_getmetatable, addr 0x5a94210, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_getmetatable(::GlobalNamespace::lua_State*  L, int32_t  objindex) ;

/// @brief Method lua_getref, addr 0x5a8bce4, size 0xc, virtual false, abstract: false, final false
static inline void lua_getref(::GlobalNamespace::lua_State*  L, int32_t  rid) ;

/// @brief Method lua_gettop, addr 0x5a93718, size 0x7c, virtual false, abstract: false, final false
static inline int32_t lua_gettop(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_getuserdatametatable, addr 0x5a93e6c, size 0x84, virtual false, abstract: false, final false
static inline void lua_getuserdatametatable(::GlobalNamespace::lua_State*  L, int32_t  tag) ;

/// @brief Method lua_isstring, addr 0x5a93a38, size 0x80, virtual false, abstract: false, final false
static inline int32_t lua_isstring(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_light_ptr, addr 0x5a9168c, size 0xf4, virtual false, abstract: false, final false
static inline ::System::IntPtr lua_light_ptr(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_namecallatom, addr 0x5a92530, size 0x80, virtual false, abstract: false, final false
static inline uint8_t* lua_namecallatom(::GlobalNamespace::lua_State*  L, int32_t*  atom) ;

/// @brief Method lua_newuserdata, addr 0x5a948d4, size 0x8, virtual false, abstract: false, final false
static inline void* lua_newuserdata(::GlobalNamespace::lua_State*  L, int32_t  size) ;

/// @brief Method lua_newuserdatatagged, addr 0x5a93dd8, size 0x94, virtual false, abstract: false, final false
static inline void* lua_newuserdatatagged(::GlobalNamespace::lua_State*  L, int32_t  sz, int32_t  tag) ;

/// @brief Method lua_next, addr 0x5a86648, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_next(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_objlen, addr 0x5a91780, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_objlen(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_pcall, addr 0x5a8bcf0, size 0x9c, virtual false, abstract: false, final false
static inline int32_t lua_pcall(::GlobalNamespace::lua_State*  L, int32_t  nargs, int32_t  nresults, int32_t  fn) ;

/// @brief Method lua_pop, addr 0x5a8650c, size 0x8, virtual false, abstract: false, final false
static inline void lua_pop(::GlobalNamespace::lua_State*  L, int32_t  n) ;

/// [MonoPInvokeCallback(typeof(lua_CFunction))]
/// @brief Method lua_print, addr 0x5a92fdc, size 0x224, virtual false, abstract: false, final false
static inline int32_t lua_print(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_pushboolean, addr 0x5a80ddc, size 0x84, virtual false, abstract: false, final false
static inline void lua_pushboolean(::GlobalNamespace::lua_State*  L, int32_t  b) ;

/// @brief Method lua_pushcclosurek, addr 0x5a934e0, size 0xd4, virtual false, abstract: false, final false
static inline void lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  fn, ::StringW  debugname, int32_t  nup, ::GlobalNamespace::lua_Continuation*  cont) ;

/// @brief Method lua_pushcclosurek, addr 0x5a935b4, size 0xc8, virtual false, abstract: false, final false
static inline void lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, ::StringW  debugname, int32_t  nup, ::GlobalNamespace::lua_Continuation*  cont) ;

/// @brief Method lua_pushcclosurek, addr 0x5a918f4, size 0xac, virtual false, abstract: false, final false
static inline void lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, uint8_t*  debugname, int32_t  nup, int32_t*  cont) ;

/// @brief Method lua_pushcfunction, addr 0x5a93688, size 0xc, virtual false, abstract: false, final false
static inline void lua_pushcfunction(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  fn, ::StringW  debugname) ;

/// @brief Method lua_pushcfunction, addr 0x5a9367c, size 0xc, virtual false, abstract: false, final false
static inline void lua_pushcfunction(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, ::StringW  debugname) ;

/// @brief Method lua_pushlightuserdatatagged, addr 0x5a946a4, size 0x94, virtual false, abstract: false, final false
static inline void lua_pushlightuserdatatagged(::GlobalNamespace::lua_State*  L, void*  p, int32_t  tag) ;

/// @brief Method lua_pushnil, addr 0x5a86378, size 0x7c, virtual false, abstract: false, final false
static inline void lua_pushnil(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_pushnumber, addr 0x5a7fc34, size 0x8c, virtual false, abstract: false, final false
static inline void lua_pushnumber(::GlobalNamespace::lua_State*  L, double_t  n) ;

/// @brief Method lua_pushstring, addr 0x5a7e98c, size 0xa0, virtual false, abstract: false, final false
static inline int32_t lua_pushstring(::GlobalNamespace::lua_State*  L, ::StringW  s) ;

/// @brief Method lua_pushstring, addr 0x5a91870, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_pushstring(::GlobalNamespace::lua_State*  L, uint8_t*  s) ;

/// @brief Method lua_pushvalue, addr 0x5a9345c, size 0x84, virtual false, abstract: false, final false
static inline void lua_pushvalue(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_rawequal, addr 0x5a94840, size 0x94, virtual false, abstract: false, final false
static inline int32_t lua_rawequal(::GlobalNamespace::lua_State*  L, int32_t  a, int32_t  b) ;

/// @brief Method lua_rawget, addr 0x5a94738, size 0x84, virtual false, abstract: false, final false
static inline void lua_rawget(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_rawgeti, addr 0x5a93c2c, size 0x94, virtual false, abstract: false, final false
static inline void lua_rawgeti(::GlobalNamespace::lua_State*  L, int32_t  index, int32_t  n) ;

/// @brief Method lua_rawset, addr 0x5a8746c, size 0x84, virtual false, abstract: false, final false
static inline void lua_rawset(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_rawseti, addr 0x5a873d8, size 0x94, virtual false, abstract: false, final false
static inline void lua_rawseti(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  n) ;

/// @brief Method lua_ref, addr 0x5a8c5b8, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_ref(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_register, addr 0x5a93a04, size 0x34, virtual false, abstract: false, final false
static inline void lua_register(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  f, ::StringW  n) ;

/// @brief Method lua_remove, addr 0x5a947bc, size 0x84, virtual false, abstract: false, final false
static inline void lua_remove(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_resume, addr 0x5a93828, size 0x94, virtual false, abstract: false, final false
static inline int32_t lua_resume(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_State*  from, int32_t  nargs) ;

/// @brief Method lua_setfield, addr 0x5a938bc, size 0xa8, virtual false, abstract: false, final false
static inline void lua_setfield(::GlobalNamespace::lua_State*  L, int32_t  index, ::StringW  k) ;

/// @brief Method lua_setfield, addr 0x5a93964, size 0x94, virtual false, abstract: false, final false
static inline void lua_setfield(::GlobalNamespace::lua_State*  L, int32_t  index, uint8_t*  k) ;

/// @brief Method lua_setglobal, addr 0x5a939f8, size 0xc, virtual false, abstract: false, final false
static inline void lua_setglobal(::GlobalNamespace::lua_State*  L, ::StringW  s) ;

/// @brief Method lua_setmetatable, addr 0x5a93f84, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_setmetatable(::GlobalNamespace::lua_State*  L, int32_t  objindex) ;

/// @brief Method lua_setreadonly, addr 0x5a94328, size 0x94, virtual false, abstract: false, final false
static inline void lua_setreadonly(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  enabled) ;

/// @brief Method lua_settop, addr 0x5a93694, size 0x84, virtual false, abstract: false, final false
static inline void lua_settop(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_setuserdatametatable, addr 0x5a93ef0, size 0x94, virtual false, abstract: false, final false
static inline void lua_setuserdatametatable(::GlobalNamespace::lua_State*  L, int32_t  tag, int32_t  idx) ;

/// @brief Method lua_status, addr 0x5a94578, size 0x7c, virtual false, abstract: false, final false
static inline int32_t lua_status(::GlobalNamespace::lua_State*  L) ;

/// @brief Method lua_toboolean, addr 0x5a86514, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_toboolean(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_tolstring, addr 0x5a93794, size 0x94, virtual false, abstract: false, final false
static inline int8_t* lua_tolstring(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t*  len) ;

/// @brief Method lua_tonumber, addr 0x5a86480, size 0x8, virtual false, abstract: false, final false
static inline double_t lua_tonumber(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_tonumberx, addr 0x5a943bc, size 0x94, virtual false, abstract: false, final false
static inline double_t lua_tonumberx(::GlobalNamespace::lua_State*  L, int32_t  index, int32_t*  isnum) ;

/// @brief Method lua_tostring, addr 0x5a86478, size 0x8, virtual false, abstract: false, final false
static inline int8_t* lua_tostring(::GlobalNamespace::lua_State*  L, int32_t  idx) ;

/// @brief Method lua_touserdata, addr 0x5a93d54, size 0x84, virtual false, abstract: false, final false
static inline void* lua_touserdata(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_touserdatatagged, addr 0x5a93cc0, size 0x94, virtual false, abstract: false, final false
static inline void* lua_touserdatatagged(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  tag) ;

/// @brief Method lua_type, addr 0x5a863f4, size 0x84, virtual false, abstract: false, final false
static inline int32_t lua_type(::GlobalNamespace::lua_State*  L, int32_t  index) ;

/// @brief Method lua_unref, addr 0x5a8c048, size 0x84, virtual false, abstract: false, final false
static inline void lua_unref(::GlobalNamespace::lua_State*  L, int32_t  rid) ;

/// @brief Method luau_compile, addr 0x5a932e0, size 0xb4, virtual false, abstract: false, final false
static inline int8_t* luau_compile(::StringW  source, /* [NativeInteger] */ ::System::UIntPtr  size, ::GlobalNamespace::lua_CompileOptions*  options, /* [NativeInteger] */ ::System::UIntPtr*  outsize) ;

/// @brief Method luau_load, addr 0x5a93394, size 0xc8, virtual false, abstract: false, final false
static inline int32_t luau_load(::GlobalNamespace::lua_State*  L, ::StringW  chunkname, int8_t*  data, /* [NativeInteger] */ ::System::UIntPtr  size, int32_t  env) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Luau() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Luau", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Luau(Luau && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Luau", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Luau(Luau const& ) = delete;

/// @brief Field LUA_GLOBALSINDEX offset 0xffffffff size 0x4
static constexpr int32_t  LUA_GLOBALSINDEX{static_cast<int32_t>(0xffffd8ee)};

/// @brief Field LUA_REGISTRYINDEX offset 0xffffffff size 0x4
static constexpr int32_t  LUA_REGISTRYINDEX{static_cast<int32_t>(0xffffd8f0)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3229};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Luau) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Luau/lua_ClassFunctions`1<T>
class CORDL_TYPE Luau_lua_ClassFunctions_1 : public ::System::Object {
public:
// Declarations
/// @brief Field classProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_classProperties, put=setStaticF_classProperties)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  classProperties;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Add(::StringW  name, ::GlobalNamespace::lua_CFunction*  field) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::lua_CFunction* Get(::StringW  name) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>* getStaticF_classProperties() ;

static inline void setStaticF_classProperties(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_ClassFunctions_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassFunctions_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Luau_lua_ClassFunctions_1(Luau_lua_ClassFunctions_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassFunctions_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Luau_lua_ClassFunctions_1(Luau_lua_ClassFunctions_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3228};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Luau/lua_ClassProperties`1<T>
class CORDL_TYPE Luau_lua_ClassProperties_1 : public ::System::Object {
public:
// Declarations
/// @brief Field classProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_classProperties, put=setStaticF_classProperties)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  classProperties;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Add(::StringW  name, ::GlobalNamespace::lua_CFunction*  field) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::lua_CFunction* Get(::StringW  name) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>* getStaticF_classProperties() ;

static inline void setStaticF_classProperties(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_ClassProperties_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassProperties_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Luau_lua_ClassProperties_1(Luau_lua_ClassProperties_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassProperties_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Luau_lua_ClassProperties_1(Luau_lua_ClassProperties_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Luau/lua_ClassFields`1<T>
class CORDL_TYPE Luau_lua_ClassFields_1 : public ::System::Object {
public:
// Declarations
/// @brief Field classDictionarys, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_classDictionarys, put=setStaticF_classDictionarys)) ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*  classDictionarys;

/// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Add(::StringW  name, ::System::Reflection::FieldInfo*  field) ;

/// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::System::Reflection::FieldInfo* Get(::StringW  name) ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>* getStaticF_classDictionarys() ;

static inline void setStaticF_classDictionarys(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_ClassFields_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassFields_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Luau_lua_ClassFields_1(Luau_lua_ClassFields_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_ClassFields_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Luau_lua_ClassFields_1(Luau_lua_ClassFields_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3226};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: Luau/lua_TypeID
class CORDL_TYPE Luau_lua_TypeID : public ::System::Object {
public:
// Declarations
/// @brief Field names, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_names, put=setStaticF_names)) ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  names;

/// @brief Method get, addr 0x5a948e4, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW get(::System::Type*  t) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* getStaticF_names() ;

/// @brief Method push, addr 0x5a9499c, size 0x90, virtual false, abstract: false, final false
static inline void push(::System::Type*  t, ::StringW  name) ;

static inline void setStaticF_names(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Luau_lua_TypeID() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_TypeID", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Luau_lua_TypeID(Luau_lua_TypeID && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Luau_lua_TypeID", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Luau_lua_TypeID(Luau_lua_TypeID const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3225};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::Luau_lua_TypeID) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

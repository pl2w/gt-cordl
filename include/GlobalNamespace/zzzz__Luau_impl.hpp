#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__Luau_def.hpp"
#include "GlobalNamespace/zzzz__Luau_def.hpp"
#include "GlobalNamespace/zzzz__Luau_gc_status_def.hpp"
#include "GlobalNamespace/zzzz__Luau_lua_Status_def.hpp"
#include "GlobalNamespace/zzzz__Luau_lua_Types_def.hpp"
#include "GlobalNamespace/zzzz__lua_CFunction_def.hpp"
#include "GlobalNamespace/zzzz__lua_CompileOptions_def.hpp"
#include "GlobalNamespace/zzzz__lua_Continuation_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "Unity/Burst/zzzz__FunctionPointer_1_def.hpp"
#include "Unity/Collections/zzzz__FixedString32Bytes_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_newstate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::lua_State* (*)()>(&::GlobalNamespace::Luau::luaL_newstate)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a93200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_newstate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_openlibs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::luaL_openlibs)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a93264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_openlibs", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luau_compile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t* (*)(::StringW, ::System::UIntPtr, ::GlobalNamespace::lua_CompileOptions*, ::System::UIntPtr*)>(&::GlobalNamespace::Luau::luau_compile)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a932e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luau_compile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::lua_CompileOptions*>(), ::i2c::type_of<::System::UIntPtr*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luau_load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, ::StringW, int8_t*, ::System::UIntPtr, int32_t)>(&::GlobalNamespace::Luau::luau_load)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a93394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luau_load", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int8_t*>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushvalue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_pushvalue)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a9345c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushvalue", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushcclosurek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::GlobalNamespace::lua_CFunction*, ::StringW, int32_t, ::GlobalNamespace::lua_Continuation*)>(&::GlobalNamespace::Luau::lua_pushcclosurek)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5a934e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::lua_Continuation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushcclosurek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>, ::StringW, int32_t, ::GlobalNamespace::lua_Continuation*)>(&::GlobalNamespace::Luau::lua_pushcclosurek)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5a935b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::lua_Continuation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushcclosurek
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>, uint8_t*, int32_t, int32_t*)>(&::GlobalNamespace::Luau::lua_pushcclosurek)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a918f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushcfunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>, ::StringW)>(&::GlobalNamespace::Luau::lua_pushcfunction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a9367c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcfunction", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushcfunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::GlobalNamespace::lua_CFunction*, ::StringW)>(&::GlobalNamespace::Luau::lua_pushcfunction)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a93688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcfunction", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_settop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_settop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a93694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_settop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_gettop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_gettop)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a93718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_gettop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_tolstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t* (*)(::GlobalNamespace::lua_State*, int32_t, int32_t*)>(&::GlobalNamespace::Luau::lua_tolstring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tolstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_resume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, ::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_resume)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_resume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, ::StringW)>(&::GlobalNamespace::Luau::lua_setfield)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a938bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, uint8_t*)>(&::GlobalNamespace::Luau::lua_setfield)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setglobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::StringW)>(&::GlobalNamespace::Luau::lua_setglobal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a939f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setglobal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_register
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::GlobalNamespace::lua_CFunction*, ::StringW)>(&::GlobalNamespace::Luau::lua_register)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5a93a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_register", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_pop)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8650c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_tostring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int8_t* (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_tostring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tostring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_isstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_isstring)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a93a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_isstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_type)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a863f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_type", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, ::StringW)>(&::GlobalNamespace::Luau::lua_pushstring)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a7e98c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, uint8_t*)>(&::GlobalNamespace::Luau::lua_pushstring)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a91870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_error)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a93ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_error", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_errorL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::StringW, ::ArrayW<::StringW>)>(&::GlobalNamespace::Luau::luaL_errorL)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a877f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_errorL", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_errorL
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int8_t*)>(&::GlobalNamespace::Luau::luaL_errorL)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a86488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_errorL", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_toboolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_toboolean)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a86514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_toboolean", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_debugtrace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_debugtrace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a93b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_debugtrace", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_close
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_close)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a93bb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_close", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_ref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_ref)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a8c5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_ref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_unref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_unref)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a8c048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_unref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getref
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_getref)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a8bce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_touserdatatagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_touserdatatagged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93cc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_touserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_touserdata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_touserdata)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a93d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_touserdata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_newuserdatatagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_newuserdatatagged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_newuserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getuserdatametatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_getuserdatametatable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a93e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getuserdatametatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setuserdatametatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_setuserdatametatable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setuserdatametatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setmetatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_setmetatable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a93f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_newmetatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, ::StringW)>(&::GlobalNamespace::Luau::luaL_newmetatable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5a94008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_newmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, ::StringW)>(&::GlobalNamespace::Luau::lua_getfield)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a940a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getfield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, uint8_t*)>(&::GlobalNamespace::Luau::lua_getfield)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a94158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_getmetafield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, uint8_t*)>(&::GlobalNamespace::Luau::luaL_getmetafield)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a91564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetafield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_getmetafield
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, ::StringW)>(&::GlobalNamespace::Luau::luaL_getmetafield)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a86598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetafield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_getmetatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::StringW)>(&::GlobalNamespace::Luau::luaL_getmetatable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a941ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_getmetatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, uint8_t*)>(&::GlobalNamespace::Luau::luaL_getmetatable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a941f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getglobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::StringW)>(&::GlobalNamespace::Luau::lua_getglobal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a94204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getglobal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_getmetatable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_getmetatable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a94210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_namecallatom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::GlobalNamespace::lua_State*, int32_t*)>(&::GlobalNamespace::Luau::lua_namecallatom)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a92530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_namecallatom", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_checklstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::GlobalNamespace::lua_State*, int32_t, int32_t*)>(&::GlobalNamespace::Luau::luaL_checklstring)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a94294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checklstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_checkstring
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::luaL_checkstring)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a8c5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushnumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, double_t)>(&::GlobalNamespace::Luau::lua_pushnumber)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5a7fc34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushnumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_checknumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::luaL_checknumber)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a7f82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checknumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_setreadonly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_setreadonly)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a94328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setreadonly", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_tonumberx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::lua_State*, int32_t, int32_t*)>(&::GlobalNamespace::Luau::lua_tonumberx)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a943bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tonumberx", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_gc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_gc)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a94450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_gc", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_call
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_call)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a944e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_call", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pcall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_pcall)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5a8bcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pcall", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_status
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_status)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a94578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_status", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_checkudata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t, ::StringW)>(&::GlobalNamespace::Luau::luaL_checkudata)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5a945f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkudata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_checkudata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t, uint8_t*)>(&::GlobalNamespace::Luau::luaL_checkudata)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a915f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkudata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_objlen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_objlen)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a91780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_objlen", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.luaL_optnumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::lua_State*, int32_t, double_t)>(&::GlobalNamespace::Luau::luaL_optnumber)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a7f3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_optnumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_createtable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_createtable)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a87344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_createtable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushlightuserdatatagged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, void*, int32_t)>(&::GlobalNamespace::Luau::lua_pushlightuserdatatagged)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a946a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushlightuserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushnil
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_pushnil)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a86378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushnil", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_next
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_next)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a86648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_next", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_rawseti
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_rawseti)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a873d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawseti", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_rawgeti
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_rawgeti)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a93c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawgeti", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_rawget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_rawget)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a94738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_rawset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_rawset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a8746c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawset", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_remove)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a947bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_remove", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_pushboolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_pushboolean)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5a80ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushboolean", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_rawequal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*, int32_t, int32_t)>(&::GlobalNamespace::Luau::lua_rawequal)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a94840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawequal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_newuserdata
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_newuserdata)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a948d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_newuserdata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_tonumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_tonumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a86480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tonumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_class_push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::lua_State*, ::Unity::Collections::FixedString32Bytes, ::System::IntPtr)>(&::GlobalNamespace::Luau::lua_class_push)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a888b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_class_push", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_class_get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(::GlobalNamespace::lua_State*, int32_t, ::Unity::Collections::FixedString32Bytes)>(&::GlobalNamespace::Luau::lua_class_get)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5a91e50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_class_get", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_light_ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::Luau::lua_light_ptr)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5a9168c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_light_ptr", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau.lua_print
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::lua_State*)>(&::GlobalNamespace::Luau::lua_print)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5a92fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_print", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Luau::*)()>(&::GlobalNamespace::Luau::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a948dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::lua_State* GlobalNamespace::Luau::luaL_newstate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_newstate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::lua_State*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::Luau::luaL_openlibs(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_openlibs", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline int8_t* GlobalNamespace::Luau::luau_compile(::StringW  source, /* [NativeInteger] */ ::System::UIntPtr  size, ::GlobalNamespace::lua_CompileOptions*  options, /* [NativeInteger] */ ::System::UIntPtr*  outsize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luau_compile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::lua_CompileOptions*>(), ::i2c::type_of<::System::UIntPtr*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t*>(nullptr, ___internal_method, source, size, options, outsize);
}
inline int32_t GlobalNamespace::Luau::luau_load(::GlobalNamespace::lua_State*  L, ::StringW  chunkname, int8_t*  data, /* [NativeInteger] */ ::System::UIntPtr  size, int32_t  env)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luau_load", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int8_t*>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, chunkname, data, size, env);
}
inline void GlobalNamespace::Luau::lua_pushvalue(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushvalue", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, idx);
}
inline void GlobalNamespace::Luau::lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  fn, ::StringW  debugname, int32_t  nup, ::GlobalNamespace::lua_Continuation*  cont)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::lua_Continuation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fn, debugname, nup, cont);
}
inline void GlobalNamespace::Luau::lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, ::StringW  debugname, int32_t  nup, ::GlobalNamespace::lua_Continuation*  cont)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::lua_Continuation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fn, debugname, nup, cont);
}
inline void GlobalNamespace::Luau::lua_pushcclosurek(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, uint8_t*  debugname, int32_t  nup, int32_t*  cont)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcclosurek", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fn, debugname, nup, cont);
}
inline void GlobalNamespace::Luau::lua_pushcfunction(::GlobalNamespace::lua_State*  L, ::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>  fn, ::StringW  debugname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcfunction", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Burst::FunctionPointer_1<::GlobalNamespace::lua_CFunction*>>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fn, debugname);
}
inline void GlobalNamespace::Luau::lua_pushcfunction(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  fn, ::StringW  debugname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushcfunction", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fn, debugname);
}
inline void GlobalNamespace::Luau::lua_settop(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_settop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, idx);
}
inline int32_t GlobalNamespace::Luau::lua_gettop(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_gettop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline int8_t* GlobalNamespace::Luau::lua_tolstring(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t*  len)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tolstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t*>(nullptr, ___internal_method, L, idx, len);
}
inline int32_t GlobalNamespace::Luau::lua_resume(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_State*  from, int32_t  nargs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_resume", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, from, nargs);
}
inline void GlobalNamespace::Luau::lua_setfield(::GlobalNamespace::lua_State*  L, int32_t  index, ::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index, k);
}
inline void GlobalNamespace::Luau::lua_setfield(::GlobalNamespace::lua_State*  L, int32_t  index, uint8_t*  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index, k);
}
inline void GlobalNamespace::Luau::lua_setglobal(::GlobalNamespace::lua_State*  L, ::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setglobal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, s);
}
inline void GlobalNamespace::Luau::lua_register(::GlobalNamespace::lua_State*  L, ::GlobalNamespace::lua_CFunction*  f, ::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_register", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, f, n);
}
inline void GlobalNamespace::Luau::lua_pop(::GlobalNamespace::lua_State*  L, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pop", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, n);
}
inline int8_t* GlobalNamespace::Luau::lua_tostring(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tostring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int8_t*>(nullptr, ___internal_method, L, idx);
}
inline int32_t GlobalNamespace::Luau::lua_isstring(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_isstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, index);
}
inline int32_t GlobalNamespace::Luau::lua_type(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_type", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, index);
}
inline int32_t GlobalNamespace::Luau::lua_pushstring(::GlobalNamespace::lua_State*  L, ::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, s);
}
inline int32_t GlobalNamespace::Luau::lua_pushstring(::GlobalNamespace::lua_State*  L, uint8_t*  s)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, s);
}
inline int32_t GlobalNamespace::Luau::lua_error(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_error", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Luau::luaL_errorL(::GlobalNamespace::lua_State*  L, ::StringW  fmt, /* [ParamArray] */ ::ArrayW<::StringW>  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_errorL", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fmt, a);
}
inline void GlobalNamespace::Luau::luaL_errorL(::GlobalNamespace::lua_State*  L, int8_t*  fmt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_errorL", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, fmt);
}
inline int32_t GlobalNamespace::Luau::lua_toboolean(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_toboolean", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, index);
}
inline uint8_t* GlobalNamespace::Luau::lua_debugtrace(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_debugtrace", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Luau::lua_close(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_close", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Luau::lua_ref(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_ref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, idx);
}
inline void GlobalNamespace::Luau::lua_unref(::GlobalNamespace::lua_State*  L, int32_t  rid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_unref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, rid);
}
inline void GlobalNamespace::Luau::lua_getref(::GlobalNamespace::lua_State*  L, int32_t  rid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getref", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, rid);
}
inline void* GlobalNamespace::Luau::lua_touserdatatagged(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_touserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, idx, tag);
}
inline void* GlobalNamespace::Luau::lua_touserdata(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_touserdata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, index);
}
inline void* GlobalNamespace::Luau::lua_newuserdatatagged(::GlobalNamespace::lua_State*  L, int32_t  sz, int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_newuserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, sz, tag);
}
inline void GlobalNamespace::Luau::lua_getuserdatametatable(::GlobalNamespace::lua_State*  L, int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getuserdatametatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, tag);
}
inline void GlobalNamespace::Luau::lua_setuserdatametatable(::GlobalNamespace::lua_State*  L, int32_t  tag, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setuserdatametatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, tag, idx);
}
inline int32_t GlobalNamespace::Luau::lua_setmetatable(::GlobalNamespace::lua_State*  L, int32_t  objindex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, objindex);
}
inline int32_t GlobalNamespace::Luau::luaL_newmetatable(::GlobalNamespace::lua_State*  L, ::StringW  tname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_newmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, tname);
}
inline int32_t GlobalNamespace::Luau::lua_getfield(::GlobalNamespace::lua_State*  L, int32_t  idx, ::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, idx, k);
}
inline int32_t GlobalNamespace::Luau::lua_getfield(::GlobalNamespace::lua_State*  L, int32_t  idx, uint8_t*  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getfield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, idx, k);
}
inline int32_t GlobalNamespace::Luau::luaL_getmetafield(::GlobalNamespace::lua_State*  L, int32_t  idx, uint8_t*  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetafield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, idx, k);
}
inline int32_t GlobalNamespace::Luau::luaL_getmetafield(::GlobalNamespace::lua_State*  L, int32_t  idx, ::StringW  k)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetafield", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, idx, k);
}
inline void GlobalNamespace::Luau::luaL_getmetatable(::GlobalNamespace::lua_State*  L, ::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, n);
}
inline void GlobalNamespace::Luau::luaL_getmetatable(::GlobalNamespace::lua_State*  L, uint8_t*  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, n);
}
inline void GlobalNamespace::Luau::lua_getglobal(::GlobalNamespace::lua_State*  L, ::StringW  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getglobal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, n);
}
inline int32_t GlobalNamespace::Luau::lua_getmetatable(::GlobalNamespace::lua_State*  L, int32_t  objindex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_getmetatable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, objindex);
}
inline uint8_t* GlobalNamespace::Luau::lua_namecallatom(::GlobalNamespace::lua_State*  L, int32_t*  atom)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_namecallatom", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, L, atom);
}
inline uint8_t* GlobalNamespace::Luau::luaL_checklstring(::GlobalNamespace::lua_State*  L, int32_t  numArg, int32_t*  l)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checklstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, L, numArg, l);
}
inline uint8_t* GlobalNamespace::Luau::luaL_checkstring(::GlobalNamespace::lua_State*  L, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkstring", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, L, n);
}
inline void GlobalNamespace::Luau::lua_pushnumber(::GlobalNamespace::lua_State*  L, double_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushnumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, n);
}
inline double_t GlobalNamespace::Luau::luaL_checknumber(::GlobalNamespace::lua_State*  L, int32_t  numArg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checknumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, L, numArg);
}
inline void GlobalNamespace::Luau::lua_setreadonly(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_setreadonly", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, idx, enabled);
}
inline double_t GlobalNamespace::Luau::lua_tonumberx(::GlobalNamespace::lua_State*  L, int32_t  index, int32_t*  isnum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tonumberx", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, L, index, isnum);
}
inline int32_t GlobalNamespace::Luau::lua_gc(::GlobalNamespace::lua_State*  L, int32_t  what, int32_t  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_gc", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, what, data);
}
inline void GlobalNamespace::Luau::lua_call(::GlobalNamespace::lua_State*  L, int32_t  nargs, int32_t  nresults)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_call", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, nargs, nresults);
}
inline int32_t GlobalNamespace::Luau::lua_pcall(::GlobalNamespace::lua_State*  L, int32_t  nargs, int32_t  nresults, int32_t  fn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pcall", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, nargs, nresults, fn);
}
inline int32_t GlobalNamespace::Luau::lua_status(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_status", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void* GlobalNamespace::Luau::luaL_checkudata(::GlobalNamespace::lua_State*  L, int32_t  arg, ::StringW  tname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkudata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, arg, tname);
}
inline void* GlobalNamespace::Luau::luaL_checkudata(::GlobalNamespace::lua_State*  L, int32_t  arg, uint8_t*  tname)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_checkudata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, arg, tname);
}
inline int32_t GlobalNamespace::Luau::lua_objlen(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_objlen", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, index);
}
inline double_t GlobalNamespace::Luau::luaL_optnumber(::GlobalNamespace::lua_State*  L, int32_t  narg, double_t  d)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"luaL_optnumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, L, narg, d);
}
inline void GlobalNamespace::Luau::lua_createtable(::GlobalNamespace::lua_State*  L, int32_t  narr, int32_t  nrec)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_createtable", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, narr, nrec);
}
inline void GlobalNamespace::Luau::lua_pushlightuserdatatagged(::GlobalNamespace::lua_State*  L, void*  p, int32_t  tag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushlightuserdatatagged", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, p, tag);
}
inline void GlobalNamespace::Luau::lua_pushnil(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushnil", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L);
}
inline int32_t GlobalNamespace::Luau::lua_next(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_next", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, index);
}
inline void GlobalNamespace::Luau::lua_rawseti(::GlobalNamespace::lua_State*  L, int32_t  idx, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawseti", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, idx, n);
}
inline void GlobalNamespace::Luau::lua_rawgeti(::GlobalNamespace::lua_State*  L, int32_t  index, int32_t  n)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawgeti", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index, n);
}
inline void GlobalNamespace::Luau::lua_rawget(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawget", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index);
}
inline void GlobalNamespace::Luau::lua_rawset(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawset", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index);
}
inline void GlobalNamespace::Luau::lua_remove(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_remove", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, index);
}
inline void GlobalNamespace::Luau::lua_pushboolean(::GlobalNamespace::lua_State*  L, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_pushboolean", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, b);
}
inline int32_t GlobalNamespace::Luau::lua_rawequal(::GlobalNamespace::lua_State*  L, int32_t  a, int32_t  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_rawequal", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L, a, b);
}
inline void* GlobalNamespace::Luau::lua_newuserdata(::GlobalNamespace::lua_State*  L, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_newuserdata", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, L, size);
}
inline double_t GlobalNamespace::Luau::lua_tonumber(::GlobalNamespace::lua_State*  L, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_tonumber", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, L, index);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GlobalNamespace::Luau::lua_class_push(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Luau*>(),
                    {"lua_class_push", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, L);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GlobalNamespace::Luau::lua_class_push(::GlobalNamespace::lua_State*  L, ::Unity::Collections::FixedString32Bytes  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Luau*>(),
                    {"lua_class_push", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, L, name);
}
inline void GlobalNamespace::Luau::lua_class_push(::GlobalNamespace::lua_State*  L, ::Unity::Collections::FixedString32Bytes  name, ::System::IntPtr  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_class_push", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, L, name, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GlobalNamespace::Luau::lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Luau*>(),
                    {"lua_class_get", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, L, idx);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* GlobalNamespace::Luau::lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx, ::Unity::Collections::FixedString32Bytes  name)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Luau*>(),
                    {"lua_class_get", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, L, idx, name);
}
inline uint8_t* GlobalNamespace::Luau::lua_class_get(::GlobalNamespace::lua_State*  L, int32_t  idx, ::Unity::Collections::FixedString32Bytes  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_class_get", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::FixedString32Bytes>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, L, idx, name);
}
inline ::System::IntPtr GlobalNamespace::Luau::lua_light_ptr(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_light_ptr", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, L, idx);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline bool GlobalNamespace::Luau::lua_class_check(::GlobalNamespace::lua_State*  L, int32_t  idx)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::Luau*>(),
                    {"lua_class_check", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, L, idx);
}
inline int32_t GlobalNamespace::Luau::lua_print(::GlobalNamespace::lua_State*  L)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {"lua_print", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, L);
}
inline void GlobalNamespace::Luau::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::Luau* GlobalNamespace::Luau::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::Luau*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Luau::Luau()   {
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassFunctions_1<T>::setStaticF_classProperties(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*, "classProperties", ::GlobalNamespace::Luau_lua_ClassFunctions_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>* GlobalNamespace::Luau_lua_ClassFunctions_1<T>::getStaticF_classProperties()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*, "classProperties", ::GlobalNamespace::Luau_lua_ClassFunctions_1<T>*>();
}
template<typename T>
inline ::GlobalNamespace::lua_CFunction* GlobalNamespace::Luau_lua_ClassFunctions_1<T>::Get(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassFunctions_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::lua_CFunction*>(nullptr, ___internal_method, name);
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassFunctions_1<T>::Add(::StringW  name, ::GlobalNamespace::lua_CFunction*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassFunctions_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, field);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Luau_lua_ClassFunctions_1<T>::Luau_lua_ClassFunctions_1()   {
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassProperties_1<T>::setStaticF_classProperties(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*, "classProperties", ::GlobalNamespace::Luau_lua_ClassProperties_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>* GlobalNamespace::Luau_lua_ClassProperties_1<T>::getStaticF_classProperties()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::lua_CFunction*>*>*, "classProperties", ::GlobalNamespace::Luau_lua_ClassProperties_1<T>*>();
}
template<typename T>
inline ::GlobalNamespace::lua_CFunction* GlobalNamespace::Luau_lua_ClassProperties_1<T>::Get(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassProperties_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::lua_CFunction*>(nullptr, ___internal_method, name);
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassProperties_1<T>::Add(::StringW  name, ::GlobalNamespace::lua_CFunction*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassProperties_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, field);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Luau_lua_ClassProperties_1<T>::Luau_lua_ClassProperties_1()   {
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassFields_1<T>::setStaticF_classDictionarys(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*, "classDictionarys", ::GlobalNamespace::Luau_lua_ClassFields_1<T>*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>* GlobalNamespace::Luau_lua_ClassFields_1<T>::getStaticF_classDictionarys()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::Dictionary_2<int32_t,::System::Reflection::FieldInfo*>*>*, "classDictionarys", ::GlobalNamespace::Luau_lua_ClassFields_1<T>*>();
}
template<typename T>
inline ::System::Reflection::FieldInfo* GlobalNamespace::Luau_lua_ClassFields_1<T>::Get(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassFields_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, name);
}
template<typename T>
inline void GlobalNamespace::Luau_lua_ClassFields_1<T>::Add(::StringW  name, ::System::Reflection::FieldInfo*  field)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_ClassFields_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, field);
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::Luau_lua_ClassFields_1<T>::Luau_lua_ClassFields_1()   {
}
//  Writing Method size for method: ::GlobalNamespace::Luau_lua_TypeID.get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::GlobalNamespace::Luau_lua_TypeID::get)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5a948e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_TypeID*>(),
                        {"get", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Luau_lua_TypeID.push
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::GlobalNamespace::Luau_lua_TypeID::push)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5a9499c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_TypeID*>(),
                        {"push", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Luau_lua_TypeID::setStaticF_names(::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "names", ::GlobalNamespace::Luau_lua_TypeID*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>* GlobalNamespace::Luau_lua_TypeID::getStaticF_names()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::StringW>*, "names", ::GlobalNamespace::Luau_lua_TypeID*>();
}
inline ::StringW GlobalNamespace::Luau_lua_TypeID::get(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_TypeID*>(),
                        {"get", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, t);
}
inline void GlobalNamespace::Luau_lua_TypeID::push(::System::Type*  t, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Luau_lua_TypeID*>(),
                        {"push", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, name);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Luau_lua_TypeID::Luau_lua_TypeID()   {
}

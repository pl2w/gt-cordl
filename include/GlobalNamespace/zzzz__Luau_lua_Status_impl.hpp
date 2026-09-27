#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau_lua_Status.hpp"
#include "GlobalNamespace/zzzz__Luau_lua_Status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Luau_lua_Status::Luau_lua_Status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Luau_lua_Status::Luau_lua_Status()   {
}
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_OK{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_YIELD{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_ERRRUN{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_ERRSYNTAX{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_ERRMEM{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_ERRERR{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Luau_lua_Status  GlobalNamespace::Luau_lua_Status::LUA_BREAK{static_cast<int32_t>(0x6)};

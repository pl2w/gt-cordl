#pragma once
// IWYU pragma private; include "GlobalNamespace/Luau_gc_status.hpp"
#include "GlobalNamespace/zzzz__Luau_gc_status_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Luau_gc_status::Luau_gc_status(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Luau_gc_status::Luau_gc_status()   {
}
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCSTOP{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCRESTART{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCCOLLECT{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCCOUNT{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCISRUNNING{static_cast<int32_t>(0x4)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCSTEP{static_cast<int32_t>(0x5)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCSETGOAL{static_cast<int32_t>(0x6)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCSETSTEPMUL{static_cast<int32_t>(0x7)};
constexpr ::GlobalNamespace::Luau_gc_status  GlobalNamespace::Luau_gc_status::LUA_GCSETSTEPSIZE{static_cast<int32_t>(0x8)};

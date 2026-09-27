#pragma once
// IWYU pragma private; include "GlobalNamespace/LuauScriptRunner.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LuauScriptRunner_def.hpp"
#include "GlobalNamespace/zzzz__lua_CFunction_def.hpp"
#include "GlobalNamespace/zzzz__lua_State_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LuauScriptRunner.ErrorCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::lua_State*, int32_t)>(&::GlobalNamespace::LuauScriptRunner::ErrorCheck)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x5a8bd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"ErrorCheck", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauScriptRunner.Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LuauScriptRunner::*)(float_t)>(&::GlobalNamespace::LuauScriptRunner::Tick)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5a957d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauScriptRunner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LuauScriptRunner::*)(::StringW, ::StringW, ::GlobalNamespace::lua_CFunction*, ::GlobalNamespace::lua_CFunction*, ::GlobalNamespace::lua_CFunction*)>(&::GlobalNamespace::LuauScriptRunner::_ctor)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x5a98134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LuauScriptRunner.FromFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LuauScriptRunner* (::GlobalNamespace::LuauScriptRunner::*)(::StringW, ::GlobalNamespace::lua_CFunction*, ::GlobalNamespace::lua_CFunction*)>(&::GlobalNamespace::LuauScriptRunner::FromFile)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x5a98428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"FromFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_ShouldTick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTick;
}
constexpr bool const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_ShouldTick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShouldTick;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_ShouldTick(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShouldTick = value;
}
constexpr ::GlobalNamespace::lua_CFunction*& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_postTickCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postTickCallback;
}
constexpr ::GlobalNamespace::lua_CFunction* const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_postTickCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___postTickCallback;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_postTickCallback(::GlobalNamespace::lua_CFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___postTickCallback = value;
}
constexpr ::GlobalNamespace::lua_CFunction*& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_preTickCallback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preTickCallback;
}
constexpr ::GlobalNamespace::lua_CFunction* const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_preTickCallback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preTickCallback;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_preTickCallback(::GlobalNamespace::lua_CFunction*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preTickCallback = value;
}
constexpr ::StringW& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_ScriptName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScriptName;
}
constexpr ::StringW const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_ScriptName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ScriptName;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_ScriptName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ScriptName = value;
}
constexpr ::StringW& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_Script()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Script;
}
constexpr ::StringW const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_Script() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Script;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_Script(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Script = value;
}
constexpr ::GlobalNamespace::lua_State*& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_L()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr ::GlobalNamespace::lua_State* const& GlobalNamespace::LuauScriptRunner::__cordl_internal_get_L() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___L;
}
constexpr void GlobalNamespace::LuauScriptRunner::__cordl_internal_set_L(::GlobalNamespace::lua_State*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___L = value;
}
inline void GlobalNamespace::LuauScriptRunner::setStaticF_ScriptRunners(::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*, "ScriptRunners", ::GlobalNamespace::LuauScriptRunner*>(std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>* GlobalNamespace::LuauScriptRunner::getStaticF_ScriptRunners()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::LuauScriptRunner*>*, "ScriptRunners", ::GlobalNamespace::LuauScriptRunner*>();
}
inline bool GlobalNamespace::LuauScriptRunner::ErrorCheck(::GlobalNamespace::lua_State*  L, int32_t  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"ErrorCheck", {}, {::i2c::type_of<::GlobalNamespace::lua_State*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, L, status);
}
inline bool GlobalNamespace::LuauScriptRunner::Tick(float_t  deltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"Tick", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, deltaTime);
}
inline void GlobalNamespace::LuauScriptRunner::_ctor(::StringW  script, ::StringW  name, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  preTick, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  postTick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, script, name, bindings, preTick, postTick);
}
inline ::GlobalNamespace::LuauScriptRunner* GlobalNamespace::LuauScriptRunner::FromFile(::StringW  filePath, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  tick)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LuauScriptRunner*>(),
                        {"FromFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>(), ::i2c::type_of<::GlobalNamespace::lua_CFunction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LuauScriptRunner*>(this, ___internal_method, filePath, bindings, tick);
}
inline ::GlobalNamespace::LuauScriptRunner* GlobalNamespace::LuauScriptRunner::New_ctor(::StringW  script, ::StringW  name, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  bindings, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  preTick, /* [CanBeNull] */ ::GlobalNamespace::lua_CFunction*  postTick)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LuauScriptRunner*>(script, name, bindings, preTick, postTick));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LuauScriptRunner::LuauScriptRunner()   {
}

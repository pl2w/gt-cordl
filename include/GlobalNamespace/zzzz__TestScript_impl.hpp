#pragma once
// IWYU pragma private; include "GlobalNamespace/TestScript.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TestScript_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TestScript.get_callbackOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::TestScript::*)()>(&::GlobalNamespace::TestScript::get_callbackOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae004c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {"get_callbackOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScript.get_IsUIOpen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::TestScript::get_IsUIOpen)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5adf4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {"get_IsUIOpen", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TestScript._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TestScript::*)()>(&::GlobalNamespace::TestScript::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ae0054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::TestScript::__cordl_internal_get_testDelete()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testDelete;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::TestScript::__cordl_internal_get_testDelete() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___testDelete;
}
constexpr void GlobalNamespace::TestScript::__cordl_internal_set_testDelete(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___testDelete = value;
}
inline int32_t GlobalNamespace::TestScript::get_callbackOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {"get_callbackOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::TestScript::get_IsUIOpen()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {"get_IsUIOpen", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void GlobalNamespace::TestScript::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TestScript*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TestScript* GlobalNamespace::TestScript::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TestScript*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TestScript::TestScript()   {
}

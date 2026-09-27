#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneInvoker_Send.hpp"
#include "GlobalNamespace/zzzz__XSceneRef_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneInvoker_Send_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XSceneInvoker_Send.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneInvoker_Send::*)()>(&::GlobalNamespace::XSceneInvoker_Send::Invoke)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x56ba470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Send*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneInvoker_Send._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneInvoker_Send::*)()>(&::GlobalNamespace::XSceneInvoker_Send::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Send*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::XSceneRef& GlobalNamespace::XSceneInvoker_Send::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::GlobalNamespace::XSceneRef const& GlobalNamespace::XSceneInvoker_Send::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void GlobalNamespace::XSceneInvoker_Send::__cordl_internal_set_target(::GlobalNamespace::XSceneRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void GlobalNamespace::XSceneInvoker_Send::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Send*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneInvoker_Send::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Send*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XSceneInvoker_Send* GlobalNamespace::XSceneInvoker_Send::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XSceneInvoker_Send*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XSceneInvoker_Send::XSceneInvoker_Send()   {
}

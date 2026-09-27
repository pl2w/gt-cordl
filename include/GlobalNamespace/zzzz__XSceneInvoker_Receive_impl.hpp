#pragma once
// IWYU pragma private; include "GlobalNamespace/XSceneInvoker_Receive.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__XSceneInvoker_Receive_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::XSceneInvoker_Receive.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneInvoker_Receive::*)()>(&::GlobalNamespace::XSceneInvoker_Receive::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56ba450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Receive*>(),
                        {"Invoke", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::XSceneInvoker_Receive._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::XSceneInvoker_Receive::*)()>(&::GlobalNamespace::XSceneInvoker_Receive::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56ba468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Receive*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::XSceneInvoker_Receive::__cordl_internal_get_evt()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evt;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::XSceneInvoker_Receive::__cordl_internal_get_evt() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___evt;
}
constexpr void GlobalNamespace::XSceneInvoker_Receive::__cordl_internal_set_evt(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___evt = value;
}
inline void GlobalNamespace::XSceneInvoker_Receive::Invoke()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Receive*>(),
                        {"Invoke", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::XSceneInvoker_Receive::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::XSceneInvoker_Receive*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::XSceneInvoker_Receive* GlobalNamespace::XSceneInvoker_Receive::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::XSceneInvoker_Receive*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::XSceneInvoker_Receive::XSceneInvoker_Receive()   {
}

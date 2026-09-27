#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaUIParent.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaUIParent_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaUIParent.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaUIParent::*)()>(&::GlobalNamespace::GorillaUIParent::Awake)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x59470f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaUIParent*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaUIParent._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaUIParent::*)()>(&::GlobalNamespace::GorillaUIParent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5947220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaUIParent*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaUIParent::setStaticF_instance(::UnityW<::GlobalNamespace::GorillaUIParent>  value)  {
::cordl_internals::setStaticField<::UnityW<::GlobalNamespace::GorillaUIParent>, "instance", ::GlobalNamespace::GorillaUIParent*>(std::forward<::UnityW<::GlobalNamespace::GorillaUIParent>>(value));
}
inline ::UnityW<::GlobalNamespace::GorillaUIParent> GlobalNamespace::GorillaUIParent::getStaticF_instance()  {
return ::cordl_internals::getStaticField<::UnityW<::GlobalNamespace::GorillaUIParent>, "instance", ::GlobalNamespace::GorillaUIParent*>();
}
inline void GlobalNamespace::GorillaUIParent::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaUIParent*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaUIParent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaUIParent*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaUIParent* GlobalNamespace::GorillaUIParent::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaUIParent*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaUIParent::GorillaUIParent()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaColorizableBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaColorizableBase_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaColorizableBase.SetColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorizableBase::*)(::UnityEngine::Color)>(&::GlobalNamespace::GorillaColorizableBase::SetColor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::GorillaColorizableBase*>(),
                    {::i2c::class_of<::GlobalNamespace::GorillaColorizableBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaColorizableBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaColorizableBase::*)()>(&::GlobalNamespace::GorillaColorizableBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x590420c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorizableBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GorillaColorizableBase::SetColor(::UnityEngine::Color  color)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::GorillaColorizableBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void GlobalNamespace::GorillaColorizableBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaColorizableBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaColorizableBase* GlobalNamespace::GorillaColorizableBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaColorizableBase*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaColorizableBase::GorillaColorizableBase()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_Run.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Run_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_Run.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_Run::*)(::System::Reflection::MethodInfo*)>(&::GlobalNamespace::OnExitPlay_Run::OnEnterPlay)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5b0e788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnExitPlay_Run*>(),
                    {::i2c::class_of<::GlobalNamespace::OnExitPlay_Run*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_Run._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_Run::*)()>(&::GlobalNamespace::OnExitPlay_Run::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0e88c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_Run*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnExitPlay_Run::OnEnterPlay(::System::Reflection::MethodInfo*  method)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnExitPlay_Run*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void GlobalNamespace::OnExitPlay_Run::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_Run*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnExitPlay_Run* GlobalNamespace::OnExitPlay_Run::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnExitPlay_Run*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnExitPlay_Run::OnExitPlay_Run()   {
}

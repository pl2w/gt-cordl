#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_Clear.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Clear_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_Clear.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_Clear::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnExitPlay_Clear::OnEnterPlay)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5b0e620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnExitPlay_Clear*>(),
                    {::i2c::class_of<::GlobalNamespace::OnExitPlay_Clear*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_Clear._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_Clear::*)()>(&::GlobalNamespace::OnExitPlay_Clear::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0e780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_Clear*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnExitPlay_Clear::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnExitPlay_Clear*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnExitPlay_Clear::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_Clear*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnExitPlay_Clear* GlobalNamespace::OnExitPlay_Clear::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnExitPlay_Clear*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnExitPlay_Clear::OnExitPlay_Clear()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Clear.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Clear_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_Clear.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_Clear::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnEnterPlay_Clear::OnEnterPlay)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b0deb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Clear*>(),
                    {::i2c::class_of<::GlobalNamespace::OnEnterPlay_Clear*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_Clear._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_Clear::*)()>(&::GlobalNamespace::OnEnterPlay_Clear::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0e01c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Clear*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnEnterPlay_Clear::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnEnterPlay_Clear*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnEnterPlay_Clear::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Clear*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnEnterPlay_Clear* GlobalNamespace::OnEnterPlay_Clear::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnEnterPlay_Clear*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnEnterPlay_Clear::OnEnterPlay_Clear()   {
}

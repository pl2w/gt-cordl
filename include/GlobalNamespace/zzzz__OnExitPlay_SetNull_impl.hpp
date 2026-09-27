#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_SetNull.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_SetNull_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_SetNull.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_SetNull::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnExitPlay_SetNull::OnEnterPlay)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5b0e2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNull*>(),
                    {::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNull*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_SetNull._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_SetNull::*)()>(&::GlobalNamespace::OnExitPlay_SetNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0e38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNull*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnExitPlay_SetNull::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNull*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnExitPlay_SetNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNull*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnExitPlay_SetNull* GlobalNamespace::OnExitPlay_SetNull::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnExitPlay_SetNull*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnExitPlay_SetNull::OnExitPlay_SetNull()   {
}

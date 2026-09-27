#pragma once
// IWYU pragma private; include "GlobalNamespace/OnExitPlay_SetNew.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnExitPlay_SetNew_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_SetNew.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_SetNew::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnExitPlay_SetNew::OnEnterPlay)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b0e4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNew*>(),
                    {::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNew*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnExitPlay_SetNew._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnExitPlay_SetNew::*)()>(&::GlobalNamespace::OnExitPlay_SetNew::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0e618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNew*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnExitPlay_SetNew::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNew*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnExitPlay_SetNew::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnExitPlay_SetNew*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnExitPlay_SetNew* GlobalNamespace::OnExitPlay_SetNew::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnExitPlay_SetNew*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnExitPlay_SetNew::OnExitPlay_SetNew()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_SetNew.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_SetNew_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_SetNew.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_SetNew::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnEnterPlay_SetNew::OnEnterPlay)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5b0dd3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnEnterPlay_SetNew*>(),
                    {::i2c::class_of<::GlobalNamespace::OnEnterPlay_SetNew*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_SetNew._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_SetNew::*)()>(&::GlobalNamespace::OnEnterPlay_SetNew::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0dea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_SetNew*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnEnterPlay_SetNew::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnEnterPlay_SetNew*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnEnterPlay_SetNew::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_SetNew*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnEnterPlay_SetNew* GlobalNamespace::OnEnterPlay_SetNew::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnEnterPlay_SetNew*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnEnterPlay_SetNew::OnEnterPlay_SetNew()   {
}

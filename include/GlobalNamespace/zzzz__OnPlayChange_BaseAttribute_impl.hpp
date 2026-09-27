#pragma once
// IWYU pragma private; include "GlobalNamespace/OnPlayChange_BaseAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnPlayChange_BaseAttribute_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnPlayChange_BaseAttribute.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnPlayChange_BaseAttribute::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b0da54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(),
                    {::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnPlayChange_BaseAttribute.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnPlayChange_BaseAttribute::*)(::System::Reflection::MethodInfo*)>(&::GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b0da58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(),
                    {::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnPlayChange_BaseAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnPlayChange_BaseAttribute::*)()>(&::GlobalNamespace::OnPlayChange_BaseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0da4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline void GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay(::System::Reflection::MethodInfo*  method)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, method);
}
inline void GlobalNamespace::OnPlayChange_BaseAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnPlayChange_BaseAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OnPlayChange_BaseAttribute* GlobalNamespace::OnPlayChange_BaseAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnPlayChange_BaseAttribute*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnPlayChange_BaseAttribute::OnPlayChange_BaseAttribute()   {
}

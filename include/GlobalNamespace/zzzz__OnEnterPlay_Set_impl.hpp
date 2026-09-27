#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Set.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_impl.hpp"
#include "GlobalNamespace/zzzz__OnEnterPlay_Set_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_Set._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_Set::*)(::System::Object*)>(&::GlobalNamespace::OnEnterPlay_Set::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5b0db48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Set*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OnEnterPlay_Set.OnEnterPlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OnEnterPlay_Set::*)(::System::Reflection::FieldInfo*)>(&::GlobalNamespace::OnEnterPlay_Set::OnEnterPlay)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x5b0db78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Set*>(),
                    {::i2c::class_of<::GlobalNamespace::OnEnterPlay_Set*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Object*& GlobalNamespace::OnEnterPlay_Set::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr ::System::Object* const& GlobalNamespace::OnEnterPlay_Set::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
constexpr void GlobalNamespace::OnEnterPlay_Set::__cordl_internal_set_value(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
inline void GlobalNamespace::OnEnterPlay_Set::_ctor(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OnEnterPlay_Set*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OnEnterPlay_Set::OnEnterPlay(::System::Reflection::FieldInfo*  field)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OnEnterPlay_Set*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, field);
}
inline ::GlobalNamespace::OnEnterPlay_Set* GlobalNamespace::OnEnterPlay_Set::New_ctor(::System::Object*  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OnEnterPlay_Set*>(value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OnEnterPlay_Set::OnEnterPlay_Set()   {
}

#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSerializableKeyValue_2.hpp"
#include "GlobalNamespace/zzzz__GTSerializableKeyValue_2_def.hpp"
template<typename T1,typename T2>
inline void GlobalNamespace::GTSerializableKeyValue_2<T1,T2>::_ctor(T1  k, T2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTSerializableKeyValue_2<T1,T2>>(),
                        {".ctor", {}, {::i2c::type_of<T1>(), ::i2c::type_of<T2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, k, v);
}
// Ctor Parameters [CppParam { name: "k", ty: "T1", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "v", ty: "T2", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T1,typename T2>
constexpr ::GlobalNamespace::GTSerializableKeyValue_2<T1,T2>::GTSerializableKeyValue_2(T1  k, T2  v) noexcept  {
this->k = k;
this->v = v;
}
// Ctor Parameters []
template<typename T1,typename T2>
constexpr ::GlobalNamespace::GTSerializableKeyValue_2<T1,T2>::GTSerializableKeyValue_2()   {
}

#pragma once
// IWYU pragma private; include "UnityEngine/Splines/RamerDouglasPeucker`1_Range.hpp"
#include "UnityEngine/Splines/zzzz__RamerDouglasPeucker`1_Range_def.hpp"
template<typename T>
inline int32_t GlobalNamespace::RamerDouglasPeucker_1_Range<T>::get_End()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>(),
                        {"get_End", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::RamerDouglasPeucker_1_Range<T>::_ctor(int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, start, count);
}
template<typename T>
inline ::StringW GlobalNamespace::RamerDouglasPeucker_1_Range<T>::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::RamerDouglasPeucker_1_Range<T>>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Start", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::RamerDouglasPeucker_1_Range<T>::RamerDouglasPeucker_1_Range(int32_t  Start, int32_t  Count) noexcept  {
this->Start = Start;
this->Count = Count;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RamerDouglasPeucker_1_Range<T>::RamerDouglasPeucker_1_Range()   {
}

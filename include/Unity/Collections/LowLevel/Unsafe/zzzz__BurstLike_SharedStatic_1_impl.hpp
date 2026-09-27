#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike_SharedStatic_1.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__BurstLike_SharedStatic_1_def.hpp"
template<typename T>
inline void GlobalNamespace::BurstLike_SharedStatic_1<T>::_ctor(void*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstLike_SharedStatic_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::BurstLike_SharedStatic_1<T>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BurstLike_SharedStatic_1<T>>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template<typename T>
template<typename TContext>
inline ::GlobalNamespace::BurstLike_SharedStatic_1<T> GlobalNamespace::BurstLike_SharedStatic_1<T>::GetOrCreate(uint32_t  alignment)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::BurstLike_SharedStatic_1<T>>(),
                    {"GetOrCreate", {::i2c::class_of<TContext>()}, {::i2c::type_of<uint32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TContext>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BurstLike_SharedStatic_1<T>>(nullptr, ___internal_method, alignment);
}
// Ctor Parameters [CppParam { name: "_buffer", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1(void*  _buffer) noexcept  {
this->_buffer = _buffer;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::BurstLike_SharedStatic_1<T>::BurstLike_SharedStatic_1()   {
}

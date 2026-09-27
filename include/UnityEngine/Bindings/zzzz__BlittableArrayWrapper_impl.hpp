#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_UpdateFlags_impl.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_UpdateFlags_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::BlittableArrayWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::BlittableArrayWrapper::*)(void*, int32_t)>(&::UnityEngine::Bindings::BlittableArrayWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb5fb784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Bindings::BlittableArrayWrapper>(),
                        {".ctor", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BlittableArrayWrapper::_ctor(void*  data, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Bindings::BlittableArrayWrapper>(),
                        {".ctor", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data, size);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Bindings::BlittableArrayWrapper::Unmarshal(::by_ref<::ArrayW<T>>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Bindings::BlittableArrayWrapper>(),
                    {"Unmarshal", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::ArrayW<T>>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "updateFlags", ty: "::GlobalNamespace::BlittableArrayWrapper_UpdateFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper::BlittableArrayWrapper(void*  data, int32_t  size, ::GlobalNamespace::BlittableArrayWrapper_UpdateFlags  updateFlags) noexcept  {
this->data = data;
this->size = size;
this->updateFlags = updateFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper::BlittableArrayWrapper()   {
}

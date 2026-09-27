#pragma once
// IWYU pragma private; include "GlobalNamespace/CallbackContainerUnique_1.hpp"
#include "GlobalNamespace/zzzz__CallbackContainer_1_impl.hpp"
#include "GlobalNamespace/zzzz__CallbackContainerUnique_1_def.hpp"
template<typename T>
inline void GlobalNamespace::CallbackContainerUnique_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallbackContainerUnique_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::CallbackContainerUnique_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CallbackContainerUnique_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GlobalNamespace::CallbackContainerUnique_1<T>::Add(/* [IsReadOnly] */ ::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallbackContainerUnique_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline bool GlobalNamespace::CallbackContainerUnique_1<T>::Remove(/* [IsReadOnly] */ ::by_ref<T>  item)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CallbackContainerUnique_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline ::GlobalNamespace::CallbackContainerUnique_1<T>* GlobalNamespace::CallbackContainerUnique_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallbackContainerUnique_1<T>*>());
}
template<typename T>
inline ::GlobalNamespace::CallbackContainerUnique_1<T>* GlobalNamespace::CallbackContainerUnique_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CallbackContainerUnique_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::CallbackContainerUnique_1<T>::CallbackContainerUnique_1()   {
}

#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_Array32768_1.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array4096_1_impl.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Array32768_1_def.hpp"
#include "Unity/Collections/zzzz__IIndexable_1_def.hpp"
template<typename T>
inline int32_t GlobalNamespace::AllocatorManager_Array32768_1<T>::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Array32768_1<T>>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::AllocatorManager_Array32768_1<T>::set_Length(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Array32768_1<T>>(),
                        {"set_Length", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::AllocatorManager_Array32768_1<T>::ElementAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_Array32768_1<T>>(),
                        {"ElementAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method, index);
}
/// @brief Convert operator to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr  GlobalNamespace::AllocatorManager_Array32768_1<T>::operator ::Unity::Collections::IIndexable_1<T>*()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::IIndexable_1<T>"
template<typename T>
constexpr ::Unity::Collections::IIndexable_1<T>* GlobalNamespace::AllocatorManager_Array32768_1<T>::i___Unity__Collections__IIndexable_1_T_()  {
return static_cast<::Unity::Collections::IIndexable_1<T>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "f0", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f1", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f2", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f3", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f4", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f5", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f6", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "f7", ty: "::GlobalNamespace::AllocatorManager_Array4096_1<T>", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::AllocatorManager_Array32768_1<T>::AllocatorManager_Array32768_1(::GlobalNamespace::AllocatorManager_Array4096_1<T>  f0, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f1, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f2, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f3, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f4, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f5, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f6, ::GlobalNamespace::AllocatorManager_Array4096_1<T>  f7) noexcept  {
this->f0 = f0;
this->f1 = f1;
this->f2 = f2;
this->f3 = f3;
this->f4 = f4;
this->f5 = f5;
this->f6 = f6;
this->f7 = f7;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::AllocatorManager_Array32768_1<T>::AllocatorManager_Array32768_1()   {
}

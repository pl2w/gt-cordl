#pragma once
// IWYU pragma private; include "System/RuntimeType_ListBuilder_1.hpp"
#include "System/zzzz__RuntimeType_ListBuilder_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
inline void GlobalNamespace::RuntimeType_ListBuilder_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
template<typename T>
inline T GlobalNamespace::RuntimeType_ListBuilder_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, index);
}
template<typename T>
inline ::ArrayW<T> GlobalNamespace::RuntimeType_ListBuilder_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::RuntimeType_ListBuilder_1<T>::CopyTo(::ArrayW<::System::Object*>  array, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, index);
}
template<typename T>
inline int32_t GlobalNamespace::RuntimeType_ListBuilder_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::RuntimeType_ListBuilder_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RuntimeType_ListBuilder_1<T>>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, item);
}
// Ctor Parameters [CppParam { name: "_items", ty: "::ArrayW<T>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_item", ty: "T", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_capacity", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename T>
constexpr ::GlobalNamespace::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1(::ArrayW<T>  _items, T  _item, int32_t  _count, int32_t  _capacity) noexcept  {
this->_items = _items;
this->_item = _item;
this->_count = _count;
this->_capacity = _capacity;
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RuntimeType_ListBuilder_1<T>::RuntimeType_ListBuilder_1()   {
}

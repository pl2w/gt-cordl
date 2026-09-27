#pragma once
// IWYU pragma private; include "GlobalNamespace/WeightedList_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__WeightedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>*& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<T>* const& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___items;
}
template<typename T>
constexpr void GlobalNamespace::WeightedList_1<T>::__cordl_internal_set_items(::System::Collections::Generic::List_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___items = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_weights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weights;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_weights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___weights;
}
template<typename T>
constexpr void GlobalNamespace::WeightedList_1<T>::__cordl_internal_set_weights(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___weights = value;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_cumulativeWeights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cumulativeWeights;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_cumulativeWeights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cumulativeWeights;
}
template<typename T>
constexpr void GlobalNamespace::WeightedList_1<T>::__cordl_internal_set_cumulativeWeights(::System::Collections::Generic::List_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cumulativeWeights = value;
}
template<typename T>
constexpr float_t& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_totalWeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWeight;
}
template<typename T>
constexpr float_t const& GlobalNamespace::WeightedList_1<T>::__cordl_internal_get_totalWeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalWeight;
}
template<typename T>
constexpr void GlobalNamespace::WeightedList_1<T>::__cordl_internal_set_totalWeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalWeight = value;
}
template<typename T>
inline int32_t GlobalNamespace::WeightedList_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* GlobalNamespace::WeightedList_1<T>::get_Items()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"get_Items", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WeightedList_1<T>::Add(T  item, float_t  weight)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item, weight);
}
template<typename T>
inline ::System::ValueTuple_2<T,float_t> GlobalNamespace::WeightedList_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<T,float_t>>(this, ___internal_method, index);
}
template<typename T>
inline T GlobalNamespace::WeightedList_1<T>::GetRandomItem()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"GetRandomItem", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::WeightedList_1<T>::GetRandomIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"GetRandomIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::WeightedList_1<T>::Remove(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"Remove", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GlobalNamespace::WeightedList_1<T>::RemoveAt(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"RemoveAt", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index);
}
template<typename T>
inline void GlobalNamespace::WeightedList_1<T>::RecalculateCumulativeWeights()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"RecalculateCumulativeWeights", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WeightedList_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::WeightedList_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::WeightedList_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::WeightedList_1<T>* GlobalNamespace::WeightedList_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::WeightedList_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::WeightedList_1<T>::WeightedList_1()   {
}

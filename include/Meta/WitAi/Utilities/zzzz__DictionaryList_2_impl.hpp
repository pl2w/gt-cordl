#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/DictionaryList_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/Utilities/zzzz__DictionaryList_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T,typename U>
constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*& Meta::WitAi::Utilities::DictionaryList_2<T,U>::__cordl_internal_get_dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dictionary;
}
template<typename T,typename U>
constexpr ::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>* const& Meta::WitAi::Utilities::DictionaryList_2<T,U>::__cordl_internal_get_dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dictionary;
}
template<typename T,typename U>
constexpr void Meta::WitAi::Utilities::DictionaryList_2<T,U>::__cordl_internal_set_dictionary(::System::Collections::Generic::Dictionary_2<T,::System::Collections::Generic::List_1<U>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dictionary = value;
}
template<typename T,typename U>
inline ::System::Collections::Generic::List_1<U>* Meta::WitAi::Utilities::DictionaryList_2<T,U>::get_Item(T  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DictionaryList_2<T,U>*>(),
                        {"get_Item", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<U>*>(this, ___internal_method, key);
}
template<typename T,typename U>
inline bool Meta::WitAi::Utilities::DictionaryList_2<T,U>::TryGetValue(T  key, ::by_ref<::System::Collections::Generic::List_1<U>*>  values)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DictionaryList_2<T,U>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<T>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<U>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, values);
}
template<typename T,typename U>
inline void Meta::WitAi::Utilities::DictionaryList_2<T,U>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::Utilities::DictionaryList_2<T,U>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T,typename U>
inline ::Meta::WitAi::Utilities::DictionaryList_2<T,U>* Meta::WitAi::Utilities::DictionaryList_2<T,U>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::WitAi::Utilities::DictionaryList_2<T,U>*>());
}
// Ctor Parameters []
template<typename T,typename U>
constexpr ::Meta::WitAi::Utilities::DictionaryList_2<T,U>::DictionaryList_2()   {
}

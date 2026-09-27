#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/CollectionPool_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__CollectionPool_2_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template<typename TCollection,typename TValue>
inline void Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>::setStaticF_k_CollectionQueue(::System::Collections::Generic::Queue_1<TCollection>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Queue_1<TCollection>*, "k_CollectionQueue", ::Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>*>(std::forward<::System::Collections::Generic::Queue_1<TCollection>*>(value));
}
template<typename TCollection,typename TValue>
inline ::System::Collections::Generic::Queue_1<TCollection>* Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>::getStaticF_k_CollectionQueue()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Queue_1<TCollection>*, "k_CollectionQueue", ::Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>*>();
}
template<typename TCollection,typename TValue>
inline TCollection Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>::GetCollection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>*>(),
                        {"GetCollection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TCollection>(nullptr, ___internal_method);
}
template<typename TCollection,typename TValue>
inline void Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>::RecycleCollection(TCollection  collection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>*>(),
                        {"RecycleCollection", {}, {::i2c::type_of<TCollection>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, collection);
}
// Ctor Parameters []
template<typename TCollection,typename TValue>
constexpr ::Unity::XR::CoreUtils::CollectionPool_2<TCollection,TValue>::CollectionPool_2()   {
}

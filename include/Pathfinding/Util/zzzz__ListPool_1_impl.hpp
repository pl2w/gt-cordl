#pragma once
// IWYU pragma private; include "Pathfinding/Util/ListPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ListPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::setStaticF_pool(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::Pathfinding::Util::ListPool_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* Pathfinding::Util::ListPool_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*, "pool", ::Pathfinding::Util::ListPool_1<T>*>();
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::setStaticF_largePool(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*, "largePool", ::Pathfinding::Util::ListPool_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>* Pathfinding::Util::ListPool_1<T>::getStaticF_largePool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*, "largePool", ::Pathfinding::Util::ListPool_1<T>*>();
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::setStaticF_inPool(::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*, "inPool", ::Pathfinding::Util::ListPool_1<T>*>(std::forward<::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>* Pathfinding::Util::ListPool_1<T>::getStaticF_inPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<::System::Collections::Generic::List_1<T>*>*, "inPool", ::Pathfinding::Util::ListPool_1<T>*>();
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Pathfinding::Util::ListPool_1<T>::Claim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Claim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t Pathfinding::Util::ListPool_1<T>::FindCandidate(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*  pool, int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"FindCandidate", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<T>*>*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, pool, capacity);
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Pathfinding::Util::ListPool_1<T>::Claim(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Claim", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<T>*>(nullptr, ___internal_method, capacity);
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::Warmup(int32_t  count, int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Warmup", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count, size);
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::Release(::by_ref<::System::Collections::Generic::List_1<T>*>  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<T>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::Release(::System::Collections::Generic::List_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::System::Collections::Generic::List_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
template<typename T>
inline void Pathfinding::Util::ListPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t Pathfinding::Util::ListPool_1<T>::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ListPool_1<T>*>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ListPool_1<T>::ListPool_1()   {
}

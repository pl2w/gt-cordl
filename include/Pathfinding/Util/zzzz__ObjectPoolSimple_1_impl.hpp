#pragma once
// IWYU pragma private; include "Pathfinding/Util/ObjectPoolSimple_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ObjectPoolSimple_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
inline void Pathfinding::Util::ObjectPoolSimple_1<T>::setStaticF_pool(::System::Collections::Generic::List_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<T>*, "pool", ::Pathfinding::Util::ObjectPoolSimple_1<T>*>(std::forward<::System::Collections::Generic::List_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<T>* Pathfinding::Util::ObjectPoolSimple_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<T>*, "pool", ::Pathfinding::Util::ObjectPoolSimple_1<T>*>();
}
template<typename T>
inline void Pathfinding::Util::ObjectPoolSimple_1<T>::setStaticF_inPool(::System::Collections::Generic::HashSet_1<T>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::HashSet_1<T>*, "inPool", ::Pathfinding::Util::ObjectPoolSimple_1<T>*>(std::forward<::System::Collections::Generic::HashSet_1<T>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::HashSet_1<T>* Pathfinding::Util::ObjectPoolSimple_1<T>::getStaticF_inPool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::HashSet_1<T>*, "inPool", ::Pathfinding::Util::ObjectPoolSimple_1<T>*>();
}
template<typename T>
inline T Pathfinding::Util::ObjectPoolSimple_1<T>::Claim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPoolSimple_1<T>*>(),
                        {"Claim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Pathfinding::Util::ObjectPoolSimple_1<T>::Release(::by_ref<T>  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPoolSimple_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
template<typename T>
inline void Pathfinding::Util::ObjectPoolSimple_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPoolSimple_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t Pathfinding::Util::ObjectPoolSimple_1<T>::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ObjectPoolSimple_1<T>*>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ObjectPoolSimple_1<T>::ObjectPoolSimple_1()   {
}

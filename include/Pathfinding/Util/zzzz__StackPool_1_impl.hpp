#pragma once
// IWYU pragma private; include "Pathfinding/Util/StackPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__StackPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
template<typename T>
inline void Pathfinding::Util::StackPool_1<T>::setStaticF_pool(::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*, "pool", ::Pathfinding::Util::StackPool_1<T>*>(std::forward<::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*>(value));
}
template<typename T>
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>* Pathfinding::Util::StackPool_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Collections::Generic::Stack_1<T>*>*, "pool", ::Pathfinding::Util::StackPool_1<T>*>();
}
template<typename T>
inline ::System::Collections::Generic::Stack_1<T>* Pathfinding::Util::StackPool_1<T>::Claim()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::StackPool_1<T>*>(),
                        {"Claim", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Stack_1<T>*>(nullptr, ___internal_method);
}
template<typename T>
inline void Pathfinding::Util::StackPool_1<T>::Warmup(int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::StackPool_1<T>*>(),
                        {"Warmup", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, count);
}
template<typename T>
inline void Pathfinding::Util::StackPool_1<T>::Release(::System::Collections::Generic::Stack_1<T>*  stack)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::StackPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stack);
}
template<typename T>
inline void Pathfinding::Util::StackPool_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::StackPool_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline int32_t Pathfinding::Util::StackPool_1<T>::GetSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::StackPool_1<T>*>(),
                        {"GetSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::StackPool_1<T>::StackPool_1()   {
}

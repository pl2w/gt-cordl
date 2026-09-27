#pragma once
// IWYU pragma private; include "Pathfinding/Util/ArrayPool_1.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ArrayPool_1_def.hpp"
template<typename T>
inline void Pathfinding::Util::ArrayPool_1<T>::setStaticF_pool(::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>, "pool", ::Pathfinding::Util::ArrayPool_1<T>*>(std::forward<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*> Pathfinding::Util::ArrayPool_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>, "pool", ::Pathfinding::Util::ArrayPool_1<T>*>();
}
template<typename T>
inline void Pathfinding::Util::ArrayPool_1<T>::setStaticF_exactPool(::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>, "exactPool", ::Pathfinding::Util::ArrayPool_1<T>*>(std::forward<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>>(value));
}
template<typename T>
inline ::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*> Pathfinding::Util::ArrayPool_1<T>::getStaticF_exactPool()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Collections::Generic::Stack_1<::ArrayW<T>>*>, "exactPool", ::Pathfinding::Util::ArrayPool_1<T>*>();
}
template<typename T>
inline ::ArrayW<T> Pathfinding::Util::ArrayPool_1<T>::Claim(int32_t  minimumLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ArrayPool_1<T>*>(),
                        {"Claim", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, minimumLength);
}
template<typename T>
inline ::ArrayW<T> Pathfinding::Util::ArrayPool_1<T>::ClaimWithExactLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ArrayPool_1<T>*>(),
                        {"ClaimWithExactLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(nullptr, ___internal_method, length);
}
template<typename T>
inline void Pathfinding::Util::ArrayPool_1<T>::Release(::by_ref<::ArrayW<T>>  array, bool  allowNonPowerOfTwo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ArrayPool_1<T>*>(),
                        {"Release", {}, {::i2c::type_of<::by_ref<::ArrayW<T>>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, array, allowNonPowerOfTwo);
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ArrayPool_1<T>::ArrayPool_1()   {
}

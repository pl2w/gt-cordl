#pragma once
// IWYU pragma private; include "Pathfinding/PathPool.hpp"
#include "Pathfinding/zzzz__Path_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__PathPool_def.hpp"
#include "Pathfinding/zzzz__Path_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Pathfinding::PathPool.Pool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Pathfinding::Path*)>(&::Pathfinding::PathPool::Pool)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5e62c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"Pool", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathPool.GetTotalCreated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Pathfinding::PathPool::GetTotalCreated)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e63008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"GetTotalCreated", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::PathPool.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::Pathfinding::PathPool::GetSize)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e630a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"GetSize", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Pathfinding::PathPool::setStaticF_pool(::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*, "pool", ::Pathfinding::PathPool*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>* Pathfinding::PathPool::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,::System::Collections::Generic::Stack_1<::Pathfinding::Path*>*>*, "pool", ::Pathfinding::PathPool*>();
}
inline void Pathfinding::PathPool::setStaticF_totalCreated(::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "totalCreated", ::Pathfinding::PathPool*>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>* Pathfinding::PathPool::getStaticF_totalCreated()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*,int32_t>*, "totalCreated", ::Pathfinding::PathPool*>();
}
inline void Pathfinding::PathPool::Pool(::Pathfinding::Path*  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"Pool", {}, {::i2c::type_of<::Pathfinding::Path*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline int32_t Pathfinding::PathPool::GetTotalCreated(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"GetTotalCreated", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
inline int32_t Pathfinding::PathPool::GetSize(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::PathPool*>(),
                        {"GetSize", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Pathfinding::Path*> && ::cordl_internals::default_constructor_constraint<T>)
inline T Pathfinding::PathPool::GetPath()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::PathPool*>(),
                    {"GetPath", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Pathfinding::PathPool::PathPool()   {
}

#pragma once
// IWYU pragma private; include "Fusion/DynamicHeapInstance.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__DynamicHeapInstance_def.hpp"
#include "Fusion/zzzz__DynamicHeap_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::DynamicHeapInstance._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeapInstance::*)(::ArrayW<::System::Type*>)>(&::Fusion::DynamicHeapInstance::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5f90d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeapInstance.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeapInstance::*)()>(&::Fusion::DynamicHeapInstance::Finalize)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5f90dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {::i2c::class_of<::Fusion::DynamicHeapInstance*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeapInstance.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeapInstance::*)(void*)>(&::Fusion::DynamicHeapInstance::Free)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f90ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeapInstance.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::Fusion::DynamicHeapInstance::*)(int32_t)>(&::Fusion::DynamicHeapInstance::Allocate)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f90f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DynamicHeapInstance.VerifyArrayLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DynamicHeapInstance::*)(int32_t)>(&::Fusion::DynamicHeapInstance::VerifyArrayLength)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f90f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"VerifyArrayLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::DynamicHeap*& Fusion::DynamicHeapInstance::__cordl_internal_get__heap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr ::Fusion::DynamicHeap* const& Fusion::DynamicHeapInstance::__cordl_internal_get__heap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heap;
}
constexpr void Fusion::DynamicHeapInstance::__cordl_internal_set__heap(::Fusion::DynamicHeap*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____heap = value;
}
inline void Fusion::DynamicHeapInstance::_ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, types);
}
inline void Fusion::DynamicHeapInstance::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::DynamicHeapInstance*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::DynamicHeapInstance::Free(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr);
}
inline void* Fusion::DynamicHeapInstance::Allocate(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"Allocate", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, size);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Fusion::DynamicHeapInstance::AllocateArray(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {"AllocateArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Fusion::DynamicHeapInstance::AllocateArrayPointers(int32_t  length)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {"AllocateArrayPointers", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, length);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Fusion::DynamicHeapInstance::AllocateTracked(bool  root)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {"AllocateTracked", {::i2c::class_of<T>()}, {::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, root);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Fusion::DynamicHeapInstance::AllocateTrackedArray(int32_t  length, bool  root)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {"AllocateTrackedArray", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, length, root);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void* Fusion::DynamicHeapInstance::AllocateTrackedArrayPointers(int32_t  length, bool  root)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                    {"AllocateTrackedArrayPointers", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void*>(this, ___internal_method, length, root);
}
inline void Fusion::DynamicHeapInstance::VerifyArrayLength(int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DynamicHeapInstance*>(),
                        {"VerifyArrayLength", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, length);
}
inline ::Fusion::DynamicHeapInstance* Fusion::DynamicHeapInstance::New_ctor(/* [ParamArray] */ ::ArrayW<::System::Type*>  types)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DynamicHeapInstance*>(types));
}
// Ctor Parameters []
constexpr ::Fusion::DynamicHeapInstance::DynamicHeapInstance()   {
}

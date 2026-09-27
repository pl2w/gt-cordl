#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ComponentType_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_Chunk_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_ComponentDataStore_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_Data_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>, int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xb7fd4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataStore::Dispose)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb7fd7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Exists
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::Exists)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb801afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Exists", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.GetComponentDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(int32_t, int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::GetComponentDataPtr)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb801b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"GetComponentDataPtr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Allocate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Layout::LayoutHandle (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(uint8_t*, int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::Allocate)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xb801b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Allocate", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::Free)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb7fd8cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Free", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.SetNextFreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::LayoutDataStore_ComponentDataStore*, int32_t, int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::SetNextFreeIndex)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb801d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"SetNextFreeIndex", {}, {::i2c::type_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.GetNextFreeIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::LayoutDataStore_ComponentDataStore*, int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::GetNextFreeIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb801d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"GetNextFreeIndex", {}, {::i2c::type_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.IncreaseCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)()>(&::UnityEngine::UIElements::Layout::LayoutDataStore::IncreaseCapacity)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb801d38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"IncreaseCapacity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.ResizeCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Layout::LayoutDataStore::*)(int32_t)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::ResizeCapacity)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb801920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"ResizeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Layout::LayoutDataStore.ResizeArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, int64_t, int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::UIElements::Layout::LayoutDataStore::ResizeArray)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb801d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"ResizeArray", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Layout::LayoutDataStore::_ctor(::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>  components, int32_t  initialCapacity, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<::UnityEngine::UIElements::Layout::ComponentType>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, components, initialCapacity, allocator);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::Layout::LayoutDataStore::Exists(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Exists", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, handle);
}
inline void* UnityEngine::UIElements::Layout::LayoutDataStore::GetComponentDataPtr(int32_t  index, int32_t  componentIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"GetComponentDataPtr", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method, index, componentIndex);
}
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(uint8_t*  data, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Allocate", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, data, count);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::Free(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"Free", {}, {::i2c::type_of<::by_ref<::UnityEngine::UIElements::Layout::LayoutHandle>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::SetNextFreeIndex(::GlobalNamespace::LayoutDataStore_ComponentDataStore*  ptr, int32_t  index, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"SetNextFreeIndex", {}, {::i2c::type_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr, index, value);
}
inline int32_t UnityEngine::UIElements::Layout::LayoutDataStore::GetNextFreeIndex(::GlobalNamespace::LayoutDataStore_ComponentDataStore*  ptr, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"GetNextFreeIndex", {}, {::i2c::type_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, index);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::IncreaseCapacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"IncreaseCapacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::Layout::LayoutDataStore::ResizeCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"ResizeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
inline void* UnityEngine::UIElements::Layout::LayoutDataStore::ResizeArray(void*  fromPtr, int64_t  fromCount, int64_t  toCount, int64_t  size, int32_t  align, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                        {"ResizeArray", {}, {::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, fromPtr, fromCount, toCount, size, align, allocator);
}
template<typename T0>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0>)
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(/* [IsReadOnly] */ ::by_ref<T0>  component0)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                    {"Allocate", {::i2c::class_of<T0>()}, {::i2c::type_of<::by_ref<T0>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, component0);
}
template<typename T0,typename T1,typename T2,typename T3>
requires(::cordl_internals::value_type_constraint<T0> && ::cordl_internals::default_constructor_constraint<T0> && ::cordl_internals::value_type_constraint<T1> && ::cordl_internals::default_constructor_constraint<T1> && ::cordl_internals::value_type_constraint<T2> && ::cordl_internals::default_constructor_constraint<T2> && ::cordl_internals::value_type_constraint<T3> && ::cordl_internals::default_constructor_constraint<T3>)
inline ::UnityEngine::UIElements::Layout::LayoutHandle UnityEngine::UIElements::Layout::LayoutDataStore::Allocate(/* [IsReadOnly] */ ::by_ref<T0>  component0, /* [IsReadOnly] */ ::by_ref<T1>  component1, /* [IsReadOnly] */ ::by_ref<T2>  component2, /* [IsReadOnly] */ ::by_ref<T3>  component3)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::UIElements::Layout::LayoutDataStore>(),
                    {"Allocate", {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}, {::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(), ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::by_ref<T3>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>(), ::i2c::class_of<T3>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::LayoutHandle>(*this, ___internal_method, component0, component1, component2, component3);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::Layout::LayoutDataStore::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::Layout::LayoutDataStore::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Data", ty: "::GlobalNamespace::LayoutDataStore_Data*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore::LayoutDataStore(::Unity::Collections::Allocator  m_Allocator, ::GlobalNamespace::LayoutDataStore_Data*  m_Data) noexcept  {
this->m_Allocator = m_Allocator;
this->m_Data = m_Data;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::LayoutDataStore::LayoutDataStore()   {
}

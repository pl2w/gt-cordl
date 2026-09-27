#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataStore_ComponentDataStore.hpp"
#include "Unity/Collections/zzzz__Allocator_impl.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_ComponentDataStore_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_Chunk_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LayoutDataStore_ComponentDataStore._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LayoutDataStore_ComponentDataStore::*)(int32_t, ::Unity::Collections::Allocator)>(&::GlobalNamespace::LayoutDataStore_ComponentDataStore::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb801908;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayoutDataStore_ComponentDataStore.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LayoutDataStore_ComponentDataStore::*)()>(&::GlobalNamespace::LayoutDataStore_ComponentDataStore::Dispose)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb801a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayoutDataStore_ComponentDataStore.GetComponentDataPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::GlobalNamespace::LayoutDataStore_ComponentDataStore::*)(int32_t)>(&::GlobalNamespace::LayoutDataStore_ComponentDataStore::GetComponentDataPtr)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb801b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"GetComponentDataPtr", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LayoutDataStore_ComponentDataStore.ResizeCapacity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LayoutDataStore_ComponentDataStore::*)(int32_t)>(&::GlobalNamespace::LayoutDataStore_ComponentDataStore::ResizeCapacity)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb801e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"ResizeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LayoutDataStore_ComponentDataStore::_ctor(int32_t  size, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size, allocator);
}
inline void GlobalNamespace::LayoutDataStore_ComponentDataStore::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline uint8_t* GlobalNamespace::LayoutDataStore_ComponentDataStore::GetComponentDataPtr(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"GetComponentDataPtr", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, index);
}
inline void GlobalNamespace::LayoutDataStore_ComponentDataStore::ResizeCapacity(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LayoutDataStore_ComponentDataStore>(),
                        {"ResizeCapacity", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, capacity);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::LayoutDataStore_ComponentDataStore::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::LayoutDataStore_ComponentDataStore::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Allocator", ty: "::Unity::Collections::Allocator", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ComponentCountPerChunk", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ChunkCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Chunks", ty: "::GlobalNamespace::LayoutDataStore_Chunk*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LayoutDataStore_ComponentDataStore::LayoutDataStore_ComponentDataStore(::Unity::Collections::Allocator  Allocator, int32_t  Size, int32_t  ComponentCountPerChunk, int32_t  ChunkCount, ::GlobalNamespace::LayoutDataStore_Chunk*  m_Chunks) noexcept  {
this->Allocator = Allocator;
this->Size = Size;
this->ComponentCountPerChunk = ComponentCountPerChunk;
this->ChunkCount = ChunkCount;
this->m_Chunks = m_Chunks;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LayoutDataStore_ComponentDataStore::LayoutDataStore_ComponentDataStore()   {
}

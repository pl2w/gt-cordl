#pragma once
// IWYU pragma private; include "Unity/Collections/AllocatorManager_AllocatorHandle.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_AllocatorHandle_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_Block_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_TableEntry_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.get_TableEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::GlobalNamespace::AllocatorManager_TableEntry> (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::get_TableEntry)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xaf03298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_TableEntry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.Rewind
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::Rewind)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaf0385c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Rewind", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.op_Implicit___GlobalNamespace__AllocatorManager_AllocatorHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AllocatorManager_AllocatorHandle (*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::op_Implicit___GlobalNamespace__AllocatorManager_AllocatorHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf035c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf03860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.Try
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)(::by_ref<::GlobalNamespace::AllocatorManager_Block>)>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::Try)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xaf03868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Try", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.get_Handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AllocatorManager_AllocatorHandle (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf0343c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_Handle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.get_ToAllocator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::Allocator (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::get_ToAllocator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf038d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_ToAllocator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaf038d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)(::System::Object*)>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xaf038ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                    {::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)(::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xaf03998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)()>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xaf039a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                    {::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AllocatorManager_AllocatorHandle.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::AllocatorManager_AllocatorHandle::*)(::GlobalNamespace::AllocatorManager_AllocatorHandle)>(&::GlobalNamespace::AllocatorManager_AllocatorHandle::CompareTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaf039b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
    return ___internal_method;
  }
};
inline ::by_ref<::GlobalNamespace::AllocatorManager_TableEntry> GlobalNamespace::AllocatorManager_AllocatorHandle::get_TableEntry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_TableEntry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::GlobalNamespace::AllocatorManager_TableEntry>>(*this, ___internal_method);
}
inline void GlobalNamespace::AllocatorManager_AllocatorHandle::Rewind()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Rewind", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle GlobalNamespace::AllocatorManager_AllocatorHandle::op_Implicit___GlobalNamespace__AllocatorManager_AllocatorHandle(::Unity::Collections::Allocator  a)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AllocatorManager_AllocatorHandle>(nullptr, ___internal_method, a);
}
inline int32_t GlobalNamespace::AllocatorManager_AllocatorHandle::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AllocatorManager_AllocatorHandle::Try(::by_ref<::GlobalNamespace::AllocatorManager_Block>  block)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Try", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::AllocatorManager_Block>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, block);
}
inline ::GlobalNamespace::AllocatorManager_AllocatorHandle GlobalNamespace::AllocatorManager_AllocatorHandle::get_Handle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_Handle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AllocatorManager_AllocatorHandle>(*this, ___internal_method);
}
inline ::Unity::Collections::Allocator GlobalNamespace::AllocatorManager_AllocatorHandle::get_ToAllocator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"get_ToAllocator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::Allocator>(*this, ___internal_method);
}
inline void GlobalNamespace::AllocatorManager_AllocatorHandle::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool GlobalNamespace::AllocatorManager_AllocatorHandle::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::AllocatorManager_AllocatorHandle::Equals(::GlobalNamespace::AllocatorManager_AllocatorHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::AllocatorManager_AllocatorHandle::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t GlobalNamespace::AllocatorManager_AllocatorHandle::CompareTo(::GlobalNamespace::AllocatorManager_AllocatorHandle  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>(),
                        {"CompareTo", {}, {::i2c::type_of<::GlobalNamespace::AllocatorManager_AllocatorHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr  GlobalNamespace::AllocatorManager_AllocatorHandle::operator ::Unity::Collections::AllocatorManager_IAllocator*()  {
return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::AllocatorManager_IAllocator"
constexpr ::Unity::Collections::AllocatorManager_IAllocator* GlobalNamespace::AllocatorManager_AllocatorHandle::i___Unity__Collections__AllocatorManager_IAllocator()  {
return static_cast<::Unity::Collections::AllocatorManager_IAllocator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::AllocatorManager_AllocatorHandle::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::AllocatorManager_AllocatorHandle::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr  GlobalNamespace::AllocatorManager_AllocatorHandle::operator ::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr ::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>* GlobalNamespace::AllocatorManager_AllocatorHandle::i___System__IEquatable_1___GlobalNamespace__AllocatorManager_AllocatorHandle_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr  GlobalNamespace::AllocatorManager_AllocatorHandle::operator ::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>"
constexpr ::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>* GlobalNamespace::AllocatorManager_AllocatorHandle::i___System__IComparable_1___GlobalNamespace__AllocatorManager_AllocatorHandle_()  {
return static_cast<::System::IComparable_1<::GlobalNamespace::AllocatorManager_AllocatorHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Index", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Version", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AllocatorManager_AllocatorHandle::AllocatorManager_AllocatorHandle(uint16_t  Index, uint16_t  Version) noexcept  {
this->Index = Index;
this->Version = Version;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AllocatorManager_AllocatorHandle::AllocatorManager_AllocatorHandle()   {
}

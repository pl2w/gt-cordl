#pragma once
// IWYU pragma private; include "UnityEngine/Profiling/Profiler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Profiling/zzzz__Profiler_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Profiling::Profiler::get_enabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f767c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.EndThreadProfiling
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Profiling::Profiler::EndThreadProfiling)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb5f76a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"EndThreadProfiling", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.BeginSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Profiling::Profiler::BeginSample)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5f76a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSample", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.ValidateArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Profiling::Profiler::ValidateArguments)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb5f78a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"ValidateArguments", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.BeginSampleImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Object*)>(&::UnityEngine::Profiling::Profiler::BeginSampleImpl)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb5f7730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSampleImpl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.EndSample
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Profiling::Profiler::EndSample)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"EndSample", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetRuntimeMemorySizeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::UnityEngine::Object*)>(&::UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5f798c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetRuntimeMemorySizeLong", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetMonoHeapSizeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetMonoHeapSizeLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetMonoHeapSizeLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetMonoUsedSizeLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetMonoUsedSizeLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTempAllocatorSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTempAllocatorSize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTempAllocatorSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalAllocatedMemoryLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalAllocatedMemoryLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalUnusedReservedMemoryLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalUnusedReservedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalUnusedReservedMemoryLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetTotalReservedMemoryLong
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)()>(&::UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb5f7b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalReservedMemoryLong", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.BeginSampleImpl_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::System::IntPtr)>(&::UnityEngine::Profiling::Profiler::BeginSampleImpl_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5f7920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSampleImpl_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Profiling::Profiler.GetRuntimeMemorySizeLong_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (*)(::System::IntPtr)>(&::UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5f7a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetRuntimeMemorySizeLong_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::Profiling::Profiler::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Profiling::Profiler::EndThreadProfiling()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"EndThreadProfiling", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Profiling::Profiler::BeginSample(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSample", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Profiling::Profiler::ValidateArguments(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"ValidateArguments", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Profiling::Profiler::BeginSampleImpl(::StringW  name, ::UnityEngine::Object*  targetObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSampleImpl", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, targetObject);
}
inline void UnityEngine::Profiling::Profiler::EndSample()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"EndSample", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong(/* [NotNull] */ ::UnityEngine::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetRuntimeMemorySizeLong", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, o);
}
inline int64_t UnityEngine::Profiling::Profiler::GetMonoHeapSizeLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetMonoHeapSizeLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetMonoUsedSizeLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetMonoUsedSizeLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::Profiling::Profiler::GetTempAllocatorSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTempAllocatorSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalAllocatedMemoryLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalAllocatedMemoryLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalUnusedReservedMemoryLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalUnusedReservedMemoryLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline int64_t UnityEngine::Profiling::Profiler::GetTotalReservedMemoryLong()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetTotalReservedMemoryLong", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method);
}
inline void UnityEngine::Profiling::Profiler::BeginSampleImpl_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::IntPtr  targetObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"BeginSampleImpl_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, targetObject);
}
inline int64_t UnityEngine::Profiling::Profiler::GetRuntimeMemorySizeLong_Injected(::System::IntPtr  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Profiling::Profiler*>(),
                        {"GetRuntimeMemorySizeLong_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(nullptr, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::UnityEngine::Profiling::Profiler::Profiler()   {
}

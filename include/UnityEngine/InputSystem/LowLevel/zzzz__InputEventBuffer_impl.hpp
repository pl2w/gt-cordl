#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/InputEventBuffer.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventBuffer_Enumerator_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.get_eventCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_eventCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafefbd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_eventCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.get_sizeInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_sizeInBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xafefbd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_sizeInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.get_capacityInBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_capacityInBytes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xafefbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_capacityInBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.get_data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_data)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xafefc2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.get_bufferPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_bufferPtr)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xafefc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_bufferPtr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, int32_t, int32_t, int32_t)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xafefc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(::Unity::Collections::NativeArray_1<uint8_t>, int32_t, int32_t, bool)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xafefe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.AppendEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::AppendEvent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xafeff50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AppendEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.AllocateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEvent* (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(int32_t, int32_t, ::Unity::Collections::Allocator)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::AllocateEvent)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xafeffcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AllocateEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.Contains
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(::UnityEngine::InputSystem::LowLevel::InputEvent*)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::Contains)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xafefafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::Reset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xaff02a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.AdvanceToNextEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>, ::by_ref<int32_t>, ::by_ref<int32_t>, bool)>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::AdvanceToNextEvent)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xaff02b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AdvanceToNextEvent", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::GetEnumerator)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xaff0374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xaff0428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::Dispose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaff042c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventBuffer (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::Clone)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xaff048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventBuffer.System_ICloneable_Clone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::InputSystem::LowLevel::InputEventBuffer::*)()>(&::UnityEngine::InputSystem::LowLevel::InputEventBuffer::System_ICloneable_Clone)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xaff0564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_eventCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_eventCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_sizeInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_sizeInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline int64_t UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_capacityInBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_capacityInBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::InputEventBuffer::get_bufferPtr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"get_bufferPtr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::_ctor(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr, int32_t  eventCount, int32_t  sizeInBytes, int32_t  capacityInBytes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventPtr, eventCount, sizeInBytes, capacityInBytes);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::_ctor(::Unity::Collections::NativeArray_1<uint8_t>  buffer, int32_t  eventCount, int32_t  sizeInBytes, bool  transferNativeArrayOwnership)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer, eventCount, sizeInBytes, transferNativeArrayOwnership);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::AppendEvent(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AppendEvent", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, eventPtr, capacityIncrementInBytes, allocator);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEvent* UnityEngine::InputSystem::LowLevel::InputEventBuffer::AllocateEvent(int32_t  sizeInBytes, int32_t  capacityIncrementInBytes, ::Unity::Collections::Allocator  allocator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AllocateEvent", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::Allocator>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEvent*>(*this, ___internal_method, sizeInBytes, capacityIncrementInBytes, allocator);
}
inline bool UnityEngine::InputSystem::LowLevel::InputEventBuffer::Contains(::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Contains", {}, {::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEvent*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, eventPtr);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::AdvanceToNextEvent(::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>  currentReadPos, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>  currentWritePos, ::by_ref<int32_t>  numEventsRetainedInBuffer, ::by_ref<int32_t>  numRemainingEvents, bool  leaveEventInBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"AdvanceToNextEvent", {}, {::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEvent*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentReadPos, currentWritePos, numEventsRetainedInBuffer, numRemainingEvents, leaveEventInBuffer);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* UnityEngine::InputSystem::LowLevel::InputEventBuffer::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(*this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::LowLevel::InputEventBuffer::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::InputEventBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventBuffer UnityEngine::InputSystem::LowLevel::InputEventBuffer::Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(*this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::LowLevel::InputEventBuffer::System_ICloneable_Clone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::InputSystem::LowLevel::InputEventBuffer>(),
                        {"System.ICloneable.Clone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr  UnityEngine::InputSystem::LowLevel::InputEventBuffer::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* UnityEngine::InputSystem::LowLevel::InputEventBuffer::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem__LowLevel__InputEventPtr_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::LowLevel::InputEventBuffer::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::LowLevel::InputEventBuffer::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::LowLevel::InputEventBuffer::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputEventBuffer::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr  UnityEngine::InputSystem::LowLevel::InputEventBuffer::operator ::System::ICloneable*()  {
return static_cast<::System::ICloneable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* UnityEngine::InputSystem::LowLevel::InputEventBuffer::i___System__ICloneable()  {
return static_cast<::System::ICloneable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_SizeInBytes", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_EventCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WeOwnTheBuffer", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer::InputEventBuffer(::Unity::Collections::NativeArray_1<uint8_t>  m_Buffer, int64_t  m_SizeInBytes, int32_t  m_EventCount, bool  m_WeOwnTheBuffer) noexcept  {
this->m_Buffer = m_Buffer;
this->m_SizeInBytes = m_SizeInBytes;
this->m_EventCount = m_EventCount;
this->m_WeOwnTheBuffer = m_WeOwnTheBuffer;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventBuffer::InputEventBuffer()   {
}

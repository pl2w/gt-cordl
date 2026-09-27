#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUnsafeUtils_FixedBufferStringQueue.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUnsafeUtils_FixedBufferStringQueue_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue.get_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)()>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::get_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb123314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"get_Count", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue.set_Count
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)(int32_t)>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::set_Count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb12331c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)(uint8_t*, int32_t)>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb123324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue.TryPush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)(::StringW)>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::TryPush)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb123370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"TryPush", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue.TryPop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)(::by_ref<::StringW>)>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::TryPop)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb123420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"TryPop", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::*)()>(&::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::Clear)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb123354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::set_Count(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"set_Count", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::_ctor(uint8_t*  ptr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ptr, length);
}
inline bool GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::TryPush(::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"TryPush", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline bool GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::TryPop(::by_ref<::StringW>  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"TryPop", {}, {::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, v);
}
inline void GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ReadCursor", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_WriteCursor", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BufferEnd", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BufferStart", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_BufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::CoreUnsafeUtils_FixedBufferStringQueue(uint8_t*  m_ReadCursor, uint8_t*  m_WriteCursor, uint8_t*  m_BufferEnd, uint8_t*  m_BufferStart, int32_t  m_BufferLength, int32_t  _Count_k__BackingField) noexcept  {
this->m_ReadCursor = m_ReadCursor;
this->m_WriteCursor = m_WriteCursor;
this->m_BufferEnd = m_BufferEnd;
this->m_BufferStart = m_BufferStart;
this->m_BufferLength = m_BufferLength;
this->_Count_k__BackingField = _Count_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CoreUnsafeUtils_FixedBufferStringQueue::CoreUnsafeUtils_FixedBufferStringQueue()   {
}

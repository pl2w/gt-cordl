#pragma once
// IWYU pragma private; include "Photon/Voice/FrameBuffer.hpp"
#include "Photon/Voice/zzzz__FrameFlags_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Photon/Voice/zzzz__FrameBuffer_def.hpp"
#include "Photon/Voice/zzzz__FrameFlags_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Photon::Voice::FrameBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::FrameBuffer::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::Photon::Voice::FrameFlags, ::System::IDisposable*)>(&::Photon::Voice::FrameBuffer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa746454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::FrameFlags>(), ::i2c::type_of<::System::IDisposable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::FrameBuffer::*)(::ArrayW<uint8_t>, ::Photon::Voice::FrameFlags)>(&::Photon::Voice::FrameBuffer::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa746518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.get_Ptr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::get_Ptr)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa744b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Ptr", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.Retain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::Retain)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa7465dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Retain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.Release
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::Release)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa7465ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Release", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::Dispose)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa746608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.get_Array
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::get_Array)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Array", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74671c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.get_Offset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::get_Offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa746724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Offset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Voice::FrameBuffer.get_Flags
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Voice::FrameFlags (::Photon::Voice::FrameBuffer::*)()>(&::Photon::Voice::FrameBuffer::get_Flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa74672c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Flags", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Voice::FrameBuffer::setStaticF_statDisposerCreated(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "statDisposerCreated", ::Photon::Voice::FrameBuffer>(std::forward<int32_t>(value));
}
inline int32_t Photon::Voice::FrameBuffer::getStaticF_statDisposerCreated()  {
return ::cordl_internals::getStaticField<int32_t, "statDisposerCreated", ::Photon::Voice::FrameBuffer>();
}
inline void Photon::Voice::FrameBuffer::setStaticF_statDisposerDisposed(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "statDisposerDisposed", ::Photon::Voice::FrameBuffer>(std::forward<int32_t>(value));
}
inline int32_t Photon::Voice::FrameBuffer::getStaticF_statDisposerDisposed()  {
return ::cordl_internals::getStaticField<int32_t, "statDisposerDisposed", ::Photon::Voice::FrameBuffer>();
}
inline void Photon::Voice::FrameBuffer::setStaticF_statPinned(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "statPinned", ::Photon::Voice::FrameBuffer>(std::forward<int32_t>(value));
}
inline int32_t Photon::Voice::FrameBuffer::getStaticF_statPinned()  {
return ::cordl_internals::getStaticField<int32_t, "statPinned", ::Photon::Voice::FrameBuffer>();
}
inline void Photon::Voice::FrameBuffer::setStaticF_statUnpinned(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "statUnpinned", ::Photon::Voice::FrameBuffer>(std::forward<int32_t>(value));
}
inline int32_t Photon::Voice::FrameBuffer::getStaticF_statUnpinned()  {
return ::cordl_internals::getStaticField<int32_t, "statUnpinned", ::Photon::Voice::FrameBuffer>();
}
inline void Photon::Voice::FrameBuffer::_ctor(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count, ::Photon::Voice::FrameFlags  flags, ::System::IDisposable*  disposer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Voice::FrameFlags>(), ::i2c::type_of<::System::IDisposable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, offset, count, flags, disposer);
}
inline void Photon::Voice::FrameBuffer::_ctor(::ArrayW<uint8_t>  array, ::Photon::Voice::FrameFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::Photon::Voice::FrameFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, array, flags);
}
inline ::System::IntPtr Photon::Voice::FrameBuffer::get_Ptr()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Ptr", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(*this, ___internal_method);
}
inline void Photon::Voice::FrameBuffer::Retain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Retain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Photon::Voice::FrameBuffer::Release()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Release", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Photon::Voice::FrameBuffer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::ArrayW<uint8_t> Photon::Voice::FrameBuffer::get_Array()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Array", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(*this, ___internal_method);
}
inline int32_t Photon::Voice::FrameBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Photon::Voice::FrameBuffer::get_Offset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Offset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Photon::Voice::FrameFlags Photon::Voice::FrameBuffer::get_Flags()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Voice::FrameBuffer>(),
                        {"get_Flags", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Voice::FrameFlags>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "array", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "offset", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposer", ty: "::System::IDisposable*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "disposed", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "refCnt", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gcHandle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "pinned", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Flags_k__BackingField", ty: "::Photon::Voice::FrameFlags", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::FrameBuffer::FrameBuffer(::ArrayW<uint8_t>  array, int32_t  offset, int32_t  count, ::System::IDisposable*  disposer, bool  disposed, int32_t  refCnt, ::System::Runtime::InteropServices::GCHandle  gcHandle, ::System::IntPtr  ptr, bool  pinned, ::Photon::Voice::FrameFlags  _Flags_k__BackingField) noexcept  {
this->array = array;
this->offset = offset;
this->count = count;
this->disposer = disposer;
this->disposed = disposed;
this->refCnt = refCnt;
this->gcHandle = gcHandle;
this->ptr = ptr;
this->pinned = pinned;
this->_Flags_k__BackingField = _Flags_k__BackingField;
}
// Ctor Parameters []
constexpr ::Photon::Voice::FrameBuffer::FrameBuffer()   {
}

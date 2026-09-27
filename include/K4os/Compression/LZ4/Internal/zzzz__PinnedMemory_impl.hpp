#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/PinnedMemory.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "K4os/Compression/LZ4/Internal/zzzz__PinnedMemory_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.get_MaxPooledSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::get_MaxPooledSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cbb070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_MaxPooledSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.get_Pointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::get_Pointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cbb0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_Pointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.get_Span
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<uint8_t> (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::get_Span)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9cbb0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_Span", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>, int32_t, bool)>(&::K4os::Compression::LZ4::Internal::PinnedMemory::Alloc)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9cb9b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"Alloc", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.AllocateNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>, int32_t, bool)>(&::K4os::Compression::LZ4::Internal::PinnedMemory::AllocateNative)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9cbb148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"AllocateNative", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.RentManagedFromPool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>, int32_t, bool)>(&::K4os::Compression::LZ4::Internal::PinnedMemory::RentManagedFromPool)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cbb244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"RentManagedFromPool", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::Free)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9cbb2f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"Free", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.ReleaseManaged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::ReleaseManaged)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cbb38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ReleaseManaged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.ReleaseNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::ReleaseNative)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x9cbb438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ReleaseNative", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::PinnedMemory.ClearFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::K4os::Compression::LZ4::Internal::PinnedMemory::*)()>(&::K4os::Compression::LZ4::Internal::PinnedMemory::ClearFields)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cbb500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ClearFields", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void K4os::Compression::LZ4::Internal::PinnedMemory::setStaticF__MaxPooledSize_k__BackingField(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "<MaxPooledSize>k__BackingField", ::K4os::Compression::LZ4::Internal::PinnedMemory>(std::forward<int32_t>(value));
}
inline int32_t K4os::Compression::LZ4::Internal::PinnedMemory::getStaticF__MaxPooledSize_k__BackingField()  {
return ::cordl_internals::getStaticField<int32_t, "<MaxPooledSize>k__BackingField", ::K4os::Compression::LZ4::Internal::PinnedMemory>();
}
inline int32_t K4os::Compression::LZ4::Internal::PinnedMemory::get_MaxPooledSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_MaxPooledSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline uint8_t* K4os::Compression::LZ4::Internal::PinnedMemory::get_Pointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_Pointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method);
}
inline ::System::Span_1<uint8_t> K4os::Compression::LZ4::Internal::PinnedMemory::get_Span()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"get_Span", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Span_1<uint8_t>>(*this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* K4os::Compression::LZ4::Internal::PinnedMemory::Reference()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                    {"Reference", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(*this, ___internal_method);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::Alloc(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"Alloc", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, size, zero);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::AllocateNative(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"AllocateNative", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, size, zero);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::RentManagedFromPool(::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>  memory, int32_t  size, bool  zero)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"RentManagedFromPool", {}, {::i2c::type_of<::by_ref<::K4os::Compression::LZ4::Internal::PinnedMemory>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, memory, size, zero);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::Free()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"Free", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::ReleaseManaged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ReleaseManaged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::ReleaseNative()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ReleaseNative", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void K4os::Compression::LZ4::Internal::PinnedMemory::ClearFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::PinnedMemory>(),
                        {"ClearFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_pointer", ty: "uint8_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_size", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::K4os::Compression::LZ4::Internal::PinnedMemory::PinnedMemory(uint8_t*  _pointer, ::System::Runtime::InteropServices::GCHandle  _handle, int32_t  _size) noexcept  {
this->_pointer = _pointer;
this->_handle = _handle;
this->_size = _size;
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Internal::PinnedMemory::PinnedMemory()   {
}

#pragma once
// IWYU pragma private; include "K4os/Compression/LZ4/Internal/Mem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "K4os/Compression/LZ4/Internal/zzzz__Mem_def.hpp"
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.get_System32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::K4os::Compression::LZ4::Internal::Mem::get_System32)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"get_System32", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.CpBlk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, void*, uint32_t)>(&::K4os::Compression::LZ4::Internal::Mem::CpBlk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"CpBlk", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.ZBlk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint8_t, uint32_t)>(&::K4os::Compression::LZ4::Internal::Mem::ZBlk)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cba988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"ZBlk", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Copy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Copy)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cba990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Move
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*, int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Move)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cbaa14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Move", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Alloc
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Alloc)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cbaa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Zero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*, int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Zero)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9cbaa88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Zero", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (*)(uint8_t*, uint8_t, int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Fill)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cbab30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Fill", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.AllocZero
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::K4os::Compression::LZ4::Internal::Mem::AllocZero)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9cbabac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"AllocZero", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Free
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::K4os::Compression::LZ4::Internal::Mem::Free)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9cbacc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Peek2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (*)(void*)>(&::K4os::Compression::LZ4::Internal::Mem::Peek2)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cbad20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Peek2", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Poke2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint16_t)>(&::K4os::Compression::LZ4::Internal::Mem::Poke2)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cbad74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Poke2", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Peek4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(void*)>(&::K4os::Compression::LZ4::Internal::Mem::Peek4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cbadd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Peek4", {}, {::i2c::type_of<void*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Poke4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, uint32_t)>(&::K4os::Compression::LZ4::Internal::Mem::Poke4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cbae28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Poke4", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Copy2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Internal::Mem::Copy2)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cbae88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy2", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Copy4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Internal::Mem::Copy4)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cbaeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy4", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::K4os::Compression::LZ4::Internal::Mem.Copy8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint8_t*, uint8_t*)>(&::K4os::Compression::LZ4::Internal::Mem::Copy8)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cbaf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
inline void K4os::Compression::LZ4::Internal::Mem::setStaticF_Empty(::ArrayW<uint8_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t>, "Empty", ::K4os::Compression::LZ4::Internal::Mem*>(std::forward<::ArrayW<uint8_t>>(value));
}
inline ::ArrayW<uint8_t> K4os::Compression::LZ4::Internal::Mem::getStaticF_Empty()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t>, "Empty", ::K4os::Compression::LZ4::Internal::Mem*>();
}
inline bool K4os::Compression::LZ4::Internal::Mem::get_System32()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"get_System32", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void K4os::Compression::LZ4::Internal::Mem::CpBlk(void*  target, void*  source, uint32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"CpBlk", {}, {::i2c::type_of<void*>(), ::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source, length);
}
inline void K4os::Compression::LZ4::Internal::Mem::ZBlk(void*  target, uint8_t  value, uint32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"ZBlk", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, value, length);
}
inline void K4os::Compression::LZ4::Internal::Mem::Copy(uint8_t*  target, uint8_t*  source, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source, length);
}
inline void K4os::Compression::LZ4::Internal::Mem::Move(uint8_t*  target, uint8_t*  source, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Move", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source, length);
}
inline void* K4os::Compression::LZ4::Internal::Mem::Alloc(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Alloc", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size);
}
inline uint8_t* K4os::Compression::LZ4::Internal::Mem::Zero(uint8_t*  target, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Zero", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, target, length);
}
inline uint8_t* K4os::Compression::LZ4::Internal::Mem::Fill(uint8_t*  target, uint8_t  value, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Fill", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint8_t*>(nullptr, ___internal_method, target, value, length);
}
inline void* K4os::Compression::LZ4::Internal::Mem::AllocZero(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"AllocZero", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size);
}
inline void K4os::Compression::LZ4::Internal::Mem::Free(void*  ptr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Free", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T* K4os::Compression::LZ4::Internal::Mem::CloneArray(::ArrayW<T>  array)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                    {"CloneArray", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, array);
}
inline uint16_t K4os::Compression::LZ4::Internal::Mem::Peek2(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Peek2", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint16_t>(nullptr, ___internal_method, p);
}
inline void K4os::Compression::LZ4::Internal::Mem::Poke2(void*  p, uint16_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Poke2", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, v);
}
inline uint32_t K4os::Compression::LZ4::Internal::Mem::Peek4(void*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Peek4", {}, {::i2c::type_of<void*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, p);
}
inline void K4os::Compression::LZ4::Internal::Mem::Poke4(void*  p, uint32_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Poke4", {}, {::i2c::type_of<void*>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, p, v);
}
inline void K4os::Compression::LZ4::Internal::Mem::Copy2(uint8_t*  target, uint8_t*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy2", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
inline void K4os::Compression::LZ4::Internal::Mem::Copy4(uint8_t*  target, uint8_t*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy4", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
inline void K4os::Compression::LZ4::Internal::Mem::Copy8(uint8_t*  target, uint8_t*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::K4os::Compression::LZ4::Internal::Mem*>(),
                        {"Copy8", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, target, source);
}
// Ctor Parameters []
constexpr ::K4os::Compression::LZ4::Internal::Mem::Mem()   {
}

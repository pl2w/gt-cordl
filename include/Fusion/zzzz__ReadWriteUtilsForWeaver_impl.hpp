#pragma once
// IWYU pragma private; include "Fusion/ReadWriteUtilsForWeaver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__ReadWriteUtilsForWeaver_def.hpp"
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.ReadBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t*)>(&::Fusion::ReadWriteUtilsForWeaver::ReadBoolean)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa1a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadBoolean", {}, {::i2c::type_of<int32_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.WriteBoolean
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t*, bool)>(&::Fusion::ReadWriteUtilsForWeaver::WriteBoolean)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa1a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteBoolean", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.GetByteArrayHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(uint8_t*, int32_t)>(&::Fusion::ReadWriteUtilsForWeaver::GetByteArrayHashCode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fa1a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetByteArrayHashCode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.WriteStringUtf8NoHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, ::StringW)>(&::Fusion::ReadWriteUtilsForWeaver::WriteStringUtf8NoHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa1aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf8NoHash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.ReadStringUtf8NoHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(void*, ::by_ref<::StringW>)>(&::Fusion::ReadWriteUtilsForWeaver::ReadStringUtf8NoHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa1ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf8NoHash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.GetByteCountUtf8NoHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW)>(&::Fusion::ReadWriteUtilsForWeaver::GetByteCountUtf8NoHash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa1abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetByteCountUtf8NoHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.GetStringHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Fusion::ReadWriteUtilsForWeaver::GetStringHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fa1ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetStringHashCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.WriteStringUtf32NoHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*, int32_t, ::StringW)>(&::Fusion::ReadWriteUtilsForWeaver::WriteStringUtf32NoHash)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fa1b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf32NoHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.ReadStringUtf32NoHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*, int32_t, ::by_ref<::StringW>)>(&::Fusion::ReadWriteUtilsForWeaver::ReadStringUtf32NoHash)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fa1ba4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf32NoHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.WriteStringUtf32WithHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*, int32_t, ::StringW, ::by_ref<::StringW>)>(&::Fusion::ReadWriteUtilsForWeaver::WriteStringUtf32WithHash)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5fa1c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf32WithHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.ReadStringUtf32WithHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t*, int32_t, ::by_ref<::StringW>)>(&::Fusion::ReadWriteUtilsForWeaver::ReadStringUtf32WithHash)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5fa1d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf32WithHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::ReadWriteUtilsForWeaver.GetWordCountString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, bool)>(&::Fusion::ReadWriteUtilsForWeaver::GetWordCountString)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fa1e98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetWordCountString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::ReadWriteUtilsForWeaver::ReadBoolean(int32_t*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadBoolean", {}, {::i2c::type_of<int32_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, data);
}
inline void Fusion::ReadWriteUtilsForWeaver::WriteBoolean(int32_t*  data, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteBoolean", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, value);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::GetByteArrayHashCode(uint8_t*  ptr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetByteArrayHashCode", {}, {::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, length);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::WriteStringUtf8NoHash(void*  destination, ::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf8NoHash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, destination, str);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::ReadStringUtf8NoHash(void*  source, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf8NoHash", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, source, result);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::GetByteCountUtf8NoHash(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetByteCountUtf8NoHash", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::GetStringHashCode(::StringW  value, int32_t  maxLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetStringHashCode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, maxLength);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::WriteStringUtf32NoHash(int32_t*  ptr, int32_t  maxLength, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf32NoHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, maxLength, value);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::ReadStringUtf32NoHash(int32_t*  ptr, int32_t  maxLength, ::by_ref<::StringW>  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf32NoHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, maxLength, result);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::WriteStringUtf32WithHash(int32_t*  ptr, int32_t  maxLength, ::StringW  value, ::by_ref<::StringW>  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"WriteStringUtf32WithHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, maxLength, value, cache);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::ReadStringUtf32WithHash(int32_t*  ptr, int32_t  maxLength, ::by_ref<::StringW>  cache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"ReadStringUtf32WithHash", {}, {::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, ptr, maxLength, cache);
}
inline int32_t Fusion::ReadWriteUtilsForWeaver::GetWordCountString(int32_t  capacity, bool  withCaching)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                        {"GetWordCountString", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, capacity, withCaching);
}
template<typename T>
inline int32_t Fusion::ReadWriteUtilsForWeaver::VerifyRawNetworkUnwrap(int32_t  actual, int32_t  maxBytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                    {"VerifyRawNetworkUnwrap", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, actual, maxBytes);
}
template<typename T>
inline int32_t Fusion::ReadWriteUtilsForWeaver::VerifyRawNetworkWrap(int32_t  actual, int32_t  maxBytes)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::ReadWriteUtilsForWeaver*>(),
                    {"VerifyRawNetworkWrap", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, actual, maxBytes);
}
// Ctor Parameters []
constexpr ::Fusion::ReadWriteUtilsForWeaver::ReadWriteUtilsForWeaver()   {
}

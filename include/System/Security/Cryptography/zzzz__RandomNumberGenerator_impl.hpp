#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RandomNumberGenerator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)()>(&::System::Security::Cryptography::RandomNumberGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa16b0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)()>(&::System::Security::Cryptography::RandomNumberGenerator::Create)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa16b0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Cryptography::RandomNumberGenerator* (*)(::StringW)>(&::System::Security::Cryptography::RandomNumberGenerator::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa16b114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)()>(&::System::Security::Cryptography::RandomNumberGenerator::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa16b1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(bool)>(&::System::Security::Cryptography::RandomNumberGenerator::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa16b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::GetBytes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::RandomNumberGenerator::GetBytes)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa16b228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetNonZeroBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(::ArrayW<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::GetNonZeroBytes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa16b408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.Fill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::Fill)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa16b440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Fill", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.FillSpan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Span_1<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::FillSpan)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa16b444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"FillSpan", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(::System::Span_1<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::GetBytes)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa16b4bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetNonZeroBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::RandomNumberGenerator::*)(::System::Span_1<uint8_t>)>(&::System::Security::Cryptography::RandomNumberGenerator::GetNonZeroBytes)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa16b6cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                    {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::System::Security::Cryptography::RandomNumberGenerator::GetInt32)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0xa16b8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"GetInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::RandomNumberGenerator.GetInt32
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::System::Security::Cryptography::RandomNumberGenerator::GetInt32)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa16ba24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"GetInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Security::Cryptography::RandomNumberGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Security::Cryptography::RandomNumberGenerator::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(nullptr, ___internal_method);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Security::Cryptography::RandomNumberGenerator::Create(::StringW  rngName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Create", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::RandomNumberGenerator*>(nullptr, ___internal_method, rngName);
}
inline void System::Security::Cryptography::RandomNumberGenerator::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::RandomNumberGenerator::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::RandomNumberGenerator::GetBytes(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RandomNumberGenerator::GetBytes(::ArrayW<uint8_t>  data, int32_t  offset, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, offset, count);
}
inline void System::Security::Cryptography::RandomNumberGenerator::GetNonZeroBytes(::ArrayW<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RandomNumberGenerator::Fill(::System::Span_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"Fill", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void System::Security::Cryptography::RandomNumberGenerator::FillSpan(::System::Span_1<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"FillSpan", {}, {::i2c::type_of<::System::Span_1<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void System::Security::Cryptography::RandomNumberGenerator::GetBytes(::System::Span_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void System::Security::Cryptography::RandomNumberGenerator::GetNonZeroBytes(::System::Span_1<uint8_t>  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline int32_t System::Security::Cryptography::RandomNumberGenerator::GetInt32(int32_t  fromInclusive, int32_t  toExclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"GetInt32", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, fromInclusive, toExclusive);
}
inline int32_t System::Security::Cryptography::RandomNumberGenerator::GetInt32(int32_t  toExclusive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::RandomNumberGenerator*>(),
                        {"GetInt32", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, toExclusive);
}
inline ::System::Security::Cryptography::RandomNumberGenerator* System::Security::Cryptography::RandomNumberGenerator::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::RandomNumberGenerator*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::RandomNumberGenerator::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::RandomNumberGenerator::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::RandomNumberGenerator::RandomNumberGenerator()   {
}

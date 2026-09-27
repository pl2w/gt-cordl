#pragma once
// IWYU pragma private; include "System/Security/Cryptography/ToBase64Transform.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__ToBase64Transform_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.get_InputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.get_OutputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162a14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.get_CanTransformMultipleBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162a1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.get_CanReuseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::get_CanReuseTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.TransformBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::ToBase64Transform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::ToBase64Transform::TransformBlock)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xa162a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.TransformFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::ToBase64Transform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::ToBase64Transform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa162c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa162ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::Clear)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa162ea4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ToBase64Transform::*)(bool)>(&::System::Security::Cryptography::ToBase64Transform::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa162f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa162f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::ToBase64Transform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::ToBase64Transform::*)()>(&::System::Security::Cryptography::ToBase64Transform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162fa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline int32_t System::Security::Cryptography::ToBase64Transform::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::ToBase64Transform::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::ToBase64Transform::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::ToBase64Transform::get_CanReuseTransform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::ToBase64Transform::TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::ToBase64Transform::TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::ToBase64Transform::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::ToBase64Transform::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::ToBase64Transform::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::ToBase64Transform::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::ToBase64Transform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::ToBase64Transform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::ToBase64Transform* System::Security::Cryptography::ToBase64Transform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::ToBase64Transform*>());
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr  System::Security::Cryptography::ToBase64Transform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::ToBase64Transform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::ToBase64Transform::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::ToBase64Transform::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::ToBase64Transform::ToBase64Transform()   {
}

#pragma once
// IWYU pragma private; include "System/Security/Cryptography/FromBase64Transform.hpp"
#include "System/Security/Cryptography/zzzz__FromBase64TransformMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Cryptography/zzzz__FromBase64Transform_def.hpp"
#include "System/Security/Cryptography/zzzz__FromBase64TransformMode_def.hpp"
#include "System/Security/Cryptography/zzzz__ICryptoTransform_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa162fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)(::System::Security::Cryptography::FromBase64TransformMode)>(&::System::Security::Cryptography::FromBase64Transform::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa162fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::FromBase64TransformMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.get_InputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::get_InputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa16302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.get_OutputBlockSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::get_OutputBlockSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.get_CanTransformMultipleBlocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::get_CanTransformMultipleBlocks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa16303c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.get_CanReuseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::get_CanReuseTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa163044;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.TransformBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int32_t, int32_t, ::ArrayW<uint8_t>, int32_t)>(&::System::Security::Cryptography::FromBase64Transform::TransformBlock)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0xa16304c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.TransformFinalBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::FromBase64Transform::TransformFinalBlock)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xa163568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.DiscardWhiteSpaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::System::Security::Cryptography::FromBase64Transform::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::System::Security::Cryptography::FromBase64Transform::DiscardWhiteSpaces)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa1633b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::Dispose)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa1638b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1638ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::Clear)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa163920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)(bool)>(&::System::Security::Cryptography::FromBase64Transform::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa163924;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Cryptography::FromBase64Transform.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Cryptography::FromBase64Transform::*)()>(&::System::Security::Cryptography::FromBase64Transform::Finalize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa163970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                    {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 1}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__inputBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr ::ArrayW<uint8_t> const& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__inputBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputBuffer;
}
constexpr void System::Security::Cryptography::FromBase64Transform::__cordl_internal_set__inputBuffer(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputBuffer = value;
}
constexpr int32_t& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__inputIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputIndex;
}
constexpr int32_t const& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__inputIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____inputIndex;
}
constexpr void System::Security::Cryptography::FromBase64Transform::__cordl_internal_set__inputIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____inputIndex = value;
}
constexpr ::System::Security::Cryptography::FromBase64TransformMode& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__whitespaces()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whitespaces;
}
constexpr ::System::Security::Cryptography::FromBase64TransformMode const& System::Security::Cryptography::FromBase64Transform::__cordl_internal_get__whitespaces() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whitespaces;
}
constexpr void System::Security::Cryptography::FromBase64Transform::__cordl_internal_set__whitespaces(::System::Security::Cryptography::FromBase64TransformMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whitespaces = value;
}
inline void System::Security::Cryptography::FromBase64Transform::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::FromBase64Transform::_ctor(::System::Security::Cryptography::FromBase64TransformMode  whitespaces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Security::Cryptography::FromBase64TransformMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, whitespaces);
}
inline int32_t System::Security::Cryptography::FromBase64Transform::get_InputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_InputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::FromBase64Transform::get_OutputBlockSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_OutputBlockSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Security::Cryptography::FromBase64Transform::get_CanTransformMultipleBlocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"get_CanTransformMultipleBlocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Security::Cryptography::FromBase64Transform::get_CanReuseTransform()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t System::Security::Cryptography::FromBase64Transform::TransformBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount, ::ArrayW<uint8_t>  outputBuffer, int32_t  outputOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"TransformBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::FromBase64Transform::TransformFinalBlock(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"TransformFinalBlock", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline ::ArrayW<uint8_t> System::Security::Cryptography::FromBase64Transform::DiscardWhiteSpaces(::ArrayW<uint8_t>  inputBuffer, int32_t  inputOffset, int32_t  inputCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"DiscardWhiteSpaces", {}, {::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method, inputBuffer, inputOffset, inputCount);
}
inline void System::Security::Cryptography::FromBase64Transform::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::FromBase64Transform::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::FromBase64Transform::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Security::Cryptography::FromBase64Transform::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void System::Security::Cryptography::FromBase64Transform::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Security::Cryptography::FromBase64Transform*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Cryptography::FromBase64Transform* System::Security::Cryptography::FromBase64Transform::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::FromBase64Transform*>());
}
inline ::System::Security::Cryptography::FromBase64Transform* System::Security::Cryptography::FromBase64Transform::New_ctor(::System::Security::Cryptography::FromBase64TransformMode  whitespaces)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Cryptography::FromBase64Transform*>(whitespaces));
}
/// @brief Convert operator to "::System::Security::Cryptography::ICryptoTransform"
constexpr  System::Security::Cryptography::FromBase64Transform::operator ::System::Security::Cryptography::ICryptoTransform*() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Cryptography::ICryptoTransform"
constexpr ::System::Security::Cryptography::ICryptoTransform* System::Security::Cryptography::FromBase64Transform::i___System__Security__Cryptography__ICryptoTransform() noexcept {
return static_cast<::System::Security::Cryptography::ICryptoTransform*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  System::Security::Cryptography::FromBase64Transform::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Cryptography::FromBase64Transform::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Cryptography::FromBase64Transform::FromBase64Transform()   {
}

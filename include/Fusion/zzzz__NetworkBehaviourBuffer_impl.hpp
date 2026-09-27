#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourBuffer.hpp"
#include "Fusion/zzzz__NetworkBehaviour_impl.hpp"
#include "Fusion/zzzz__Tick_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviourBuffer_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_BehaviourReader_1_def.hpp"
#include "Fusion/zzzz__NetworkBehaviour_PropertyReader_1_def.hpp"
#include "Fusion/zzzz__Tick_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.get_Tick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Tick (::Fusion::NetworkBehaviourBuffer::*)()>(&::Fusion::NetworkBehaviourBuffer::get_Tick)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f82764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Tick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.get_Length
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviourBuffer::*)()>(&::Fusion::NetworkBehaviourBuffer::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f8276c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Length", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.get_Valid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviourBuffer::*)()>(&::Fusion::NetworkBehaviourBuffer::get_Valid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f804ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Valid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviourBuffer::*)(int32_t)>(&::Fusion::NetworkBehaviourBuffer::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5f82774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkBehaviourBuffer::*)(::Fusion::Tick, int32_t*, int32_t)>(&::Fusion::NetworkBehaviourBuffer::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f7f1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::NetworkBehaviourBuffer::*)(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>)>(&::Fusion::NetworkBehaviourBuffer::Read)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f827ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Fusion::NetworkBehaviourBuffer::*)(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>)>(&::Fusion::NetworkBehaviourBuffer::Read)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5f82834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Fusion::NetworkBehaviourBuffer::*)(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>)>(&::Fusion::NetworkBehaviourBuffer::Read)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f828c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Fusion::NetworkBehaviourBuffer::*)(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>)>(&::Fusion::NetworkBehaviourBuffer::Read)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f82950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Fusion::NetworkBehaviourBuffer::*)(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>)>(&::Fusion::NetworkBehaviourBuffer::Read)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5f829e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourBuffer.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkBehaviourBuffer)>(&::Fusion::NetworkBehaviourBuffer::op_Implicit_bool)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f82a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::Tick Fusion::NetworkBehaviourBuffer::get_Tick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Tick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Tick>(*this, ___internal_method);
}
inline int32_t Fusion::NetworkBehaviourBuffer::get_Length()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Length", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::NetworkBehaviourBuffer::get_Valid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Valid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Fusion::NetworkBehaviourBuffer::ReinterpretState(int32_t  offset)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                    {"ReinterpretState", {::i2c::class_of<T>()}, {::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, offset);
}
inline int32_t Fusion::NetworkBehaviourBuffer::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, index);
}
inline void Fusion::NetworkBehaviourBuffer::_ctor(::Fusion::Tick  tick, int32_t*  ptr, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::Tick>(), ::i2c::type_of<int32_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tick, ptr, length);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::NetworkBehaviour*>)
inline T Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_BehaviourReader_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, reader);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline T Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>  reader)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                    {"Read", {::i2c::class_of<T>()}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method, reader);
}
inline float_t Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Vector2 Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Vector3 Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Vector4 Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(*this, ___internal_method, reader);
}
inline ::UnityEngine::Quaternion Fusion::NetworkBehaviourBuffer::Read(::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"Read", {}, {::i2c::type_of<::GlobalNamespace::NetworkBehaviour_PropertyReader_1<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(*this, ___internal_method, reader);
}
inline bool Fusion::NetworkBehaviourBuffer::op_Implicit_bool(::Fusion::NetworkBehaviourBuffer  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourBuffer>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkBehaviourBuffer>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters [CppParam { name: "_ptr", ty: "int32_t*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_tick", ty: "::Fusion::Tick", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkBehaviourBuffer::NetworkBehaviourBuffer(int32_t*  _ptr, int32_t  _length, ::Fusion::Tick  _tick) noexcept  {
this->_ptr = _ptr;
this->_length = _length;
this->_tick = _tick;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviourBuffer::NetworkBehaviourBuffer()   {
}

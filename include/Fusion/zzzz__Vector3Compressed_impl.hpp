#pragma once
// IWYU pragma private; include "Fusion/Vector3Compressed.hpp"
#include "Fusion/zzzz__Vector3Compressed_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::Vector3Compressed.get_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Vector3Compressed::*)()>(&::Fusion::Vector3Compressed::get_X)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9ca7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_X", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.set_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Vector3Compressed::*)(float_t)>(&::Fusion::Vector3Compressed::set_X)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9cadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.get_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Vector3Compressed::*)()>(&::Fusion::Vector3Compressed::get_Y)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9cb80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_Y", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.set_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Vector3Compressed::*)(float_t)>(&::Fusion::Vector3Compressed::set_Y)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9cbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.get_Z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Vector3Compressed::*)()>(&::Fusion::Vector3Compressed::get_Z)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9cc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_Z", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.set_Z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Vector3Compressed::*)(float_t)>(&::Fusion::Vector3Compressed::set_Z)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9cce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_Z", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Implicit___Fusion__Vector3Compressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Vector3Compressed (*)(::UnityEngine::Vector3)>(&::Fusion::Vector3Compressed::op_Implicit___Fusion__Vector3Compressed)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5f9cd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Implicit___UnityEngine__Vector3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::Fusion::Vector3Compressed)>(&::Fusion::Vector3Compressed::op_Implicit___UnityEngine__Vector3)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5f9ceec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Implicit___Fusion__Vector3Compressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Vector3Compressed (*)(::UnityEngine::Vector2)>(&::Fusion::Vector3Compressed::op_Implicit___Fusion__Vector3Compressed)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5f9cfd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Fusion::Vector3Compressed)>(&::Fusion::Vector3Compressed::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f9d0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Vector3Compressed::*)(::Fusion::Vector3Compressed)>(&::Fusion::Vector3Compressed::Equals)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f9d16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Vector3Compressed::*)(::System::Object*)>(&::Fusion::Vector3Compressed::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f9d1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Vector3Compressed>(),
                    {::i2c::class_of<::Fusion::Vector3Compressed>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Vector3Compressed::*)()>(&::Fusion::Vector3Compressed::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5f9d238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Vector3Compressed>(),
                    {::i2c::class_of<::Fusion::Vector3Compressed>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Vector3Compressed, ::Fusion::Vector3Compressed)>(&::Fusion::Vector3Compressed::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9d258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Vector3Compressed>(), ::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector3Compressed.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Vector3Compressed, ::Fusion::Vector3Compressed)>(&::Fusion::Vector3Compressed::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9d268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Vector3Compressed>(), ::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Vector3Compressed::__cordl_internal_get_xEncoded()  {
return this->___xEncoded;
}
constexpr int32_t const& Fusion::Vector3Compressed::__cordl_internal_get_xEncoded() const {
return this->___xEncoded;
}
constexpr void Fusion::Vector3Compressed::__cordl_internal_set_xEncoded(int32_t  value)  {
this->___xEncoded = value;
}
constexpr int32_t& Fusion::Vector3Compressed::__cordl_internal_get_yEncoded()  {
return this->___yEncoded;
}
constexpr int32_t const& Fusion::Vector3Compressed::__cordl_internal_get_yEncoded() const {
return this->___yEncoded;
}
constexpr void Fusion::Vector3Compressed::__cordl_internal_set_yEncoded(int32_t  value)  {
this->___yEncoded = value;
}
constexpr int32_t& Fusion::Vector3Compressed::__cordl_internal_get_zEncoded()  {
return this->___zEncoded;
}
constexpr int32_t const& Fusion::Vector3Compressed::__cordl_internal_get_zEncoded() const {
return this->___zEncoded;
}
constexpr void Fusion::Vector3Compressed::__cordl_internal_set_zEncoded(int32_t  value)  {
this->___zEncoded = value;
}
inline float_t Fusion::Vector3Compressed::get_X()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_X", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::Vector3Compressed::set_X(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::Vector3Compressed::get_Y()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_Y", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::Vector3Compressed::set_Y(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::Vector3Compressed::get_Z()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"get_Z", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::Vector3Compressed::set_Z(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"set_Z", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::Vector3Compressed Fusion::Vector3Compressed::op_Implicit___Fusion__Vector3Compressed(::UnityEngine::Vector3  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Vector3Compressed>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector3 Fusion::Vector3Compressed::op_Implicit___UnityEngine__Vector3(::Fusion::Vector3Compressed  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, q);
}
inline ::Fusion::Vector3Compressed Fusion::Vector3Compressed::op_Implicit___Fusion__Vector3Compressed(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Vector3Compressed>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 Fusion::Vector3Compressed::op_Implicit___UnityEngine__Vector2(::Fusion::Vector3Compressed  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, q);
}
inline bool Fusion::Vector3Compressed::Equals(::Fusion::Vector3Compressed  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Vector3Compressed::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Vector3Compressed>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Vector3Compressed::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Vector3Compressed>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::Vector3Compressed::op_Equality(::Fusion::Vector3Compressed  left, ::Fusion::Vector3Compressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Vector3Compressed>(), ::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::Vector3Compressed::op_Inequality(::Fusion::Vector3Compressed  left, ::Fusion::Vector3Compressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector3Compressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Vector3Compressed>(), ::i2c::type_of<::Fusion::Vector3Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::Vector3Compressed::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::Vector3Compressed::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Vector3Compressed>"
constexpr  Fusion::Vector3Compressed::operator ::System::IEquatable_1<::Fusion::Vector3Compressed>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Vector3Compressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Vector3Compressed>"
constexpr ::System::IEquatable_1<::Fusion::Vector3Compressed>* Fusion::Vector3Compressed::i___System__IEquatable_1___Fusion__Vector3Compressed_()  {
return static_cast<::System::IEquatable_1<::Fusion::Vector3Compressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Vector3Compressed::Vector3Compressed(int32_t  xEncoded, int32_t  yEncoded, int32_t  zEncoded) noexcept  {
this->xEncoded = xEncoded;
this->yEncoded = yEncoded;
this->zEncoded = zEncoded;
}
// Ctor Parameters []
constexpr ::Fusion::Vector3Compressed::Vector3Compressed()   {
}

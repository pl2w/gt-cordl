#pragma once
// IWYU pragma private; include "Fusion/Vector2Compressed.hpp"
#include "Fusion/zzzz__Vector2Compressed_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Fusion::Vector2Compressed.get_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Vector2Compressed::*)()>(&::Fusion::Vector2Compressed::get_X)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9c604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"get_X", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.set_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Vector2Compressed::*)(float_t)>(&::Fusion::Vector2Compressed::set_X)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9c664;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.get_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Vector2Compressed::*)()>(&::Fusion::Vector2Compressed::get_Y)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"get_Y", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.set_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Vector2Compressed::*)(float_t)>(&::Fusion::Vector2Compressed::set_Y)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9c768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.op_Implicit___Fusion__Vector2Compressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Vector2Compressed (*)(::UnityEngine::Vector2)>(&::Fusion::Vector2Compressed::op_Implicit___Fusion__Vector2Compressed)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5f9c80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.op_Implicit___UnityEngine__Vector2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::Fusion::Vector2Compressed)>(&::Fusion::Vector2Compressed::op_Implicit___UnityEngine__Vector2)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f9c900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Vector2Compressed::*)(::Fusion::Vector2Compressed)>(&::Fusion::Vector2Compressed::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Vector2Compressed::*)(::System::Object*)>(&::Fusion::Vector2Compressed::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f9c9c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Vector2Compressed>(),
                    {::i2c::class_of<::Fusion::Vector2Compressed>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Vector2Compressed::*)()>(&::Fusion::Vector2Compressed::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f9ca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Vector2Compressed>(),
                    {::i2c::class_of<::Fusion::Vector2Compressed>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Vector2Compressed, ::Fusion::Vector2Compressed)>(&::Fusion::Vector2Compressed::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9ca64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Vector2Compressed>(), ::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Vector2Compressed.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Vector2Compressed, ::Fusion::Vector2Compressed)>(&::Fusion::Vector2Compressed::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9ca70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Vector2Compressed>(), ::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Vector2Compressed::__cordl_internal_get_xEncoded()  {
return this->___xEncoded;
}
constexpr int32_t const& Fusion::Vector2Compressed::__cordl_internal_get_xEncoded() const {
return this->___xEncoded;
}
constexpr void Fusion::Vector2Compressed::__cordl_internal_set_xEncoded(int32_t  value)  {
this->___xEncoded = value;
}
constexpr int32_t& Fusion::Vector2Compressed::__cordl_internal_get_yEncoded()  {
return this->___yEncoded;
}
constexpr int32_t const& Fusion::Vector2Compressed::__cordl_internal_get_yEncoded() const {
return this->___yEncoded;
}
constexpr void Fusion::Vector2Compressed::__cordl_internal_set_yEncoded(int32_t  value)  {
this->___yEncoded = value;
}
inline float_t Fusion::Vector2Compressed::get_X()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"get_X", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::Vector2Compressed::set_X(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::Vector2Compressed::get_Y()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"get_Y", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::Vector2Compressed::set_Y(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::Vector2Compressed Fusion::Vector2Compressed::op_Implicit___Fusion__Vector2Compressed(::UnityEngine::Vector2  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Vector2Compressed>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Vector2 Fusion::Vector2Compressed::op_Implicit___UnityEngine__Vector2(::Fusion::Vector2Compressed  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, q);
}
inline bool Fusion::Vector2Compressed::Equals(::Fusion::Vector2Compressed  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Vector2Compressed::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Vector2Compressed>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Vector2Compressed::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Vector2Compressed>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::Vector2Compressed::op_Equality(::Fusion::Vector2Compressed  left, ::Fusion::Vector2Compressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Vector2Compressed>(), ::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::Vector2Compressed::op_Inequality(::Fusion::Vector2Compressed  left, ::Fusion::Vector2Compressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Vector2Compressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::Vector2Compressed>(), ::i2c::type_of<::Fusion::Vector2Compressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::Vector2Compressed::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::Vector2Compressed::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Vector2Compressed>"
constexpr  Fusion::Vector2Compressed::operator ::System::IEquatable_1<::Fusion::Vector2Compressed>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Vector2Compressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Vector2Compressed>"
constexpr ::System::IEquatable_1<::Fusion::Vector2Compressed>* Fusion::Vector2Compressed::i___System__IEquatable_1___Fusion__Vector2Compressed_()  {
return static_cast<::System::IEquatable_1<::Fusion::Vector2Compressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Vector2Compressed::Vector2Compressed(int32_t  xEncoded, int32_t  yEncoded) noexcept  {
this->xEncoded = xEncoded;
this->yEncoded = yEncoded;
}
// Ctor Parameters []
constexpr ::Fusion::Vector2Compressed::Vector2Compressed()   {
}

#pragma once
// IWYU pragma private; include "Fusion/QuaternionCompressed.hpp"
#include "Fusion/zzzz__QuaternionCompressed_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
//  Writing Method size for method: ::Fusion::QuaternionCompressed.get_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::QuaternionCompressed::*)()>(&::Fusion::QuaternionCompressed::get_X)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9da88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_X", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.set_X
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::QuaternionCompressed::*)(float_t)>(&::Fusion::QuaternionCompressed::set_X)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9dae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.get_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::QuaternionCompressed::*)()>(&::Fusion::QuaternionCompressed::get_Y)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9db8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_Y", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.set_Y
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::QuaternionCompressed::*)(float_t)>(&::Fusion::QuaternionCompressed::set_Y)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9dbec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.get_Z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::QuaternionCompressed::*)()>(&::Fusion::QuaternionCompressed::get_Z)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9dc90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_Z", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.set_Z
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::QuaternionCompressed::*)(float_t)>(&::Fusion::QuaternionCompressed::set_Z)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9dcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_Z", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.get_W
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::QuaternionCompressed::*)()>(&::Fusion::QuaternionCompressed::get_W)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9dd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_W", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.set_W
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::QuaternionCompressed::*)(float_t)>(&::Fusion::QuaternionCompressed::set_W)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5f9ddf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_W", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.op_Implicit___Fusion__QuaternionCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::QuaternionCompressed (*)(::UnityEngine::Quaternion)>(&::Fusion::QuaternionCompressed::op_Implicit___Fusion__QuaternionCompressed)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5f9de98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.op_Implicit___UnityEngine__Quaternion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (*)(::Fusion::QuaternionCompressed)>(&::Fusion::QuaternionCompressed::op_Implicit___UnityEngine__Quaternion)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5f9e00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::QuaternionCompressed::*)(::Fusion::QuaternionCompressed)>(&::Fusion::QuaternionCompressed::Equals)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5f9e134;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::QuaternionCompressed::*)(::System::Object*)>(&::Fusion::QuaternionCompressed::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f9e178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                    {::i2c::class_of<::Fusion::QuaternionCompressed>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::QuaternionCompressed::*)()>(&::Fusion::QuaternionCompressed::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9e220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                    {::i2c::class_of<::Fusion::QuaternionCompressed>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::QuaternionCompressed, ::Fusion::QuaternionCompressed)>(&::Fusion::QuaternionCompressed::op_Equality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9e248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>(), ::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::QuaternionCompressed.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::QuaternionCompressed, ::Fusion::QuaternionCompressed)>(&::Fusion::QuaternionCompressed::op_Inequality)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5f9e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>(), ::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::QuaternionCompressed::__cordl_internal_get_xEncoded()  {
return this->___xEncoded;
}
constexpr int32_t const& Fusion::QuaternionCompressed::__cordl_internal_get_xEncoded() const {
return this->___xEncoded;
}
constexpr void Fusion::QuaternionCompressed::__cordl_internal_set_xEncoded(int32_t  value)  {
this->___xEncoded = value;
}
constexpr int32_t& Fusion::QuaternionCompressed::__cordl_internal_get_yEncoded()  {
return this->___yEncoded;
}
constexpr int32_t const& Fusion::QuaternionCompressed::__cordl_internal_get_yEncoded() const {
return this->___yEncoded;
}
constexpr void Fusion::QuaternionCompressed::__cordl_internal_set_yEncoded(int32_t  value)  {
this->___yEncoded = value;
}
constexpr int32_t& Fusion::QuaternionCompressed::__cordl_internal_get_zEncoded()  {
return this->___zEncoded;
}
constexpr int32_t const& Fusion::QuaternionCompressed::__cordl_internal_get_zEncoded() const {
return this->___zEncoded;
}
constexpr void Fusion::QuaternionCompressed::__cordl_internal_set_zEncoded(int32_t  value)  {
this->___zEncoded = value;
}
constexpr int32_t& Fusion::QuaternionCompressed::__cordl_internal_get_wEncoded()  {
return this->___wEncoded;
}
constexpr int32_t const& Fusion::QuaternionCompressed::__cordl_internal_get_wEncoded() const {
return this->___wEncoded;
}
constexpr void Fusion::QuaternionCompressed::__cordl_internal_set_wEncoded(int32_t  value)  {
this->___wEncoded = value;
}
inline float_t Fusion::QuaternionCompressed::get_X()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_X", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::QuaternionCompressed::set_X(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_X", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::QuaternionCompressed::get_Y()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_Y", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::QuaternionCompressed::set_Y(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_Y", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::QuaternionCompressed::get_Z()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_Z", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::QuaternionCompressed::set_Z(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_Z", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t Fusion::QuaternionCompressed::get_W()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"get_W", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void Fusion::QuaternionCompressed::set_W(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"set_W", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::Fusion::QuaternionCompressed Fusion::QuaternionCompressed::op_Implicit___Fusion__QuaternionCompressed(::UnityEngine::Quaternion  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::QuaternionCompressed>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Quaternion Fusion::QuaternionCompressed::op_Implicit___UnityEngine__Quaternion(::Fusion::QuaternionCompressed  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(nullptr, ___internal_method, q);
}
inline bool Fusion::QuaternionCompressed::Equals(::Fusion::QuaternionCompressed  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::QuaternionCompressed::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::QuaternionCompressed>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::QuaternionCompressed::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::QuaternionCompressed>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::QuaternionCompressed::op_Equality(::Fusion::QuaternionCompressed  left, ::Fusion::QuaternionCompressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>(), ::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::QuaternionCompressed::op_Inequality(::Fusion::QuaternionCompressed  left, ::Fusion::QuaternionCompressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::QuaternionCompressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::QuaternionCompressed>(), ::i2c::type_of<::Fusion::QuaternionCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::QuaternionCompressed::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::QuaternionCompressed::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::QuaternionCompressed>"
constexpr  Fusion::QuaternionCompressed::operator ::System::IEquatable_1<::Fusion::QuaternionCompressed>*()  {
return static_cast<::System::IEquatable_1<::Fusion::QuaternionCompressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::QuaternionCompressed>"
constexpr ::System::IEquatable_1<::Fusion::QuaternionCompressed>* Fusion::QuaternionCompressed::i___System__IEquatable_1___Fusion__QuaternionCompressed_()  {
return static_cast<::System::IEquatable_1<::Fusion::QuaternionCompressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "xEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "yEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "wEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::QuaternionCompressed::QuaternionCompressed(int32_t  xEncoded, int32_t  yEncoded, int32_t  zEncoded, int32_t  wEncoded) noexcept  {
this->xEncoded = xEncoded;
this->yEncoded = yEncoded;
this->zEncoded = zEncoded;
this->wEncoded = wEncoded;
}
// Ctor Parameters []
constexpr ::Fusion::QuaternionCompressed::QuaternionCompressed()   {
}

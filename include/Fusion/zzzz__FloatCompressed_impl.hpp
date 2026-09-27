#pragma once
// IWYU pragma private; include "Fusion/FloatCompressed.hpp"
#include "Fusion/zzzz__FloatCompressed_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::FloatCompressed.op_Implicit___Fusion__FloatCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::FloatCompressed (*)(float_t)>(&::Fusion::FloatCompressed::op_Implicit___Fusion__FloatCompressed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5f9c468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.op_Implicit_float_t
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::Fusion::FloatCompressed)>(&::Fusion::FloatCompressed::op_Implicit_float_t)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5f9c4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FloatCompressed::*)(::Fusion::FloatCompressed)>(&::Fusion::FloatCompressed::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f9c55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::FloatCompressed::*)(::System::Object*)>(&::Fusion::FloatCompressed::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f9c56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FloatCompressed>(),
                    {::i2c::class_of<::Fusion::FloatCompressed>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::FloatCompressed::*)()>(&::Fusion::FloatCompressed::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f9c5e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::FloatCompressed>(),
                    {::i2c::class_of<::Fusion::FloatCompressed>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::FloatCompressed, ::Fusion::FloatCompressed)>(&::Fusion::FloatCompressed::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9c5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::FloatCompressed>(), ::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::FloatCompressed.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::FloatCompressed, ::Fusion::FloatCompressed)>(&::Fusion::FloatCompressed::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f9c5f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::FloatCompressed>(), ::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::FloatCompressed::__cordl_internal_get_valueEncoded()  {
return this->___valueEncoded;
}
constexpr int32_t const& Fusion::FloatCompressed::__cordl_internal_get_valueEncoded() const {
return this->___valueEncoded;
}
constexpr void Fusion::FloatCompressed::__cordl_internal_set_valueEncoded(int32_t  value)  {
this->___valueEncoded = value;
}
inline ::Fusion::FloatCompressed Fusion::FloatCompressed::op_Implicit___Fusion__FloatCompressed(float_t  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::FloatCompressed>(nullptr, ___internal_method, v);
}
inline float_t Fusion::FloatCompressed::op_Implicit_float_t(::Fusion::FloatCompressed  q)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, q);
}
inline bool Fusion::FloatCompressed::Equals(::Fusion::FloatCompressed  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::FloatCompressed::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FloatCompressed>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::FloatCompressed::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::FloatCompressed>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::FloatCompressed::op_Equality(::Fusion::FloatCompressed  left, ::Fusion::FloatCompressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::FloatCompressed>(), ::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::FloatCompressed::op_Inequality(::Fusion::FloatCompressed  left, ::Fusion::FloatCompressed  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FloatCompressed>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::FloatCompressed>(), ::i2c::type_of<::Fusion::FloatCompressed>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::FloatCompressed::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::FloatCompressed::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::FloatCompressed>"
constexpr  Fusion::FloatCompressed::operator ::System::IEquatable_1<::Fusion::FloatCompressed>*()  {
return static_cast<::System::IEquatable_1<::Fusion::FloatCompressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::FloatCompressed>"
constexpr ::System::IEquatable_1<::Fusion::FloatCompressed>* Fusion::FloatCompressed::i___System__IEquatable_1___Fusion__FloatCompressed_()  {
return static_cast<::System::IEquatable_1<::Fusion::FloatCompressed>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "valueEncoded", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::FloatCompressed::FloatCompressed(int32_t  valueEncoded) noexcept  {
this->valueEncoded = valueEncoded;
}
// Ctor Parameters []
constexpr ::Fusion::FloatCompressed::FloatCompressed()   {
}

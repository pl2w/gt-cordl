#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourId.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkBehaviourId_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviourId::*)()>(&::Fusion::NetworkBehaviourId::get_IsValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f80694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.get_None
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkBehaviourId (*)()>(&::Fusion::NetworkBehaviourId::get_None)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f83244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"get_None", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviourId::*)(::Fusion::NetworkBehaviourId)>(&::Fusion::NetworkBehaviourId::Equals)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f8324c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkBehaviourId::*)(::System::Object*)>(&::Fusion::NetworkBehaviourId::Equals)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f832cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkBehaviourId::*)()>(&::Fusion::NetworkBehaviourId::GetHashCode)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5f80810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkBehaviourId::*)()>(&::Fusion::NetworkBehaviourId::ToString)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f8338c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                    {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkBehaviourId, ::Fusion::NetworkBehaviourId)>(&::Fusion::NetworkBehaviourId::op_Equality)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f83434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkBehaviourId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkBehaviourId, ::Fusion::NetworkBehaviourId)>(&::Fusion::NetworkBehaviourId::op_Inequality)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5f83490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkId& Fusion::NetworkBehaviourId::__cordl_internal_get_Object()  {
return this->___Object;
}
constexpr ::Fusion::NetworkId const& Fusion::NetworkBehaviourId::__cordl_internal_get_Object() const {
return this->___Object;
}
constexpr void Fusion::NetworkBehaviourId::__cordl_internal_set_Object(::Fusion::NetworkId  value)  {
this->___Object = value;
}
constexpr int32_t& Fusion::NetworkBehaviourId::__cordl_internal_get_Behaviour()  {
return this->___Behaviour;
}
constexpr int32_t const& Fusion::NetworkBehaviourId::__cordl_internal_get_Behaviour() const {
return this->___Behaviour;
}
constexpr void Fusion::NetworkBehaviourId::__cordl_internal_set_Behaviour(int32_t  value)  {
this->___Behaviour = value;
}
inline bool Fusion::NetworkBehaviourId::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::NetworkBehaviourId Fusion::NetworkBehaviourId::get_None()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"get_None", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkBehaviourId>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkBehaviourId::Equals(::Fusion::NetworkBehaviourId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkBehaviourId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkBehaviourId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkBehaviourId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkBehaviourId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkBehaviourId::op_Equality(::Fusion::NetworkBehaviourId  a, ::Fusion::NetworkBehaviourId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkBehaviourId::op_Inequality(::Fusion::NetworkBehaviourId  a, ::Fusion::NetworkBehaviourId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkBehaviourId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkBehaviourId>(), ::i2c::type_of<::Fusion::NetworkBehaviourId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkBehaviourId::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkBehaviourId::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkBehaviourId>"
constexpr  Fusion::NetworkBehaviourId::operator ::System::IEquatable_1<::Fusion::NetworkBehaviourId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkBehaviourId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkBehaviourId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkBehaviourId>* Fusion::NetworkBehaviourId::i___System__IEquatable_1___Fusion__NetworkBehaviourId_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkBehaviourId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Behaviour", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkBehaviourId::NetworkBehaviourId(::Fusion::NetworkId  Object, int32_t  Behaviour) noexcept  {
this->Object = Object;
this->Behaviour = Behaviour;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkBehaviourId::NetworkBehaviourId()   {
}

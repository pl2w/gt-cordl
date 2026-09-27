#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectNestingKey.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.get_IsNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectNestingKey::*)()>(&::Fusion::NetworkObjectNestingKey::get_IsNone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcbc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"get_IsNone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectNestingKey::*)()>(&::Fusion::NetworkObjectNestingKey::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcbca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectNestingKey::*)(int32_t)>(&::Fusion::NetworkObjectNestingKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcbcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectNestingKey::*)(::Fusion::NetworkObjectNestingKey)>(&::Fusion::NetworkObjectNestingKey::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcbcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectNestingKey::*)(::System::Object*)>(&::Fusion::NetworkObjectNestingKey::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fcbccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                    {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectNestingKey::*)()>(&::Fusion::NetworkObjectNestingKey::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcbd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                    {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectNestingKey::*)()>(&::Fusion::NetworkObjectNestingKey::ToString)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5fcbd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                    {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::NetworkObjectNestingKey::__cordl_internal_get_Value()  {
return this->___Value;
}
constexpr int32_t const& Fusion::NetworkObjectNestingKey::__cordl_internal_get_Value() const {
return this->___Value;
}
constexpr void Fusion::NetworkObjectNestingKey::__cordl_internal_set_Value(int32_t  value)  {
this->___Value = value;
}
inline bool Fusion::NetworkObjectNestingKey::get_IsNone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"get_IsNone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectNestingKey::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Fusion::NetworkObjectNestingKey::_ctor(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool Fusion::NetworkObjectNestingKey::Equals(::Fusion::NetworkObjectNestingKey  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkObjectNestingKey::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkObjectNestingKey::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkObjectNestingKey::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectNestingKey>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkObjectNestingKey::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkObjectNestingKey::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>"
constexpr  Fusion::NetworkObjectNestingKey::operator ::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>* Fusion::NetworkObjectNestingKey::i___System__IEquatable_1___Fusion__NetworkObjectNestingKey_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectNestingKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectNestingKey::NetworkObjectNestingKey(int32_t  Value) noexcept  {
this->Value = Value;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectNestingKey::NetworkObjectNestingKey()   {
}
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectNestingKey_EqualityComparer::*)(::Fusion::NetworkObjectNestingKey, ::Fusion::NetworkObjectNestingKey)>(&::Fusion::NetworkObjectNestingKey_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcbddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectNestingKey_EqualityComparer::*)(::Fusion::NetworkObjectNestingKey)>(&::Fusion::NetworkObjectNestingKey_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcbde8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectNestingKey_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectNestingKey_EqualityComparer::*)()>(&::Fusion::NetworkObjectNestingKey_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fcbdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectNestingKey_EqualityComparer::Equals(::Fusion::NetworkObjectNestingKey  x, ::Fusion::NetworkObjectNestingKey  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkObjectNestingKey_EqualityComparer::GetHashCode(::Fusion::NetworkObjectNestingKey  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectNestingKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::NetworkObjectNestingKey_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectNestingKey_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectNestingKey_EqualityComparer* Fusion::NetworkObjectNestingKey_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectNestingKey_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>"
constexpr  Fusion::NetworkObjectNestingKey_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>* Fusion::NetworkObjectNestingKey_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkObjectNestingKey_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectNestingKey>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectNestingKey_EqualityComparer::NetworkObjectNestingKey_EqualityComparer()   {
}

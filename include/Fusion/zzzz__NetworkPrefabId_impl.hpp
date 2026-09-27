#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkPrefabId_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabId.get_IsNone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabId::*)()>(&::Fusion::NetworkPrefabId::get_IsNone)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fce3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_IsNone", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabId::*)()>(&::Fusion::NetworkPrefabId::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fcce38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.get_AsIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabId::*)()>(&::Fusion::NetworkPrefabId::get_AsIndex)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fcd69c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_AsIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.FromIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (*)(int32_t)>(&::Fusion::NetworkPrefabId::FromIndex)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5fce3b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"FromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.FromRaw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabId (*)(uint32_t)>(&::Fusion::NetworkPrefabId::FromRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5fccfcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"FromRaw", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabId::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fce410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabId::*)(::System::Object*)>(&::Fusion::NetworkPrefabId::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fce420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabId::*)()>(&::Fusion::NetworkPrefabId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkPrefabId::*)()>(&::Fusion::NetworkPrefabId::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fce4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.System_IComparable_CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabId::*)(::System::Object*)>(&::Fusion::NetworkPrefabId::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5fce5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"System.IComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkPrefabId::*)(bool, bool)>(&::Fusion::NetworkPrefabId::ToString)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fce4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"ToString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fce654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fce660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabId::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Fusion::NetworkPrefabId::__cordl_internal_get_RawValue()  {
return this->___RawValue;
}
constexpr uint32_t const& Fusion::NetworkPrefabId::__cordl_internal_get_RawValue() const {
return this->___RawValue;
}
constexpr void Fusion::NetworkPrefabId::__cordl_internal_set_RawValue(uint32_t  value)  {
this->___RawValue = value;
}
inline bool Fusion::NetworkPrefabId::get_IsNone()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_IsNone", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkPrefabId::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Fusion::NetworkPrefabId::get_AsIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"get_AsIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkPrefabId::FromIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"FromIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(nullptr, ___internal_method, index);
}
inline ::Fusion::NetworkPrefabId Fusion::NetworkPrefabId::FromRaw(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"FromRaw", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabId>(nullptr, ___internal_method, value);
}
inline bool Fusion::NetworkPrefabId::Equals(::Fusion::NetworkPrefabId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkPrefabId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkPrefabId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkPrefabId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Fusion::NetworkPrefabId::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"System.IComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
inline ::StringW Fusion::NetworkPrefabId::ToString(bool  brackets, bool  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"ToString", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, brackets, prefix);
}
inline bool Fusion::NetworkPrefabId::op_Equality(::Fusion::NetworkPrefabId  a, ::Fusion::NetworkPrefabId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkPrefabId::op_Inequality(::Fusion::NetworkPrefabId  a, ::Fusion::NetworkPrefabId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t Fusion::NetworkPrefabId::CompareTo(::Fusion::NetworkPrefabId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkPrefabId::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkPrefabId::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkPrefabId>"
constexpr  Fusion::NetworkPrefabId::operator ::System::IEquatable_1<::Fusion::NetworkPrefabId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkPrefabId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkPrefabId>* Fusion::NetworkPrefabId::i___System__IEquatable_1___Fusion__NetworkPrefabId_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  Fusion::NetworkPrefabId::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* Fusion::NetworkPrefabId::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkPrefabId>"
constexpr  Fusion::NetworkPrefabId::operator ::System::IComparable_1<::Fusion::NetworkPrefabId>*()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkPrefabId>"
constexpr ::System::IComparable_1<::Fusion::NetworkPrefabId>* Fusion::NetworkPrefabId::i___System__IComparable_1___Fusion__NetworkPrefabId_()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RawValue", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPrefabId::NetworkPrefabId(uint32_t  RawValue) noexcept  {
this->RawValue = RawValue;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabId::NetworkPrefabId()   {
}
//  Writing Method size for method: ::Fusion::NetworkPrefabId_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabId_EqualityComparer::*)(::Fusion::NetworkPrefabId, ::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fce66c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabId_EqualityComparer::*)(::Fusion::NetworkPrefabId)>(&::Fusion::NetworkPrefabId_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabId_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabId_EqualityComparer::*)()>(&::Fusion::NetworkPrefabId_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fce680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkPrefabId_EqualityComparer::Equals(::Fusion::NetworkPrefabId  x, ::Fusion::NetworkPrefabId  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>(), ::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkPrefabId_EqualityComparer::GetHashCode(::Fusion::NetworkPrefabId  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkPrefabId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::NetworkPrefabId_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabId_EqualityComparer* Fusion::NetworkPrefabId_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabId_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>"
constexpr  Fusion::NetworkPrefabId_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>* Fusion::NetworkPrefabId_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkPrefabId_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabId>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabId_EqualityComparer::NetworkPrefabId_EqualityComparer()   {
}

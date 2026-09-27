#pragma once
// IWYU pragma private; include "Fusion/NetworkId.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/Sockets/zzzz__NetBitBuffer_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkId.get_Comparer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId_EqualityComparer* (*)()>(&::Fusion::NetworkId::get_Comparer)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5fa7b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_Comparer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkId::*)()>(&::Fusion::NetworkId::get_IsValid)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa7bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.get_IsReserved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkId::*)()>(&::Fusion::NetworkId::get_IsReserved)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fa7be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_IsReserved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.get_RuntimeConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)()>(&::Fusion::NetworkId::get_RuntimeConfig)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_RuntimeConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.get_SceneInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)()>(&::Fusion::NetworkId::get_SceneInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_SceneInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.get_PhysicsInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)()>(&::Fusion::NetworkId::get_PhysicsInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_PhysicsInfo", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkId::*)(uint32_t)>(&::Fusion::NetworkId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkId::*)(::Fusion::NetworkId)>(&::Fusion::NetworkId::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fa7c14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkId::*)(::Fusion::NetworkId)>(&::Fusion::NetworkId::CompareTo)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkId::*)(::System::Object*)>(&::Fusion::NetworkId::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fa7c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkId>(),
                    {::i2c::class_of<::Fusion::NetworkId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.System_IComparable_CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkId::*)(::System::Object*)>(&::Fusion::NetworkId::System_IComparable_CompareTo)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5fa7ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"System.IComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkId, ::Fusion::NetworkId)>(&::Fusion::NetworkId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkId, ::Fusion::NetworkId)>(&::Fusion::NetworkId::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.op_Implicit_bool
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkId)>(&::Fusion::NetworkId::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Fusion::Sockets::NetBitBuffer*, ::Fusion::NetworkId)>(&::Fusion::NetworkId::Write)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.Read
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkId (*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::NetworkId::Read)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa7d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkId::*)(::Fusion::Sockets::NetBitBuffer*)>(&::Fusion::NetworkId::Write)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5fa7d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkId::*)()>(&::Fusion::NetworkId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa7ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkId>(),
                    {::i2c::class_of<::Fusion::NetworkId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkId::*)()>(&::Fusion::NetworkId::ToString)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5fa7de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkId>(),
                    {::i2c::class_of<::Fusion::NetworkId>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId.ToNamePrefixString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkId::*)()>(&::Fusion::NetworkId::ToNamePrefixString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fa7f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"ToNamePrefixString", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& Fusion::NetworkId::__cordl_internal_get_Raw()  {
return this->___Raw;
}
constexpr uint32_t const& Fusion::NetworkId::__cordl_internal_get_Raw() const {
return this->___Raw;
}
constexpr void Fusion::NetworkId::__cordl_internal_set_Raw(uint32_t  value)  {
this->___Raw = value;
}
inline void Fusion::NetworkId::setStaticF__Comparer_k__BackingField(::Fusion::NetworkId_EqualityComparer*  value)  {
::cordl_internals::setStaticField<::Fusion::NetworkId_EqualityComparer*, "<Comparer>k__BackingField", ::Fusion::NetworkId>(std::forward<::Fusion::NetworkId_EqualityComparer*>(value));
}
inline ::Fusion::NetworkId_EqualityComparer* Fusion::NetworkId::getStaticF__Comparer_k__BackingField()  {
return ::cordl_internals::getStaticField<::Fusion::NetworkId_EqualityComparer*, "<Comparer>k__BackingField", ::Fusion::NetworkId>();
}
inline ::Fusion::NetworkId_EqualityComparer* Fusion::NetworkId::get_Comparer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_Comparer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId_EqualityComparer*>(nullptr, ___internal_method);
}
inline bool Fusion::NetworkId::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Fusion::NetworkId::get_IsReserved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_IsReserved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkId::get_RuntimeConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_RuntimeConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkId::get_SceneInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_SceneInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method);
}
inline ::Fusion::NetworkId Fusion::NetworkId::get_PhysicsInfo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"get_PhysicsInfo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method);
}
inline void Fusion::NetworkId::_ctor(uint32_t  raw)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {".ctor", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, raw);
}
inline bool Fusion::NetworkId::Equals(::Fusion::NetworkId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Fusion::NetworkId::CompareTo(::Fusion::NetworkId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkId::System_IComparable_CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"System.IComparable.CompareTo", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, obj);
}
inline bool Fusion::NetworkId::op_Equality(::Fusion::NetworkId  a, ::Fusion::NetworkId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkId::op_Inequality(::Fusion::NetworkId  a, ::Fusion::NetworkId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkId::op_Implicit_bool(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline void Fusion::NetworkId::Write(::Fusion::Sockets::NetBitBuffer*  buffer, ::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, id);
}
inline ::Fusion::NetworkId Fusion::NetworkId::Read(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Read", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkId>(nullptr, ___internal_method, buffer);
}
inline void Fusion::NetworkId::Write(::Fusion::Sockets::NetBitBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"Write", {}, {::i2c::type_of<::Fusion::Sockets::NetBitBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, buffer);
}
inline int32_t Fusion::NetworkId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkId::ToNamePrefixString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId>(),
                        {"ToNamePrefixString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkId::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkId::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkId>"
constexpr  Fusion::NetworkId::operator ::System::IEquatable_1<::Fusion::NetworkId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkId>* Fusion::NetworkId::i___System__IEquatable_1___Fusion__NetworkId_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable"
constexpr  Fusion::NetworkId::operator ::System::IComparable*()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* Fusion::NetworkId::i___System__IComparable()  {
return static_cast<::System::IComparable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkId>"
constexpr  Fusion::NetworkId::operator ::System::IComparable_1<::Fusion::NetworkId>*()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkId>"
constexpr ::System::IComparable_1<::Fusion::NetworkId>* Fusion::NetworkId::i___System__IComparable_1___Fusion__NetworkId_()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Raw", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkId::NetworkId(uint32_t  Raw) noexcept  {
this->Raw = Raw;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkId::NetworkId()   {
}
//  Writing Method size for method: ::Fusion::NetworkId_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkId_EqualityComparer::*)(::Fusion::NetworkId, ::Fusion::NetworkId)>(&::Fusion::NetworkId_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fa8068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkId_EqualityComparer::*)(::Fusion::NetworkId)>(&::Fusion::NetworkId_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa8074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkId_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkId_EqualityComparer::*)()>(&::Fusion::NetworkId_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fa8060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkId_EqualityComparer::Equals(::Fusion::NetworkId  a, ::Fusion::NetworkId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, a, b);
}
inline int32_t Fusion::NetworkId_EqualityComparer::GetHashCode(::Fusion::NetworkId  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, id);
}
inline void Fusion::NetworkId_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkId_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkId_EqualityComparer* Fusion::NetworkId_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkId_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>"
constexpr  Fusion::NetworkId_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>* Fusion::NetworkId_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkId_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkId>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkId_EqualityComparer::NetworkId_EqualityComparer()   {
}

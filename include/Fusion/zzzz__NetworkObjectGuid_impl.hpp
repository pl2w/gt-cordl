#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectGuid.hpp"
#include "Fusion/zzzz__NetworkObjectGuid__RawGuidValue_e__FixedBuffer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid__RawGuidValue_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkPrefabRef_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (*)()>(&::Fusion::NetworkObjectGuid::get_Empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faa6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuid::*)(::StringW)>(&::Fusion::NetworkObjectGuid::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5faa6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuid::*)(int64_t, int64_t)>(&::Fusion::NetworkObjectGuid::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faa79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuid::*)(::ArrayW<uint8_t>)>(&::Fusion::NetworkObjectGuid::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5faa7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuid::*)(uint8_t*)>(&::Fusion::NetworkObjectGuid::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faa7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectGuid::*)()>(&::Fusion::NetworkObjectGuid::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5faa7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.op_Implicit___Fusion__NetworkObjectGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (*)(::System::Guid)>(&::Fusion::NetworkObjectGuid::op_Implicit___Fusion__NetworkObjectGuid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5faa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.op_Implicit___System__Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::op_Implicit___System__Guid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5faa8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::Fusion::NetworkObjectGuid>)>(&::Fusion::NetworkObjectGuid::TryParse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5faa8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectGuid>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (*)(::StringW)>(&::Fusion::NetworkObjectGuid::Parse)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5faa970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectGuid, ::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa9c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectGuid, ::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faa9f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectGuid::*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5faa9d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectGuid::*)(::System::Object*)>(&::Fusion::NetworkObjectGuid::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5faaa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                    {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectGuid::*)()>(&::Fusion::NetworkObjectGuid::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5faaa90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                    {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectGuid::*)()>(&::Fusion::NetworkObjectGuid::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5faaaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                    {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.ToUnityGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectGuid::*)()>(&::Fusion::NetworkObjectGuid::ToUnityGuidString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5faab58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"ToUnityGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectGuid::*)(::StringW)>(&::Fusion::NetworkObjectGuid::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5faaba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectGuid::*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::CompareTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5faac14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid.op_Explicit___Fusion__NetworkPrefabRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabRef (*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid::op_Explicit___Fusion__NetworkPrefabRef)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5faac44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkObjectGuid__RawGuidValue_e__FixedBuffer& Fusion::NetworkObjectGuid::__cordl_internal_get_RawGuidValue()  {
return this->___RawGuidValue;
}
constexpr ::GlobalNamespace::NetworkObjectGuid__RawGuidValue_e__FixedBuffer const& Fusion::NetworkObjectGuid::__cordl_internal_get_RawGuidValue() const {
return this->___RawGuidValue;
}
constexpr void Fusion::NetworkObjectGuid::__cordl_internal_set_RawGuidValue(::GlobalNamespace::NetworkObjectGuid__RawGuidValue_e__FixedBuffer  value)  {
this->___RawGuidValue = value;
}
constexpr int64_t& Fusion::NetworkObjectGuid::__cordl_internal_get__data0()  {
return this->____data0;
}
constexpr int64_t const& Fusion::NetworkObjectGuid::__cordl_internal_get__data0() const {
return this->____data0;
}
constexpr void Fusion::NetworkObjectGuid::__cordl_internal_set__data0(int64_t  value)  {
this->____data0 = value;
}
constexpr int64_t& Fusion::NetworkObjectGuid::__cordl_internal_get__data1()  {
return this->____data1;
}
constexpr int64_t const& Fusion::NetworkObjectGuid::__cordl_internal_get__data1() const {
return this->____data1;
}
constexpr void Fusion::NetworkObjectGuid::__cordl_internal_set__data1(int64_t  value)  {
this->____data1 = value;
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkObjectGuid::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(nullptr, ___internal_method);
}
inline void Fusion::NetworkObjectGuid::_ctor(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void Fusion::NetworkObjectGuid::_ctor(int64_t  data0, int64_t  data1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data0, data1);
}
inline void Fusion::NetworkObjectGuid::_ctor(::ArrayW<uint8_t>  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void Fusion::NetworkObjectGuid::_ctor(uint8_t*  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline bool Fusion::NetworkObjectGuid::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkObjectGuid::op_Implicit___Fusion__NetworkObjectGuid(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(nullptr, ___internal_method, guid);
}
inline ::System::Guid Fusion::NetworkObjectGuid::op_Implicit___System__Guid(::Fusion::NetworkObjectGuid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, guid);
}
inline bool Fusion::NetworkObjectGuid::TryParse(::StringW  str, ::by_ref<::Fusion::NetworkObjectGuid>  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Fusion::NetworkObjectGuid>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, guid);
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkObjectGuid::Parse(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(nullptr, ___internal_method, str);
}
inline bool Fusion::NetworkObjectGuid::op_Equality(::Fusion::NetworkObjectGuid  a, ::Fusion::NetworkObjectGuid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkObjectGuid::op_Inequality(::Fusion::NetworkObjectGuid  a, ::Fusion::NetworkObjectGuid  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkObjectGuid::Equals(::Fusion::NetworkObjectGuid  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkObjectGuid::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkObjectGuid::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkObjectGuid::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectGuid>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkObjectGuid::ToUnityGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"ToUnityGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkObjectGuid::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline int32_t Fusion::NetworkObjectGuid::CompareTo(::Fusion::NetworkObjectGuid  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline ::Fusion::NetworkPrefabRef Fusion::NetworkObjectGuid::op_Explicit___Fusion__NetworkPrefabRef(::Fusion::NetworkObjectGuid  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabRef>(nullptr, ___internal_method, t);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkObjectGuid::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkObjectGuid::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectGuid>"
constexpr  Fusion::NetworkObjectGuid::operator ::System::IEquatable_1<::Fusion::NetworkObjectGuid>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectGuid>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectGuid>* Fusion::NetworkObjectGuid::i___System__IEquatable_1___Fusion__NetworkObjectGuid_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkObjectGuid>"
constexpr  Fusion::NetworkObjectGuid::operator ::System::IComparable_1<::Fusion::NetworkObjectGuid>*()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkObjectGuid>"
constexpr ::System::IComparable_1<::Fusion::NetworkObjectGuid>* Fusion::NetworkObjectGuid::i___System__IComparable_1___Fusion__NetworkObjectGuid_()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RawGuidValue", ty: "::GlobalNamespace::NetworkObjectGuid__RawGuidValue_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data0", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data1", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectGuid::NetworkObjectGuid(::GlobalNamespace::NetworkObjectGuid__RawGuidValue_e__FixedBuffer  RawGuidValue, int64_t  _data0, int64_t  _data1) noexcept  {
this->RawGuidValue = RawGuidValue;
this->_data0 = _data0;
this->_data1 = _data1;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectGuid::NetworkObjectGuid()   {
}
//  Writing Method size for method: ::Fusion::NetworkObjectGuid_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectGuid_EqualityComparer::*)(::Fusion::NetworkObjectGuid, ::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectGuid_EqualityComparer::*)(::Fusion::NetworkObjectGuid)>(&::Fusion::NetworkObjectGuid_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5faaca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectGuid_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectGuid_EqualityComparer::*)()>(&::Fusion::NetworkObjectGuid_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkObjectGuid_EqualityComparer::Equals(::Fusion::NetworkObjectGuid  x, ::Fusion::NetworkObjectGuid  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>(), ::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkObjectGuid_EqualityComparer::GetHashCode(::Fusion::NetworkObjectGuid  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkObjectGuid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::NetworkObjectGuid_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectGuid_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkObjectGuid_EqualityComparer* Fusion::NetworkObjectGuid_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkObjectGuid_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>"
constexpr  Fusion::NetworkObjectGuid_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>* Fusion::NetworkObjectGuid_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkObjectGuid_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkObjectGuid>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectGuid_EqualityComparer::NetworkObjectGuid_EqualityComparer()   {
}

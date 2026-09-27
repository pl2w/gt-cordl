#pragma once
// IWYU pragma private; include "Fusion/NetworkPrefabRef.hpp"
#include "Fusion/zzzz__NetworkPrefabRef__RawGuidValue_e__FixedBuffer_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__NetworkPrefabRef_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkObjectGuid_def.hpp"
#include "Fusion/zzzz__NetworkPrefabRef__RawGuidValue_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__NetworkPrefabRef_def.hpp"
#include "System/Collections/Generic/zzzz__IEqualityComparer_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.get_Empty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabRef (*)()>(&::Fusion::NetworkPrefabRef::get_Empty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5faace8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"get_Empty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabRef::*)(::StringW)>(&::Fusion::NetworkPrefabRef::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5faacf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabRef::*)(int64_t, int64_t)>(&::Fusion::NetworkPrefabRef::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faadb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabRef::*)(::ArrayW<uint8_t>)>(&::Fusion::NetworkPrefabRef::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5faadb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabRef::*)(uint8_t*)>(&::Fusion::NetworkPrefabRef::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5faac7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabRef::*)()>(&::Fusion::NetworkPrefabRef::get_IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5faadfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.op_Implicit___Fusion__NetworkPrefabRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabRef (*)(::System::Guid)>(&::Fusion::NetworkPrefabRef::op_Implicit___Fusion__NetworkPrefabRef)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5faad64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.op_Implicit___System__Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::op_Implicit___System__Guid)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5faae1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.TryParse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<::Fusion::NetworkPrefabRef>)>(&::Fusion::NetworkPrefabRef::TryParse)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5faae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabRef>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkPrefabRef (*)(::StringW)>(&::Fusion::NetworkPrefabRef::Parse)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5faaeec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkPrefabRef, ::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::op_Equality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faaf40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkPrefabRef, ::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::op_Inequality)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5faaf74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabRef::*)(::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5faaf50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabRef::*)(::System::Object*)>(&::Fusion::NetworkPrefabRef::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5faaf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabRef::*)()>(&::Fusion::NetworkPrefabRef::GetHashCode)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fab00c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkPrefabRef::*)()>(&::Fusion::NetworkPrefabRef::ToString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5fab070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                    {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.ToUnityGuidString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkPrefabRef::*)()>(&::Fusion::NetworkPrefabRef::ToUnityGuidString)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5fab0d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"ToUnityGuidString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkPrefabRef::*)(::StringW)>(&::Fusion::NetworkPrefabRef::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fab11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabRef::*)(::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::CompareTo)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fab190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef.op_Explicit___Fusion__NetworkObjectGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkObjectGuid (*)(::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef::op_Explicit___Fusion__NetworkObjectGuid)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5fab1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer& Fusion::NetworkPrefabRef::__cordl_internal_get_RawGuidValue()  {
return this->___RawGuidValue;
}
constexpr ::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer const& Fusion::NetworkPrefabRef::__cordl_internal_get_RawGuidValue() const {
return this->___RawGuidValue;
}
constexpr void Fusion::NetworkPrefabRef::__cordl_internal_set_RawGuidValue(::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  value)  {
this->___RawGuidValue = value;
}
constexpr int64_t& Fusion::NetworkPrefabRef::__cordl_internal_get__data0()  {
return this->____data0;
}
constexpr int64_t const& Fusion::NetworkPrefabRef::__cordl_internal_get__data0() const {
return this->____data0;
}
constexpr void Fusion::NetworkPrefabRef::__cordl_internal_set__data0(int64_t  value)  {
this->____data0 = value;
}
constexpr int64_t& Fusion::NetworkPrefabRef::__cordl_internal_get__data1()  {
return this->____data1;
}
constexpr int64_t const& Fusion::NetworkPrefabRef::__cordl_internal_get__data1() const {
return this->____data1;
}
constexpr void Fusion::NetworkPrefabRef::__cordl_internal_set__data1(int64_t  value)  {
this->____data1 = value;
}
inline ::Fusion::NetworkPrefabRef Fusion::NetworkPrefabRef::get_Empty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"get_Empty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabRef>(nullptr, ___internal_method);
}
inline void Fusion::NetworkPrefabRef::_ctor(::StringW  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void Fusion::NetworkPrefabRef::_ctor(int64_t  data0, int64_t  data1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, data0, data1);
}
inline void Fusion::NetworkPrefabRef::_ctor(::ArrayW<uint8_t>  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline void Fusion::NetworkPrefabRef::_ctor(uint8_t*  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {".ctor", {}, {::i2c::type_of<uint8_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, guid);
}
inline bool Fusion::NetworkPrefabRef::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::Fusion::NetworkPrefabRef Fusion::NetworkPrefabRef::op_Implicit___Fusion__NetworkPrefabRef(::System::Guid  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabRef>(nullptr, ___internal_method, guid);
}
inline ::System::Guid Fusion::NetworkPrefabRef::op_Implicit___System__Guid(::Fusion::NetworkPrefabRef  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Implicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, guid);
}
inline bool Fusion::NetworkPrefabRef::TryParse(::StringW  str, ::by_ref<::Fusion::NetworkPrefabRef>  guid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"TryParse", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::Fusion::NetworkPrefabRef>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, guid);
}
inline ::Fusion::NetworkPrefabRef Fusion::NetworkPrefabRef::Parse(::StringW  str)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkPrefabRef>(nullptr, ___internal_method, str);
}
inline bool Fusion::NetworkPrefabRef::op_Equality(::Fusion::NetworkPrefabRef  a, ::Fusion::NetworkPrefabRef  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkPrefabRef::op_Inequality(::Fusion::NetworkPrefabRef  a, ::Fusion::NetworkPrefabRef  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool Fusion::NetworkPrefabRef::Equals(::Fusion::NetworkPrefabRef  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkPrefabRef::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkPrefabRef::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkPrefabRef::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkPrefabRef>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkPrefabRef::ToUnityGuidString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"ToUnityGuidString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW Fusion::NetworkPrefabRef::ToString(::StringW  format)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"ToString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method, format);
}
inline int32_t Fusion::NetworkPrefabRef::CompareTo(::Fusion::NetworkPrefabRef  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"CompareTo", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
inline ::Fusion::NetworkObjectGuid Fusion::NetworkPrefabRef::op_Explicit___Fusion__NetworkObjectGuid(::Fusion::NetworkPrefabRef  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef>(),
                        {"op_Explicit", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkObjectGuid>(nullptr, ___internal_method, t);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkPrefabRef::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkPrefabRef::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkPrefabRef>"
constexpr  Fusion::NetworkPrefabRef::operator ::System::IEquatable_1<::Fusion::NetworkPrefabRef>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::IEquatable_1<::Fusion::NetworkPrefabRef>* Fusion::NetworkPrefabRef::i___System__IEquatable_1___Fusion__NetworkPrefabRef_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Fusion::NetworkPrefabRef>"
constexpr  Fusion::NetworkPrefabRef::operator ::System::IComparable_1<::Fusion::NetworkPrefabRef>*()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::IComparable_1<::Fusion::NetworkPrefabRef>* Fusion::NetworkPrefabRef::i___System__IComparable_1___Fusion__NetworkPrefabRef_()  {
return static_cast<::System::IComparable_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "RawGuidValue", ty: "::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data0", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_data1", ty: "int64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkPrefabRef::NetworkPrefabRef(::GlobalNamespace::NetworkPrefabRef__RawGuidValue_e__FixedBuffer  RawGuidValue, int64_t  _data0, int64_t  _data1) noexcept  {
this->RawGuidValue = RawGuidValue;
this->_data0 = _data0;
this->_data1 = _data1;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabRef::NetworkPrefabRef()   {
}
//  Writing Method size for method: ::Fusion::NetworkPrefabRef_EqualityComparer.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkPrefabRef_EqualityComparer::*)(::Fusion::NetworkPrefabRef, ::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef_EqualityComparer::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fab1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef_EqualityComparer.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkPrefabRef_EqualityComparer::*)(::Fusion::NetworkPrefabRef)>(&::Fusion::NetworkPrefabRef_EqualityComparer::GetHashCode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5fab208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkPrefabRef_EqualityComparer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkPrefabRef_EqualityComparer::*)()>(&::Fusion::NetworkPrefabRef_EqualityComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fab248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline bool Fusion::NetworkPrefabRef_EqualityComparer::Equals(::Fusion::NetworkPrefabRef  x, ::Fusion::NetworkPrefabRef  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>(), ::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x, y);
}
inline int32_t Fusion::NetworkPrefabRef_EqualityComparer::GetHashCode(::Fusion::NetworkPrefabRef  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {"GetHashCode", {}, {::i2c::type_of<::Fusion::NetworkPrefabRef>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline void Fusion::NetworkPrefabRef_EqualityComparer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkPrefabRef_EqualityComparer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::NetworkPrefabRef_EqualityComparer* Fusion::NetworkPrefabRef_EqualityComparer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::NetworkPrefabRef_EqualityComparer*>());
}
/// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>"
constexpr  Fusion::NetworkPrefabRef_EqualityComparer::operator ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>*() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>"
constexpr ::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>* Fusion::NetworkPrefabRef_EqualityComparer::i___System__Collections__Generic__IEqualityComparer_1___Fusion__NetworkPrefabRef_() noexcept {
return static_cast<::System::Collections::Generic::IEqualityComparer_1<::Fusion::NetworkPrefabRef>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::NetworkPrefabRef_EqualityComparer::NetworkPrefabRef_EqualityComparer()   {
}

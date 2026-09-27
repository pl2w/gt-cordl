#pragma once
// IWYU pragma private; include "Fusion/NetworkObjectHeader.hpp"
#include "Fusion/zzzz__NetworkId_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader___reserved_e__FixedBuffer_impl.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_impl.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_def.hpp"
#include "Fusion/zzzz__INetworkStruct_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeaderFlags_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueDataChanges_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader_PlayerUniqueData_def.hpp"
#include "Fusion/zzzz__NetworkObjectHeader___reserved_e__FixedBuffer_def.hpp"
#include "Fusion/zzzz__NetworkObjectNestingKey_def.hpp"
#include "Fusion/zzzz__NetworkObjectTypeId_def.hpp"
#include "Fusion/zzzz__NetworkTRSPData_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::NetworkObjectHeader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::NetworkObjectHeader::*)(::Fusion::NetworkId, int16_t, int16_t, ::Fusion::NetworkObjectTypeId, ::Fusion::NetworkId, ::Fusion::NetworkObjectNestingKey, ::Fusion::NetworkObjectHeaderFlags)>(&::Fusion::NetworkObjectHeader::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fab2e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.get_ByteCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectHeader::*)()>(&::Fusion::NetworkObjectHeader::get_ByteCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5fab300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"get_ByteCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.GetDataPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeader::GetDataPointer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fab30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetDataPointer", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.GetDataWordCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeader::GetDataWordCount)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fab314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetDataWordCount", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.GetBehaviourChangedTickArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t* (*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeader::GetBehaviourChangedTickArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fab334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetBehaviourChangedTickArray", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.HasMainNetworkTRSP
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeader::HasMainNetworkTRSP)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fab354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"HasMainNetworkTRSP", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.GetMainNetworkTRSPData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::NetworkTRSPData* (*)(::Fusion::NetworkObjectHeader*)>(&::Fusion::NetworkObjectHeader::GetMainNetworkTRSPData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fab36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetMainNetworkTRSPData", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::NetworkObjectHeader::*)()>(&::Fusion::NetworkObjectHeader::ToString)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x5fab38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                    {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectHeader::*)(::Fusion::NetworkObjectHeader)>(&::Fusion::NetworkObjectHeader::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5faba60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::NetworkObjectHeader::*)(::System::Object*)>(&::Fusion::NetworkObjectHeader::Equals)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fabafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                    {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::NetworkObjectHeader::*)()>(&::Fusion::NetworkObjectHeader::GetHashCode)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5fabbe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                    {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectHeader, ::Fusion::NetworkObjectHeader)>(&::Fusion::NetworkObjectHeader::op_Equality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fabadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>(), ::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::NetworkObjectHeader.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::NetworkObjectHeader, ::Fusion::NetworkObjectHeader)>(&::Fusion::NetworkObjectHeader::op_Inequality)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fabd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>(), ::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::NetworkId& Fusion::NetworkObjectHeader::__cordl_internal_get_Id()  {
return this->___Id;
}
constexpr ::Fusion::NetworkId const& Fusion::NetworkObjectHeader::__cordl_internal_get_Id() const {
return this->___Id;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_Id(::Fusion::NetworkId  value)  {
this->___Id = value;
}
constexpr int16_t& Fusion::NetworkObjectHeader::__cordl_internal_get_WordCount()  {
return this->___WordCount;
}
constexpr int16_t const& Fusion::NetworkObjectHeader::__cordl_internal_get_WordCount() const {
return this->___WordCount;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_WordCount(int16_t  value)  {
this->___WordCount = value;
}
constexpr int16_t& Fusion::NetworkObjectHeader::__cordl_internal_get_BehaviourCount()  {
return this->___BehaviourCount;
}
constexpr int16_t const& Fusion::NetworkObjectHeader::__cordl_internal_get_BehaviourCount() const {
return this->___BehaviourCount;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_BehaviourCount(int16_t  value)  {
this->___BehaviourCount = value;
}
constexpr ::Fusion::NetworkObjectTypeId& Fusion::NetworkObjectHeader::__cordl_internal_get_Type()  {
return this->___Type;
}
constexpr ::Fusion::NetworkObjectTypeId const& Fusion::NetworkObjectHeader::__cordl_internal_get_Type() const {
return this->___Type;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_Type(::Fusion::NetworkObjectTypeId  value)  {
this->___Type = value;
}
constexpr ::Fusion::NetworkId& Fusion::NetworkObjectHeader::__cordl_internal_get_NestingRoot()  {
return this->___NestingRoot;
}
constexpr ::Fusion::NetworkId const& Fusion::NetworkObjectHeader::__cordl_internal_get_NestingRoot() const {
return this->___NestingRoot;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_NestingRoot(::Fusion::NetworkId  value)  {
this->___NestingRoot = value;
}
constexpr ::Fusion::NetworkObjectNestingKey& Fusion::NetworkObjectHeader::__cordl_internal_get_NestingKey()  {
return this->___NestingKey;
}
constexpr ::Fusion::NetworkObjectNestingKey const& Fusion::NetworkObjectHeader::__cordl_internal_get_NestingKey() const {
return this->___NestingKey;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_NestingKey(::Fusion::NetworkObjectNestingKey  value)  {
this->___NestingKey = value;
}
constexpr ::Fusion::NetworkObjectHeaderFlags& Fusion::NetworkObjectHeader::__cordl_internal_get_Flags()  {
return this->___Flags;
}
constexpr ::Fusion::NetworkObjectHeaderFlags const& Fusion::NetworkObjectHeader::__cordl_internal_get_Flags() const {
return this->___Flags;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_Flags(::Fusion::NetworkObjectHeaderFlags  value)  {
this->___Flags = value;
}
constexpr ::Fusion::PlayerRef& Fusion::NetworkObjectHeader::__cordl_internal_get_InputAuthority()  {
return this->___InputAuthority;
}
constexpr ::Fusion::PlayerRef const& Fusion::NetworkObjectHeader::__cordl_internal_get_InputAuthority() const {
return this->___InputAuthority;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_InputAuthority(::Fusion::PlayerRef  value)  {
this->___InputAuthority = value;
}
constexpr ::Fusion::PlayerRef& Fusion::NetworkObjectHeader::__cordl_internal_get_StateAuthority()  {
return this->___StateAuthority;
}
constexpr ::Fusion::PlayerRef const& Fusion::NetworkObjectHeader::__cordl_internal_get_StateAuthority() const {
return this->___StateAuthority;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_StateAuthority(::Fusion::PlayerRef  value)  {
this->___StateAuthority = value;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData& Fusion::NetworkObjectHeader::__cordl_internal_get_PlayerData()  {
return this->___PlayerData;
}
constexpr ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData const& Fusion::NetworkObjectHeader::__cordl_internal_get_PlayerData() const {
return this->___PlayerData;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set_PlayerData(::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  value)  {
this->___PlayerData = value;
}
constexpr ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer& Fusion::NetworkObjectHeader::__cordl_internal_get__reserved()  {
return this->____reserved;
}
constexpr ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer const& Fusion::NetworkObjectHeader::__cordl_internal_get__reserved() const {
return this->____reserved;
}
constexpr void Fusion::NetworkObjectHeader::__cordl_internal_set__reserved(::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  value)  {
this->____reserved = value;
}
inline void Fusion::NetworkObjectHeader::_ctor(::Fusion::NetworkId  id, int16_t  wordCount, int16_t  behaviourCount, ::Fusion::NetworkObjectTypeId  type, ::Fusion::NetworkId  nestingRoot, ::Fusion::NetworkObjectNestingKey  nestingKey, ::Fusion::NetworkObjectHeaderFlags  flags)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<int16_t>(), ::i2c::type_of<::Fusion::NetworkObjectTypeId>(), ::i2c::type_of<::Fusion::NetworkId>(), ::i2c::type_of<::Fusion::NetworkObjectNestingKey>(), ::i2c::type_of<::Fusion::NetworkObjectHeaderFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, id, wordCount, behaviourCount, type, nestingRoot, nestingKey, flags);
}
inline int32_t Fusion::NetworkObjectHeader::get_ByteCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"get_ByteCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t* Fusion::NetworkObjectHeader::GetDataPointer(::Fusion::NetworkObjectHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetDataPointer", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(nullptr, ___internal_method, header);
}
inline int32_t Fusion::NetworkObjectHeader::GetDataWordCount(::Fusion::NetworkObjectHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetDataWordCount", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, header);
}
inline int32_t* Fusion::NetworkObjectHeader::GetBehaviourChangedTickArray(::Fusion::NetworkObjectHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetBehaviourChangedTickArray", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t*>(nullptr, ___internal_method, header);
}
inline bool Fusion::NetworkObjectHeader::HasMainNetworkTRSP(::Fusion::NetworkObjectHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"HasMainNetworkTRSP", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, header);
}
inline ::Fusion::NetworkTRSPData* Fusion::NetworkObjectHeader::GetMainNetworkTRSPData(::Fusion::NetworkObjectHeader*  header)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"GetMainNetworkTRSPData", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::NetworkTRSPData*>(nullptr, ___internal_method, header);
}
inline ::StringW Fusion::NetworkObjectHeader::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectHeader::Equals(::Fusion::NetworkObjectHeader  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::NetworkObjectHeader::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::NetworkObjectHeader::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::NetworkObjectHeader>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::NetworkObjectHeader::op_Equality(::Fusion::NetworkObjectHeader  left, ::Fusion::NetworkObjectHeader  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>(), ::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool Fusion::NetworkObjectHeader::op_Inequality(::Fusion::NetworkObjectHeader  left, ::Fusion::NetworkObjectHeader  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::NetworkObjectHeader>(),
                        {"op_Inequality", {}, {::i2c::type_of<::Fusion::NetworkObjectHeader>(), ::i2c::type_of<::Fusion::NetworkObjectHeader>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr  Fusion::NetworkObjectHeader::operator ::Fusion::INetworkStruct*()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* Fusion::NetworkObjectHeader::i___Fusion__INetworkStruct()  {
return static_cast<::Fusion::INetworkStruct*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkObjectHeader>"
constexpr  Fusion::NetworkObjectHeader::operator ::System::IEquatable_1<::Fusion::NetworkObjectHeader>*()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectHeader>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkObjectHeader>"
constexpr ::System::IEquatable_1<::Fusion::NetworkObjectHeader>* Fusion::NetworkObjectHeader::i___System__IEquatable_1___Fusion__NetworkObjectHeader_()  {
return static_cast<::System::IEquatable_1<::Fusion::NetworkObjectHeader>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Id", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "WordCount", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "BehaviourCount", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Type", ty: "::Fusion::NetworkObjectTypeId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NestingRoot", ty: "::Fusion::NetworkId", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "NestingKey", ty: "::Fusion::NetworkObjectNestingKey", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Flags", ty: "::Fusion::NetworkObjectHeaderFlags", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "InputAuthority", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "StateAuthority", ty: "::Fusion::PlayerRef", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "PlayerData", ty: "::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_reserved", ty: "::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::NetworkObjectHeader::NetworkObjectHeader(::Fusion::NetworkId  Id, int16_t  WordCount, int16_t  BehaviourCount, ::Fusion::NetworkObjectTypeId  Type, ::Fusion::NetworkId  NestingRoot, ::Fusion::NetworkObjectNestingKey  NestingKey, ::Fusion::NetworkObjectHeaderFlags  Flags, ::Fusion::PlayerRef  InputAuthority, ::Fusion::PlayerRef  StateAuthority, ::GlobalNamespace::NetworkObjectHeader_PlayerUniqueData  PlayerData, ::GlobalNamespace::NetworkObjectHeader___reserved_e__FixedBuffer  _reserved) noexcept  {
this->Id = Id;
this->WordCount = WordCount;
this->BehaviourCount = BehaviourCount;
this->Type = Type;
this->NestingRoot = NestingRoot;
this->NestingKey = NestingKey;
this->Flags = Flags;
this->InputAuthority = InputAuthority;
this->StateAuthority = StateAuthority;
this->PlayerData = PlayerData;
this->_reserved = _reserved;
}
// Ctor Parameters []
constexpr ::Fusion::NetworkObjectHeader::NetworkObjectHeader()   {
}

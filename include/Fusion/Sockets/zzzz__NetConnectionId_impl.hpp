#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConnectionId.hpp"
#include "Fusion/Sockets/zzzz__NetConnectionId_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionId::*)(::Fusion::Sockets::NetConnectionId)>(&::Fusion::Sockets::NetConnectionId::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x602a680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionId.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Sockets::NetConnectionId::*)(::System::Object*)>(&::Fusion::Sockets::NetConnectionId::Equals)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x602a690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                    {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionId.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Fusion::Sockets::NetConnectionId::*)()>(&::Fusion::Sockets::NetConnectionId::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x602a708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                    {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionId.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Fusion::Sockets::NetConnectionId, ::Fusion::Sockets::NetConnectionId)>(&::Fusion::Sockets::NetConnectionId::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x602a710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Sockets::NetConnectionId.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Sockets::NetConnectionId::*)()>(&::Fusion::Sockets::NetConnectionId::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x602a71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                    {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr uint64_t& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Raw()  {
return this->___Raw;
}
constexpr uint64_t const& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Raw() const {
return this->___Raw;
}
constexpr void Fusion::Sockets::NetConnectionId::__cordl_internal_set_Raw(uint64_t  value)  {
this->___Raw = value;
}
constexpr int16_t& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Group()  {
return this->___Group;
}
constexpr int16_t const& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Group() const {
return this->___Group;
}
constexpr void Fusion::Sockets::NetConnectionId::__cordl_internal_set_Group(int16_t  value)  {
this->___Group = value;
}
constexpr int16_t& Fusion::Sockets::NetConnectionId::__cordl_internal_get_GroupIndex()  {
return this->___GroupIndex;
}
constexpr int16_t const& Fusion::Sockets::NetConnectionId::__cordl_internal_get_GroupIndex() const {
return this->___GroupIndex;
}
constexpr void Fusion::Sockets::NetConnectionId::__cordl_internal_set_GroupIndex(int16_t  value)  {
this->___GroupIndex = value;
}
constexpr uint32_t& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Generation()  {
return this->___Generation;
}
constexpr uint32_t const& Fusion::Sockets::NetConnectionId::__cordl_internal_get_Generation() const {
return this->___Generation;
}
constexpr void Fusion::Sockets::NetConnectionId::__cordl_internal_set_Generation(uint32_t  value)  {
this->___Generation = value;
}
inline bool Fusion::Sockets::NetConnectionId::Equals(::Fusion::Sockets::NetConnectionId  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                        {"Equals", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool Fusion::Sockets::NetConnectionId::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t Fusion::Sockets::NetConnectionId::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Fusion::Sockets::NetConnectionId::op_Equality(::Fusion::Sockets::NetConnectionId  a, ::Fusion::Sockets::NetConnectionId  b)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Sockets::NetConnectionId>(),
                        {"op_Equality", {}, {::i2c::type_of<::Fusion::Sockets::NetConnectionId>(), ::i2c::type_of<::Fusion::Sockets::NetConnectionId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline ::StringW Fusion::Sockets::NetConnectionId::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Sockets::NetConnectionId>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>"
constexpr  Fusion::Sockets::NetConnectionId::operator ::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>*()  {
return static_cast<::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>"
constexpr ::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>* Fusion::Sockets::NetConnectionId::i___System__IEquatable_1___Fusion__Sockets__NetConnectionId_()  {
return static_cast<::System::IEquatable_1<::Fusion::Sockets::NetConnectionId>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Raw", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Group", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "GroupIndex", ty: "int16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Generation", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::Sockets::NetConnectionId::NetConnectionId(uint64_t  Raw, int16_t  Group, int16_t  GroupIndex, uint32_t  Generation) noexcept  {
this->Raw = Raw;
this->Group = Group;
this->GroupIndex = GroupIndex;
this->Generation = Generation;
}
// Ctor Parameters []
constexpr ::Fusion::Sockets::NetConnectionId::NetConnectionId()   {
}

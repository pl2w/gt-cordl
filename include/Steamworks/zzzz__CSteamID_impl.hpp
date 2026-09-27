#pragma once
// IWYU pragma private; include "Steamworks/CSteamID.hpp"
#include "Steamworks/zzzz__CSteamID_def.hpp"
#include "Steamworks/zzzz__AccountID_t_def.hpp"
#include "Steamworks/zzzz__EAccountType_def.hpp"
#include "Steamworks/zzzz__EUniverse_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Steamworks::CSteamID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, uint32_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5f335c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(uint64_t)>(&::Steamworks::CSteamID::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f336e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.InstancedSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t, uint32_t, ::Steamworks::EUniverse, ::Steamworks::EAccountType)>(&::Steamworks::CSteamID::InstancedSet)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5f33648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"InstancedSet", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetAccountID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::AccountID_t)>(&::Steamworks::CSteamID::SetAccountID)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5f336e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountID", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetAccountInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(uint32_t)>(&::Steamworks::CSteamID::SetAccountInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f3376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountInstance", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetEAccountType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EAccountType)>(&::Steamworks::CSteamID::SetEAccountType)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5f33758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEAccountType", {}, {::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.SetEUniverse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Steamworks::CSteamID::*)(::Steamworks::EUniverse)>(&::Steamworks::CSteamID::SetEUniverse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEUniverse", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)(::System::Object*)>(&::Steamworks::CSteamID::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5f33788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CSteamID::*)()>(&::Steamworks::CSteamID::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f3383c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Steamworks::CSteamID>(),
                    {::i2c::class_of<::Steamworks::CSteamID>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Steamworks::CSteamID, ::Steamworks::CSteamID)>(&::Steamworks::CSteamID::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5f33830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.op_Explicit___Steamworks__CSteamID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Steamworks::CSteamID (*)(uint64_t)>(&::Steamworks::CSteamID::op_Explicit___Steamworks__CSteamID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2f480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::CSteamID::*)(::Steamworks::CSteamID)>(&::Steamworks::CSteamID::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f33844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Steamworks::CSteamID.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Steamworks::CSteamID::*)(::Steamworks::CSteamID)>(&::Steamworks::CSteamID::CompareTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f33854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
    return ___internal_method;
  }
};
inline void Steamworks::CSteamID::setStaticF_Nil(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "Nil", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_Nil()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "Nil", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_OutofDateGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "OutofDateGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_OutofDateGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "OutofDateGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_LanModeGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "LanModeGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_LanModeGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "LanModeGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_NotInitYetGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "NotInitYetGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_NotInitYetGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "NotInitYetGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::setStaticF_NonSteamGS(::Steamworks::CSteamID  value)  {
::cordl_internals::setStaticField<::Steamworks::CSteamID, "NonSteamGS", ::Steamworks::CSteamID>(std::forward<::Steamworks::CSteamID>(value));
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::getStaticF_NonSteamGS()  {
return ::cordl_internals::getStaticField<::Steamworks::CSteamID, "NonSteamGS", ::Steamworks::CSteamID>();
}
inline void Steamworks::CSteamID::_ctor(::Steamworks::AccountID_t  unAccountID, uint32_t  unAccountInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, unAccountInstance, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::_ctor(uint64_t  ulSteamID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {".ctor", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, ulSteamID);
}
inline void Steamworks::CSteamID::InstancedSet(::Steamworks::AccountID_t  unAccountID, uint32_t  unInstance, ::Steamworks::EUniverse  eUniverse, ::Steamworks::EAccountType  eAccountType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"InstancedSet", {}, {::i2c::type_of<::Steamworks::AccountID_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::Steamworks::EUniverse>(), ::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, unAccountID, unInstance, eUniverse, eAccountType);
}
inline void Steamworks::CSteamID::SetAccountID(::Steamworks::AccountID_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountID", {}, {::i2c::type_of<::Steamworks::AccountID_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetAccountInstance(uint32_t  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetAccountInstance", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetEAccountType(::Steamworks::EAccountType  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEAccountType", {}, {::i2c::type_of<::Steamworks::EAccountType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void Steamworks::CSteamID::SetEUniverse(::Steamworks::EUniverse  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"SetEUniverse", {}, {::i2c::type_of<::Steamworks::EUniverse>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline ::StringW Steamworks::CSteamID::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::Equals(::System::Object*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CSteamID::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Steamworks::CSteamID>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool Steamworks::CSteamID::op_Equality(::Steamworks::CSteamID  x, ::Steamworks::CSteamID  y)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Equality", {}, {::i2c::type_of<::Steamworks::CSteamID>(), ::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y);
}
inline ::Steamworks::CSteamID Steamworks::CSteamID::op_Explicit___Steamworks__CSteamID(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"op_Explicit", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Steamworks::CSteamID>(nullptr, ___internal_method, value);
}
inline bool Steamworks::CSteamID::Equals(::Steamworks::CSteamID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t Steamworks::CSteamID::CompareTo(::Steamworks::CSteamID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::CSteamID>(),
                        {"CompareTo", {}, {::i2c::type_of<::Steamworks::CSteamID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr  Steamworks::CSteamID::operator ::System::IEquatable_1<::Steamworks::CSteamID>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::CSteamID>"
constexpr ::System::IEquatable_1<::Steamworks::CSteamID>* Steamworks::CSteamID::i___System__IEquatable_1___Steamworks__CSteamID_()  {
return static_cast<::System::IEquatable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr  Steamworks::CSteamID::operator ::System::IComparable_1<::Steamworks::CSteamID>*()  {
return static_cast<::System::IComparable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Steamworks::CSteamID>"
constexpr ::System::IComparable_1<::Steamworks::CSteamID>* Steamworks::CSteamID::i___System__IComparable_1___Steamworks__CSteamID_()  {
return static_cast<::System::IComparable_1<::Steamworks::CSteamID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_SteamID", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::CSteamID::CSteamID(uint64_t  m_SteamID) noexcept  {
this->m_SteamID = m_SteamID;
}
// Ctor Parameters []
constexpr ::Steamworks::CSteamID::CSteamID()   {
}

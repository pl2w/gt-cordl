#pragma once
// IWYU pragma private; include "GlobalNamespace/RPCUtil_RPCCallID.hpp"
#include "GlobalNamespace/zzzz__RPCUtil_RPCCallID_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RPCUtil_RPCCallID._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RPCUtil_RPCCallID::*)(::StringW, int32_t)>(&::GlobalNamespace::RPCUtil_RPCCallID::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58f9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil_RPCCallID.get_SenderID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RPCUtil_RPCCallID::*)()>(&::GlobalNamespace::RPCUtil_RPCCallID::get_SenderID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"get_SenderID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil_RPCCallID.get_NameOfFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::RPCUtil_RPCCallID::*)()>(&::GlobalNamespace::RPCUtil_RPCCallID::get_NameOfFunction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58f9ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"get_NameOfFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RPCUtil_RPCCallID.System_IEquatable_RPCUtil_RPCCallID__Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RPCUtil_RPCCallID::*)(::GlobalNamespace::RPCUtil_RPCCallID)>(&::GlobalNamespace::RPCUtil_RPCCallID::System_IEquatable_RPCUtil_RPCCallID__Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x58f9ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"System.IEquatable<RPCUtil.RPCCallID>.Equals", {}, {::i2c::type_of<::GlobalNamespace::RPCUtil_RPCCallID>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::RPCUtil_RPCCallID::_ctor(::StringW  nameOfFunction, int32_t  senderId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nameOfFunction, senderId);
}
inline int32_t GlobalNamespace::RPCUtil_RPCCallID::get_SenderID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"get_SenderID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::RPCUtil_RPCCallID::get_NameOfFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"get_NameOfFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::RPCUtil_RPCCallID::System_IEquatable_RPCUtil_RPCCallID__Equals(::GlobalNamespace::RPCUtil_RPCCallID  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RPCUtil_RPCCallID>(),
                        {"System.IEquatable<RPCUtil.RPCCallID>.Equals", {}, {::i2c::type_of<::GlobalNamespace::RPCUtil_RPCCallID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>"
constexpr  GlobalNamespace::RPCUtil_RPCCallID::operator ::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>"
constexpr ::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>* GlobalNamespace::RPCUtil_RPCCallID::i___System__IEquatable_1___GlobalNamespace__RPCUtil_RPCCallID_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::RPCUtil_RPCCallID>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_senderID", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_nameOfFunction", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::RPCUtil_RPCCallID::RPCUtil_RPCCallID(int32_t  _senderID, ::StringW  _nameOfFunction) noexcept  {
this->_senderID = _senderID;
this->_nameOfFunction = _nameOfFunction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RPCUtil_RPCCallID::RPCUtil_RPCCallID()   {
}

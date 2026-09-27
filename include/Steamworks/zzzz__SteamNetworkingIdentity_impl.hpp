#pragma once
// IWYU pragma private; include "Steamworks/SteamNetworkingIdentity.hpp"
#include "Steamworks/zzzz__ESteamNetworkingIdentityType_impl.hpp"
#include "Steamworks/zzzz__SteamNetworkingIdentity_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::Steamworks::SteamNetworkingIdentity.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Steamworks::SteamNetworkingIdentity::*)(::Steamworks::SteamNetworkingIdentity)>(&::Steamworks::SteamNetworkingIdentity::Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f33aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIdentity>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Steamworks::SteamNetworkingIdentity::Equals(::Steamworks::SteamNetworkingIdentity  x)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Steamworks::SteamNetworkingIdentity>(),
                        {"Equals", {}, {::i2c::type_of<::Steamworks::SteamNetworkingIdentity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, x);
}
/// @brief Convert operator to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr  Steamworks::SteamNetworkingIdentity::operator ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>"
constexpr ::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>* Steamworks::SteamNetworkingIdentity::i___System__IEquatable_1___Steamworks__SteamNetworkingIdentity_()  {
return static_cast<::System::IEquatable_1<::Steamworks::SteamNetworkingIdentity>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_eType", ty: "::Steamworks::ESteamNetworkingIdentityType", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_cbSize", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved0", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved1", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved2", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved3", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved4", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved5", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved6", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved7", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved8", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved9", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved10", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved11", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved12", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved13", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved14", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved15", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved16", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved17", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved18", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved19", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved20", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved21", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved22", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved23", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved24", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved25", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved26", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved27", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved28", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved29", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved30", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_reserved31", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Steamworks::SteamNetworkingIdentity::SteamNetworkingIdentity(::Steamworks::ESteamNetworkingIdentityType  m_eType, int32_t  m_cbSize, uint32_t  m_reserved0, uint32_t  m_reserved1, uint32_t  m_reserved2, uint32_t  m_reserved3, uint32_t  m_reserved4, uint32_t  m_reserved5, uint32_t  m_reserved6, uint32_t  m_reserved7, uint32_t  m_reserved8, uint32_t  m_reserved9, uint32_t  m_reserved10, uint32_t  m_reserved11, uint32_t  m_reserved12, uint32_t  m_reserved13, uint32_t  m_reserved14, uint32_t  m_reserved15, uint32_t  m_reserved16, uint32_t  m_reserved17, uint32_t  m_reserved18, uint32_t  m_reserved19, uint32_t  m_reserved20, uint32_t  m_reserved21, uint32_t  m_reserved22, uint32_t  m_reserved23, uint32_t  m_reserved24, uint32_t  m_reserved25, uint32_t  m_reserved26, uint32_t  m_reserved27, uint32_t  m_reserved28, uint32_t  m_reserved29, uint32_t  m_reserved30, uint32_t  m_reserved31) noexcept  {
this->m_eType = m_eType;
this->m_cbSize = m_cbSize;
this->m_reserved0 = m_reserved0;
this->m_reserved1 = m_reserved1;
this->m_reserved2 = m_reserved2;
this->m_reserved3 = m_reserved3;
this->m_reserved4 = m_reserved4;
this->m_reserved5 = m_reserved5;
this->m_reserved6 = m_reserved6;
this->m_reserved7 = m_reserved7;
this->m_reserved8 = m_reserved8;
this->m_reserved9 = m_reserved9;
this->m_reserved10 = m_reserved10;
this->m_reserved11 = m_reserved11;
this->m_reserved12 = m_reserved12;
this->m_reserved13 = m_reserved13;
this->m_reserved14 = m_reserved14;
this->m_reserved15 = m_reserved15;
this->m_reserved16 = m_reserved16;
this->m_reserved17 = m_reserved17;
this->m_reserved18 = m_reserved18;
this->m_reserved19 = m_reserved19;
this->m_reserved20 = m_reserved20;
this->m_reserved21 = m_reserved21;
this->m_reserved22 = m_reserved22;
this->m_reserved23 = m_reserved23;
this->m_reserved24 = m_reserved24;
this->m_reserved25 = m_reserved25;
this->m_reserved26 = m_reserved26;
this->m_reserved27 = m_reserved27;
this->m_reserved28 = m_reserved28;
this->m_reserved29 = m_reserved29;
this->m_reserved30 = m_reserved30;
this->m_reserved31 = m_reserved31;
}
// Ctor Parameters []
constexpr ::Steamworks::SteamNetworkingIdentity::SteamNetworkingIdentity()   {
}

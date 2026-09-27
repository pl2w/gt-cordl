#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonNetwork_RaiseEventBatch.hpp"
#include "Photon/Pun/zzzz__PhotonNetwork_RaiseEventBatch_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonNetwork_RaiseEventBatch.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PhotonNetwork_RaiseEventBatch::*)()>(&::GlobalNamespace::PhotonNetwork_RaiseEventBatch::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa7298ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(),
                    {::i2c::class_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonNetwork_RaiseEventBatch.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::PhotonNetwork_RaiseEventBatch::*)(::GlobalNamespace::PhotonNetwork_RaiseEventBatch)>(&::GlobalNamespace::PhotonNetwork_RaiseEventBatch::Equals)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7298c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::PhotonNetwork_RaiseEventBatch::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::PhotonNetwork_RaiseEventBatch::Equals(::GlobalNamespace::PhotonNetwork_RaiseEventBatch  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>(),
                        {"Equals", {}, {::i2c::type_of<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr  GlobalNamespace::PhotonNetwork_RaiseEventBatch::operator ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>"
constexpr ::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>* GlobalNamespace::PhotonNetwork_RaiseEventBatch::i___System__IEquatable_1___GlobalNamespace__PhotonNetwork_RaiseEventBatch_()  {
return static_cast<::System::IEquatable_1<::GlobalNamespace::PhotonNetwork_RaiseEventBatch>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Group", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Reliable", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch::PhotonNetwork_RaiseEventBatch(uint8_t  Group, bool  Reliable) noexcept  {
this->Group = Group;
this->Reliable = Reliable;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonNetwork_RaiseEventBatch::PhotonNetwork_RaiseEventBatch()   {
}

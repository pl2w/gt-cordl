#pragma once
// IWYU pragma private; include "Photon/Pun/PhotonView_CallbackTargetChange.hpp"
#include "Photon/Pun/zzzz__PhotonView_CallbackTargetChange_def.hpp"
#include "Photon/Pun/zzzz__IPhotonViewCallback_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonView_CallbackTargetChange._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonView_CallbackTargetChange::*)(::Photon::Pun::IPhotonViewCallback*, ::System::Type*, bool)>(&::GlobalNamespace::PhotonView_CallbackTargetChange::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa72b27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonView_CallbackTargetChange>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonView_CallbackTargetChange::_ctor(::Photon::Pun::IPhotonViewCallback*  obj, ::System::Type*  type, bool  add)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonView_CallbackTargetChange>(),
                        {".ctor", {}, {::i2c::type_of<::Photon::Pun::IPhotonViewCallback*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, obj, type, add);
}
// Ctor Parameters [CppParam { name: "obj", ty: "::Photon::Pun::IPhotonViewCallback*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "type", ty: "::System::Type*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "add", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PhotonView_CallbackTargetChange::PhotonView_CallbackTargetChange(::Photon::Pun::IPhotonViewCallback*  obj, ::System::Type*  type, bool  add) noexcept  {
this->obj = obj;
this->type = type;
this->add = add;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonView_CallbackTargetChange::PhotonView_CallbackTargetChange()   {
}

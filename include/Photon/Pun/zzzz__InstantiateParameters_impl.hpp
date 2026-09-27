#pragma once
// IWYU pragma private; include "Photon/Pun/InstantiateParameters.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Photon/Pun/zzzz__InstantiateParameters_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Photon::Pun::InstantiateParameters._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::InstantiateParameters::*)(::StringW, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, uint8_t, ::ArrayW<::System::Object*>, uint8_t, ::ArrayW<int32_t>, ::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::InstantiateParameters::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa71556c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::InstantiateParameters>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::InstantiateParameters::_ctor(::StringW  prefabName, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, uint8_t  group, ::ArrayW<::System::Object*>  data, uint8_t  objLevelPrefix, ::ArrayW<int32_t>  viewIDs, ::Photon::Realtime::Player*  creator, int32_t  timestamp)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::InstantiateParameters>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<::System::Object*>>(), ::i2c::type_of<uint8_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, prefabName, position, rotation, group, data, objLevelPrefix, viewIDs, creator, timestamp);
}
// Ctor Parameters [CppParam { name: "viewIDs", ty: "::ArrayW<int32_t>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "objLevelPrefix", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "data", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "group", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "prefabName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "creator", ty: "::Photon::Realtime::Player*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "timestamp", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Pun::InstantiateParameters::InstantiateParameters(::ArrayW<int32_t>  viewIDs, uint8_t  objLevelPrefix, ::ArrayW<::System::Object*>  data, uint8_t  group, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  position, ::StringW  prefabName, ::Photon::Realtime::Player*  creator, int32_t  timestamp) noexcept  {
this->viewIDs = viewIDs;
this->objLevelPrefix = objLevelPrefix;
this->data = data;
this->group = group;
this->rotation = rotation;
this->position = position;
this->prefabName = prefabName;
this->creator = creator;
this->timestamp = timestamp;
}
// Ctor Parameters []
constexpr ::Photon::Pun::InstantiateParameters::InstantiateParameters()   {
}

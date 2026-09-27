#pragma once
// IWYU pragma private; include "MaterialCycler/MaterialCyclerManager.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "MaterialCycler/zzzz__MaterialCyclerManager_def.hpp"
#include "MaterialCycler/zzzz__MaterialCycler_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonView_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.get_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::MaterialCycler::MaterialCyclerManager> (*)()>(&::MaterialCycler::MaterialCyclerManager::get_Instance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5cd210c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"get_Instance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.set_Instance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::MaterialCycler::MaterialCyclerManager*)>(&::MaterialCycler::MaterialCyclerManager::set_Instance)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5cd2154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MaterialCycler::MaterialCyclerManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.get_SyncTimeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::MaterialCycler::MaterialCyclerManager::*)()>(&::MaterialCycler::MaterialCyclerManager::get_SyncTimeOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd21ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"get_SyncTimeOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.set_SyncTimeOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(float_t)>(&::MaterialCycler::MaterialCyclerManager::set_SyncTimeOut)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cd21b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"set_SyncTimeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)()>(&::MaterialCycler::MaterialCyclerManager::Awake)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5cd21bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.RegisterCycler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t, ::MaterialCycler::MaterialCycler*)>(&::MaterialCycler::MaterialCyclerManager::RegisterCycler)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x5cd121c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RegisterCycler", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MaterialCycler::MaterialCycler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.UnregisterCycler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(::MaterialCycler::MaterialCycler*)>(&::MaterialCycler::MaterialCyclerManager::UnregisterCycler)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5cd15dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UnregisterCycler", {}, {::i2c::type_of<::MaterialCycler::MaterialCycler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.CycleKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t)>(&::MaterialCycler::MaterialCyclerManager::CycleKey)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5cd2338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"CycleKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.RPC_CycleKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::MaterialCycler::MaterialCyclerManager::RPC_CycleKey)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5cd24d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RPC_CycleKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.Synchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t, int32_t, ::UnityEngine::Color)>(&::MaterialCycler::MaterialCyclerManager::Synchronize)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x5cd1d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"Synchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.RPC_Synchronize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t, int32_t, int32_t, ::Photon::Pun::PhotonMessageInfo)>(&::MaterialCycler::MaterialCyclerManager::RPC_Synchronize)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5cd2860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RPC_Synchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.UpdateMaterialCycler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)(int32_t, int32_t, ::UnityEngine::Color)>(&::MaterialCycler::MaterialCyclerManager::UpdateMaterialCycler)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x5cd2688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UpdateMaterialCycler", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.PackColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Color)>(&::MaterialCycler::MaterialCyclerManager::PackColor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5cd29c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"PackColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager.UnPackColour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t)>(&::MaterialCycler::MaterialCyclerManager::UnPackColour)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cd2ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UnPackColour", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MaterialCycler::MaterialCyclerManager._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MaterialCycler::MaterialCyclerManager::*)()>(&::MaterialCycler::MaterialCyclerManager::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cd2b34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__SyncTimeOut_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncTimeOut_k__BackingField;
}
constexpr float_t const& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__SyncTimeOut_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SyncTimeOut_k__BackingField;
}
constexpr void MaterialCycler::MaterialCyclerManager::__cordl_internal_set__SyncTimeOut_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SyncTimeOut_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__cyclers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyclers;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>* const& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__cyclers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cyclers;
}
constexpr void MaterialCycler::MaterialCyclerManager::__cordl_internal_set__cyclers(::System::Collections::Generic::Dictionary_2<int32_t,::System::Collections::Generic::List_1<::UnityW<::MaterialCycler::MaterialCycler>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cyclers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__numMaterialsByKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numMaterialsByKey;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__numMaterialsByKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numMaterialsByKey;
}
constexpr void MaterialCycler::MaterialCyclerManager::__cordl_internal_set__numMaterialsByKey(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numMaterialsByKey = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__currentMaterialIndexByKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMaterialIndexByKey;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__currentMaterialIndexByKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentMaterialIndexByKey;
}
constexpr void MaterialCycler::MaterialCyclerManager::__cordl_internal_set__currentMaterialIndexByKey(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentMaterialIndexByKey = value;
}
constexpr ::UnityW<::Photon::Pun::PhotonView>& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__photonView()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonView;
}
constexpr ::UnityW<::Photon::Pun::PhotonView> const& MaterialCycler::MaterialCyclerManager::__cordl_internal_get__photonView() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photonView;
}
constexpr void MaterialCycler::MaterialCyclerManager::__cordl_internal_set__photonView(::UnityW<::Photon::Pun::PhotonView>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photonView = value;
}
inline void MaterialCycler::MaterialCyclerManager::setStaticF__Instance_k__BackingField(::UnityW<::MaterialCycler::MaterialCyclerManager>  value)  {
::cordl_internals::setStaticField<::UnityW<::MaterialCycler::MaterialCyclerManager>, "<Instance>k__BackingField", ::MaterialCycler::MaterialCyclerManager*>(std::forward<::UnityW<::MaterialCycler::MaterialCyclerManager>>(value));
}
inline ::UnityW<::MaterialCycler::MaterialCyclerManager> MaterialCycler::MaterialCyclerManager::getStaticF__Instance_k__BackingField()  {
return ::cordl_internals::getStaticField<::UnityW<::MaterialCycler::MaterialCyclerManager>, "<Instance>k__BackingField", ::MaterialCycler::MaterialCyclerManager*>();
}
inline ::UnityW<::MaterialCycler::MaterialCyclerManager> MaterialCycler::MaterialCyclerManager::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::MaterialCycler::MaterialCyclerManager>>(nullptr, ___internal_method);
}
inline void MaterialCycler::MaterialCyclerManager::set_Instance(::MaterialCycler::MaterialCyclerManager*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"set_Instance", {}, {::i2c::type_of<::MaterialCycler::MaterialCyclerManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t MaterialCycler::MaterialCyclerManager::get_SyncTimeOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"get_SyncTimeOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCyclerManager::set_SyncTimeOut(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"set_SyncTimeOut", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void MaterialCycler::MaterialCyclerManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void MaterialCycler::MaterialCyclerManager::RegisterCycler(int32_t  key, ::MaterialCycler::MaterialCycler*  cycler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RegisterCycler", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::MaterialCycler::MaterialCycler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, cycler);
}
inline void MaterialCycler::MaterialCyclerManager::UnregisterCycler(::MaterialCycler::MaterialCycler*  cycler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UnregisterCycler", {}, {::i2c::type_of<::MaterialCycler::MaterialCycler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cycler);
}
inline void MaterialCycler::MaterialCyclerManager::CycleKey(int32_t  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"CycleKey", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void MaterialCycler::MaterialCyclerManager::RPC_CycleKey(int32_t  key, int32_t  index, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RPC_CycleKey", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, index, info);
}
inline void MaterialCycler::MaterialCyclerManager::Synchronize(int32_t  key, int32_t  materialIndex, ::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"Synchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, materialIndex, c);
}
inline void MaterialCycler::MaterialCyclerManager::RPC_Synchronize(int32_t  key, int32_t  materialIndex, int32_t  colourPacked, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"RPC_Synchronize", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, materialIndex, colourPacked, info);
}
inline void MaterialCycler::MaterialCyclerManager::UpdateMaterialCycler(int32_t  key, int32_t  materialIndex, ::UnityEngine::Color  colour)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UpdateMaterialCycler", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, materialIndex, colour);
}
inline int32_t MaterialCycler::MaterialCyclerManager::PackColor(::UnityEngine::Color  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"PackColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::Color MaterialCycler::MaterialCyclerManager::UnPackColour(int32_t  colourPacked)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {"UnPackColour", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, colourPacked);
}
inline void MaterialCycler::MaterialCyclerManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MaterialCycler::MaterialCyclerManager*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MaterialCycler::MaterialCyclerManager* MaterialCycler::MaterialCyclerManager::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MaterialCycler::MaterialCyclerManager*>());
}
// Ctor Parameters []
constexpr ::MaterialCycler::MaterialCyclerManager::MaterialCyclerManager()   {
}

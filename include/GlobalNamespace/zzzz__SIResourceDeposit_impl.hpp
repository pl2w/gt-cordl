#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceDeposit.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_impl.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "GlobalNamespace/zzzz__SIResourceDeposit_def.hpp"
#include "GlobalNamespace/zzzz__DisableGameObjectDelayed_def.hpp"
#include "GlobalNamespace/zzzz__ISIResourceDeposit_def.hpp"
#include "GlobalNamespace/zzzz__SIPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_def.hpp"
#include "GlobalNamespace/zzzz__SIUIPlayerQuestDisplay_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfectionManager_def.hpp"
#include "GlobalNamespace/zzzz__SuperInfection_def.hpp"
#include "Photon/Pun/zzzz__PhotonMessageInfo_def.hpp"
#include "Photon/Pun/zzzz__PhotonStream_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.get_IsAuthority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SIResourceDeposit::*)()>(&::GlobalNamespace::SIResourceDeposit::get_IsAuthority)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5aec320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.get_SIManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::SuperInfectionManager> (::GlobalNamespace::SIResourceDeposit::*)()>(&::GlobalNamespace::SIResourceDeposit::get_SIManager)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5aec354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"get_SIManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)()>(&::GlobalNamespace::SIResourceDeposit::OnEnable)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x5aec36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.WriteDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIResourceDeposit::WriteDataPUN)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5aec83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.ReadDataPUN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)(::Photon::Pun::PhotonStream*, ::Photon::Pun::PhotonMessageInfo)>(&::GlobalNamespace::SIResourceDeposit::ReadDataPUN)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5aec980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.LocalShowPopup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)(::GlobalNamespace::SIPlayer*, ::GlobalNamespace::SIResource_ResourceType, ::GlobalNamespace::SIResource_LimitedDepositType)>(&::GlobalNamespace::SIResourceDeposit::LocalShowPopup)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5aecafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"LocalShowPopup", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.ResourceDeposited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)(::GlobalNamespace::SIResource*)>(&::GlobalNamespace::SIResourceDeposit::ResourceDeposited)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5aecc94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"ResourceDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit.AuthShowPopup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)(::GlobalNamespace::SIResource*)>(&::GlobalNamespace::SIResourceDeposit::AuthShowPopup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x5aecedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"AuthShowPopup", {}, {::i2c::type_of<::GlobalNamespace::SIResource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SIResourceDeposit._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SIResourceDeposit::*)()>(&::GlobalNamespace::SIResourceDeposit::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5aed0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr int32_t const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___index;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___index = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositText;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_depositText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositImage;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_depositImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositImage = value;
}
constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_popupScreen()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_popupScreen() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___popupScreen;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_popupScreen(::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___popupScreen = value;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_superInfection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_superInfection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___superInfection;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___superInfection = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_resourceImageSprites()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceImageSprites;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_resourceImageSprites() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceImageSprites;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_resourceImageSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceImageSprites = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositBin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositBin;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_depositBin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depositBin;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_depositBin(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depositBin = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_resourceDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDisplays;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_resourceDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resourceDisplays;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_resourceDisplays(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resourceDisplays = value;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer>& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netPlayer;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_netPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netPlayer = value;
}
constexpr ::GlobalNamespace::SIResource_ResourceType& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netResourceType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netResourceType;
}
constexpr ::GlobalNamespace::SIResource_ResourceType const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netResourceType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netResourceType;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_netResourceType(::GlobalNamespace::SIResource_ResourceType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netResourceType = value;
}
constexpr ::GlobalNamespace::SIResource_LimitedDepositType& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netLimitedDepositType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netLimitedDepositType;
}
constexpr ::GlobalNamespace::SIResource_LimitedDepositType const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netLimitedDepositType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netLimitedDepositType;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_netLimitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netLimitedDepositType = value;
}
constexpr bool& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netShowPopup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netShowPopup;
}
constexpr bool const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_netShowPopup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___netShowPopup;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_netShowPopup(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___netShowPopup = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_questDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDisplays;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>* const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get_questDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___questDisplays;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set_questDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___questDisplays = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& GlobalNamespace::SIResourceDeposit::__cordl_internal_get__displayResources()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayResources;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& GlobalNamespace::SIResourceDeposit::__cordl_internal_get__displayResources() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____displayResources;
}
constexpr void GlobalNamespace::SIResourceDeposit::__cordl_internal_set__displayResources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____displayResources = value;
}
inline bool GlobalNamespace::SIResourceDeposit::get_IsAuthority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"get_IsAuthority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> GlobalNamespace::SIResourceDeposit::get_SIManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"get_SIManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::SuperInfectionManager>>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceDeposit::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SIResourceDeposit::WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"WriteDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIResourceDeposit::ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"ReadDataPUN", {}, {::i2c::type_of<::Photon::Pun::PhotonStream*>(), ::i2c::type_of<::Photon::Pun::PhotonMessageInfo>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, stream, info);
}
inline void GlobalNamespace::SIResourceDeposit::LocalShowPopup(::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SIResource_ResourceType  resourceType, ::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"LocalShowPopup", {}, {::i2c::type_of<::GlobalNamespace::SIPlayer*>(), ::i2c::type_of<::GlobalNamespace::SIResource_ResourceType>(), ::i2c::type_of<::GlobalNamespace::SIResource_LimitedDepositType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, player, resourceType, limitedDepositType);
}
inline void GlobalNamespace::SIResourceDeposit::ResourceDeposited(::GlobalNamespace::SIResource*  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"ResourceDeposited", {}, {::i2c::type_of<::GlobalNamespace::SIResource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource);
}
inline void GlobalNamespace::SIResourceDeposit::AuthShowPopup(::GlobalNamespace::SIResource*  resource)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {"AuthShowPopup", {}, {::i2c::type_of<::GlobalNamespace::SIResource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resource);
}
inline void GlobalNamespace::SIResourceDeposit::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SIResourceDeposit*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SIResourceDeposit* GlobalNamespace::SIResourceDeposit::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SIResourceDeposit*>());
}
/// @brief Convert operator to "::GlobalNamespace::ISIResourceDeposit"
constexpr  GlobalNamespace::SIResourceDeposit::operator ::GlobalNamespace::ISIResourceDeposit*() noexcept {
return static_cast<::GlobalNamespace::ISIResourceDeposit*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ISIResourceDeposit"
constexpr ::GlobalNamespace::ISIResourceDeposit* GlobalNamespace::SIResourceDeposit::i___GlobalNamespace__ISIResourceDeposit() noexcept {
return static_cast<::GlobalNamespace::ISIResourceDeposit*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SIResourceDeposit::SIResourceDeposit()   {
}

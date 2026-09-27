#pragma once
// IWYU pragma private; include "GlobalNamespace/SIResourceDeposit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIResource_LimitedDepositType_def.hpp"
#include "GlobalNamespace/zzzz__SIResource_ResourceType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIResourceDeposit)
namespace GlobalNamespace {
class DisableGameObjectDelayed;
}
namespace GlobalNamespace {
class ISIResourceDeposit;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
struct SIResource_LimitedDepositType;
}
namespace GlobalNamespace {
struct SIResource_ResourceType;
}
namespace GlobalNamespace {
class SIResource;
}
namespace GlobalNamespace {
class SIUIPlayerQuestDisplay;
}
namespace GlobalNamespace {
class SuperInfectionManager;
}
namespace GlobalNamespace {
class SuperInfection;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIResourceDeposit;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIResourceDeposit*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIResourceDeposit*, "", "SIResourceDeposit");
// Dependencies SIResource::LimitedDepositType, SIResource::ResourceType, UnityEngine.MonoBehaviour, UnityEngine.Sprite, UnityEngine.Transform
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIResourceDeposit
class CORDL_TYPE SIResourceDeposit : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsAuthority)) bool  IsAuthority;

 __declspec(property(get=get_SIManager)) ::UnityW<::GlobalNamespace::SuperInfectionManager>  SIManager;

/// @brief Field _displayResources, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__displayResources, put=__cordl_internal_set__displayResources)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _displayResources;

/// @brief Field depositBin, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositBin, put=__cordl_internal_set_depositBin)) ::UnityW<::UnityEngine::GameObject>  depositBin;

/// @brief Field depositImage, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositImage, put=__cordl_internal_set_depositImage)) ::UnityW<::UnityEngine::UI::Image>  depositImage;

/// @brief Field depositText, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositText, put=__cordl_internal_set_depositText)) ::UnityW<::UnityEngine::UI::Text>  depositText;

/// @brief Field index, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Field netLimitedDepositType, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_netLimitedDepositType, put=__cordl_internal_set_netLimitedDepositType)) ::GlobalNamespace::SIResource_LimitedDepositType  netLimitedDepositType;

/// @brief Field netPlayer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_netPlayer, put=__cordl_internal_set_netPlayer)) ::UnityW<::GlobalNamespace::SIPlayer>  netPlayer;

/// @brief Field netResourceType, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_netResourceType, put=__cordl_internal_set_netResourceType)) ::GlobalNamespace::SIResource_ResourceType  netResourceType;

/// @brief Field netShowPopup, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_netShowPopup, put=__cordl_internal_set_netShowPopup)) bool  netShowPopup;

/// @brief Field popupScreen, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_popupScreen, put=__cordl_internal_set_popupScreen)) ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  popupScreen;

/// @brief Field questDisplays, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_questDisplays, put=__cordl_internal_set_questDisplays)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  questDisplays;

/// @brief Field resourceDisplays, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceDisplays, put=__cordl_internal_set_resourceDisplays)) ::ArrayW<::UnityW<::UnityEngine::Transform>>  resourceDisplays;

/// @brief Field resourceImageSprites, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceImageSprites, put=__cordl_internal_set_resourceImageSprites)) ::ArrayW<::UnityW<::UnityEngine::Sprite>>  resourceImageSprites;

/// @brief Field superInfection, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_superInfection, put=__cordl_internal_set_superInfection)) ::UnityW<::GlobalNamespace::SuperInfection>  superInfection;

/// @brief Convert operator to "::GlobalNamespace::ISIResourceDeposit"
constexpr operator  ::GlobalNamespace::ISIResourceDeposit*() noexcept;

/// @brief Method AuthShowPopup, addr 0x5aecedc, size 0x44, virtual false, abstract: false, final false
inline void AuthShowPopup(::GlobalNamespace::SIResource*  resource) ;

/// @brief Method LocalShowPopup, addr 0x5aecafc, size 0x198, virtual false, abstract: false, final false
inline void LocalShowPopup(::GlobalNamespace::SIPlayer*  player, ::GlobalNamespace::SIResource_ResourceType  resourceType, ::GlobalNamespace::SIResource_LimitedDepositType  limitedDepositType) ;

static inline ::GlobalNamespace::SIResourceDeposit* New_ctor() ;

/// @brief Method OnEnable, addr 0x5aec36c, size 0x4d0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadDataPUN, addr 0x5aec980, size 0x17c, virtual false, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ResourceDeposited, addr 0x5aecc94, size 0x248, virtual true, abstract: false, final true
inline void ResourceDeposited(::GlobalNamespace::SIResource*  resource) ;

/// @brief Method WriteDataPUN, addr 0x5aec83c, size 0x144, virtual false, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__displayResources() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__displayResources() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_depositBin() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_depositBin() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_depositImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_depositImage() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_depositText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_depositText() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr ::GlobalNamespace::SIResource_LimitedDepositType const& __cordl_internal_get_netLimitedDepositType() const;

constexpr ::GlobalNamespace::SIResource_LimitedDepositType& __cordl_internal_get_netLimitedDepositType() ;

constexpr ::UnityW<::GlobalNamespace::SIPlayer> const& __cordl_internal_get_netPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SIPlayer>& __cordl_internal_get_netPlayer() ;

constexpr ::GlobalNamespace::SIResource_ResourceType const& __cordl_internal_get_netResourceType() const;

constexpr ::GlobalNamespace::SIResource_ResourceType& __cordl_internal_get_netResourceType() ;

constexpr bool const& __cordl_internal_get_netShowPopup() const;

constexpr bool& __cordl_internal_get_netShowPopup() ;

constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed> const& __cordl_internal_get_popupScreen() const;

constexpr ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>& __cordl_internal_get_popupScreen() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>* const& __cordl_internal_get_questDisplays() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*& __cordl_internal_get_questDisplays() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& __cordl_internal_get_resourceDisplays() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& __cordl_internal_get_resourceDisplays() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& __cordl_internal_get_resourceImageSprites() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& __cordl_internal_get_resourceImageSprites() ;

constexpr ::UnityW<::GlobalNamespace::SuperInfection> const& __cordl_internal_get_superInfection() const;

constexpr ::UnityW<::GlobalNamespace::SuperInfection>& __cordl_internal_get_superInfection() ;

constexpr void __cordl_internal_set__displayResources(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_depositBin(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_depositImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_depositText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

constexpr void __cordl_internal_set_netLimitedDepositType(::GlobalNamespace::SIResource_LimitedDepositType  value) ;

constexpr void __cordl_internal_set_netPlayer(::UnityW<::GlobalNamespace::SIPlayer>  value) ;

constexpr void __cordl_internal_set_netResourceType(::GlobalNamespace::SIResource_ResourceType  value) ;

constexpr void __cordl_internal_set_netShowPopup(bool  value) ;

constexpr void __cordl_internal_set_popupScreen(::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  value) ;

constexpr void __cordl_internal_set_questDisplays(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  value) ;

constexpr void __cordl_internal_set_resourceDisplays(::ArrayW<::UnityW<::UnityEngine::Transform>>  value) ;

constexpr void __cordl_internal_set_resourceImageSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value) ;

constexpr void __cordl_internal_set_superInfection(::UnityW<::GlobalNamespace::SuperInfection>  value) ;

/// @brief Method .ctor, addr 0x5aed0b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsAuthority, addr 0x5aec320, size 0x34, virtual false, abstract: false, final false
inline bool get_IsAuthority() ;

/// @brief Method get_SIManager, addr 0x5aec354, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SuperInfectionManager> get_SIManager() ;

/// @brief Convert to "::GlobalNamespace::ISIResourceDeposit"
constexpr ::GlobalNamespace::ISIResourceDeposit* i___GlobalNamespace__ISIResourceDeposit() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIResourceDeposit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIResourceDeposit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIResourceDeposit(SIResourceDeposit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIResourceDeposit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIResourceDeposit(SIResourceDeposit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{351};

/// @brief Field index, offset: 0x20, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field depositText, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ___depositText;

/// @brief Field depositImage, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___depositImage;

/// @brief Field popupScreen, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DisableGameObjectDelayed>  ___popupScreen;

/// @brief Field superInfection, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SuperInfection>  ___superInfection;

/// @brief Field resourceImageSprites, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Sprite>>  ___resourceImageSprites;

/// @brief Field depositBin, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___depositBin;

/// [SerializeField]
/// @brief Field resourceDisplays, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Transform>>  ___resourceDisplays;

/// @brief Field netPlayer, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIPlayer>  ___netPlayer;

/// @brief Field netResourceType, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_ResourceType  ___netResourceType;

/// @brief Field netLimitedDepositType, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::SIResource_LimitedDepositType  ___netLimitedDepositType;

/// @brief Field netShowPopup, offset: 0x70, size: 0x1, def value: None
 bool  ___netShowPopup;

/// @brief Field questDisplays, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::SIUIPlayerQuestDisplay>>*  ___questDisplays;

/// @brief Field _displayResources, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____displayResources;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___index) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___depositText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___depositImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___popupScreen) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___superInfection) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___resourceImageSprites) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___depositBin) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___resourceDisplays) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___netPlayer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___netResourceType) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___netLimitedDepositType) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___netShowPopup) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ___questDisplays) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIResourceDeposit, ____displayResources) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIResourceDeposit) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace

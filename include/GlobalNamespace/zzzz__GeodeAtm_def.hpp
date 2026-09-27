#pragma once
// IWYU pragma private; include "GlobalNamespace/GeodeAtm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GeodeAtm)
namespace GlobalNamespace {
struct GeodeAtm_GeodePurchaseSize;
}
namespace GlobalNamespace {
struct GeodeAtm__StartPurchase_d__38;
}
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipGetInventoryResponse;
}
namespace GlobalNamespace {
class MothershipRefreshIAPResponse;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform {
template<typename T>
class Message_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class GeodeAtm;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GeodeAtm*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GeodeAtm*, "", "GeodeAtm");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GeodeAtm
class CORDL_TYPE GeodeAtm : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GeodePurchaseSize = ::GlobalNamespace::GeodeAtm_GeodePurchaseSize;

using _StartPurchase_d__38 = ::GlobalNamespace::GeodeAtm__StartPurchase_d__38;

/// @brief Field MothershipGeodeOfferDisplayIdDev, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipGeodeOfferDisplayIdDev, put=__cordl_internal_set_MothershipGeodeOfferDisplayIdDev)) ::StringW  MothershipGeodeOfferDisplayIdDev;

/// @brief Field MothershipGeodeOfferDisplayIdLive, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipGeodeOfferDisplayIdLive, put=__cordl_internal_set_MothershipGeodeOfferDisplayIdLive)) ::StringW  MothershipGeodeOfferDisplayIdLive;

/// @brief Field MothershipLargeSteamGeodeOfferDisplayIndexDev, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexDev, put=__cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexDev)) int32_t  MothershipLargeSteamGeodeOfferDisplayIndexDev;

/// @brief Field MothershipLargeSteamGeodeOfferDisplayIndexLive, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexLive, put=__cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexLive)) int32_t  MothershipLargeSteamGeodeOfferDisplayIndexLive;

/// @brief Field MothershipMediumSteamGeodeOfferDisplayIndexDev, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexDev, put=__cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexDev)) int32_t  MothershipMediumSteamGeodeOfferDisplayIndexDev;

/// @brief Field MothershipMediumSteamGeodeOfferDisplayIndexLive, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexLive, put=__cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexLive)) int32_t  MothershipMediumSteamGeodeOfferDisplayIndexLive;

/// @brief Field MothershipSmallSteamGeodeOfferDisplayIndexDev, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexDev, put=__cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexDev)) int32_t  MothershipSmallSteamGeodeOfferDisplayIndexDev;

/// @brief Field MothershipSmallSteamGeodeOfferDisplayIndexLive, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexLive, put=__cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexLive)) int32_t  MothershipSmallSteamGeodeOfferDisplayIndexLive;

/// @brief Field MothershipSteamLargeGeodeOfferIdDev, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamLargeGeodeOfferIdDev, put=__cordl_internal_set_MothershipSteamLargeGeodeOfferIdDev)) ::StringW  MothershipSteamLargeGeodeOfferIdDev;

/// @brief Field MothershipSteamLargeGeodeOfferIdLive, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamLargeGeodeOfferIdLive, put=__cordl_internal_set_MothershipSteamLargeGeodeOfferIdLive)) ::StringW  MothershipSteamLargeGeodeOfferIdLive;

/// @brief Field MothershipSteamMediumGeodeOfferIdDev, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamMediumGeodeOfferIdDev, put=__cordl_internal_set_MothershipSteamMediumGeodeOfferIdDev)) ::StringW  MothershipSteamMediumGeodeOfferIdDev;

/// @brief Field MothershipSteamMediumGeodeOfferIdLive, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamMediumGeodeOfferIdLive, put=__cordl_internal_set_MothershipSteamMediumGeodeOfferIdLive)) ::StringW  MothershipSteamMediumGeodeOfferIdLive;

/// @brief Field MothershipSteamSmallGeodeOfferIdDev, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamSmallGeodeOfferIdDev, put=__cordl_internal_set_MothershipSteamSmallGeodeOfferIdDev)) ::StringW  MothershipSteamSmallGeodeOfferIdDev;

/// @brief Field MothershipSteamSmallGeodeOfferIdLive, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_MothershipSteamSmallGeodeOfferIdLive, put=__cordl_internal_set_MothershipSteamSmallGeodeOfferIdLive)) ::StringW  MothershipSteamSmallGeodeOfferIdLive;

/// @brief Field ProcessingGeodePurchase, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ProcessingGeodePurchase, put=setStaticF_ProcessingGeodePurchase)) bool  ProcessingGeodePurchase;

/// @brief Field QuestLargeSku, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_QuestLargeSku, put=__cordl_internal_set_QuestLargeSku)) ::StringW  QuestLargeSku;

/// @brief Field QuestMediumSku, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_QuestMediumSku, put=__cordl_internal_set_QuestMediumSku)) ::StringW  QuestMediumSku;

/// @brief Field QuestSmallSku, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_QuestSmallSku, put=__cordl_internal_set_QuestSmallSku)) ::StringW  QuestSmallSku;

/// @brief Field RiftLargeSku, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_RiftLargeSku, put=__cordl_internal_set_RiftLargeSku)) ::StringW  RiftLargeSku;

/// @brief Field RiftMediumSku, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_RiftMediumSku, put=__cordl_internal_set_RiftMediumSku)) ::StringW  RiftMediumSku;

/// @brief Field RiftSmallSku, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_RiftSmallSku, put=__cordl_internal_set_RiftSmallSku)) ::StringW  RiftSmallSku;

/// @brief Field StatusTexts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatusTexts, put=__cordl_internal_set_StatusTexts)) ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*  StatusTexts;

/// @brief Field fetchedGeodes, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_fetchedGeodes, put=setStaticF_fetchedGeodes)) bool  fetchedGeodes;

/// @brief Field geodes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_geodes, put=setStaticF_geodes)) int32_t  geodes;

/// @brief Field purchaseInFlight, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_purchaseInFlight, put=__cordl_internal_set_purchaseInFlight)) bool  purchaseInFlight;

/// @brief Method GetLocalizedText, addr 0x577ed74, size 0xf0, virtual false, abstract: false, final false
static inline ::StringW GetLocalizedText(::StringW  key, ::StringW  fallback) ;

/// @brief Method GetMetaSku, addr 0x577ed34, size 0x40, virtual false, abstract: false, final false
inline ::StringW GetMetaSku(::GlobalNamespace::GeodeAtm_GeodePurchaseSize  size) ;

/// @brief Method LargePurchase, addr 0x577f59c, size 0x18, virtual false, abstract: false, final false
inline void LargePurchase() ;

/// @brief Method MediumPurchase, addr 0x577f584, size 0x18, virtual false, abstract: false, final false
inline void MediumPurchase() ;

static inline ::GlobalNamespace::GeodeAtm* New_ctor() ;

/// @brief Method OnMetaPurchaseComplete, addr 0x577f0b8, size 0x2c4, virtual false, abstract: false, final false
inline void OnMetaPurchaseComplete(::Oculus::Platform::Message_1<::Oculus::Platform::Models::Purchase*>*  msg) ;

/// @brief Method RefreshGeodeBalance, addr 0x577f37c, size 0x130, virtual false, abstract: false, final false
inline void RefreshGeodeBalance() ;

/// @brief Method SmallPurchase, addr 0x577f56c, size 0x18, virtual false, abstract: false, final false
inline void SmallPurchase() ;

/// [AsyncStateMachine(typeof(GeodeAtm::<StartPurchase>d__38))]
/// @brief Method StartPurchase, addr 0x577f4ac, size 0xc0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartPurchase(::GlobalNamespace::GeodeAtm_GeodePurchaseSize  size) ;

/// @brief Method UpdateStatusText, addr 0x577ee64, size 0x254, virtual false, abstract: false, final false
inline void UpdateStatusText(::StringW  text) ;

/// [CompilerGenerated]
/// @brief Method <OnMetaPurchaseComplete>b__37_0, addr 0x577f5bc, size 0x50, virtual false, abstract: false, final false
inline void _OnMetaPurchaseComplete_b__37_0(::GlobalNamespace::MothershipRefreshIAPResponse*  Result) ;

/// [CompilerGenerated]
/// @brief Method <OnMetaPurchaseComplete>b__37_1, addr 0x577f60c, size 0x264, virtual false, abstract: false, final false
inline void _OnMetaPurchaseComplete_b__37_1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode) ;

/// [CompilerGenerated]
/// @brief Method <RefreshGeodeBalance>b__43_0, addr 0x577f870, size 0x3b0, virtual false, abstract: false, final false
inline void _RefreshGeodeBalance_b__43_0(::GlobalNamespace::MothershipGetInventoryResponse*  Result) ;

/// [CompilerGenerated]
/// @brief Method <RefreshGeodeBalance>b__43_1, addr 0x577fc20, size 0x3a0, virtual false, abstract: false, final false
inline void _RefreshGeodeBalance_b__43_1(::GlobalNamespace::MothershipError*  Error, int32_t  StatusCode) ;

constexpr ::StringW const& __cordl_internal_get_MothershipGeodeOfferDisplayIdDev() const;

constexpr ::StringW& __cordl_internal_get_MothershipGeodeOfferDisplayIdDev() ;

constexpr ::StringW const& __cordl_internal_get_MothershipGeodeOfferDisplayIdLive() const;

constexpr ::StringW& __cordl_internal_get_MothershipGeodeOfferDisplayIdLive() ;

constexpr int32_t const& __cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexDev() const;

constexpr int32_t& __cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexDev() ;

constexpr int32_t const& __cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexLive() const;

constexpr int32_t& __cordl_internal_get_MothershipLargeSteamGeodeOfferDisplayIndexLive() ;

constexpr int32_t const& __cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexDev() const;

constexpr int32_t& __cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexDev() ;

constexpr int32_t const& __cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexLive() const;

constexpr int32_t& __cordl_internal_get_MothershipMediumSteamGeodeOfferDisplayIndexLive() ;

constexpr int32_t const& __cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexDev() const;

constexpr int32_t& __cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexDev() ;

constexpr int32_t const& __cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexLive() const;

constexpr int32_t& __cordl_internal_get_MothershipSmallSteamGeodeOfferDisplayIndexLive() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamLargeGeodeOfferIdDev() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamLargeGeodeOfferIdDev() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamLargeGeodeOfferIdLive() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamLargeGeodeOfferIdLive() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamMediumGeodeOfferIdDev() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamMediumGeodeOfferIdDev() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamMediumGeodeOfferIdLive() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamMediumGeodeOfferIdLive() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamSmallGeodeOfferIdDev() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamSmallGeodeOfferIdDev() ;

constexpr ::StringW const& __cordl_internal_get_MothershipSteamSmallGeodeOfferIdLive() const;

constexpr ::StringW& __cordl_internal_get_MothershipSteamSmallGeodeOfferIdLive() ;

constexpr ::StringW const& __cordl_internal_get_QuestLargeSku() const;

constexpr ::StringW& __cordl_internal_get_QuestLargeSku() ;

constexpr ::StringW const& __cordl_internal_get_QuestMediumSku() const;

constexpr ::StringW& __cordl_internal_get_QuestMediumSku() ;

constexpr ::StringW const& __cordl_internal_get_QuestSmallSku() const;

constexpr ::StringW& __cordl_internal_get_QuestSmallSku() ;

constexpr ::StringW const& __cordl_internal_get_RiftLargeSku() const;

constexpr ::StringW& __cordl_internal_get_RiftLargeSku() ;

constexpr ::StringW const& __cordl_internal_get_RiftMediumSku() const;

constexpr ::StringW& __cordl_internal_get_RiftMediumSku() ;

constexpr ::StringW const& __cordl_internal_get_RiftSmallSku() const;

constexpr ::StringW& __cordl_internal_get_RiftSmallSku() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>* const& __cordl_internal_get_StatusTexts() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*& __cordl_internal_get_StatusTexts() ;

constexpr bool const& __cordl_internal_get_purchaseInFlight() const;

constexpr bool& __cordl_internal_get_purchaseInFlight() ;

constexpr void __cordl_internal_set_MothershipGeodeOfferDisplayIdDev(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipGeodeOfferDisplayIdLive(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexDev(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipLargeSteamGeodeOfferDisplayIndexLive(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexDev(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipMediumSteamGeodeOfferDisplayIndexLive(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexDev(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipSmallSteamGeodeOfferDisplayIndexLive(int32_t  value) ;

constexpr void __cordl_internal_set_MothershipSteamLargeGeodeOfferIdDev(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipSteamLargeGeodeOfferIdLive(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipSteamMediumGeodeOfferIdDev(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipSteamMediumGeodeOfferIdLive(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipSteamSmallGeodeOfferIdDev(::StringW  value) ;

constexpr void __cordl_internal_set_MothershipSteamSmallGeodeOfferIdLive(::StringW  value) ;

constexpr void __cordl_internal_set_QuestLargeSku(::StringW  value) ;

constexpr void __cordl_internal_set_QuestMediumSku(::StringW  value) ;

constexpr void __cordl_internal_set_QuestSmallSku(::StringW  value) ;

constexpr void __cordl_internal_set_RiftLargeSku(::StringW  value) ;

constexpr void __cordl_internal_set_RiftMediumSku(::StringW  value) ;

constexpr void __cordl_internal_set_RiftSmallSku(::StringW  value) ;

constexpr void __cordl_internal_set_StatusTexts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*  value) ;

constexpr void __cordl_internal_set_purchaseInFlight(bool  value) ;

/// @brief Method .ctor, addr 0x577f5b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ProcessingGeodePurchase() ;

static inline bool getStaticF_fetchedGeodes() ;

static inline int32_t getStaticF_geodes() ;

static inline void setStaticF_ProcessingGeodePurchase(bool  value) ;

static inline void setStaticF_fetchedGeodes(bool  value) ;

static inline void setStaticF_geodes(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GeodeAtm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GeodeAtm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GeodeAtm(GeodeAtm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GeodeAtm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GeodeAtm(GeodeAtm const& ) = delete;

/// @brief Field BALANCE_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  BALANCE_ERROR_KEY{u"GEODE_ATM_BALANCE_ERROR"};

/// @brief Field BALANCE_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  BALANCE_KEY{u"GEODE_ATM_BALANCE"};

/// @brief Field BALANCE_LOADING_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  BALANCE_LOADING_KEY{u"GEODE_ATM_BALANCE_LOADING"};

/// @brief Field GEODE_ATM_PREFIX offset 0xffffffff size 0x8
static constexpr ::ConstString  GEODE_ATM_PREFIX{u"GEODE_ATM_"};

/// @brief Field PURCHASE_CANCELLED_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_CANCELLED_KEY{u"GEODE_ATM_PURCHASE_CANCELLED"};

/// @brief Field PURCHASE_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_ERROR_KEY{u"GEODE_ATM_PURCHASE_ERROR"};

/// @brief Field PURCHASE_FINALIZE_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_FINALIZE_ERROR_KEY{u"GEODE_ATM_PURCHASE_FINALIZE_ERROR"};

/// @brief Field PURCHASE_IN_PROGRESS_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_IN_PROGRESS_KEY{u"GEODE_ATM_PURCHASE_IN_PROGRESS"};

/// @brief Field PURCHASE_META_ERROR_KEY offset 0xffffffff size 0x8
static constexpr ::ConstString  PURCHASE_META_ERROR_KEY{u"GEODE_ATM_PURCHASE_META_ERROR"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1397};

/// [SerializeField]
/// @brief Field StatusTexts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshPro>>*  ___StatusTexts;

/// [Header("Global Storefront Info")]
/// [SerializeField]
/// @brief Field MothershipGeodeOfferDisplayIdLive, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___MothershipGeodeOfferDisplayIdLive;

/// [SerializeField]
/// @brief Field MothershipGeodeOfferDisplayIdDev, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___MothershipGeodeOfferDisplayIdDev;

/// [Header("Small Geode Offer")]
/// [SerializeField]
/// @brief Field QuestSmallSku, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___QuestSmallSku;

/// [SerializeField]
/// @brief Field RiftSmallSku, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___RiftSmallSku;

/// [SerializeField]
/// @brief Field MothershipSteamSmallGeodeOfferIdLive, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___MothershipSteamSmallGeodeOfferIdLive;

/// [SerializeField]
/// @brief Field MothershipSteamSmallGeodeOfferIdDev, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___MothershipSteamSmallGeodeOfferIdDev;

/// [SerializeField]
/// @brief Field MothershipSmallSteamGeodeOfferDisplayIndexLive, offset: 0x58, size: 0x4, def value: None
 int32_t  ___MothershipSmallSteamGeodeOfferDisplayIndexLive;

/// [SerializeField]
/// @brief Field MothershipSmallSteamGeodeOfferDisplayIndexDev, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___MothershipSmallSteamGeodeOfferDisplayIndexDev;

/// [Header("Medium Geode Offer")]
/// [SerializeField]
/// @brief Field QuestMediumSku, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___QuestMediumSku;

/// [SerializeField]
/// @brief Field RiftMediumSku, offset: 0x68, size: 0x8, def value: None
 ::StringW  ___RiftMediumSku;

/// [SerializeField]
/// @brief Field MothershipSteamMediumGeodeOfferIdLive, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___MothershipSteamMediumGeodeOfferIdLive;

/// [SerializeField]
/// @brief Field MothershipSteamMediumGeodeOfferIdDev, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___MothershipSteamMediumGeodeOfferIdDev;

/// [SerializeField]
/// @brief Field MothershipMediumSteamGeodeOfferDisplayIndexLive, offset: 0x80, size: 0x4, def value: None
 int32_t  ___MothershipMediumSteamGeodeOfferDisplayIndexLive;

/// [SerializeField]
/// @brief Field MothershipMediumSteamGeodeOfferDisplayIndexDev, offset: 0x84, size: 0x4, def value: None
 int32_t  ___MothershipMediumSteamGeodeOfferDisplayIndexDev;

/// [Header("Large Geode Offer")]
/// [SerializeField]
/// @brief Field QuestLargeSku, offset: 0x88, size: 0x8, def value: None
 ::StringW  ___QuestLargeSku;

/// [SerializeField]
/// @brief Field RiftLargeSku, offset: 0x90, size: 0x8, def value: None
 ::StringW  ___RiftLargeSku;

/// [SerializeField]
/// @brief Field MothershipSteamLargeGeodeOfferIdLive, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___MothershipSteamLargeGeodeOfferIdLive;

/// [SerializeField]
/// @brief Field MothershipSteamLargeGeodeOfferIdDev, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___MothershipSteamLargeGeodeOfferIdDev;

/// [SerializeField]
/// @brief Field MothershipLargeSteamGeodeOfferDisplayIndexLive, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___MothershipLargeSteamGeodeOfferDisplayIndexLive;

/// [SerializeField]
/// @brief Field MothershipLargeSteamGeodeOfferDisplayIndexDev, offset: 0xac, size: 0x4, def value: None
 int32_t  ___MothershipLargeSteamGeodeOfferDisplayIndexDev;

/// @brief Field purchaseInFlight, offset: 0xb0, size: 0x1, def value: None
 bool  ___purchaseInFlight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___StatusTexts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipGeodeOfferDisplayIdLive) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipGeodeOfferDisplayIdDev) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___QuestSmallSku) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___RiftSmallSku) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamSmallGeodeOfferIdLive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamSmallGeodeOfferIdDev) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSmallSteamGeodeOfferDisplayIndexLive) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSmallSteamGeodeOfferDisplayIndexDev) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___QuestMediumSku) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___RiftMediumSku) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamMediumGeodeOfferIdLive) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamMediumGeodeOfferIdDev) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipMediumSteamGeodeOfferDisplayIndexLive) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipMediumSteamGeodeOfferDisplayIndexDev) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___QuestLargeSku) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___RiftLargeSku) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamLargeGeodeOfferIdLive) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipSteamLargeGeodeOfferIdDev) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipLargeSteamGeodeOfferDisplayIndexLive) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___MothershipLargeSteamGeodeOfferDisplayIndexDev) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GeodeAtm, ___purchaseInFlight) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GeodeAtm) == 0xb8, "Size mismatch!");

} // namespace end def GlobalNamespace

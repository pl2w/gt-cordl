#pragma once
// IWYU pragma private; include "GlobalNamespace/GRDistillery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRDistillery)
namespace GlobalNamespace {
class ApplyMaterialProperty;
}
namespace GlobalNamespace {
class GRCurrencyDepositor;
}
namespace GlobalNamespace {
class GhostReactor;
}
namespace System {
struct DateTime;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GRDistillery;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRDistillery*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRDistillery*, "", "GRDistillery");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRDistillery
class CORDL_TYPE GRDistillery : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _applyMaterialCurrentResearch, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterialCurrentResearch, put=__cordl_internal_set__applyMaterialCurrentResearch)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterialCurrentResearch;

/// @brief Field _applyMaterialgauge1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterialgauge1, put=__cordl_internal_set__applyMaterialgauge1)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterialgauge1;

/// @brief Field _applyMaterialgauge2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterialgauge2, put=__cordl_internal_set__applyMaterialgauge2)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterialgauge2;

/// @brief Field _applyMaterialgauge3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterialgauge3, put=__cordl_internal_set__applyMaterialgauge3)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterialgauge3;

/// @brief Field _applyMaterialgauge4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__applyMaterialgauge4, put=__cordl_internal_set__applyMaterialgauge4)) ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  _applyMaterialgauge4;

/// @brief Field bFillingGauge, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_bFillingGauge, put=__cordl_internal_set_bFillingGauge)) bool  bFillingGauge;

/// @brief Field bProcessing, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_bProcessing, put=__cordl_internal_set_bProcessing)) bool  bProcessing;

/// @brief Field cores, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_cores, put=__cordl_internal_set_cores)) int32_t  cores;

/// @brief Field currentGaugeCore, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentGaugeCore, put=__cordl_internal_set_currentGaugeCore)) int32_t  currentGaugeCore;

/// @brief Field currentGaugeFillAmount, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentGaugeFillAmount, put=__cordl_internal_set_currentGaugeFillAmount)) float_t  currentGaugeFillAmount;

/// @brief Field currentResearchPoints, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentResearchPoints, put=__cordl_internal_set_currentResearchPoints)) ::UnityW<::TMPro::TextMeshPro>  currentResearchPoints;

/// @brief Field depositClosePosition, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositClosePosition, put=__cordl_internal_set_depositClosePosition)) ::UnityW<::UnityEngine::Transform>  depositClosePosition;

/// @brief Field depositDoor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositDoor, put=__cordl_internal_set_depositDoor)) ::UnityW<::UnityEngine::GameObject>  depositDoor;

/// @brief Field depositDoorCloseSpeed, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_depositDoorCloseSpeed, put=__cordl_internal_set_depositDoorCloseSpeed)) float_t  depositDoorCloseSpeed;

/// @brief Field depositOpenPosition, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_depositOpenPosition, put=__cordl_internal_set_depositOpenPosition)) ::UnityW<::UnityEngine::Transform>  depositOpenPosition;

/// @brief Field feedbackSound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_feedbackSound, put=__cordl_internal_set_feedbackSound)) ::UnityW<::UnityEngine::AudioSource>  feedbackSound;

/// @brief Field fillTime, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillTime, put=__cordl_internal_set_fillTime)) float_t  fillTime;

/// @brief Field firstUpdate, offset 0xdc, size 0x1 
 __declspec(property(get=__cordl_internal_get_firstUpdate, put=__cordl_internal_set_firstUpdate)) bool  firstUpdate;

/// @brief Field gaugeDrainTime, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gaugeDrainTime, put=__cordl_internal_set_gaugeDrainTime)) float_t  gaugeDrainTime;

/// @brief Field gaugeEmptyFillAmount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_gaugeEmptyFillAmount, put=__cordl_internal_set_gaugeEmptyFillAmount)) float_t  gaugeEmptyFillAmount;

/// @brief Field gaugeFullFillAmount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_gaugeFullFillAmount, put=__cordl_internal_set_gaugeFullFillAmount)) float_t  gaugeFullFillAmount;

/// @brief Field gaugesFill, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_gaugesFill, put=__cordl_internal_set_gaugesFill)) ::ArrayW<float_t>  gaugesFill;

/// @brief Field maxCores, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxCores, put=__cordl_internal_set_maxCores)) int32_t  maxCores;

/// @brief Field reactor, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_reactor, put=__cordl_internal_set_reactor)) ::UnityW<::GlobalNamespace::GhostReactor>  reactor;

/// @brief Field remaingTime, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_remaingTime, put=__cordl_internal_set_remaingTime)) double_t  remaingTime;

/// @brief Field researchGaugeEmptyFillAmount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_researchGaugeEmptyFillAmount, put=__cordl_internal_set_researchGaugeEmptyFillAmount)) float_t  researchGaugeEmptyFillAmount;

/// @brief Field researchGaugeFill, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_researchGaugeFill, put=__cordl_internal_set_researchGaugeFill)) float_t  researchGaugeFill;

/// @brief Field researchGaugeFullFillAmount, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_researchGaugeFullFillAmount, put=__cordl_internal_set_researchGaugeFullFillAmount)) float_t  researchGaugeFullFillAmount;

/// @brief Field secondsToResearchACore, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_secondsToResearchACore, put=__cordl_internal_set_secondsToResearchACore)) int32_t  secondsToResearchACore;

/// @brief Field sentientCoreDeposit, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sentientCoreDeposit, put=__cordl_internal_set_sentientCoreDeposit)) ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  sentientCoreDeposit;

/// @brief Field startTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startTime, put=__cordl_internal_set_startTime)) ::System::DateTime  startTime;

/// @brief Method CalculateRemaining, addr 0x587693c, size 0x10c, virtual false, abstract: false, final false
inline double_t CalculateRemaining() ;

/// @brief Method CompleteResearchingCore, addr 0x5876c00, size 0x178, virtual false, abstract: false, final false
inline void CompleteResearchingCore() ;

/// @brief Method DebugFinishDistill, addr 0x5877370, size 0x4, virtual false, abstract: false, final false
inline void DebugFinishDistill() ;

/// @brief Method DepositCore, addr 0x58772d4, size 0x9c, virtual false, abstract: false, final false
inline void DepositCore() ;

/// @brief Method FirstUpdate, addr 0x5876a48, size 0x1b8, virtual false, abstract: false, final false
inline void FirstUpdate() ;

/// @brief Method Init, addr 0x58765cc, size 0x98, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::GhostReactor*  reactor) ;

/// @brief Method InitializeGauges, addr 0x5876770, size 0x84, virtual false, abstract: false, final false
inline void InitializeGauges() ;

static inline ::GlobalNamespace::GRDistillery* New_ctor() ;

/// @brief Method OnEnable, addr 0x5877374, size 0x118, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method RestoreStartTime, addr 0x5876664, size 0x10c, virtual false, abstract: false, final false
inline void RestoreStartTime() ;

/// @brief Method SaveStartTime, addr 0x58767f4, size 0xa4, virtual false, abstract: false, final false
inline void SaveStartTime(::System::DateTime  time) ;

/// @brief Method StartResearch, addr 0x5876898, size 0xa4, virtual false, abstract: false, final false
inline void StartResearch() ;

/// @brief Method Update, addr 0x5877094, size 0x60, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateDoorPosition, addr 0x58770f4, size 0x1e0, virtual false, abstract: false, final false
inline void UpdateDoorPosition() ;

/// @brief Method UpdateGauges, addr 0x5876d78, size 0x31c, virtual false, abstract: false, final false
inline void UpdateGauges() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterialCurrentResearch() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterialCurrentResearch() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterialgauge1() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterialgauge1() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterialgauge2() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterialgauge2() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterialgauge3() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterialgauge3() ;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty> const& __cordl_internal_get__applyMaterialgauge4() const;

constexpr ::UnityW<::GlobalNamespace::ApplyMaterialProperty>& __cordl_internal_get__applyMaterialgauge4() ;

constexpr bool const& __cordl_internal_get_bFillingGauge() const;

constexpr bool& __cordl_internal_get_bFillingGauge() ;

constexpr bool const& __cordl_internal_get_bProcessing() const;

constexpr bool& __cordl_internal_get_bProcessing() ;

constexpr int32_t const& __cordl_internal_get_cores() const;

constexpr int32_t& __cordl_internal_get_cores() ;

constexpr int32_t const& __cordl_internal_get_currentGaugeCore() const;

constexpr int32_t& __cordl_internal_get_currentGaugeCore() ;

constexpr float_t const& __cordl_internal_get_currentGaugeFillAmount() const;

constexpr float_t& __cordl_internal_get_currentGaugeFillAmount() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_currentResearchPoints() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_currentResearchPoints() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositClosePosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositClosePosition() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_depositDoor() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_depositDoor() ;

constexpr float_t const& __cordl_internal_get_depositDoorCloseSpeed() const;

constexpr float_t& __cordl_internal_get_depositDoorCloseSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_depositOpenPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_depositOpenPosition() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_feedbackSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_feedbackSound() ;

constexpr float_t const& __cordl_internal_get_fillTime() const;

constexpr float_t& __cordl_internal_get_fillTime() ;

constexpr bool const& __cordl_internal_get_firstUpdate() const;

constexpr bool& __cordl_internal_get_firstUpdate() ;

constexpr float_t const& __cordl_internal_get_gaugeDrainTime() const;

constexpr float_t& __cordl_internal_get_gaugeDrainTime() ;

constexpr float_t const& __cordl_internal_get_gaugeEmptyFillAmount() const;

constexpr float_t& __cordl_internal_get_gaugeEmptyFillAmount() ;

constexpr float_t const& __cordl_internal_get_gaugeFullFillAmount() const;

constexpr float_t& __cordl_internal_get_gaugeFullFillAmount() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_gaugesFill() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_gaugesFill() ;

constexpr int32_t const& __cordl_internal_get_maxCores() const;

constexpr int32_t& __cordl_internal_get_maxCores() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactor> const& __cordl_internal_get_reactor() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactor>& __cordl_internal_get_reactor() ;

constexpr double_t const& __cordl_internal_get_remaingTime() const;

constexpr double_t& __cordl_internal_get_remaingTime() ;

constexpr float_t const& __cordl_internal_get_researchGaugeEmptyFillAmount() const;

constexpr float_t& __cordl_internal_get_researchGaugeEmptyFillAmount() ;

constexpr float_t const& __cordl_internal_get_researchGaugeFill() const;

constexpr float_t& __cordl_internal_get_researchGaugeFill() ;

constexpr float_t const& __cordl_internal_get_researchGaugeFullFillAmount() const;

constexpr float_t& __cordl_internal_get_researchGaugeFullFillAmount() ;

constexpr int32_t const& __cordl_internal_get_secondsToResearchACore() const;

constexpr int32_t& __cordl_internal_get_secondsToResearchACore() ;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor> const& __cordl_internal_get_sentientCoreDeposit() const;

constexpr ::UnityW<::GlobalNamespace::GRCurrencyDepositor>& __cordl_internal_get_sentientCoreDeposit() ;

constexpr ::System::DateTime const& __cordl_internal_get_startTime() const;

constexpr ::System::DateTime& __cordl_internal_get_startTime() ;

constexpr void __cordl_internal_set__applyMaterialCurrentResearch(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set__applyMaterialgauge1(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set__applyMaterialgauge2(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set__applyMaterialgauge3(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set__applyMaterialgauge4(::UnityW<::GlobalNamespace::ApplyMaterialProperty>  value) ;

constexpr void __cordl_internal_set_bFillingGauge(bool  value) ;

constexpr void __cordl_internal_set_bProcessing(bool  value) ;

constexpr void __cordl_internal_set_cores(int32_t  value) ;

constexpr void __cordl_internal_set_currentGaugeCore(int32_t  value) ;

constexpr void __cordl_internal_set_currentGaugeFillAmount(float_t  value) ;

constexpr void __cordl_internal_set_currentResearchPoints(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_depositClosePosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_depositDoor(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_depositDoorCloseSpeed(float_t  value) ;

constexpr void __cordl_internal_set_depositOpenPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_feedbackSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_fillTime(float_t  value) ;

constexpr void __cordl_internal_set_firstUpdate(bool  value) ;

constexpr void __cordl_internal_set_gaugeDrainTime(float_t  value) ;

constexpr void __cordl_internal_set_gaugeEmptyFillAmount(float_t  value) ;

constexpr void __cordl_internal_set_gaugeFullFillAmount(float_t  value) ;

constexpr void __cordl_internal_set_gaugesFill(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_maxCores(int32_t  value) ;

constexpr void __cordl_internal_set_reactor(::UnityW<::GlobalNamespace::GhostReactor>  value) ;

constexpr void __cordl_internal_set_remaingTime(double_t  value) ;

constexpr void __cordl_internal_set_researchGaugeEmptyFillAmount(float_t  value) ;

constexpr void __cordl_internal_set_researchGaugeFill(float_t  value) ;

constexpr void __cordl_internal_set_researchGaugeFullFillAmount(float_t  value) ;

constexpr void __cordl_internal_set_secondsToResearchACore(int32_t  value) ;

constexpr void __cordl_internal_set_sentientCoreDeposit(::UnityW<::GlobalNamespace::GRCurrencyDepositor>  value) ;

constexpr void __cordl_internal_set_startTime(::System::DateTime  value) ;

/// @brief Method .ctor, addr 0x587748c, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRDistillery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRDistillery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRDistillery(GRDistillery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRDistillery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRDistillery(GRDistillery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1906};

/// @brief Field grDistilleryCorePrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  grDistilleryCorePrefsKey{u"_grDistilleryCore"};

/// @brief Field grDistilleryStartTimePrefsKey offset 0xffffffff size 0x8
static constexpr ::ConstString  grDistilleryStartTimePrefsKey{u"_grDistilleryStartTime"};

/// [SerializeField]
/// @brief Field sentientCoreDeposit, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRCurrencyDepositor>  ___sentientCoreDeposit;

/// [SerializeField]
/// @brief Field _applyMaterialgauge1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterialgauge1;

/// [SerializeField]
/// @brief Field _applyMaterialgauge2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterialgauge2;

/// [SerializeField]
/// @brief Field _applyMaterialgauge3, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterialgauge3;

/// [SerializeField]
/// @brief Field _applyMaterialgauge4, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterialgauge4;

/// [SerializeField]
/// @brief Field _applyMaterialCurrentResearch, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ApplyMaterialProperty>  ____applyMaterialCurrentResearch;

/// [FormerlySerializedAs("emptyFillAmount")]
/// @brief Field gaugeEmptyFillAmount, offset: 0x50, size: 0x4, def value: None
 float_t  ___gaugeEmptyFillAmount;

/// [FormerlySerializedAs("fullFillAmount")]
/// @brief Field gaugeFullFillAmount, offset: 0x54, size: 0x4, def value: None
 float_t  ___gaugeFullFillAmount;

/// [SerializeField]
/// @brief Field depositClosePosition, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositClosePosition;

/// [SerializeField]
/// @brief Field depositOpenPosition, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___depositOpenPosition;

/// [SerializeField]
/// @brief Field depositDoor, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___depositDoor;

/// [SerializeField]
/// @brief Field depositDoorCloseSpeed, offset: 0x70, size: 0x4, def value: None
 float_t  ___depositDoorCloseSpeed;

/// [SerializeField]
/// @brief Field currentResearchPoints, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___currentResearchPoints;

/// @brief Field researchGaugeEmptyFillAmount, offset: 0x80, size: 0x4, def value: None
 float_t  ___researchGaugeEmptyFillAmount;

/// @brief Field researchGaugeFullFillAmount, offset: 0x84, size: 0x4, def value: None
 float_t  ___researchGaugeFullFillAmount;

/// @brief Field secondsToResearchACore, offset: 0x88, size: 0x4, def value: None
 int32_t  ___secondsToResearchACore;

/// @brief Field gaugeDrainTime, offset: 0x8c, size: 0x4, def value: None
 float_t  ___gaugeDrainTime;

/// @brief Field maxCores, offset: 0x90, size: 0x4, def value: None
 int32_t  ___maxCores;

/// @brief Field feedbackSound, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___feedbackSound;

/// @brief Field startTime, offset: 0xa0, size: 0x8, def value: None
 ::System::DateTime  ___startTime;

/// @brief Field bProcessing, offset: 0xa8, size: 0x1, def value: None
 bool  ___bProcessing;

/// @brief Field cores, offset: 0xac, size: 0x4, def value: None
 int32_t  ___cores;

/// @brief Field bFillingGauge, offset: 0xb0, size: 0x1, def value: None
 bool  ___bFillingGauge;

/// @brief Field currentGaugeCore, offset: 0xb4, size: 0x4, def value: None
 int32_t  ___currentGaugeCore;

/// @brief Field currentGaugeFillAmount, offset: 0xb8, size: 0x4, def value: None
 float_t  ___currentGaugeFillAmount;

/// @brief Field remaingTime, offset: 0xc0, size: 0x8, def value: None
 double_t  ___remaingTime;

/// @brief Field fillTime, offset: 0xc8, size: 0x4, def value: None
 float_t  ___fillTime;

/// @brief Field gaugesFill, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___gaugesFill;

/// @brief Field researchGaugeFill, offset: 0xd8, size: 0x4, def value: None
 float_t  ___researchGaugeFill;

/// @brief Field firstUpdate, offset: 0xdc, size: 0x1, def value: None
 bool  ___firstUpdate;

/// @brief Field reactor, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactor>  ___reactor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRDistillery, ___sentientCoreDeposit) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ____applyMaterialgauge1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ____applyMaterialgauge2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ____applyMaterialgauge3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ____applyMaterialgauge4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ____applyMaterialCurrentResearch) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___gaugeEmptyFillAmount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___gaugeFullFillAmount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___depositClosePosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___depositOpenPosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___depositDoor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___depositDoorCloseSpeed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___currentResearchPoints) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___researchGaugeEmptyFillAmount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___researchGaugeFullFillAmount) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___secondsToResearchACore) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___gaugeDrainTime) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___maxCores) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___feedbackSound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___startTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___bProcessing) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___cores) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___bFillingGauge) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___currentGaugeCore) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___currentGaugeFillAmount) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___remaingTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___fillTime) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___gaugesFill) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___researchGaugeFill) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___firstUpdate) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRDistillery, ___reactor) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRDistillery) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace

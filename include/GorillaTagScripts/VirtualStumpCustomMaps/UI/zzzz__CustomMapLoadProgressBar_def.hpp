#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/UI/CustomMapLoadProgressBar.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_BarState_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/UI/zzzz__CustomMapLoadProgressBar_FillAxis_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapLoadProgressBar)
namespace GlobalNamespace {
struct CustomMapLoadProgressBar_BarState;
}
namespace GlobalNamespace {
struct CustomMapLoadProgressBar_FillAxis;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
}
namespace System::Text {
class StringBuilder;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
class CustomMapLoadProgressBar;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar*, "GorillaTagScripts.VirtualStumpCustomMaps.UI", "CustomMapLoadProgressBar");
// Dependencies GorillaTagScripts.VirtualStumpCustomMaps.MapLoadStatus, GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapLoadProgressBar::BarState, GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapLoadProgressBar::FillAxis, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps::UI {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.UI.CustomMapLoadProgressBar
class CORDL_TYPE CustomMapLoadProgressBar : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BarState = ::GlobalNamespace::CustomMapLoadProgressBar_BarState;

using FillAxis = ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis;

 __declspec(property(get=get_DetailMessage)) ::StringW  DetailMessage;

 __declspec(property(get=get_DisplayedProgress)) float_t  DisplayedProgress;

 __declspec(property(get=get_HasMeasurablePercent, put=set_HasMeasurablePercent)) bool  HasMeasurablePercent;

 __declspec(property(get=get_NormalizedProgress)) float_t  NormalizedProgress;

 __declspec(property(get=get_PercentComplete, put=set_PercentComplete)) int32_t  PercentComplete;

 __declspec(property(get=get_Phase, put=set_Phase)) ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  Phase;

/// @brief Field SharedStringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SharedStringBuilder, put=setStaticF_SharedStringBuilder)) ::System::Text::StringBuilder*  SharedStringBuilder;

 __declspec(property(get=get_State, put=set_State)) ::GlobalNamespace::CustomMapLoadProgressBar_BarState  State;

/// @brief Field <HasMeasurablePercent>k__BackingField, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasMeasurablePercent_k__BackingField, put=__cordl_internal_set__HasMeasurablePercent_k__BackingField)) bool  _HasMeasurablePercent_k__BackingField;

/// @brief Field <PercentComplete>k__BackingField, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__PercentComplete_k__BackingField, put=__cordl_internal_set__PercentComplete_k__BackingField)) int32_t  _PercentComplete_k__BackingField;

/// @brief Field <Phase>k__BackingField, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__Phase_k__BackingField, put=__cordl_internal_set__Phase_k__BackingField)) ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  _Phase_k__BackingField;

/// @brief Field <State>k__BackingField, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__State_k__BackingField, put=__cordl_internal_set__State_k__BackingField)) ::GlobalNamespace::CustomMapLoadProgressBar_BarState  _State_k__BackingField;

/// @brief Field contentRoot, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_contentRoot, put=__cordl_internal_set_contentRoot)) ::UnityW<::UnityEngine::GameObject>  contentRoot;

/// @brief Field detailLabel, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailLabel, put=__cordl_internal_set_detailLabel)) ::UnityW<::TMPro::TMP_Text>  detailLabel;

/// @brief Field detailTextWithoutEllipsis, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_detailTextWithoutEllipsis, put=__cordl_internal_set_detailTextWithoutEllipsis)) ::StringW  detailTextWithoutEllipsis;

/// @brief Field displayedFill, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_displayedFill, put=__cordl_internal_set_displayedFill)) float_t  displayedFill;

/// @brief Field downloadingString, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_downloadingString, put=__cordl_internal_set_downloadingString)) ::StringW  downloadingString;

/// @brief Field ellipsisDotCount, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_ellipsisDotCount, put=__cordl_internal_set_ellipsisDotCount)) int32_t  ellipsisDotCount;

/// @brief Field ellipsisSecondsPerDot, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_ellipsisSecondsPerDot, put=__cordl_internal_set_ellipsisSecondsPerDot)) float_t  ellipsisSecondsPerDot;

/// @brief Field failedColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_failedColor, put=__cordl_internal_set_failedColor)) ::UnityEngine::Color  failedColor;

/// @brief Field failedString, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_failedString, put=__cordl_internal_set_failedString)) ::StringW  failedString;

/// @brief Field fillAxis, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillAxis, put=__cordl_internal_set_fillAxis)) ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis  fillAxis;

/// @brief Field fillColorPropertyId, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillColorPropertyId, put=__cordl_internal_set_fillColorPropertyId)) int32_t  fillColorPropertyId;

/// @brief Field fillColorPropertyName, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillColorPropertyName, put=__cordl_internal_set_fillColorPropertyName)) ::StringW  fillColorPropertyName;

/// @brief Field fillLerpSpeed, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_fillLerpSpeed, put=__cordl_internal_set_fillLerpSpeed)) float_t  fillLerpSpeed;

/// @brief Field fillPropertyBlock, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillPropertyBlock, put=__cordl_internal_set_fillPropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  fillPropertyBlock;

/// @brief Field fillRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillRenderer, put=__cordl_internal_set_fillRenderer)) ::UnityW<::UnityEngine::Renderer>  fillRenderer;

/// @brief Field fillTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_fillTransform, put=__cordl_internal_set_fillTransform)) ::UnityW<::UnityEngine::Transform>  fillTransform;

/// @brief Field finished, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_finished, put=__cordl_internal_set_finished)) bool  finished;

/// @brief Field finishedAtTime, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_finishedAtTime, put=__cordl_internal_set_finishedAtTime)) float_t  finishedAtTime;

/// @brief Field hideDelayAfterFinished, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_hideDelayAfterFinished, put=__cordl_internal_set_hideDelayAfterFinished)) float_t  hideDelayAfterFinished;

/// @brief Field installingString, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_installingString, put=__cordl_internal_set_installingString)) ::StringW  installingString;

/// @brief Field loadingString, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadingString, put=__cordl_internal_set_loadingString)) ::StringW  loadingString;

/// @brief Field percentLabel, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_percentLabel, put=__cordl_internal_set_percentLabel)) ::UnityW<::TMPro::TMP_Text>  percentLabel;

/// @brief Field preparingString, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_preparingString, put=__cordl_internal_set_preparingString)) ::StringW  preparingString;

/// @brief Field readyColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_readyColor, put=__cordl_internal_set_readyColor)) ::UnityEngine::Color  readyColor;

/// @brief Field readyDetailString, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_readyDetailString, put=__cordl_internal_set_readyDetailString)) ::StringW  readyDetailString;

/// @brief Field readyString, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_readyString, put=__cordl_internal_set_readyString)) ::StringW  readyString;

/// @brief Field showEllipsis, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get_showEllipsis, put=__cordl_internal_set_showEllipsis)) bool  showEllipsis;

/// @brief Field statusLabel, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_statusLabel, put=__cordl_internal_set_statusLabel)) ::UnityW<::TMPro::TMP_Text>  statusLabel;

/// @brief Field targetFill, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_targetFill, put=__cordl_internal_set_targetFill)) float_t  targetFill;

/// @brief Field tintFillByStatus, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_tintFillByStatus, put=__cordl_internal_set_tintFillByStatus)) bool  tintFillByStatus;

/// @brief Field tintStatusLabelByStatus, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_tintStatusLabelByStatus, put=__cordl_internal_set_tintStatusLabelByStatus)) bool  tintStatusLabelByStatus;

/// @brief Field unloadingString, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_unloadingString, put=__cordl_internal_set_unloadingString)) ::StringW  unloadingString;

/// @brief Field workingColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_workingColor, put=__cordl_internal_set_workingColor)) ::UnityEngine::Color  workingColor;

/// @brief Method ApplyFill, addr 0x5bf00f0, size 0xd0, virtual false, abstract: false, final false
inline void ApplyFill(float_t  fill) ;

/// @brief Method ApplyStatus, addr 0x5bf0458, size 0xac, virtual false, abstract: false, final false
inline void ApplyStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar* New_ctor() ;

/// @brief Method OnDisable, addr 0x5befdf4, size 0x1b4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5befa0c, size 0x1bc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMapLoadComplete, addr 0x5bf07ac, size 0xd8, virtual false, abstract: false, final false
inline void OnMapLoadComplete(bool  success) ;

/// @brief Method OnMapLoadStatusChanged, addr 0x5bf07a8, size 0x4, virtual false, abstract: false, final false
inline void OnMapLoadStatusChanged(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  progress, ::StringW  message) ;

/// @brief Method OnMapUnloadComplete, addr 0x5bf0884, size 0x4, virtual false, abstract: false, final false
inline void OnMapUnloadComplete() ;

/// @brief Method SetContentActive, addr 0x5bf0aa4, size 0xb8, virtual false, abstract: false, final false
inline void SetContentActive(bool  active) ;

/// @brief Method SetDetail, addr 0x5bf0c24, size 0x16c, virtual false, abstract: false, final false
inline void SetDetail(::StringW  detail, bool  animateEllipsis) ;

/// @brief Method SetFillColor, addr 0x5bf0d90, size 0x158, virtual false, abstract: false, final false
inline void SetFillColor(::UnityEngine::Color  color) ;

/// @brief Method SetText, addr 0x5bf0b5c, size 0xc8, virtual false, abstract: false, final false
static inline void SetText(::TMPro::TMP_Text*  label, ::StringW  text) ;

/// @brief Method SetWorking, addr 0x5bf0888, size 0x21c, virtual false, abstract: false, final false
inline void SetWorking(::StringW  status, ::StringW  detail, int32_t  percent, bool  hasMeasurableProgress) ;

/// @brief Method ShowFinished, addr 0x5bf0504, size 0x2a4, virtual false, abstract: false, final false
inline void ShowFinished(::StringW  status, ::StringW  detail, ::UnityEngine::Color  color, float_t  fill, bool  succeeded) ;

/// @brief Method ShowIdle, addr 0x5bf0310, size 0x148, virtual false, abstract: false, final false
inline void ShowIdle() ;

/// @brief Method SyncToCurrentState, addr 0x5befbc8, size 0x22c, virtual false, abstract: false, final false
inline void SyncToCurrentState() ;

/// @brief Method Update, addr 0x5beffa8, size 0x148, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateEllipsis, addr 0x5bf01c0, size 0x150, virtual false, abstract: false, final false
inline void UpdateEllipsis() ;

constexpr bool const& __cordl_internal_get__HasMeasurablePercent_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasMeasurablePercent_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__PercentComplete_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__PercentComplete_k__BackingField() ;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus const& __cordl_internal_get__Phase_k__BackingField() const;

constexpr ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus& __cordl_internal_get__Phase_k__BackingField() ;

constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState const& __cordl_internal_get__State_k__BackingField() const;

constexpr ::GlobalNamespace::CustomMapLoadProgressBar_BarState& __cordl_internal_get__State_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_contentRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_contentRoot() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_detailLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_detailLabel() ;

constexpr ::StringW const& __cordl_internal_get_detailTextWithoutEllipsis() const;

constexpr ::StringW& __cordl_internal_get_detailTextWithoutEllipsis() ;

constexpr float_t const& __cordl_internal_get_displayedFill() const;

constexpr float_t& __cordl_internal_get_displayedFill() ;

constexpr ::StringW const& __cordl_internal_get_downloadingString() const;

constexpr ::StringW& __cordl_internal_get_downloadingString() ;

constexpr int32_t const& __cordl_internal_get_ellipsisDotCount() const;

constexpr int32_t& __cordl_internal_get_ellipsisDotCount() ;

constexpr float_t const& __cordl_internal_get_ellipsisSecondsPerDot() const;

constexpr float_t& __cordl_internal_get_ellipsisSecondsPerDot() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_failedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_failedColor() ;

constexpr ::StringW const& __cordl_internal_get_failedString() const;

constexpr ::StringW& __cordl_internal_get_failedString() ;

constexpr ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis const& __cordl_internal_get_fillAxis() const;

constexpr ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis& __cordl_internal_get_fillAxis() ;

constexpr int32_t const& __cordl_internal_get_fillColorPropertyId() const;

constexpr int32_t& __cordl_internal_get_fillColorPropertyId() ;

constexpr ::StringW const& __cordl_internal_get_fillColorPropertyName() const;

constexpr ::StringW& __cordl_internal_get_fillColorPropertyName() ;

constexpr float_t const& __cordl_internal_get_fillLerpSpeed() const;

constexpr float_t& __cordl_internal_get_fillLerpSpeed() ;

constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_fillPropertyBlock() const;

constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_fillPropertyBlock() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_fillRenderer() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_fillRenderer() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_fillTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_fillTransform() ;

constexpr bool const& __cordl_internal_get_finished() const;

constexpr bool& __cordl_internal_get_finished() ;

constexpr float_t const& __cordl_internal_get_finishedAtTime() const;

constexpr float_t& __cordl_internal_get_finishedAtTime() ;

constexpr float_t const& __cordl_internal_get_hideDelayAfterFinished() const;

constexpr float_t& __cordl_internal_get_hideDelayAfterFinished() ;

constexpr ::StringW const& __cordl_internal_get_installingString() const;

constexpr ::StringW& __cordl_internal_get_installingString() ;

constexpr ::StringW const& __cordl_internal_get_loadingString() const;

constexpr ::StringW& __cordl_internal_get_loadingString() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_percentLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_percentLabel() ;

constexpr ::StringW const& __cordl_internal_get_preparingString() const;

constexpr ::StringW& __cordl_internal_get_preparingString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_readyColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_readyColor() ;

constexpr ::StringW const& __cordl_internal_get_readyDetailString() const;

constexpr ::StringW& __cordl_internal_get_readyDetailString() ;

constexpr ::StringW const& __cordl_internal_get_readyString() const;

constexpr ::StringW& __cordl_internal_get_readyString() ;

constexpr bool const& __cordl_internal_get_showEllipsis() const;

constexpr bool& __cordl_internal_get_showEllipsis() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_statusLabel() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_statusLabel() ;

constexpr float_t const& __cordl_internal_get_targetFill() const;

constexpr float_t& __cordl_internal_get_targetFill() ;

constexpr bool const& __cordl_internal_get_tintFillByStatus() const;

constexpr bool& __cordl_internal_get_tintFillByStatus() ;

constexpr bool const& __cordl_internal_get_tintStatusLabelByStatus() const;

constexpr bool& __cordl_internal_get_tintStatusLabelByStatus() ;

constexpr ::StringW const& __cordl_internal_get_unloadingString() const;

constexpr ::StringW& __cordl_internal_get_unloadingString() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_workingColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_workingColor() ;

constexpr void __cordl_internal_set__HasMeasurablePercent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PercentComplete_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__Phase_k__BackingField(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value) ;

constexpr void __cordl_internal_set__State_k__BackingField(::GlobalNamespace::CustomMapLoadProgressBar_BarState  value) ;

constexpr void __cordl_internal_set_contentRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_detailLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_detailTextWithoutEllipsis(::StringW  value) ;

constexpr void __cordl_internal_set_displayedFill(float_t  value) ;

constexpr void __cordl_internal_set_downloadingString(::StringW  value) ;

constexpr void __cordl_internal_set_ellipsisDotCount(int32_t  value) ;

constexpr void __cordl_internal_set_ellipsisSecondsPerDot(float_t  value) ;

constexpr void __cordl_internal_set_failedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_failedString(::StringW  value) ;

constexpr void __cordl_internal_set_fillAxis(::GlobalNamespace::CustomMapLoadProgressBar_FillAxis  value) ;

constexpr void __cordl_internal_set_fillColorPropertyId(int32_t  value) ;

constexpr void __cordl_internal_set_fillColorPropertyName(::StringW  value) ;

constexpr void __cordl_internal_set_fillLerpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_fillPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

constexpr void __cordl_internal_set_fillRenderer(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_fillTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_finished(bool  value) ;

constexpr void __cordl_internal_set_finishedAtTime(float_t  value) ;

constexpr void __cordl_internal_set_hideDelayAfterFinished(float_t  value) ;

constexpr void __cordl_internal_set_installingString(::StringW  value) ;

constexpr void __cordl_internal_set_loadingString(::StringW  value) ;

constexpr void __cordl_internal_set_percentLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_preparingString(::StringW  value) ;

constexpr void __cordl_internal_set_readyColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_readyDetailString(::StringW  value) ;

constexpr void __cordl_internal_set_readyString(::StringW  value) ;

constexpr void __cordl_internal_set_showEllipsis(bool  value) ;

constexpr void __cordl_internal_set_statusLabel(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_targetFill(float_t  value) ;

constexpr void __cordl_internal_set_tintFillByStatus(bool  value) ;

constexpr void __cordl_internal_set_tintStatusLabelByStatus(bool  value) ;

constexpr void __cordl_internal_set_unloadingString(::StringW  value) ;

constexpr void __cordl_internal_set_workingColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x5bf0ee8, size 0x1d4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Text::StringBuilder* getStaticF_SharedStringBuilder() ;

/// @brief Method get_DetailMessage, addr 0x5befa04, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_DetailMessage() ;

/// @brief Method get_DisplayedProgress, addr 0x5bef9fc, size 0x8, virtual false, abstract: false, final false
inline float_t get_DisplayedProgress() ;

/// [CompilerGenerated]
/// @brief Method get_HasMeasurablePercent, addr 0x5bef9e4, size 0x8, virtual false, abstract: false, final false
inline bool get_HasMeasurablePercent() ;

/// @brief Method get_NormalizedProgress, addr 0x5bef9f4, size 0x8, virtual false, abstract: false, final false
inline float_t get_NormalizedProgress() ;

/// [CompilerGenerated]
/// @brief Method get_PercentComplete, addr 0x5bef9d4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PercentComplete() ;

/// [CompilerGenerated]
/// @brief Method get_Phase, addr 0x5bef9c4, size 0x8, virtual false, abstract: false, final false
inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus get_Phase() ;

/// [CompilerGenerated]
/// @brief Method get_State, addr 0x5bef9b4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::CustomMapLoadProgressBar_BarState get_State() ;

static inline void setStaticF_SharedStringBuilder(::System::Text::StringBuilder*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasMeasurablePercent, addr 0x5bef9ec, size 0x8, virtual false, abstract: false, final false
inline void set_HasMeasurablePercent(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_PercentComplete, addr 0x5bef9dc, size 0x8, virtual false, abstract: false, final false
inline void set_PercentComplete(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Phase, addr 0x5bef9cc, size 0x8, virtual false, abstract: false, final false
inline void set_Phase(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value) ;

/// [CompilerGenerated]
/// @brief Method set_State, addr 0x5bef9bc, size 0x8, virtual false, abstract: false, final false
inline void set_State(::GlobalNamespace::CustomMapLoadProgressBar_BarState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoadProgressBar() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoadProgressBar", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoadProgressBar(CustomMapLoadProgressBar && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoadProgressBar", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoadProgressBar(CustomMapLoadProgressBar const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4066};

/// [CompilerGenerated]
/// @brief Field <State>k__BackingField, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapLoadProgressBar_BarState  ____State_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Phase>k__BackingField, offset: 0x24, size: 0x4, def value: None
 ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  ____Phase_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PercentComplete>k__BackingField, offset: 0x28, size: 0x4, def value: None
 int32_t  ____PercentComplete_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasMeasurablePercent>k__BackingField, offset: 0x2c, size: 0x1, def value: None
 bool  ____HasMeasurablePercent_k__BackingField;

/// [Header("Bar")]
/// [Tooltip("Scaled from 0 to 1 along Fill Axis. Its pivot must be at the empty end of the bar.")]
/// [SerializeField]
/// @brief Field fillTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___fillTransform;

/// [SerializeField]
/// @brief Field fillAxis, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::CustomMapLoadProgressBar_FillAxis  ___fillAxis;

/// [Tooltip("[Optional] Tinted per status when Tint Fill By Status is on")]
/// [SerializeField]
/// @brief Field fillRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___fillRenderer;

/// [SerializeField]
/// @brief Field tintFillByStatus, offset: 0x48, size: 0x1, def value: None
 bool  ___tintFillByStatus;

/// [SerializeField]
/// @brief Field fillColorPropertyName, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___fillColorPropertyName;

/// [SerializeField]
/// @brief Field workingColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___workingColor;

/// [SerializeField]
/// @brief Field readyColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___readyColor;

/// [SerializeField]
/// @brief Field failedColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___failedColor;

/// [Header("Text")]
/// [Tooltip("The phase - like DOWNLOADING.")]
/// [SerializeField]
/// @brief Field statusLabel, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___statusLabel;

/// [Tooltip("The percentage - Hidden during phases that have no measurable progress")]
/// [SerializeField]
/// @brief Field percentLabel, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___percentLabel;

/// [Tooltip("The detail message from the loader - like LOADING MAP SCENE.")]
/// [SerializeField]
/// @brief Field detailLabel, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___detailLabel;

/// [SerializeField]
/// @brief Field tintStatusLabelByStatus, offset: 0xa0, size: 0x1, def value: None
 bool  ___tintStatusLabelByStatus;

/// [SerializeField]
/// @brief Field preparingString, offset: 0xa8, size: 0x8, def value: None
 ::StringW  ___preparingString;

/// [SerializeField]
/// @brief Field downloadingString, offset: 0xb0, size: 0x8, def value: None
 ::StringW  ___downloadingString;

/// [SerializeField]
/// @brief Field installingString, offset: 0xb8, size: 0x8, def value: None
 ::StringW  ___installingString;

/// [SerializeField]
/// @brief Field loadingString, offset: 0xc0, size: 0x8, def value: None
 ::StringW  ___loadingString;

/// [SerializeField]
/// @brief Field unloadingString, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___unloadingString;

/// [SerializeField]
/// @brief Field readyString, offset: 0xd0, size: 0x8, def value: None
 ::StringW  ___readyString;

/// [SerializeField]
/// @brief Field failedString, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___failedString;

/// [SerializeField]
/// @brief Field readyDetailString, offset: 0xe0, size: 0x8, def value: None
 ::StringW  ___readyDetailString;

/// [Header("Visibility")]
/// [Tooltip("Toggled off while there is nothing to report.Leave empty to keep the bar visible at all times")]
/// [SerializeField]
/// @brief Field contentRoot, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___contentRoot;

/// [Tooltip("How long READY / FAILED stays up before the bar hides itself. 0 keeps it up until the next load.")]
/// [SerializeField]
/// @brief Field hideDelayAfterFinished, offset: 0xf0, size: 0x4, def value: None
 float_t  ___hideDelayAfterFinished;

/// [Tooltip("How quickly the bar catches up to a new value")]
/// [SerializeField]
/// @brief Field fillLerpSpeed, offset: 0xf4, size: 0x4, def value: None
 float_t  ___fillLerpSpeed;

/// [Tooltip("Seconds per dot of the animated ellipsis shown while a phase has no measurable progress.")]
/// [SerializeField]
/// @brief Field ellipsisSecondsPerDot, offset: 0xf8, size: 0x4, def value: None
 float_t  ___ellipsisSecondsPerDot;

/// @brief Field fillColorPropertyId, offset: 0xfc, size: 0x4, def value: None
 int32_t  ___fillColorPropertyId;

/// @brief Field fillPropertyBlock, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  ___fillPropertyBlock;

/// @brief Field targetFill, offset: 0x108, size: 0x4, def value: None
 float_t  ___targetFill;

/// @brief Field displayedFill, offset: 0x10c, size: 0x4, def value: None
 float_t  ___displayedFill;

/// @brief Field showEllipsis, offset: 0x110, size: 0x1, def value: None
 bool  ___showEllipsis;

/// @brief Field ellipsisDotCount, offset: 0x114, size: 0x4, def value: None
 int32_t  ___ellipsisDotCount;

/// @brief Field detailTextWithoutEllipsis, offset: 0x118, size: 0x8, def value: None
 ::StringW  ___detailTextWithoutEllipsis;

/// @brief Field finished, offset: 0x120, size: 0x1, def value: None
 bool  ___finished;

/// @brief Field finishedAtTime, offset: 0x124, size: 0x4, def value: None
 float_t  ___finishedAtTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ____State_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ____Phase_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ____PercentComplete_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ____HasMeasurablePercent_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillAxis) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___tintFillByStatus) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillColorPropertyName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___workingColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___readyColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___failedColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___statusLabel) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___percentLabel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___detailLabel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___tintStatusLabelByStatus) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___preparingString) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___downloadingString) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___installingString) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___loadingString) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___unloadingString) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___readyString) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___failedString) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___readyDetailString) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___contentRoot) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___hideDelayAfterFinished) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillLerpSpeed) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___ellipsisSecondsPerDot) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillColorPropertyId) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___fillPropertyBlock) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___targetFill) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___displayedFill) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___showEllipsis) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___ellipsisDotCount) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___detailTextWithoutEllipsis) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___finished) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar, ___finishedAtTime) == 0x124, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::UI::CustomMapLoadProgressBar) == 0x128, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps::UI

#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_FusionStatBuffer_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsGraphBase)
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion {
class NetworkRunner;
}
namespace GlobalNamespace {
struct FusionStatsGraphBase_FusionStatBuffer;
}
namespace System {
struct DateTime;
}
namespace System {
class IFormatProvider;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine::UI {
class VerticalLayoutGroup;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsGraphBase;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsGraphBase*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsGraphBase*, "Fusion.Statistics", "FusionStatsGraphBase");
// Dependencies Fusion.Statistics.FusionStatsGraphBase::FusionStatBuffer, UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsGraphBase
class CORDL_TYPE FusionStatsGraphBase : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FusionStatBuffer = ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer;

 __declspec(property(get=get_Initialized)) bool  Initialized;

/// @brief Field LOOKUP_TABLE_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LOOKUP_TABLE_0, put=setStaticF_LOOKUP_TABLE_0)) ::ArrayW<::ArrayW<::StringW>>  LOOKUP_TABLE_0;

/// @brief Field LOOKUP_TABLE_0_00ms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LOOKUP_TABLE_0_00ms, put=setStaticF_LOOKUP_TABLE_0_00ms)) ::ArrayW<::ArrayW<::StringW>>  LOOKUP_TABLE_0_00ms;

/// @brief Field LOOKUP_TABLE_0_BYTES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LOOKUP_TABLE_0_BYTES, put=setStaticF_LOOKUP_TABLE_0_BYTES)) ::ArrayW<::ArrayW<::StringW>>  LOOKUP_TABLE_0_BYTES;

/// @brief Field LOOKUP_TABLE_0ms, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LOOKUP_TABLE_0ms, put=setStaticF_LOOKUP_TABLE_0ms)) ::ArrayW<::ArrayW<::StringW>>  LOOKUP_TABLE_0ms;

/// @brief Field Samples, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Samples, put=setStaticF_Samples)) int32_t  Samples;

/// @brief Field _averageShaderPropertyID, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__averageShaderPropertyID, put=__cordl_internal_set__averageShaderPropertyID)) int32_t  _averageShaderPropertyID;

/// @brief Field _averageValueText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__averageValueText, put=__cordl_internal_set__averageValueText)) ::UnityW<::UnityEngine::UI::Text>  _averageValueText;

/// @brief Field _bufferNormalizedValues, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__bufferNormalizedValues, put=__cordl_internal_set__bufferNormalizedValues)) ::ArrayW<float_t>  _bufferNormalizedValues;

/// @brief Field _bufferValues, offset 0xa8, size 0x38 
 __declspec(property(get=__cordl_internal_get__bufferValues, put=__cordl_internal_set__bufferValues)) ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer  _bufferValues;

/// @brief Field _currentValueText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentValueText, put=__cordl_internal_set__currentValueText)) ::UnityW<::UnityEngine::UI::Text>  _currentValueText;

/// @brief Field _formatProvider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__formatProvider, put=setStaticF__formatProvider)) ::System::IFormatProvider*  _formatProvider;

/// @brief Field _header, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::UnityW<::UnityEngine::RectTransform>  _header;

/// @brief Field _headerHeight, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get__headerHeight, put=__cordl_internal_set__headerHeight)) float_t  _headerHeight;

/// @brief Field _ignoreZeroedValuesOnAverageCalculation, offset 0x9c, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreZeroedValuesOnAverageCalculation, put=__cordl_internal_set__ignoreZeroedValuesOnAverageCalculation)) bool  _ignoreZeroedValuesOnAverageCalculation;

/// @brief Field _ignoreZeroedValuesOnBuffer, offset 0x9d, size 0x1 
 __declspec(property(get=__cordl_internal_get__ignoreZeroedValuesOnBuffer, put=__cordl_internal_set__ignoreZeroedValuesOnBuffer)) bool  _ignoreZeroedValuesOnBuffer;

/// @brief Field _invertedRenderMaxValue, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get__invertedRenderMaxValue, put=__cordl_internal_set__invertedRenderMaxValue)) float_t  _invertedRenderMaxValue;

/// @brief Field _lastUpdateTime, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastUpdateTime, put=__cordl_internal_set__lastUpdateTime)) float_t  _lastUpdateTime;

/// @brief Field _lookupMultiplier, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get__lookupMultiplier, put=__cordl_internal_set__lookupMultiplier)) float_t  _lookupMultiplier;

/// @brief Field _lookupTable, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__lookupTable, put=__cordl_internal_set__lookupTable)) ::ArrayW<::ArrayW<::StringW>>  _lookupTable;

/// @brief Field _material, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__material, put=__cordl_internal_set__material)) ::UnityW<::UnityEngine::Material>  _material;

/// @brief Field _maxSamples, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxSamples, put=__cordl_internal_set__maxSamples)) int32_t  _maxSamples;

/// @brief Field _parentLayoutGroup, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentLayoutGroup, put=__cordl_internal_set__parentLayoutGroup)) ::UnityW<::UnityEngine::UI::VerticalLayoutGroup>  _parentLayoutGroup;

/// @brief Field _peakValueText, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__peakValueText, put=__cordl_internal_set__peakValueText)) ::UnityW<::UnityEngine::UI::Text>  _peakValueText;

/// @brief Field _render, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__render, put=__cordl_internal_set__render)) ::UnityW<::UnityEngine::RectTransform>  _render;

/// @brief Field _renderHeight, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get__renderHeight, put=__cordl_internal_set__renderHeight)) float_t  _renderHeight;

/// @brief Field _targetImage, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetImage, put=__cordl_internal_set__targetImage)) ::UnityW<::UnityEngine::UI::Image>  _targetImage;

/// @brief Field _threshold1, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold1, put=__cordl_internal_set__threshold1)) float_t  _threshold1;

/// @brief Field _threshold1ShaderPropertyID, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold1ShaderPropertyID, put=__cordl_internal_set__threshold1ShaderPropertyID)) int32_t  _threshold1ShaderPropertyID;

/// @brief Field _threshold1Text, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__threshold1Text, put=__cordl_internal_set__threshold1Text)) ::UnityW<::UnityEngine::UI::Text>  _threshold1Text;

/// @brief Field _threshold2, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold2, put=__cordl_internal_set__threshold2)) float_t  _threshold2;

/// @brief Field _threshold2ShaderPropertyID, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold2ShaderPropertyID, put=__cordl_internal_set__threshold2ShaderPropertyID)) int32_t  _threshold2ShaderPropertyID;

/// @brief Field _threshold2Text, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__threshold2Text, put=__cordl_internal_set__threshold2Text)) ::UnityW<::UnityEngine::UI::Text>  _threshold2Text;

/// @brief Field _threshold3, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold3, put=__cordl_internal_set__threshold3)) float_t  _threshold3;

/// @brief Field _threshold3ShaderPropertyID, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__threshold3ShaderPropertyID, put=__cordl_internal_set__threshold3ShaderPropertyID)) int32_t  _threshold3ShaderPropertyID;

/// @brief Field _threshold3Text, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__threshold3Text, put=__cordl_internal_set__threshold3Text)) ::UnityW<::UnityEngine::UI::Text>  _threshold3Text;

/// @brief Field _toggleButton, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleButton, put=__cordl_internal_set__toggleButton)) ::UnityW<::UnityEngine::UI::Button>  _toggleButton;

/// @brief Field _valueTextFormat, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueTextFormat, put=__cordl_internal_set__valueTextFormat)) ::StringW  _valueTextFormat;

/// @brief Field _valueTextMultiplier, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__valueTextMultiplier, put=__cordl_internal_set__valueTextMultiplier)) float_t  _valueTextMultiplier;

/// @brief Field _valuesShaderPropertyID, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__valuesShaderPropertyID, put=__cordl_internal_set__valuesShaderPropertyID)) int32_t  _valuesShaderPropertyID;

/// @brief Field _valuesTextUpdateDelay, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get__valuesTextUpdateDelay, put=__cordl_internal_set__valuesTextUpdateDelay)) float_t  _valuesTextUpdateDelay;

/// @brief Method AddValueToBuffer, addr 0x60f6d60, size 0x100, virtual true, abstract: false, final false
inline void AddValueToBuffer(float_t  value, ::by_ref<::System::DateTime>  now) ;

/// @brief Method GetValueText, addr 0x60f7394, size 0x1e8, virtual false, abstract: false, final false
inline ::StringW GetValueText(float_t  value) ;

/// @brief Method Initialize, addr 0x60f68bc, size 0x314, virtual true, abstract: false, final false
inline void Initialize(int32_t  accumulateTimeMs) ;

static inline ::Fusion::Statistics::FusionStatsGraphBase* New_ctor() ;

/// @brief Method OnDisable, addr 0x60f6c98, size 0xc8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x60f6bd0, size 0xc8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSetValues, addr 0x60f716c, size 0x228, virtual true, abstract: false, final false
inline void OnSetValues() ;

/// @brief Method Refit, addr 0x60f6e60, size 0x12c, virtual true, abstract: false, final false
inline void Refit() ;

/// @brief Method RemapValue, addr 0x60f76d8, size 0x64, virtual false, abstract: false, final false
inline float_t RemapValue(float_t  value, float_t  iMin, float_t  iMax, float_t  oMin, float_t  oMax) ;

/// @brief Method Restore, addr 0x60f6f8c, size 0xac, virtual true, abstract: false, final false
inline void Restore() ;

/// @brief Method SetAccumulateTime, addr 0x60f76cc, size 0xc, virtual false, abstract: false, final false
inline void SetAccumulateTime(int32_t  accumulateTimeMs) ;

/// @brief Method SetGraphValues, addr 0x60f773c, size 0x80, virtual true, abstract: false, final false
inline void SetGraphValues(::ArrayW<float_t>  values) ;

/// @brief Method SetIgnoreZeroValues, addr 0x60f76a4, size 0x10, virtual false, abstract: false, final false
inline void SetIgnoreZeroValues(bool  ignoreZeroOnAverage, bool  ignoreZeroOnBuffer) ;

/// @brief Method SetThresholds, addr 0x60f7688, size 0x1c, virtual false, abstract: false, final false
inline void SetThresholds(float_t  threshold1, float_t  threshold2, float_t  threshold3) ;

/// @brief Method SetValueTextFormat, addr 0x60f76b4, size 0x10, virtual false, abstract: false, final false
inline void SetValueTextFormat(::StringW  value) ;

/// @brief Method SetValueTextMultiplier, addr 0x60f76c4, size 0x8, virtual false, abstract: false, final false
inline void SetValueTextMultiplier(float_t  value) ;

/// @brief Method ToggleRenderDisplay, addr 0x60f7038, size 0x134, virtual true, abstract: false, final false
inline void ToggleRenderDisplay() ;

/// @brief Method UpdateGraph, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now) ;

/// @brief Method UpdateThresholdPosition, addr 0x60f757c, size 0x10c, virtual false, abstract: false, final false
inline void UpdateThresholdPosition(::UnityEngine::UI::Text*  text, float_t  thresholdNormalized) ;

constexpr int32_t const& __cordl_internal_get__averageShaderPropertyID() const;

constexpr int32_t& __cordl_internal_get__averageShaderPropertyID() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__averageValueText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__averageValueText() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__bufferNormalizedValues() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__bufferNormalizedValues() ;

constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer const& __cordl_internal_get__bufferValues() const;

constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer& __cordl_internal_get__bufferValues() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__currentValueText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__currentValueText() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__header() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__header() ;

constexpr float_t const& __cordl_internal_get__headerHeight() const;

constexpr float_t& __cordl_internal_get__headerHeight() ;

constexpr bool const& __cordl_internal_get__ignoreZeroedValuesOnAverageCalculation() const;

constexpr bool& __cordl_internal_get__ignoreZeroedValuesOnAverageCalculation() ;

constexpr bool const& __cordl_internal_get__ignoreZeroedValuesOnBuffer() const;

constexpr bool& __cordl_internal_get__ignoreZeroedValuesOnBuffer() ;

constexpr float_t const& __cordl_internal_get__invertedRenderMaxValue() const;

constexpr float_t& __cordl_internal_get__invertedRenderMaxValue() ;

constexpr float_t const& __cordl_internal_get__lastUpdateTime() const;

constexpr float_t& __cordl_internal_get__lastUpdateTime() ;

constexpr float_t const& __cordl_internal_get__lookupMultiplier() const;

constexpr float_t& __cordl_internal_get__lookupMultiplier() ;

constexpr ::ArrayW<::ArrayW<::StringW>> const& __cordl_internal_get__lookupTable() const;

constexpr ::ArrayW<::ArrayW<::StringW>>& __cordl_internal_get__lookupTable() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material() ;

constexpr int32_t const& __cordl_internal_get__maxSamples() const;

constexpr int32_t& __cordl_internal_get__maxSamples() ;

constexpr ::UnityW<::UnityEngine::UI::VerticalLayoutGroup> const& __cordl_internal_get__parentLayoutGroup() const;

constexpr ::UnityW<::UnityEngine::UI::VerticalLayoutGroup>& __cordl_internal_get__parentLayoutGroup() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__peakValueText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__peakValueText() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__render() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__render() ;

constexpr float_t const& __cordl_internal_get__renderHeight() const;

constexpr float_t& __cordl_internal_get__renderHeight() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__targetImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__targetImage() ;

constexpr float_t const& __cordl_internal_get__threshold1() const;

constexpr float_t& __cordl_internal_get__threshold1() ;

constexpr int32_t const& __cordl_internal_get__threshold1ShaderPropertyID() const;

constexpr int32_t& __cordl_internal_get__threshold1ShaderPropertyID() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__threshold1Text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__threshold1Text() ;

constexpr float_t const& __cordl_internal_get__threshold2() const;

constexpr float_t& __cordl_internal_get__threshold2() ;

constexpr int32_t const& __cordl_internal_get__threshold2ShaderPropertyID() const;

constexpr int32_t& __cordl_internal_get__threshold2ShaderPropertyID() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__threshold2Text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__threshold2Text() ;

constexpr float_t const& __cordl_internal_get__threshold3() const;

constexpr float_t& __cordl_internal_get__threshold3() ;

constexpr int32_t const& __cordl_internal_get__threshold3ShaderPropertyID() const;

constexpr int32_t& __cordl_internal_get__threshold3ShaderPropertyID() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__threshold3Text() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__threshold3Text() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__toggleButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__toggleButton() ;

constexpr ::StringW const& __cordl_internal_get__valueTextFormat() const;

constexpr ::StringW& __cordl_internal_get__valueTextFormat() ;

constexpr float_t const& __cordl_internal_get__valueTextMultiplier() const;

constexpr float_t& __cordl_internal_get__valueTextMultiplier() ;

constexpr int32_t const& __cordl_internal_get__valuesShaderPropertyID() const;

constexpr int32_t& __cordl_internal_get__valuesShaderPropertyID() ;

constexpr float_t const& __cordl_internal_get__valuesTextUpdateDelay() const;

constexpr float_t& __cordl_internal_get__valuesTextUpdateDelay() ;

constexpr void __cordl_internal_set__averageShaderPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set__averageValueText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__bufferNormalizedValues(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__bufferValues(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer  value) ;

constexpr void __cordl_internal_set__currentValueText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__header(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__headerHeight(float_t  value) ;

constexpr void __cordl_internal_set__ignoreZeroedValuesOnAverageCalculation(bool  value) ;

constexpr void __cordl_internal_set__ignoreZeroedValuesOnBuffer(bool  value) ;

constexpr void __cordl_internal_set__invertedRenderMaxValue(float_t  value) ;

constexpr void __cordl_internal_set__lastUpdateTime(float_t  value) ;

constexpr void __cordl_internal_set__lookupMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__lookupTable(::ArrayW<::ArrayW<::StringW>>  value) ;

constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set__maxSamples(int32_t  value) ;

constexpr void __cordl_internal_set__parentLayoutGroup(::UnityW<::UnityEngine::UI::VerticalLayoutGroup>  value) ;

constexpr void __cordl_internal_set__peakValueText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__render(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__renderHeight(float_t  value) ;

constexpr void __cordl_internal_set__targetImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set__threshold1(float_t  value) ;

constexpr void __cordl_internal_set__threshold1ShaderPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set__threshold1Text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__threshold2(float_t  value) ;

constexpr void __cordl_internal_set__threshold2ShaderPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set__threshold2Text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__threshold3(float_t  value) ;

constexpr void __cordl_internal_set__threshold3ShaderPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set__threshold3Text(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__toggleButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__valueTextFormat(::StringW  value) ;

constexpr void __cordl_internal_set__valueTextMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__valuesShaderPropertyID(int32_t  value) ;

constexpr void __cordl_internal_set__valuesTextUpdateDelay(float_t  value) ;

/// @brief Method .ctor, addr 0x60f77bc, size 0x1c0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::ArrayW<::StringW>> getStaticF_LOOKUP_TABLE_0() ;

static inline ::ArrayW<::ArrayW<::StringW>> getStaticF_LOOKUP_TABLE_0_00ms() ;

static inline ::ArrayW<::ArrayW<::StringW>> getStaticF_LOOKUP_TABLE_0_BYTES() ;

static inline ::ArrayW<::ArrayW<::StringW>> getStaticF_LOOKUP_TABLE_0ms() ;

static inline int32_t getStaticF_Samples() ;

static inline ::System::IFormatProvider* getStaticF__formatProvider() ;

/// @brief Method get_Initialized, addr 0x60f68ac, size 0x10, virtual false, abstract: false, final false
inline bool get_Initialized() ;

static inline void setStaticF_LOOKUP_TABLE_0(::ArrayW<::ArrayW<::StringW>>  value) ;

static inline void setStaticF_LOOKUP_TABLE_0_00ms(::ArrayW<::ArrayW<::StringW>>  value) ;

static inline void setStaticF_LOOKUP_TABLE_0_BYTES(::ArrayW<::ArrayW<::StringW>>  value) ;

static inline void setStaticF_LOOKUP_TABLE_0ms(::ArrayW<::ArrayW<::StringW>>  value) ;

static inline void setStaticF_Samples(int32_t  value) ;

static inline void setStaticF__formatProvider(::System::IFormatProvider*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsGraphBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsGraphBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsGraphBase(FusionStatsGraphBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsGraphBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsGraphBase(FusionStatsGraphBase const& ) = delete;

/// @brief Field SHADER_PROPERTY_AVERAGE offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_AVERAGE{u"_Average"};

/// @brief Field SHADER_PROPERTY_SAMPLES offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_SAMPLES{u"_Samples"};

/// @brief Field SHADER_PROPERTY_THRESHOLD_1 offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_THRESHOLD_1{u"_Threshold1"};

/// @brief Field SHADER_PROPERTY_THRESHOLD_2 offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_THRESHOLD_2{u"_Threshold2"};

/// @brief Field SHADER_PROPERTY_THRESHOLD_3 offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_THRESHOLD_3{u"_Threshold3"};

/// @brief Field SHADER_PROPERTY_VALUES offset 0xffffffff size 0x8
static constexpr ::ConstString  SHADER_PROPERTY_VALUES{u"_Values"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23491};

/// @brief Field _valuesShaderPropertyID, offset: 0x20, size: 0x4, def value: None
 int32_t  ____valuesShaderPropertyID;

/// @brief Field _threshold1ShaderPropertyID, offset: 0x24, size: 0x4, def value: None
 int32_t  ____threshold1ShaderPropertyID;

/// @brief Field _threshold2ShaderPropertyID, offset: 0x28, size: 0x4, def value: None
 int32_t  ____threshold2ShaderPropertyID;

/// @brief Field _threshold3ShaderPropertyID, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____threshold3ShaderPropertyID;

/// @brief Field _averageShaderPropertyID, offset: 0x30, size: 0x4, def value: None
 int32_t  ____averageShaderPropertyID;

/// [SerializeField]
/// @brief Field _render, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____render;

/// [SerializeField]
/// @brief Field _header, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____header;

/// [SerializeField]
/// @brief Field _targetImage, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ____targetImage;

/// [SerializeField]
/// @brief Field _toggleButton, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____toggleButton;

/// [SerializeField]
/// @brief Field _averageValueText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____averageValueText;

/// [SerializeField]
/// @brief Field _peakValueText, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____peakValueText;

/// [SerializeField]
/// @brief Field _currentValueText, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____currentValueText;

/// [Space]
/// [SerializeField]
/// @brief Field _threshold1Text, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____threshold1Text;

/// [SerializeField]
/// @brief Field _threshold2Text, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____threshold2Text;

/// [SerializeField]
/// @brief Field _threshold3Text, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____threshold3Text;

/// [Space]
/// [SerializeField]
/// @brief Field _valueTextMultiplier, offset: 0x88, size: 0x4, def value: None
 float_t  ____valueTextMultiplier;

/// [SerializeField]
/// [Range(60, 540)]
/// @brief Field _maxSamples, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____maxSamples;

/// [SerializeField]
/// @brief Field _threshold1, offset: 0x90, size: 0x4, def value: None
 float_t  ____threshold1;

/// [SerializeField]
/// @brief Field _threshold2, offset: 0x94, size: 0x4, def value: None
 float_t  ____threshold2;

/// [SerializeField]
/// @brief Field _threshold3, offset: 0x98, size: 0x4, def value: None
 float_t  ____threshold3;

/// [SerializeField]
/// @brief Field _ignoreZeroedValuesOnAverageCalculation, offset: 0x9c, size: 0x1, def value: None
 bool  ____ignoreZeroedValuesOnAverageCalculation;

/// [SerializeField]
/// @brief Field _ignoreZeroedValuesOnBuffer, offset: 0x9d, size: 0x1, def value: None
 bool  ____ignoreZeroedValuesOnBuffer;

/// [SerializeField]
/// @brief Field _valuesTextUpdateDelay, offset: 0xa0, size: 0x4, def value: None
 float_t  ____valuesTextUpdateDelay;

/// @brief Field _bufferValues, offset: 0xa8, size: 0x38, def value: None
 ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer  ____bufferValues;

/// @brief Field _bufferNormalizedValues, offset: 0xe0, size: 0x8, def value: None
 ::ArrayW<float_t>  ____bufferNormalizedValues;

/// @brief Field _headerHeight, offset: 0xe8, size: 0x4, def value: None
 float_t  ____headerHeight;

/// @brief Field _renderHeight, offset: 0xec, size: 0x4, def value: None
 float_t  ____renderHeight;

/// @brief Field _parentLayoutGroup, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::VerticalLayoutGroup>  ____parentLayoutGroup;

/// @brief Field _invertedRenderMaxValue, offset: 0xf8, size: 0x4, def value: None
 float_t  ____invertedRenderMaxValue;

/// @brief Field _lastUpdateTime, offset: 0xfc, size: 0x4, def value: None
 float_t  ____lastUpdateTime;

/// @brief Field _material, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ____material;

/// [SerializeField]
/// @brief Field _valueTextFormat, offset: 0x108, size: 0x8, def value: None
 ::StringW  ____valueTextFormat;

/// @brief Field _lookupTable, offset: 0x110, size: 0x8, def value: None
 ::ArrayW<::ArrayW<::StringW>>  ____lookupTable;

/// @brief Field _lookupMultiplier, offset: 0x118, size: 0x4, def value: None
 float_t  ____lookupMultiplier;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____valuesShaderPropertyID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold1ShaderPropertyID) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold2ShaderPropertyID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold3ShaderPropertyID) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____averageShaderPropertyID) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____render) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____header) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____targetImage) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____toggleButton) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____averageValueText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____peakValueText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____currentValueText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold1Text) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold2Text) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold3Text) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____valueTextMultiplier) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____maxSamples) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold1) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold2) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____threshold3) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____ignoreZeroedValuesOnAverageCalculation) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____ignoreZeroedValuesOnBuffer) == 0x9d, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____valuesTextUpdateDelay) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____bufferValues) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____bufferNormalizedValues) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____headerHeight) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____renderHeight) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____parentLayoutGroup) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____invertedRenderMaxValue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____lastUpdateTime) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____material) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____valueTextFormat) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____lookupTable) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsGraphBase, ____lookupMultiplier) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsGraphBase) == 0x120, "Size mismatch!");

} // namespace end def Fusion::Statistics

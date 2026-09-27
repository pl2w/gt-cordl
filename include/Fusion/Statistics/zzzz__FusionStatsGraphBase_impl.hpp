#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsGraphBase.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_FusionStatBuffer_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatisticsManager_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_FusionStatBuffer_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__VerticalLayoutGroup_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.get_Initialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::get_Initialized)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60f68ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"get_Initialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(int32_t)>(&::Fusion::Statistics::FusionStatsGraphBase::Initialize)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x60f68bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::OnEnable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60f6bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::OnDisable)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x60f6c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.AddValueToBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(float_t, ::by_ref<::System::DateTime>)>(&::Fusion::Statistics::FusionStatsGraphBase::AddValueToBuffer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x60f6d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.Refit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::Refit)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x60f6e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.Restore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::Restore)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x60f6f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.ToggleRenderDisplay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::ToggleRenderDisplay)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x60f7038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.OnSetValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::OnSetValues)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x60f716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(float_t, float_t, float_t)>(&::Fusion::Statistics::FusionStatsGraphBase::SetThresholds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x60f7688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetIgnoreZeroValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(bool, bool)>(&::Fusion::Statistics::FusionStatsGraphBase::SetIgnoreZeroValues)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60f76a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetIgnoreZeroValues", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetValueTextFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(::StringW)>(&::Fusion::Statistics::FusionStatsGraphBase::SetValueTextFormat)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x60f76b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetValueTextFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetValueTextMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(float_t)>(&::Fusion::Statistics::FusionStatsGraphBase::SetValueTextMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f76c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetValueTextMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetAccumulateTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(int32_t)>(&::Fusion::Statistics::FusionStatsGraphBase::SetAccumulateTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60f76cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetAccumulateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.UpdateThresholdPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(::UnityEngine::UI::Text*, float_t)>(&::Fusion::Statistics::FusionStatsGraphBase::UpdateThresholdPosition)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60f757c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"UpdateThresholdPosition", {}, {::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.SetGraphValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(::ArrayW<float_t>)>(&::Fusion::Statistics::FusionStatsGraphBase::SetGraphValues)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x60f773c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.RemapValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Fusion::Statistics::FusionStatsGraphBase::*)(float_t, float_t, float_t, float_t, float_t)>(&::Fusion::Statistics::FusionStatsGraphBase::RemapValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x60f76d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"RemapValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.UpdateGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)(::Fusion::NetworkRunner*, ::Fusion::Statistics::FusionStatisticsManager*, ::by_ref<::System::DateTime>)>(&::Fusion::Statistics::FusionStatsGraphBase::UpdateGraph)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                    {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase.GetValueText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Statistics::FusionStatsGraphBase::*)(float_t)>(&::Fusion::Statistics::FusionStatsGraphBase::GetValueText)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x60f7394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"GetValueText", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsGraphBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsGraphBase::*)()>(&::Fusion::Statistics::FusionStatsGraphBase::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x60f77bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valuesShaderPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesShaderPropertyID;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valuesShaderPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesShaderPropertyID;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__valuesShaderPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valuesShaderPropertyID = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1ShaderPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1ShaderPropertyID;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1ShaderPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1ShaderPropertyID;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold1ShaderPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold1ShaderPropertyID = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2ShaderPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2ShaderPropertyID;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2ShaderPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2ShaderPropertyID;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold2ShaderPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold2ShaderPropertyID = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3ShaderPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3ShaderPropertyID;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3ShaderPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3ShaderPropertyID;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold3ShaderPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold3ShaderPropertyID = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__averageShaderPropertyID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageShaderPropertyID;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__averageShaderPropertyID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageShaderPropertyID;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__averageShaderPropertyID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____averageShaderPropertyID = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__render()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__render() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____render;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__render(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____render = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__header(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__targetImage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetImage;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__targetImage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetImage;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__targetImage(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetImage = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__toggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__toggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleButton;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__toggleButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggleButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__averageValueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageValueText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__averageValueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____averageValueText;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__averageValueText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____averageValueText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__peakValueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakValueText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__peakValueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____peakValueText;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__peakValueText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____peakValueText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__currentValueText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentValueText;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__currentValueText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentValueText;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__currentValueText(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentValueText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1Text;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold1Text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold1Text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2Text;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold2Text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold2Text = value;
}
constexpr ::UnityW<::UnityEngine::UI::Text>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3Text()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3Text;
}
constexpr ::UnityW<::UnityEngine::UI::Text> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3Text() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3Text;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold3Text(::UnityW<::UnityEngine::UI::Text>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold3Text = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valueTextMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueTextMultiplier;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valueTextMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueTextMultiplier;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__valueTextMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueTextMultiplier = value;
}
constexpr int32_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__maxSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSamples;
}
constexpr int32_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__maxSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSamples;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__maxSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSamples = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold1;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold1(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold1 = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold2;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold2 = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__threshold3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____threshold3;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__threshold3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____threshold3 = value;
}
constexpr bool& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__ignoreZeroedValuesOnAverageCalculation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreZeroedValuesOnAverageCalculation;
}
constexpr bool const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__ignoreZeroedValuesOnAverageCalculation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreZeroedValuesOnAverageCalculation;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__ignoreZeroedValuesOnAverageCalculation(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreZeroedValuesOnAverageCalculation = value;
}
constexpr bool& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__ignoreZeroedValuesOnBuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreZeroedValuesOnBuffer;
}
constexpr bool const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__ignoreZeroedValuesOnBuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ignoreZeroedValuesOnBuffer;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__ignoreZeroedValuesOnBuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ignoreZeroedValuesOnBuffer = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valuesTextUpdateDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesTextUpdateDelay;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valuesTextUpdateDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valuesTextUpdateDelay;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__valuesTextUpdateDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valuesTextUpdateDelay = value;
}
constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__bufferValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferValues;
}
constexpr ::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__bufferValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferValues;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__bufferValues(::GlobalNamespace::FusionStatsGraphBase_FusionStatBuffer  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferValues = value;
}
constexpr ::ArrayW<float_t>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__bufferNormalizedValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferNormalizedValues;
}
constexpr ::ArrayW<float_t> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__bufferNormalizedValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bufferNormalizedValues;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__bufferNormalizedValues(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bufferNormalizedValues = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__headerHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerHeight;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__headerHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____headerHeight;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__headerHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____headerHeight = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__renderHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderHeight;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__renderHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderHeight;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__renderHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderHeight = value;
}
constexpr ::UnityW<::UnityEngine::UI::VerticalLayoutGroup>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__parentLayoutGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentLayoutGroup;
}
constexpr ::UnityW<::UnityEngine::UI::VerticalLayoutGroup> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__parentLayoutGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parentLayoutGroup;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__parentLayoutGroup(::UnityW<::UnityEngine::UI::VerticalLayoutGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parentLayoutGroup = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__invertedRenderMaxValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertedRenderMaxValue;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__invertedRenderMaxValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertedRenderMaxValue;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__invertedRenderMaxValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertedRenderMaxValue = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lastUpdateTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lastUpdateTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastUpdateTime;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__lastUpdateTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastUpdateTime = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__material()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr ::UnityW<::UnityEngine::Material> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__material() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____material;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__material(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____material = value;
}
constexpr ::StringW& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valueTextFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueTextFormat;
}
constexpr ::StringW const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__valueTextFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueTextFormat;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__valueTextFormat(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueTextFormat = value;
}
constexpr ::ArrayW<::ArrayW<::StringW>>& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lookupTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookupTable;
}
constexpr ::ArrayW<::ArrayW<::StringW>> const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lookupTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookupTable;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__lookupTable(::ArrayW<::ArrayW<::StringW>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookupTable = value;
}
constexpr float_t& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lookupMultiplier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookupMultiplier;
}
constexpr float_t const& Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_get__lookupMultiplier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lookupMultiplier;
}
constexpr void Fusion::Statistics::FusionStatsGraphBase::__cordl_internal_set__lookupMultiplier(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lookupMultiplier = value;
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF_Samples(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "Samples", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::Statistics::FusionStatsGraphBase::getStaticF_Samples()  {
return ::cordl_internals::getStaticField<int32_t, "Samples", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF__formatProvider(::System::IFormatProvider*  value)  {
::cordl_internals::setStaticField<::System::IFormatProvider*, "_formatProvider", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<::System::IFormatProvider*>(value));
}
inline ::System::IFormatProvider* Fusion::Statistics::FusionStatsGraphBase::getStaticF__formatProvider()  {
return ::cordl_internals::getStaticField<::System::IFormatProvider*, "_formatProvider", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF_LOOKUP_TABLE_0(::ArrayW<::ArrayW<::StringW>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
inline ::ArrayW<::ArrayW<::StringW>> Fusion::Statistics::FusionStatsGraphBase::getStaticF_LOOKUP_TABLE_0()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF_LOOKUP_TABLE_0ms(::ArrayW<::ArrayW<::StringW>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0ms", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
inline ::ArrayW<::ArrayW<::StringW>> Fusion::Statistics::FusionStatsGraphBase::getStaticF_LOOKUP_TABLE_0ms()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0ms", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF_LOOKUP_TABLE_0_BYTES(::ArrayW<::ArrayW<::StringW>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0_BYTES", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
inline ::ArrayW<::ArrayW<::StringW>> Fusion::Statistics::FusionStatsGraphBase::getStaticF_LOOKUP_TABLE_0_BYTES()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0_BYTES", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline void Fusion::Statistics::FusionStatsGraphBase::setStaticF_LOOKUP_TABLE_0_00ms(::ArrayW<::ArrayW<::StringW>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0_00ms", ::Fusion::Statistics::FusionStatsGraphBase*>(std::forward<::ArrayW<::ArrayW<::StringW>>>(value));
}
inline ::ArrayW<::ArrayW<::StringW>> Fusion::Statistics::FusionStatsGraphBase::getStaticF_LOOKUP_TABLE_0_00ms()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::StringW>>, "LOOKUP_TABLE_0_00ms", ::Fusion::Statistics::FusionStatsGraphBase*>();
}
inline bool Fusion::Statistics::FusionStatsGraphBase::get_Initialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"get_Initialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::Initialize(int32_t  accumulateTimeMs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulateTimeMs);
}
inline void Fusion::Statistics::FusionStatsGraphBase::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::AddValueToBuffer(float_t  value, ::by_ref<::System::DateTime>  now)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, now);
}
inline void Fusion::Statistics::FusionStatsGraphBase::Refit()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::Restore()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::ToggleRenderDisplay()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::OnSetValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetThresholds(float_t  threshold1, float_t  threshold2, float_t  threshold3)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetThresholds", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threshold1, threshold2, threshold3);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetIgnoreZeroValues(bool  ignoreZeroOnAverage, bool  ignoreZeroOnBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetIgnoreZeroValues", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ignoreZeroOnAverage, ignoreZeroOnBuffer);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetValueTextFormat(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetValueTextFormat", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetValueTextMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetValueTextMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetAccumulateTime(int32_t  accumulateTimeMs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"SetAccumulateTime", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, accumulateTimeMs);
}
inline void Fusion::Statistics::FusionStatsGraphBase::UpdateThresholdPosition(::UnityEngine::UI::Text*  text, float_t  thresholdNormalized)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"UpdateThresholdPosition", {}, {::i2c::type_of<::UnityEngine::UI::Text*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, thresholdNormalized);
}
inline void Fusion::Statistics::FusionStatsGraphBase::SetGraphValues(::ArrayW<float_t>  values)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, values);
}
inline float_t Fusion::Statistics::FusionStatsGraphBase::RemapValue(float_t  value, float_t  iMin, float_t  iMax, float_t  oMin, float_t  oMax)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"RemapValue", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, value, iMin, iMax, oMin, oMax);
}
inline void Fusion::Statistics::FusionStatsGraphBase::UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, statisticsManager, now);
}
inline ::StringW Fusion::Statistics::FusionStatsGraphBase::GetValueText(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {"GetValueText", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsGraphBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsGraphBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsGraphBase* Fusion::Statistics::FusionStatsGraphBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsGraphBase*>());
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsGraphBase::FusionStatsGraphBase()   {
}

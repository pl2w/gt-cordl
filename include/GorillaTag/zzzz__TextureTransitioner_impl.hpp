#pragma once
// IWYU pragma private; include "GorillaTag/TextureTransitioner.hpp"
#include "GorillaExtensions/zzzz__GorillaMath_RemapFloatInfo_impl.hpp"
#include "GorillaTag/zzzz__TextureTransitioner_DirectionRetentionMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__Texture_impl.hpp"
#include "GorillaTag/zzzz__TextureTransitioner_def.hpp"
#include "GorillaTag/zzzz__IDynamicFloat_def.hpp"
#include "GorillaTag/zzzz__IResettableItem_def.hpp"
#include "GorillaTag/zzzz__TextureTransitioner_DirectionRetentionMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
//  Writing Method size for method: ::GorillaTag::TextureTransitioner.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::Awake)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x5d26eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TextureTransitioner.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::OnEnable)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x5d271dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TextureTransitioner.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::OnDisable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5d276d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TextureTransitioner.RefreshShaderParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::RefreshShaderParams)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5d27188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"RefreshShaderParams", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TextureTransitioner.ResetToDefaultState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::ResetToDefaultState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5d271d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"ResetToDefaultState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::TextureTransitioner._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::TextureTransitioner::*)()>(&::GorillaTag::TextureTransitioner::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5d277a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GorillaTag::TextureTransitioner::__cordl_internal_get_editorPreview()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPreview;
}
constexpr bool const& GorillaTag::TextureTransitioner::__cordl_internal_get_editorPreview() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___editorPreview;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_editorPreview(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___editorPreview = value;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour>& GorillaTag::TextureTransitioner::__cordl_internal_get_dynamicFloatComponent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicFloatComponent;
}
constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& GorillaTag::TextureTransitioner::__cordl_internal_get_dynamicFloatComponent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dynamicFloatComponent;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_dynamicFloatComponent(::UnityW<::UnityEngine::MonoBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dynamicFloatComponent = value;
}
constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo& GorillaTag::TextureTransitioner::__cordl_internal_get_remapInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapInfo;
}
constexpr ::GlobalNamespace::GorillaMath_RemapFloatInfo const& GorillaTag::TextureTransitioner::__cordl_internal_get_remapInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___remapInfo;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_remapInfo(::GlobalNamespace::GorillaMath_RemapFloatInfo  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___remapInfo = value;
}
constexpr ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode& GorillaTag::TextureTransitioner::__cordl_internal_get_directionRetentionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionRetentionMode;
}
constexpr ::GlobalNamespace::TextureTransitioner_DirectionRetentionMode const& GorillaTag::TextureTransitioner::__cordl_internal_get_directionRetentionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___directionRetentionMode;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_directionRetentionMode(::GlobalNamespace::TextureTransitioner_DirectionRetentionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___directionRetentionMode = value;
}
constexpr ::StringW& GorillaTag::TextureTransitioner::__cordl_internal_get_texTransitionShaderParamName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texTransitionShaderParamName;
}
constexpr ::StringW const& GorillaTag::TextureTransitioner::__cordl_internal_get_texTransitionShaderParamName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texTransitionShaderParamName;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_texTransitionShaderParamName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texTransitionShaderParamName = value;
}
constexpr ::StringW& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1ShaderParamName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1ShaderParamName;
}
constexpr ::StringW const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1ShaderParamName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1ShaderParamName;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex1ShaderParamName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex1ShaderParamName = value;
}
constexpr ::StringW& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2ShaderParamName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2ShaderParamName;
}
constexpr ::StringW const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2ShaderParamName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2ShaderParamName;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex2ShaderParamName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex2ShaderParamName = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>>& GorillaTag::TextureTransitioner::__cordl_internal_get_textures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Texture>> const& GorillaTag::TextureTransitioner::__cordl_internal_get_textures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textures;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_textures(::ArrayW<::UnityW<::UnityEngine::Texture>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textures = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>>& GorillaTag::TextureTransitioner::__cordl_internal_get_renderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Renderer>> const& GorillaTag::TextureTransitioner::__cordl_internal_get_renderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderers;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_renderers(::ArrayW<::UnityW<::UnityEngine::Renderer>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderers = value;
}
constexpr ::GorillaTag::IDynamicFloat*& GorillaTag::TextureTransitioner::__cordl_internal_get_iDynamicFloat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDynamicFloat;
}
constexpr ::GorillaTag::IDynamicFloat* const& GorillaTag::TextureTransitioner::__cordl_internal_get_iDynamicFloat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___iDynamicFloat;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_iDynamicFloat(::GorillaTag::IDynamicFloat*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___iDynamicFloat = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_texTransitionShaderParam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texTransitionShaderParam;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_texTransitionShaderParam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texTransitionShaderParam;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_texTransitionShaderParam(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texTransitionShaderParam = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1ShaderParam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1ShaderParam;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1ShaderParam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1ShaderParam;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex1ShaderParam(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex1ShaderParam = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2ShaderParam()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2ShaderParam;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2ShaderParam() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2ShaderParam;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex2ShaderParam(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex2ShaderParam = value;
}
constexpr float_t& GorillaTag::TextureTransitioner::__cordl_internal_get_normalizedValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedValue;
}
constexpr float_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_normalizedValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___normalizedValue;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_normalizedValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___normalizedValue = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_transitionPercent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionPercent;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_transitionPercent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transitionPercent;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_transitionPercent(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transitionPercent = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1Index;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex1Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex1Index;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex1Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex1Index = value;
}
constexpr int32_t& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2Index()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2Index;
}
constexpr int32_t const& GorillaTag::TextureTransitioner::__cordl_internal_get_tex2Index() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tex2Index;
}
constexpr void GorillaTag::TextureTransitioner::__cordl_internal_set_tex2Index(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tex2Index = value;
}
inline void GorillaTag::TextureTransitioner::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TextureTransitioner::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TextureTransitioner::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TextureTransitioner::RefreshShaderParams()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"RefreshShaderParams", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TextureTransitioner::ResetToDefaultState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {"ResetToDefaultState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::TextureTransitioner::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::TextureTransitioner*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::TextureTransitioner* GorillaTag::TextureTransitioner::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::TextureTransitioner*>());
}
/// @brief Convert operator to "::GorillaTag::IResettableItem"
constexpr  GorillaTag::TextureTransitioner::operator ::GorillaTag::IResettableItem*() noexcept {
return static_cast<::GorillaTag::IResettableItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::GorillaTag::IResettableItem"
constexpr ::GorillaTag::IResettableItem* GorillaTag::TextureTransitioner::i___GorillaTag__IResettableItem() noexcept {
return static_cast<::GorillaTag::IResettableItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::TextureTransitioner::TextureTransitioner()   {
}

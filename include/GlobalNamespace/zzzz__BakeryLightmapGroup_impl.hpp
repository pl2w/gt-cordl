#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeryLightmapGroup.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_AtlasPacker_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_HoleFilling_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderDirMode_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderMode_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_ftLMGroupMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroupPlain_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_AtlasPacker_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_HoleFilling_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderDirMode_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_RenderMode_def.hpp"
#include "GlobalNamespace/zzzz__BakeryLightmapGroup_ftLMGroupMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakeryLightmapGroup.GetPlainStruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BakeryLightmapGroupPlain (::GlobalNamespace::BakeryLightmapGroup::*)()>(&::GlobalNamespace::BakeryLightmapGroup::GetPlainStruct)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5f276a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroup*>(),
                        {"GetPlainStruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakeryLightmapGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakeryLightmapGroup::*)()>(&::GlobalNamespace::BakeryLightmapGroup::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f277a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_resolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_resolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resolution;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_resolution(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resolution = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_bitmask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_bitmask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bitmask;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_bitmask(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bitmask = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_id()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_id() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___id;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_id(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___id = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sortingID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortingID;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sortingID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sortingID;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sortingID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sortingID = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_isImplicit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isImplicit;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_isImplicit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isImplicit;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_isImplicit(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isImplicit = value;
}
constexpr float_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_area()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr float_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_area() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___area;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_area(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___area = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_totalVertexCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalVertexCount;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_totalVertexCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___totalVertexCount;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_totalVertexCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___totalVertexCount = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_vertexCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexCounter;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_vertexCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexCounter;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_vertexCounter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexCounter = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sceneLodLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneLodLevel;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sceneLodLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneLodLevel;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sceneLodLevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneLodLevel = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_autoResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoResolution;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_autoResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoResolution;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_autoResolution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoResolution = value;
}
constexpr ::StringW& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sceneName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr ::StringW const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sceneName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sceneName;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sceneName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sceneName = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tag;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_tag(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tag = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_containsTerrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containsTerrains;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_containsTerrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containsTerrains;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_containsTerrains(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containsTerrains = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_probes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probes;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_probes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___probes;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_probes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___probes = value;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mode;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_mode(::GlobalNamespace::BakeryLightmapGroup_ftLMGroupMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mode = value;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_renderMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderMode const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_renderMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderMode;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_renderMode(::GlobalNamespace::BakeryLightmapGroup_RenderMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderMode = value;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_renderDirMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDirMode;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_RenderDirMode const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_renderDirMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderDirMode;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_renderDirMode(::GlobalNamespace::BakeryLightmapGroup_RenderDirMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderDirMode = value;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_atlasPacker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPacker;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_AtlasPacker const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_atlasPacker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___atlasPacker;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_atlasPacker(::GlobalNamespace::BakeryLightmapGroup_AtlasPacker  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___atlasPacker = value;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_HoleFilling& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_holeFilling()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeFilling;
}
constexpr ::GlobalNamespace::BakeryLightmapGroup_HoleFilling const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_holeFilling() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___holeFilling;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_holeFilling(::GlobalNamespace::BakeryLightmapGroup_HoleFilling  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___holeFilling = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_vertexSamplingDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexSamplingDensity;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_vertexSamplingDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___vertexSamplingDensity;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_vertexSamplingDensity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___vertexSamplingDensity = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_computeSSS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeSSS;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_computeSSS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___computeSSS;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_computeSSS(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___computeSSS = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssSamples;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssSamples;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sssSamples(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sssSamples = value;
}
constexpr float_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssDensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssDensity;
}
constexpr float_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssDensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssDensity;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sssDensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sssDensity = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssColor;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sssColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sssColor = value;
}
constexpr float_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssScale;
}
constexpr float_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_sssScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sssScale;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_sssScale(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sssScale = value;
}
constexpr float_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_fakeShadowBias()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fakeShadowBias;
}
constexpr float_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_fakeShadowBias() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fakeShadowBias;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_fakeShadowBias(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fakeShadowBias = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_transparentSelfShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentSelfShadow;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_transparentSelfShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transparentSelfShadow;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_transparentSelfShadow(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transparentSelfShadow = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_flipNormal()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipNormal;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_flipNormal() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___flipNormal;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_flipNormal(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___flipNormal = value;
}
constexpr ::StringW& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_parentName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentName;
}
constexpr ::StringW const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_parentName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___parentName;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_parentName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___parentName = value;
}
constexpr ::StringW& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_overridePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridePath;
}
constexpr ::StringW const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_overridePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overridePath;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_overridePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overridePath = value;
}
constexpr bool& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_fixPos3D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixPos3D;
}
constexpr bool const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_fixPos3D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fixPos3D;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_fixPos3D(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fixPos3D = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_voxelSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_voxelSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___voxelSize;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_voxelSize(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___voxelSize = value;
}
constexpr int32_t& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_passedFilter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedFilter;
}
constexpr int32_t const& GlobalNamespace::BakeryLightmapGroup::__cordl_internal_get_passedFilter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passedFilter;
}
constexpr void GlobalNamespace::BakeryLightmapGroup::__cordl_internal_set_passedFilter(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passedFilter = value;
}
inline ::GlobalNamespace::BakeryLightmapGroupPlain GlobalNamespace::BakeryLightmapGroup::GetPlainStruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroup*>(),
                        {"GetPlainStruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BakeryLightmapGroupPlain>(this, ___internal_method);
}
inline void GlobalNamespace::BakeryLightmapGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BakeryLightmapGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakeryLightmapGroup* GlobalNamespace::BakeryLightmapGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakeryLightmapGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakeryLightmapGroup::BakeryLightmapGroup()   {
}

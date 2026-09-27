#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeGlobalIndirection_IndexMetaData.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeGlobalIndirection_IndexMetaData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData.Pack
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::*)(::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::Pack)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb15e5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData>(),
                        {"Pack", {}, {::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::setStaticF_s_PackedValues(::ArrayW<uint32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint32_t>, "s_PackedValues", ::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData>(std::forward<::ArrayW<uint32_t>>(value));
}
inline ::ArrayW<uint32_t> GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::getStaticF_s_PackedValues()  {
return ::cordl_internals::getStaticField<::ArrayW<uint32_t>, "s_PackedValues", ::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData>();
}
inline void GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::Pack(::by_ref<::ArrayW<uint32_t>>  vals)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData>(),
                        {"Pack", {}, {::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, vals);
}
// Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxLocalIdxPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::ProbeGlobalIndirection_IndexMetaData(::UnityEngine::Vector3Int  minLocalIdx, ::UnityEngine::Vector3Int  maxLocalIdxPlusOne, int32_t  firstChunkIndex, int32_t  minSubdiv) noexcept  {
this->minLocalIdx = minLocalIdx;
this->maxLocalIdxPlusOne = maxLocalIdxPlusOne;
this->firstChunkIndex = firstChunkIndex;
this->minSubdiv = minSubdiv;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData::ProbeGlobalIndirection_IndexMetaData()   {
}

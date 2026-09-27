#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeGlobalIndirection_IndexMetaData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeGlobalIndirection_IndexMetaData)
// Forward declare root types
namespace GlobalNamespace {
struct ProbeGlobalIndirection_IndexMetaData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData, "UnityEngine.Rendering", "ProbeGlobalIndirection/IndexMetaData");
// Dependencies UnityEngine.Vector3Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeGlobalIndirection/IndexMetaData
struct CORDL_TYPE ProbeGlobalIndirection_IndexMetaData {
public:
// Declarations
/// @brief Field s_PackedValues, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PackedValues, put=setStaticF_s_PackedValues)) ::ArrayW<uint32_t>  s_PackedValues;

/// @brief Method Pack, addr 0xb15e5f4, size 0x130, virtual false, abstract: false, final false
inline void Pack(::by_ref<::ArrayW<uint32_t>>  vals) ;

static inline ::ArrayW<uint32_t> getStaticF_s_PackedValues() ;

static inline void setStaticF_s_PackedValues(::ArrayW<uint32_t>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ProbeGlobalIndirection_IndexMetaData() ;

// Ctor Parameters [CppParam { name: "minLocalIdx", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxLocalIdxPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "firstChunkIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProbeGlobalIndirection_IndexMetaData(::UnityEngine::Vector3Int  minLocalIdx, ::UnityEngine::Vector3Int  maxLocalIdxPlusOne, int32_t  firstChunkIndex, int32_t  minSubdiv) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16806};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field minLocalIdx, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  minLocalIdx;

/// @brief Field maxLocalIdxPlusOne, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3Int  maxLocalIdxPlusOne;

/// @brief Field firstChunkIndex, offset: 0x18, size: 0x4, def value: None
 int32_t  firstChunkIndex;

/// @brief Field minSubdiv, offset: 0x1c, size: 0x4, def value: None
 int32_t  minSubdiv;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData, minLocalIdx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData, maxLocalIdxPlusOne) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData, firstChunkIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData, minSubdiv) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProbeGlobalIndirection_IndexMetaData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace

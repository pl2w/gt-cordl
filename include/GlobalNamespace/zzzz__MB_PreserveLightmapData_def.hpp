#pragma once
// IWYU pragma private; include "GlobalNamespace/MB_PreserveLightmapData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MB_PreserveLightmapData)
// Forward declare root types
namespace GlobalNamespace {
class MB_PreserveLightmapData;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MB_PreserveLightmapData*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MB_PreserveLightmapData*, "", "MB_PreserveLightmapData");
// [ExecuteInEditMode]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: MB_PreserveLightmapData
class CORDL_TYPE MB_PreserveLightmapData : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field lightmapIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_lightmapIndex, put=__cordl_internal_set_lightmapIndex)) int32_t  lightmapIndex;

/// @brief Field lightmapScaleOffset, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_lightmapScaleOffset, put=__cordl_internal_set_lightmapScaleOffset)) ::UnityEngine::Vector4  lightmapScaleOffset;

/// @brief Method Awake, addr 0x9d7e11c, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MB_PreserveLightmapData* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_lightmapIndex() const;

constexpr int32_t& __cordl_internal_get_lightmapIndex() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_lightmapScaleOffset() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_lightmapScaleOffset() ;

constexpr void __cordl_internal_set_lightmapIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lightmapScaleOffset(::UnityEngine::Vector4  value) ;

/// @brief Method .ctor, addr 0x9d7e29c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MB_PreserveLightmapData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MB_PreserveLightmapData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MB_PreserveLightmapData(MB_PreserveLightmapData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MB_PreserveLightmapData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MB_PreserveLightmapData(MB_PreserveLightmapData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22587};

/// @brief Field lightmapIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___lightmapIndex;

/// @brief Field lightmapScaleOffset, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___lightmapScaleOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MB_PreserveLightmapData, ___lightmapIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MB_PreserveLightmapData, ___lightmapScaleOffset) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MB_PreserveLightmapData) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace

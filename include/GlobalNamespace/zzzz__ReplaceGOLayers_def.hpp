#pragma once
// IWYU pragma private; include "GlobalNamespace/ReplaceGOLayers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReplaceGOLayers)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class ReplaceGOLayers;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ReplaceGOLayers*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ReplaceGOLayers*, "", "ReplaceGOLayers");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ReplaceGOLayers
class CORDL_TYPE ReplaceGOLayers : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fromLayer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_fromLayer, put=__cordl_internal_set_fromLayer)) int32_t  fromLayer;

/// @brief Field target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::UnityW<::UnityEngine::GameObject>  target;

/// @brief Field toLayer, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_toLayer, put=__cordl_internal_set_toLayer)) int32_t  toLayer;

static inline ::GlobalNamespace::ReplaceGOLayers* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_fromLayer() const;

constexpr int32_t& __cordl_internal_get_fromLayer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_target() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_target() ;

constexpr int32_t const& __cordl_internal_get_toLayer() const;

constexpr int32_t& __cordl_internal_get_toLayer() ;

constexpr void __cordl_internal_set_fromLayer(int32_t  value) ;

constexpr void __cordl_internal_set_target(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_toLayer(int32_t  value) ;

/// @brief Method .ctor, addr 0x56c22a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReplaceGOLayers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReplaceGOLayers", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ReplaceGOLayers(ReplaceGOLayers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReplaceGOLayers", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReplaceGOLayers(ReplaceGOLayers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1009};

/// @brief Field fromLayer, offset: 0x20, size: 0x4, def value: None
 int32_t  ___fromLayer;

/// @brief Field toLayer, offset: 0x24, size: 0x4, def value: None
 int32_t  ___toLayer;

/// @brief Field target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ReplaceGOLayers, ___fromLayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplaceGOLayers, ___toLayer) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ReplaceGOLayers, ___target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ReplaceGOLayers) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

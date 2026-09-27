#pragma once
// IWYU pragma private; include "GlobalNamespace/OrientedBounds.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(OrientedBounds)
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace GlobalNamespace {
struct OrientedBounds;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OrientedBounds);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OrientedBounds, "", "OrientedBounds");
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: true
// CS Name: OrientedBounds
struct CORDL_TYPE OrientedBounds {
public:
// Declarations
/// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF__Empty_k__BackingField, put=setStaticF__Empty_k__BackingField)) ::GlobalNamespace::OrientedBounds  _Empty_k__BackingField;

/// @brief Field <Identity>k__BackingField, offset 0xffffffff, size 0x28 
 __declspec(property(get=getStaticF__Identity_k__BackingField, put=setStaticF__Identity_k__BackingField)) ::GlobalNamespace::OrientedBounds  _Identity_k__BackingField;

/// @brief Method TRS, addr 0x5a1f380, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Matrix4x4 TRS() ;

static inline ::GlobalNamespace::OrientedBounds getStaticF__Empty_k__BackingField() ;

static inline ::GlobalNamespace::OrientedBounds getStaticF__Identity_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Empty, addr 0x5a1f2ac, size 0x68, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OrientedBounds get_Empty() ;

/// [CompilerGenerated]
/// @brief Method get_Identity, addr 0x5a1f314, size 0x6c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OrientedBounds get_Identity() ;

static inline void setStaticF__Empty_k__BackingField(::GlobalNamespace::OrientedBounds  value) ;

static inline void setStaticF__Identity_k__BackingField(::GlobalNamespace::OrientedBounds  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OrientedBounds() ;

// Ctor Parameters [CppParam { name: "size", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "center", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None, comment: None }]
constexpr OrientedBounds(::UnityEngine::Vector3  size, ::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2834};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field size, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  size;

/// @brief Field center, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  center;

/// @brief Field rotation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Quaternion  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OrientedBounds, size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OrientedBounds, center) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OrientedBounds, rotation) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OrientedBounds) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace

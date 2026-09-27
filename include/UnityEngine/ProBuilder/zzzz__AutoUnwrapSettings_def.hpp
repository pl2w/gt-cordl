#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/AutoUnwrapSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_Anchor_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__AutoUnwrapSettings_Fill_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AutoUnwrapSettings)
namespace GlobalNamespace {
struct AutoUnwrapSettings_Anchor;
}
namespace GlobalNamespace {
struct AutoUnwrapSettings_Fill;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::ProBuilder::AutoUnwrapSettings);
DEFINE_IL2CPP_CLASS(::UnityEngine::ProBuilder::AutoUnwrapSettings, "UnityEngine.ProBuilder", "AutoUnwrapSettings");
// Dependencies UnityEngine.ProBuilder.AutoUnwrapSettings::Anchor, UnityEngine.ProBuilder.AutoUnwrapSettings::Fill, UnityEngine.Vector2
namespace UnityEngine::ProBuilder {
// Is value type: true
// CS Name: UnityEngine.ProBuilder.AutoUnwrapSettings
struct CORDL_TYPE AutoUnwrapSettings {
public:
// Declarations
using Anchor = ::GlobalNamespace::AutoUnwrapSettings_Anchor;

using Fill = ::GlobalNamespace::AutoUnwrapSettings_Fill;

 __declspec(property(get=get_anchor, put=set_anchor)) ::GlobalNamespace::AutoUnwrapSettings_Anchor  anchor;

 __declspec(property(get=get_fill, put=set_fill)) ::GlobalNamespace::AutoUnwrapSettings_Fill  fill;

 __declspec(property(get=get_flipU, put=set_flipU)) bool  flipU;

 __declspec(property(get=get_flipV, put=set_flipV)) bool  flipV;

 __declspec(property(get=get_offset, put=set_offset)) ::UnityEngine::Vector2  offset;

 __declspec(property(get=get_rotation, put=set_rotation)) float_t  rotation;

 __declspec(property(get=get_scale, put=set_scale)) ::UnityEngine::Vector2  scale;

 __declspec(property(get=get_swapUV, put=set_swapUV)) bool  swapUV;

 __declspec(property(get=get_useWorldSpace, put=set_useWorldSpace)) bool  useWorldSpace;

/// @brief Method Reset, addr 0xb083260, size 0x18, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ToString, addr 0xb0833ac, size 0x488, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0xb083308, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ProBuilder::AutoUnwrapSettings  unwrapSettings) ;

/// @brief Method get_anchor, addr 0xb0832f8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AutoUnwrapSettings_Anchor get_anchor() ;

/// @brief Method get_defaultAutoUnwrapSettings, addr 0xb083248, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_defaultAutoUnwrapSettings() ;

/// @brief Method get_fill, addr 0xb0832b8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::AutoUnwrapSettings_Fill get_fill() ;

/// @brief Method get_fit, addr 0xb08337c, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_fit() ;

/// @brief Method get_flipU, addr 0xb083288, size 0x8, virtual false, abstract: false, final false
inline bool get_flipU() ;

/// @brief Method get_flipV, addr 0xb083298, size 0x8, virtual false, abstract: false, final false
inline bool get_flipV() ;

/// @brief Method get_offset, addr 0xb0832d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_offset() ;

/// @brief Method get_rotation, addr 0xb0832e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotation() ;

/// @brief Method get_scale, addr 0xb0832c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_scale() ;

/// @brief Method get_stretch, addr 0xb083394, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_stretch() ;

/// @brief Method get_swapUV, addr 0xb0832a8, size 0x8, virtual false, abstract: false, final false
inline bool get_swapUV() ;

/// @brief Method get_tile, addr 0xb083364, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::ProBuilder::AutoUnwrapSettings get_tile() ;

/// @brief Method get_useWorldSpace, addr 0xb083278, size 0x8, virtual false, abstract: false, final false
inline bool get_useWorldSpace() ;

/// @brief Method set_anchor, addr 0xb083300, size 0x8, virtual false, abstract: false, final false
inline void set_anchor(::GlobalNamespace::AutoUnwrapSettings_Anchor  value) ;

/// @brief Method set_fill, addr 0xb0832c0, size 0x8, virtual false, abstract: false, final false
inline void set_fill(::GlobalNamespace::AutoUnwrapSettings_Fill  value) ;

/// @brief Method set_flipU, addr 0xb083290, size 0x8, virtual false, abstract: false, final false
inline void set_flipU(bool  value) ;

/// @brief Method set_flipV, addr 0xb0832a0, size 0x8, virtual false, abstract: false, final false
inline void set_flipV(bool  value) ;

/// @brief Method set_offset, addr 0xb0832e0, size 0x8, virtual false, abstract: false, final false
inline void set_offset(::UnityEngine::Vector2  value) ;

/// @brief Method set_rotation, addr 0xb0832f0, size 0x8, virtual false, abstract: false, final false
inline void set_rotation(float_t  value) ;

/// @brief Method set_scale, addr 0xb0832d0, size 0x8, virtual false, abstract: false, final false
inline void set_scale(::UnityEngine::Vector2  value) ;

/// @brief Method set_swapUV, addr 0xb0832b0, size 0x8, virtual false, abstract: false, final false
inline void set_swapUV(bool  value) ;

/// @brief Method set_useWorldSpace, addr 0xb083280, size 0x8, virtual false, abstract: false, final false
inline void set_useWorldSpace(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr AutoUnwrapSettings() ;

// Ctor Parameters [CppParam { name: "m_UseWorldSpace", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FlipU", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FlipV", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_SwapUV", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Fill", ty: "::GlobalNamespace::AutoUnwrapSettings_Fill", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Rotation", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Anchor", ty: "::GlobalNamespace::AutoUnwrapSettings_Anchor", modifiers: "", def_value: None, comment: None }]
constexpr AutoUnwrapSettings(bool  m_UseWorldSpace, bool  m_FlipU, bool  m_FlipV, bool  m_SwapUV, ::GlobalNamespace::AutoUnwrapSettings_Fill  m_Fill, ::UnityEngine::Vector2  m_Scale, ::UnityEngine::Vector2  m_Offset, float_t  m_Rotation, ::GlobalNamespace::AutoUnwrapSettings_Anchor  m_Anchor) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24186};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// [SerializeField]
/// [FormerlySerializedAs("useWorldSpace")]
/// @brief Field m_UseWorldSpace, offset: 0x0, size: 0x1, def value: None
 bool  m_UseWorldSpace;

/// [SerializeField]
/// [FormerlySerializedAs("flipU")]
/// @brief Field m_FlipU, offset: 0x1, size: 0x1, def value: None
 bool  m_FlipU;

/// [SerializeField]
/// [FormerlySerializedAs("flipV")]
/// @brief Field m_FlipV, offset: 0x2, size: 0x1, def value: None
 bool  m_FlipV;

/// [SerializeField]
/// [FormerlySerializedAs("swapUV")]
/// @brief Field m_SwapUV, offset: 0x3, size: 0x1, def value: None
 bool  m_SwapUV;

/// [SerializeField]
/// [FormerlySerializedAs("fill")]
/// @brief Field m_Fill, offset: 0x4, size: 0x4, def value: None
 ::GlobalNamespace::AutoUnwrapSettings_Fill  m_Fill;

/// [SerializeField]
/// [FormerlySerializedAs("scale")]
/// @brief Field m_Scale, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Scale;

/// [SerializeField]
/// [FormerlySerializedAs("offset")]
/// @brief Field m_Offset, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Vector2  m_Offset;

/// [SerializeField]
/// [FormerlySerializedAs("rotation")]
/// @brief Field m_Rotation, offset: 0x18, size: 0x4, def value: None
 float_t  m_Rotation;

/// [SerializeField]
/// [FormerlySerializedAs("anchor")]
/// @brief Field m_Anchor, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::AutoUnwrapSettings_Anchor  m_Anchor;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_UseWorldSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipU) == 0x1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_FlipV) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_SwapUV) == 0x3, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Fill) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Offset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Rotation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::AutoUnwrapSettings, m_Anchor) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ProBuilder::AutoUnwrapSettings) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder

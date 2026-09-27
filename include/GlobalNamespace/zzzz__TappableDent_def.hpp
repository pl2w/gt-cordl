#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableDent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__Tappable_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TappableDent)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TappableDent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TappableDent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableDent*, "", "TappableDent");
// Dependencies Tappable, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TappableDent
class CORDL_TYPE TappableDent : public ::GlobalNamespace::Tappable {
public:
// Declarations
/// @brief Field finalLocalOffset, offset 0x4c, size 0xc 
 __declspec(property(get=__cordl_internal_get_finalLocalOffset, put=__cordl_internal_set_finalLocalOffset)) ::UnityEngine::Vector3  finalLocalOffset;

/// @brief Field finalLocalScale, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_finalLocalScale, put=__cordl_internal_set_finalLocalScale)) ::UnityEngine::Vector3  finalLocalScale;

/// @brief Field numTapsSoFar, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_numTapsSoFar, put=__cordl_internal_set_numTapsSoFar)) int32_t  numTapsSoFar;

/// @brief Field numTapsToDestroy, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_numTapsToDestroy, put=__cordl_internal_set_numTapsToDestroy)) int32_t  numTapsToDestroy;

/// @brief Field offsetPerTap, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_offsetPerTap, put=__cordl_internal_set_offsetPerTap)) ::UnityEngine::Vector3  offsetPerTap;

/// @brief Field parent, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::GameObject>  parent;

/// @brief Field scaleOffsetPerTap, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_scaleOffsetPerTap, put=__cordl_internal_set_scaleOffsetPerTap)) ::UnityEngine::Vector3  scaleOffsetPerTap;

/// @brief Method ChangeNumTapsToDestroy, addr 0x598d5f8, size 0x100, virtual false, abstract: false, final false
inline void ChangeNumTapsToDestroy(int32_t  i) ;

static inline ::GlobalNamespace::TappableDent* New_ctor() ;

/// @brief Method OnTapLocal, addr 0x598d520, size 0xd8, virtual true, abstract: false, final false
inline void OnTapLocal(float_t  tapStrength, float_t  tapTime, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method Start, addr 0x598d3e0, size 0x140, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_finalLocalOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_finalLocalOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_finalLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_finalLocalScale() ;

constexpr int32_t const& __cordl_internal_get_numTapsSoFar() const;

constexpr int32_t& __cordl_internal_get_numTapsSoFar() ;

constexpr int32_t const& __cordl_internal_get_numTapsToDestroy() const;

constexpr int32_t& __cordl_internal_get_numTapsToDestroy() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offsetPerTap() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offsetPerTap() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parent() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_scaleOffsetPerTap() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_scaleOffsetPerTap() ;

constexpr void __cordl_internal_set_finalLocalOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_finalLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_numTapsSoFar(int32_t  value) ;

constexpr void __cordl_internal_set_numTapsToDestroy(int32_t  value) ;

constexpr void __cordl_internal_set_offsetPerTap(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_scaleOffsetPerTap(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x598d6f8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TappableDent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TappableDent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TappableDent(TappableDent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TappableDent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TappableDent(TappableDent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2564};

/// [SerializeField]
/// @brief Field numTapsToDestroy, offset: 0x48, size: 0x4, def value: None
 int32_t  ___numTapsToDestroy;

/// [SerializeField]
/// @brief Field finalLocalOffset, offset: 0x4c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___finalLocalOffset;

/// [SerializeField]
/// @brief Field finalLocalScale, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___finalLocalScale;

/// [SerializeField]
/// @brief Field parent, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parent;

/// @brief Field numTapsSoFar, offset: 0x70, size: 0x4, def value: None
 int32_t  ___numTapsSoFar;

/// @brief Field offsetPerTap, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offsetPerTap;

/// @brief Field scaleOffsetPerTap, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___scaleOffsetPerTap;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableDent, ___numTapsToDestroy) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___finalLocalOffset) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___finalLocalScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___parent) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___numTapsSoFar) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___offsetPerTap) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableDent, ___scaleOffsetPerTap) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableDent) == 0x90, "Size mismatch!");

} // namespace end def GlobalNamespace

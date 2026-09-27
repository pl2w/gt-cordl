#pragma once
// IWYU pragma private; include "GlobalNamespace/BeePerchPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
CORDL_MODULE_EXPORT(BeePerchPoint)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeePerchPoint;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeePerchPoint*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeePerchPoint*, "", "BeePerchPoint");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeePerchPoint
class CORDL_TYPE BeePerchPoint : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field localPosition, offset 0x20, size 0xc 
 __declspec(property(get=__cordl_internal_get_localPosition, put=__cordl_internal_set_localPosition)) ::UnityEngine::Vector3  localPosition;

/// @brief Method GetPoint, addr 0x56119d4, size 0x2c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetPoint() ;

static inline ::GlobalNamespace::BeePerchPoint* New_ctor() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localPosition() ;

constexpr void __cordl_internal_set_localPosition(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5613d14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeePerchPoint() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeePerchPoint", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BeePerchPoint(BeePerchPoint && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeePerchPoint", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeePerchPoint(BeePerchPoint const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{550};

/// [SerializeField]
/// @brief Field localPosition, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localPosition;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeePerchPoint, ___localPosition) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeePerchPoint) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace

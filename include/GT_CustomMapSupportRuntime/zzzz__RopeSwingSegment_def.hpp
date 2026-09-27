#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/RopeSwingSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RopeSwingSegment)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class RopeSwingSegment;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::RopeSwingSegment*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::RopeSwingSegment*, "GT_CustomMapSupportRuntime", "RopeSwingSegment");
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.RopeSwingSegment
class CORDL_TYPE RopeSwingSegment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field boneIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_boneIndex, put=__cordl_internal_set_boneIndex)) int32_t  boneIndex;

/// @brief Field ropeSwingParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSwingParent, put=__cordl_internal_set_ropeSwingParent)) ::UnityW<::UnityEngine::GameObject>  ropeSwingParent;

static inline ::GT_CustomMapSupportRuntime::RopeSwingSegment* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_boneIndex() const;

constexpr int32_t& __cordl_internal_get_boneIndex() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ropeSwingParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ropeSwingParent() ;

constexpr void __cordl_internal_set_boneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_ropeSwingParent(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9cb82b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RopeSwingSegment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RopeSwingSegment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RopeSwingSegment(RopeSwingSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RopeSwingSegment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RopeSwingSegment(RopeSwingSegment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30923};

/// [Nullable(2)]
/// @brief Field ropeSwingParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ropeSwingParent;

/// @brief Field boneIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___boneIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::RopeSwingSegment, ___ropeSwingParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::RopeSwingSegment, ___boneIndex) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::RopeSwingSegment) == 0x30, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

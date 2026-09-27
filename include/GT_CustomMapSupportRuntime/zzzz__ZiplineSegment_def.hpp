#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/ZiplineSegment.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ZiplineSegment)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class ZiplineSegment;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::ZiplineSegment*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::ZiplineSegment*, "GT_CustomMapSupportRuntime", "ZiplineSegment");
// Dependencies UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.ZiplineSegment
class CORDL_TYPE ZiplineSegment : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ziplineParent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_ziplineParent, put=__cordl_internal_set_ziplineParent)) ::UnityW<::UnityEngine::GameObject>  ziplineParent;

static inline ::GT_CustomMapSupportRuntime::ZiplineSegment* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ziplineParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ziplineParent() ;

constexpr void __cordl_internal_set_ziplineParent(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x9cb8e40, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZiplineSegment() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZiplineSegment", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZiplineSegment(ZiplineSegment && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZiplineSegment", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZiplineSegment(ZiplineSegment const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30938};

/// [Nullable(2)]
/// @brief Field ziplineParent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ziplineParent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::ZiplineSegment, ___ziplineParent) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::ZiplineSegment) == 0x28, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime

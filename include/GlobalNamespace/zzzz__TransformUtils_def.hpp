#pragma once
// IWYU pragma private; include "GlobalNamespace/TransformUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TransformUtils)
namespace UnityEngine {
struct Hash128;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransformUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransformUtils*, "", "TransformUtils");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransformUtils
class CORDL_TYPE TransformUtils : public ::System::Object {
public:
// Declarations
/// @brief Method ComputePathHash, addr 0x5b1a690, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityEngine::Hash128 ComputePathHash(::UnityEngine::Transform*  t) ;

/// @brief Method ComputePathHashByInstance, addr 0x5b1a568, size 0x128, virtual false, abstract: false, final false
static inline int32_t ComputePathHashByInstance(::UnityEngine::Transform*  t) ;

/// @brief Method GetScenePath, addr 0x5b1a780, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW GetScenePath(::UnityEngine::Transform*  t) ;

/// @brief Method GetScenePathReverse, addr 0x5b1a87c, size 0x1c4, virtual false, abstract: false, final false
static inline ::StringW GetScenePathReverse(::UnityEngine::Transform*  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransformUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransformUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransformUtils(TransformUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransformUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransformUtils(TransformUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3570};

/// @brief Field kFwdSlash offset 0xffffffff size 0x8
static constexpr ::ConstString  kFwdSlash{u"/"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TransformUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

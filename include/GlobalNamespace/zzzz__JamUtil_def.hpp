#pragma once
// IWYU pragma private; include "GlobalNamespace/JamUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JamUtil)
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RaycastHit;
}
// Forward declare root types
namespace GlobalNamespace {
class JamUtil;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::JamUtil*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::JamUtil*, "", "JamUtil");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: JamUtil
class CORDL_TYPE JamUtil : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method ConvertToRaycast, addr 0x5d16e14, size 0x230, virtual false, abstract: false, final false
static inline bool ConvertToRaycast(::UnityEngine::Collision*  collision, ::by_ref<::UnityEngine::RaycastHit>  hit) ;

/// @brief Method Destroy, addr 0x5d16cdc, size 0x58, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// [Extension]
/// @brief Method ToRaycastHit, addr 0x5d16d34, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::RaycastHit ToRaycastHit(::UnityEngine::Collision*  collision) ;

/// @brief Method get_IsPlaying, addr 0x5d16c8c, size 0x50, virtual false, abstract: false, final false
static inline bool get_IsPlaying() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JamUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JamUtil", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
JamUtil(JamUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JamUtil", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
JamUtil(JamUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{487};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::JamUtil) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRScene.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(OVRScene)
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScene;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRScene*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRScene*, "", "OVRScene");
// [Feature((Meta.XR.Util.Feature)8)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRScene
class CORDL_TYPE OVRScene : public ::System::Object {
public:
// Declarations
/// @brief Method RequestSpaceSetup, addr 0xa57e62c, size 0xb8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<bool> RequestSpaceSetup() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRScene() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRScene", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRScene(OVRScene && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRScene", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRScene(OVRScene const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11866};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRScene) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

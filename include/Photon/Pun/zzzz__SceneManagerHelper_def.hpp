#pragma once
// IWYU pragma private; include "Photon/Pun/SceneManagerHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SceneManagerHelper)
// Forward declare root types
namespace Photon::Pun {
class SceneManagerHelper;
}
// Write type traits
MARK_REF_T(::Photon::Pun::SceneManagerHelper*);
DEFINE_IL2CPP_CLASS(::Photon::Pun::SceneManagerHelper*, "Photon.Pun", "SceneManagerHelper");
// Dependencies System.Object
namespace Photon::Pun {
// Is value type: false
// CS Name: Photon.Pun.SceneManagerHelper
class CORDL_TYPE SceneManagerHelper : public ::System::Object {
public:
// Declarations
static inline ::Photon::Pun::SceneManagerHelper* New_ctor() ;

/// @brief Method .ctor, addr 0xa72c870, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveSceneBuildIndex, addr 0xa728b30, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_ActiveSceneBuildIndex() ;

/// @brief Method get_ActiveSceneName, addr 0xa713ba8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW get_ActiveSceneName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SceneManagerHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SceneManagerHelper(SceneManagerHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SceneManagerHelper(SceneManagerHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29718};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Photon::Pun::SceneManagerHelper) == 0x10, "Size mismatch!");

} // namespace end def Photon::Pun

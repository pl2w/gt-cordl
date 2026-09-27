#pragma once
// IWYU pragma private; include "UnityEngine/RemoteConfigSettingsHelper.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RemoteConfigSettingsHelper)
namespace GlobalNamespace {
struct RemoteConfigSettingsHelper_Tag;
}
// Forward declare root types
namespace UnityEngine {
class RemoteConfigSettingsHelper;
}
// Write type traits
MARK_REF_T(::UnityEngine::RemoteConfigSettingsHelper*);
DEFINE_IL2CPP_CLASS(::UnityEngine::RemoteConfigSettingsHelper*, "UnityEngine", "RemoteConfigSettingsHelper");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.RemoteConfigSettingsHelper
class CORDL_TYPE RemoteConfigSettingsHelper : public ::System::Object {
public:
// Declarations
using Tag = ::GlobalNamespace::RemoteConfigSettingsHelper_Tag;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoteConfigSettingsHelper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoteConfigSettingsHelper(RemoteConfigSettingsHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettingsHelper", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoteConfigSettingsHelper(RemoteConfigSettingsHelper const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32843};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::RemoteConfigSettingsHelper) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine

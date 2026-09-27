#pragma once
// IWYU pragma private; include "UnityEngine/Animations/Rigging/SyncSceneToStreamAttribute.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SyncSceneToStreamAttribute)
// Forward declare root types
namespace UnityEngine::Animations::Rigging {
class SyncSceneToStreamAttribute;
}
// Write type traits
MARK_REF_T(::UnityEngine::Animations::Rigging::SyncSceneToStreamAttribute*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Animations::Rigging::SyncSceneToStreamAttribute*, "UnityEngine.Animations.Rigging", "SyncSceneToStreamAttribute");
// [AttributeUsage((System.AttributeTargets)256, Inherited = false, AllowMultiple = false)]
// Dependencies System.Attribute
namespace UnityEngine::Animations::Rigging {
// Is value type: false
// CS Name: UnityEngine.Animations.Rigging.SyncSceneToStreamAttribute
class CORDL_TYPE SyncSceneToStreamAttribute : public ::System::Attribute {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr SyncSceneToStreamAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SyncSceneToStreamAttribute", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SyncSceneToStreamAttribute(SyncSceneToStreamAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SyncSceneToStreamAttribute", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SyncSceneToStreamAttribute(SyncSceneToStreamAttribute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32316};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Animations::Rigging::SyncSceneToStreamAttribute) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Animations::Rigging

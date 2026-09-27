#pragma once
// IWYU pragma private; include "UnityEngine/Localization/EditorPropertyDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(EditorPropertyDriver)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization {
class EditorPropertyDriver;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::EditorPropertyDriver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::EditorPropertyDriver*, "UnityEngine.Localization", "EditorPropertyDriver");
// Dependencies System.Object
namespace UnityEngine::Localization {
// Is value type: false
// CS Name: UnityEngine.Localization.EditorPropertyDriver
class CORDL_TYPE EditorPropertyDriver : public ::System::Object {
public:
// Declarations
/// @brief Method RegisterProperty, addr 0xb0154f8, size 0x4, virtual false, abstract: false, final false
static inline void RegisterProperty(::UnityEngine::Object*  target, ::StringW  propertyPath) ;

/// @brief Method UnregisterProperty, addr 0xb0154fc, size 0x4, virtual false, abstract: false, final false
static inline void UnregisterProperty(::UnityEngine::Object*  target, ::StringW  propertyPath) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorPropertyDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorPropertyDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorPropertyDriver(EditorPropertyDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorPropertyDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorPropertyDriver(EditorPropertyDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25062};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::EditorPropertyDriver) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization

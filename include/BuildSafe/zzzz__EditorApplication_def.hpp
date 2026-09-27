#pragma once
// IWYU pragma private; include "BuildSafe/EditorApplication.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EditorApplication)
namespace System {
class Action;
}
// Forward declare root types
namespace BuildSafe {
class EditorApplication;
}
// Write type traits
MARK_REF_T(::BuildSafe::EditorApplication*);
DEFINE_IL2CPP_CLASS(::BuildSafe::EditorApplication*, "BuildSafe", "EditorApplication");
// Dependencies System.Object
namespace BuildSafe {
// Is value type: false
// CS Name: BuildSafe.EditorApplication
class CORDL_TYPE EditorApplication : public ::System::Object {
public:
// Declarations
/// @brief Method add_delayCall, addr 0x5c4ec80, size 0x4, virtual false, abstract: false, final false
static inline void add_delayCall(::System::Action*  value) ;

/// @brief Method add_hierarchyChanged, addr 0x5c4ec70, size 0x4, virtual false, abstract: false, final false
static inline void add_hierarchyChanged(::System::Action*  value) ;

/// @brief Method add_update, addr 0x5c4ec78, size 0x4, virtual false, abstract: false, final false
static inline void add_update(::System::Action*  value) ;

/// @brief Method remove_delayCall, addr 0x5c4ec84, size 0x4, virtual false, abstract: false, final false
static inline void remove_delayCall(::System::Action*  value) ;

/// @brief Method remove_hierarchyChanged, addr 0x5c4ec74, size 0x4, virtual false, abstract: false, final false
static inline void remove_hierarchyChanged(::System::Action*  value) ;

/// @brief Method remove_update, addr 0x5c4ec7c, size 0x4, virtual false, abstract: false, final false
static inline void remove_update(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EditorApplication() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EditorApplication", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EditorApplication(EditorApplication && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EditorApplication", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EditorApplication(EditorApplication const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4247};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BuildSafe::EditorApplication) == 0x10, "Size mismatch!");

} // namespace end def BuildSafe

#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderPlatformSetter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ShaderPlatformSetter)
// Forward declare root types
namespace GlobalNamespace {
class ShaderPlatformSetter;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShaderPlatformSetter*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderPlatformSetter*, "", "ShaderPlatformSetter");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderPlatformSetter
class CORDL_TYPE ShaderPlatformSetter : public ::System::Object {
public:
// Declarations
/// [RuntimeInitializeOnLoadMethod]
/// @brief Method HandleRuntimeInitializeOnLoad, addr 0x569b968, size 0x70, virtual false, abstract: false, final false
static inline void HandleRuntimeInitializeOnLoad() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderPlatformSetter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderPlatformSetter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderPlatformSetter(ShaderPlatformSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderPlatformSetter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderPlatformSetter(ShaderPlatformSetter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{913};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ShaderPlatformSetter) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

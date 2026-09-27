#pragma once
// IWYU pragma private; include "GlobalNamespace/UnitySourceGeneratedAssemblyMonoScriptTypes_v1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnitySourceGeneratedAssemblyMonoScriptTypes_v1)
namespace GlobalNamespace {
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;
}
// Forward declare root types
namespace GlobalNamespace {
class UnitySourceGeneratedAssemblyMonoScriptTypes_v1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1*, "", "UnitySourceGeneratedAssemblyMonoScriptTypes_v1");
// [CompilerGenerated]
// [EditorBrowsable((System.ComponentModel.EditorBrowsableState)1)]
// [GeneratedCode("Unity.MonoScriptGenerator.MonoScriptInfoGenerator", null)]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UnitySourceGeneratedAssemblyMonoScriptTypes_v1
class CORDL_TYPE UnitySourceGeneratedAssemblyMonoScriptTypes_v1 : public ::System::Object {
public:
// Declarations
using MonoScriptData = ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData;

/// @brief Method Get, addr 0x9d15530, size 0xf4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1_MonoScriptData Get() ;

static inline ::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1* New_ctor() ;

/// @brief Method .ctor, addr 0x9d15624, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnitySourceGeneratedAssemblyMonoScriptTypes_v1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnitySourceGeneratedAssemblyMonoScriptTypes_v1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnitySourceGeneratedAssemblyMonoScriptTypes_v1(UnitySourceGeneratedAssemblyMonoScriptTypes_v1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnitySourceGeneratedAssemblyMonoScriptTypes_v1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnitySourceGeneratedAssemblyMonoScriptTypes_v1(UnitySourceGeneratedAssemblyMonoScriptTypes_v1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29587};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UnitySourceGeneratedAssemblyMonoScriptTypes_v1) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "GlobalNamespace/AssemblyInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AssemblyInfo)
// Forward declare root types
namespace GlobalNamespace {
class AssemblyInfo;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AssemblyInfo*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssemblyInfo*, "", "AssemblyInfo");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AssemblyInfo
class CORDL_TYPE AssemblyInfo : public ::System::Object {
public:
// Declarations
static inline ::GlobalNamespace::AssemblyInfo* New_ctor() ;

/// @brief Method .ctor, addr 0x9d6fdc8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssemblyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyInfo(AssemblyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyInfo(AssemblyInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22545};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AssemblyInfo) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnityInfo)
// Forward declare root types
namespace Oculus::Interaction {
class UnityInfo;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UnityInfo*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UnityInfo*, "Oculus.Interaction", "UnityInfo");
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UnityInfo
class CORDL_TYPE UnityInfo : public ::System::Object {
public:
// Declarations
/// @brief Method IsEditor, addr 0xa48a40c, size 0x8, virtual false, abstract: false, final false
static inline bool IsEditor() ;

/// @brief Method Version_2020_3_Or_Newer, addr 0xa48a414, size 0x8, virtual false, abstract: false, final false
static inline bool Version_2020_3_Or_Newer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityInfo(UnityInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityInfo(UnityInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16008};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UnityInfo) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction

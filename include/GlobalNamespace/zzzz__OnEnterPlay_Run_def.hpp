#pragma once
// IWYU pragma private; include "GlobalNamespace/OnEnterPlay_Run.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OnEnterPlay_Attribute_def.hpp"
CORDL_MODULE_EXPORT(OnEnterPlay_Run)
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class OnEnterPlay_Run;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OnEnterPlay_Run*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OnEnterPlay_Run*, "", "OnEnterPlay_Run");
// [AttributeUsage((System.AttributeTargets)64)]
// Dependencies OnEnterPlay_Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OnEnterPlay_Run
class CORDL_TYPE OnEnterPlay_Run : public ::GlobalNamespace::OnEnterPlay_Attribute {
public:
// Declarations
static inline ::GlobalNamespace::OnEnterPlay_Run* New_ctor() ;

/// @brief Method OnEnterPlay, addr 0x5b0e024, size 0x104, virtual true, abstract: false, final false
inline void OnEnterPlay(::System::Reflection::MethodInfo*  method) ;

/// @brief Method .ctor, addr 0x5b0e128, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OnEnterPlay_Run() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Run", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OnEnterPlay_Run(OnEnterPlay_Run && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnEnterPlay_Run", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnEnterPlay_Run(OnEnterPlay_Run const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3533};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OnEnterPlay_Run) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace

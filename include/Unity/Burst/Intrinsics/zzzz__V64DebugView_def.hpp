#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/V64DebugView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(V64DebugView)
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class V64DebugView;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Intrinsics::V64DebugView*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::V64DebugView*, "Unity.Burst.Intrinsics", "V64DebugView");
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.V64DebugView
class CORDL_TYPE V64DebugView : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr V64DebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "V64DebugView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
V64DebugView(V64DebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "V64DebugView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
V64DebugView(V64DebugView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32192};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::V64DebugView) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics

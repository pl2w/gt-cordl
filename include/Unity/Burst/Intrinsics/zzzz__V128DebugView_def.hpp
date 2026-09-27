#pragma once
// IWYU pragma private; include "Unity/Burst/Intrinsics/V128DebugView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(V128DebugView)
// Forward declare root types
namespace Unity::Burst::Intrinsics {
class V128DebugView;
}
// Write type traits
MARK_REF_T(::Unity::Burst::Intrinsics::V128DebugView*);
DEFINE_IL2CPP_CLASS(::Unity::Burst::Intrinsics::V128DebugView*, "Unity.Burst.Intrinsics", "V128DebugView");
// Dependencies System.Object
namespace Unity::Burst::Intrinsics {
// Is value type: false
// CS Name: Unity.Burst.Intrinsics.V128DebugView
class CORDL_TYPE V128DebugView : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr V128DebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "V128DebugView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
V128DebugView(V128DebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "V128DebugView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
V128DebugView(V128DebugView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32193};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Burst::Intrinsics::V128DebugView) == 0x10, "Size mismatch!");

} // namespace end def Unity::Burst::Intrinsics

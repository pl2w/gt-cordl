#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeBitArrayDebugView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(UnsafeBitArrayDebugView)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class UnsafeBitArrayDebugView;
}
// Write type traits
MARK_REF_T(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*);
DEFINE_IL2CPP_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView*, "Unity.Collections.LowLevel.Unsafe", "UnsafeBitArrayDebugView");
// Dependencies System.Object
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeBitArrayDebugView
class CORDL_TYPE UnsafeBitArrayDebugView : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeBitArrayDebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayDebugView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeBitArrayDebugView(UnsafeBitArrayDebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeBitArrayDebugView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeBitArrayDebugView(UnsafeBitArrayDebugView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30224};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeBitArrayDebugView) == 0x10, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe

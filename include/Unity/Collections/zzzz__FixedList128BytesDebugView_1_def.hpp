#pragma once
// IWYU pragma private; include "Unity/Collections/FixedList128BytesDebugView_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FixedList128BytesDebugView_1)
// Forward declare root types
namespace Unity::Collections {
template<typename T>
class FixedList128BytesDebugView_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Unity::Collections::FixedList128BytesDebugView_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Unity::Collections::FixedList128BytesDebugView_1, "Unity.Collections", "FixedList128BytesDebugView`1");
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Unity.Collections.FixedList128BytesDebugView`1<T>
class CORDL_TYPE FixedList128BytesDebugView_1 : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr FixedList128BytesDebugView_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FixedList128BytesDebugView_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FixedList128BytesDebugView_1(FixedList128BytesDebugView_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FixedList128BytesDebugView_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FixedList128BytesDebugView_1(FixedList128BytesDebugView_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30126};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Collections

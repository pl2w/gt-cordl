#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/StandardOleMarshalObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(StandardOleMarshalObject)
// Forward declare root types
namespace System::Runtime::InteropServices {
class StandardOleMarshalObject;
}
// Write type traits
MARK_REF_T(::System::Runtime::InteropServices::StandardOleMarshalObject*);
DEFINE_IL2CPP_CLASS(::System::Runtime::InteropServices::StandardOleMarshalObject*, "System.Runtime.InteropServices", "StandardOleMarshalObject");
// [ComVisible(true)]
// Dependencies System.MarshalByRefObject
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.StandardOleMarshalObject
class CORDL_TYPE StandardOleMarshalObject : public ::System::MarshalByRefObject {
public:
// Declarations
static inline ::System::Runtime::InteropServices::StandardOleMarshalObject* New_ctor() ;

/// @brief Method .ctor, addr 0xacf659c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StandardOleMarshalObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StandardOleMarshalObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StandardOleMarshalObject(StandardOleMarshalObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StandardOleMarshalObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StandardOleMarshalObject(StandardOleMarshalObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{10962};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::InteropServices::StandardOleMarshalObject) == 0x18, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
